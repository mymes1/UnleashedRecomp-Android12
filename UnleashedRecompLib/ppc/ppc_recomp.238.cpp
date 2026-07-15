#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83159460"))) PPC_WEAK_FUNC(sub_83159460);
PPC_FUNC_IMPL(__imp__sub_83159460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,52(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// stw r3,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159478"))) PPC_WEAK_FUNC(sub_83159478);
PPC_FUNC_IMPL(__imp__sub_83159478) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159480"))) PPC_WEAK_FUNC(sub_83159480);
PPC_FUNC_IMPL(__imp__sub_83159480) {
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
	// addi r9,r11,26128
	ctx.r9.s64 = r11.s64 + 26128;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x831594b8
	if (cr6.eq) goto loc_831594B8;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831594B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831594D0"))) PPC_WEAK_FUNC(sub_831594D0);
PPC_FUNC_IMPL(__imp__sub_831594D0) {
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
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83159520
	if (cr6.eq) goto loc_83159520;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x83159520
	if (!cr6.gt) goto loc_83159520;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,26164
	ctx.r4.s64 = r11.s64 + 26164;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314a1d0
	sub_8314A1D0(ctx, base);
loc_83159520:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8315953c
	if (cr6.eq) goto loc_8315953C;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r11,-30616
	ctx.r3.s64 = r11.s64 + -30616;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
loc_8315953C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83159558
	if (cr6.eq) goto loc_83159558;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83159558:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83159578
	if (cr6.eq) goto loc_83159578;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_83159578:
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

__attribute__((alias("__imp__sub_831595A8"))) PPC_WEAK_FUNC(sub_831595A8);
PPC_FUNC_IMPL(__imp__sub_831595A8) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831595E0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831595e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831595E0;
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831595FC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831595fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831595FC;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// addi r11,r1,312
	r11.s64 = ctx.r1.s64 + 312;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r31.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83159620:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83159620
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83159620;
	// addi r11,r1,344
	r11.s64 = ctx.r1.s64 + 344;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8315963C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8315963c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315963C;
	// addi r11,r1,380
	r11.s64 = ctx.r1.s64 + 380;
	// stw r31,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r31.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8315965C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8315965c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315965C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314deb8
	sub_8314DEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831596a4
	if (!cr6.eq) goto loc_831596A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r11,26284
	ctx.r4.s64 = r11.s64 + 26284;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831593d8
	sub_831593D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831b0b78
	return;
loc_831596A4:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831596d8
	if (!cr6.eq) goto loc_831596D8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,26236
	ctx.r4.s64 = r11.s64 + 26236;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831593d8
	sub_831593D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831b0b78
	return;
loc_831596D8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x83160f30
	sub_83160F30(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83159724
	if (!cr6.eq) goto loc_83159724;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,26200
	ctx.r4.s64 = r11.s64 + 26200;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831593d8
	sub_831593D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831b0b78
	return;
loc_83159724:
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83159738:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83159738
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83159738;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83159770"))) PPC_WEAK_FUNC(sub_83159770);
PPC_FUNC_IMPL(__imp__sub_83159770) {
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
	// addi r9,r11,26128
	ctx.r9.s64 = r11.s64 + 26128;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x831597a8
	if (cr6.eq) goto loc_831597A8;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831597A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831597C0"))) PPC_WEAK_FUNC(sub_831597C0);
PPC_FUNC_IMPL(__imp__sub_831597C0) {
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r11,26324
	ctx.r6.s64 = r11.s64 + 26324;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315988c
	if (cr6.eq) goto loc_8315988C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,26136
	ctx.r9.s64 = r11.s64 + 26136;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// bl 0x831595a8
	sub_831595A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831598b4
	if (!cr6.eq) goto loc_831598B4;
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_8315988C:
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,26332
	ctx.r4.s64 = ctx.r10.s64 + 26332;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831598B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831598C0"))) PPC_WEAK_FUNC(sub_831598C0);
PPC_FUNC_IMPL(__imp__sub_831598C0) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831598DC"))) PPC_WEAK_FUNC(sub_831598DC);
PPC_FUNC_IMPL(__imp__sub_831598DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831598E0"))) PPC_WEAK_FUNC(sub_831598E0);
PPC_FUNC_IMPL(__imp__sub_831598E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r3,r4,r11
	ctx.r3.u64 = ctx.r4.u64 + r11.u64;
	// stw r3,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831598F8"))) PPC_WEAK_FUNC(sub_831598F8);
PPC_FUNC_IMPL(__imp__sub_831598F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83159958
	if (cr6.eq) goto loc_83159958;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83159958
	if (cr6.eq) goto loc_83159958;
loc_83159910:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// bne cr6,0x83159924
	if (!cr6.eq) goto loc_83159924;
	// li r8,0
	ctx.r8.s64 = 0;
loc_83159924:
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x83159948
	if (cr6.eq) goto loc_83159948;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
loc_83159948:
	// std r4,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r4.u64);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83159910
	if (!cr6.eq) goto loc_83159910;
loc_83159958:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159978"))) PPC_WEAK_FUNC(sub_83159978);
PPC_FUNC_IMPL(__imp__sub_83159978) {
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
	// addi r6,r11,26380
	ctx.r6.s64 = r11.s64 + 26380;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831599dc
	if (cr6.eq) goto loc_831599DC;
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
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831599DC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26368
	ctx.r4.s64 = r11.s64 + 26368;
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

__attribute__((alias("__imp__sub_83159A08"))) PPC_WEAK_FUNC(sub_83159A08);
PPC_FUNC_IMPL(__imp__sub_83159A08) {
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
	// addi r9,r11,26352
	ctx.r9.s64 = r11.s64 + 26352;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83159a40
	if (cr6.eq) goto loc_83159A40;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83159A40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159A58"))) PPC_WEAK_FUNC(sub_83159A58);
PPC_FUNC_IMPL(__imp__sub_83159A58) {
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
	// addi r5,r11,26404
	ctx.r5.s64 = r11.s64 + 26404;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83159aac
	if (cr6.eq) goto loc_83159AAC;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,26360
	ctx.r9.s64 = ctx.r10.s64 + 26360;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83159AAC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26392
	ctx.r4.s64 = r11.s64 + 26392;
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

__attribute__((alias("__imp__sub_83159AD8"))) PPC_WEAK_FUNC(sub_83159AD8);
PPC_FUNC_IMPL(__imp__sub_83159AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne cr6,0x83159ae8
	if (!cr6.eq) goto loc_83159AE8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83159AE8:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83153d40
	sub_83153D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83159AF0"))) PPC_WEAK_FUNC(sub_83159AF0);
PPC_FUNC_IMPL(__imp__sub_83159AF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bne cr6,0x83159b00
	if (!cr6.eq) goto loc_83159B00;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83159B00:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x83148a80
	sub_83148A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83159B08"))) PPC_WEAK_FUNC(sub_83159B08);
PPC_FUNC_IMPL(__imp__sub_83159B08) {
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
	// addi r9,r11,26360
	ctx.r9.s64 = r11.s64 + 26360;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83159b40
	if (cr6.eq) goto loc_83159B40;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83159B40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159B58"))) PPC_WEAK_FUNC(sub_83159B58);
PPC_FUNC_IMPL(__imp__sub_83159B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// lfd f13,0(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f12,8(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// fadd f11,f0,f13
	ctx.f11.f64 = f0.f64 + ctx.f13.f64;
	// lfd f10,8(r5)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// fadd f9,f12,f10
	ctx.f9.f64 = ctx.f12.f64 + ctx.f10.f64;
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// stfd f9,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159B90"))) PPC_WEAK_FUNC(sub_83159B90);
PPC_FUNC_IMPL(__imp__sub_83159B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfd f13,8(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// lfd f12,8(r5)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// fmul f11,f12,f13
	ctx.f11.f64 = ctx.f12.f64 * ctx.f13.f64;
	// lfd f10,0(r5)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// fmul f9,f12,f0
	ctx.f9.f64 = ctx.f12.f64 * f0.f64;
	// fmsub f8,f10,f0,f11
	ctx.f8.f64 = ctx.f10.f64 * f0.f64 - ctx.f11.f64;
	// stfd f8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// fmadd f7,f13,f10,f9
	ctx.f7.f64 = ctx.f13.f64 * ctx.f10.f64 + ctx.f9.f64;
	// stfd f7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f7.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// std r9,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159BD0"))) PPC_WEAK_FUNC(sub_83159BD0);
PPC_FUNC_IMPL(__imp__sub_83159BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lfd f0,8(r5)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + 8);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmul f13,f0,f0
	ctx.f13.f64 = f0.f64 * f0.f64;
	// lfd f12,0(r5)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f11,8(r4)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfd f10,0(r4)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fmul f9,f11,f0
	ctx.f9.f64 = ctx.f11.f64 * f0.f64;
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * f0.f64;
	// lfd f0,-3744(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// fmadd f7,f12,f12,f13
	ctx.f7.f64 = ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64;
	// fmadd f6,f10,f12,f9
	ctx.f6.f64 = ctx.f10.f64 * ctx.f12.f64 + ctx.f9.f64;
	// fmsub f5,f11,f12,f8
	ctx.f5.f64 = ctx.f11.f64 * ctx.f12.f64 - ctx.f8.f64;
	// fdiv f4,f0,f7
	ctx.f4.f64 = f0.f64 / ctx.f7.f64;
	// fmul f3,f6,f4
	ctx.f3.f64 = ctx.f6.f64 * ctx.f4.f64;
	// stfd f3,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f3.u64);
	// fmul f2,f5,f4
	ctx.f2.f64 = ctx.f5.f64 * ctx.f4.f64;
	// stfd f2,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f2.u64);
	// ld r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r9,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// std r8,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159C30"))) PPC_WEAK_FUNC(sub_83159C30);
PPC_FUNC_IMPL(__imp__sub_83159C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// fmul f13,f0,f1
	ctx.f13.f64 = f0.f64 * ctx.f1.f64;
	// stfd f13,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f13.u64);
	// lfd f12,8(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// fmul f11,f12,f1
	ctx.f11.f64 = ctx.f12.f64 * ctx.f1.f64;
	// stfd f11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.f11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159C50"))) PPC_WEAK_FUNC(sub_83159C50);
PPC_FUNC_IMPL(__imp__sub_83159C50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x831612a8
	sub_831612A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83159C58"))) PPC_WEAK_FUNC(sub_83159C58);
PPC_FUNC_IMPL(__imp__sub_83159C58) {
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
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
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

__attribute__((alias("__imp__sub_83159CA8"))) PPC_WEAK_FUNC(sub_83159CA8);
PPC_FUNC_IMPL(__imp__sub_83159CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r9,r10,26460
	ctx.r9.s64 = ctx.r10.s64 + 26460;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159CD8"))) PPC_WEAK_FUNC(sub_83159CD8);
PPC_FUNC_IMPL(__imp__sub_83159CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// addi r9,r10,26460
	ctx.r9.s64 = ctx.r10.s64 + 26460;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159D08"))) PPC_WEAK_FUNC(sub_83159D08);
PPC_FUNC_IMPL(__imp__sub_83159D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r10,r11,26460
	ctx.r10.s64 = r11.s64 + 26460;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159D18"))) PPC_WEAK_FUNC(sub_83159D18);
PPC_FUNC_IMPL(__imp__sub_83159D18) {
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
	// bl 0x83168650
	sub_83168650(ctx, base);
	// addi r11,r3,180
	r11.s64 = ctx.r3.s64 + 180;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159D48"))) PPC_WEAK_FUNC(sub_83159D48);
PPC_FUNC_IMPL(__imp__sub_83159D48) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83159da0
	if (!cr6.eq) goto loc_83159DA0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83159d88
	if (cr6.eq) goto loc_83159D88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_83159D88:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83159da0
	if (cr6.eq) goto loc_83159DA0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_83159DA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159DB8"))) PPC_WEAK_FUNC(sub_83159DB8);
PPC_FUNC_IMPL(__imp__sub_83159DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159DD8"))) PPC_WEAK_FUNC(sub_83159DD8);
PPC_FUNC_IMPL(__imp__sub_83159DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159DE8"))) PPC_WEAK_FUNC(sub_83159DE8);
PPC_FUNC_IMPL(__imp__sub_83159DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159DF8"))) PPC_WEAK_FUNC(sub_83159DF8);
PPC_FUNC_IMPL(__imp__sub_83159DF8) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83159e70
	if (!cr6.eq) goto loc_83159E70;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r5,15
	ctx.r10.s64 = ctx.r5.s64 + 15;
	// rlwinm r30,r10,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r8,26496
	ctx.r5.s64 = ctx.r8.s64 + 26496;
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83159e7c
	if (!cr6.eq) goto loc_83159E7C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26484
	ctx.r4.s64 = r11.s64 + 26484;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_83159E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83159E7C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r30,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83159EA0"))) PPC_WEAK_FUNC(sub_83159EA0);
PPC_FUNC_IMPL(__imp__sub_83159EA0) {
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83159ee0
	if (cr6.eq) goto loc_83159EE0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, r11.u32);
loc_83159EE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159EF8"))) PPC_WEAK_FUNC(sub_83159EF8);
PPC_FUNC_IMPL(__imp__sub_83159EF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159F00"))) PPC_WEAK_FUNC(sub_83159F00);
PPC_FUNC_IMPL(__imp__sub_83159F00) {
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
	// addi r9,r11,26460
	ctx.r9.s64 = r11.s64 + 26460;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83159f38
	if (cr6.eq) goto loc_83159F38;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83159F38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159F50"))) PPC_WEAK_FUNC(sub_83159F50);
PPC_FUNC_IMPL(__imp__sub_83159F50) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315a028
	if (!cr6.eq) goto loc_8315A028;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r9,26536
	ctx.r5.s64 = ctx.r9.s64 + 26536;
	// li r4,96
	ctx.r4.s64 = 96;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83159fd8
	if (!cr6.eq) goto loc_83159FD8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26524
	ctx.r4.s64 = r11.s64 + 26524;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315a02c
	goto loc_8315A02C;
loc_83159FD8:
	// lis r11,-32240
	r11.s64 = -2112880640;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-424
	ctx.r5.s64 = r11.s64 + -424;
	// li r4,416
	ctx.r4.s64 = 416;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315a028
	if (!cr6.eq) goto loc_8315A028;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26512
	ctx.r4.s64 = r11.s64 + 26512;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315a02c
	goto loc_8315A02C;
loc_8315A028:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8315A02C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A048"))) PPC_WEAK_FUNC(sub_8315A048);
PPC_FUNC_IMPL(__imp__sub_8315A048) {
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
	// li r29,4
	r29.s64 = 4;
loc_8315A05C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8316a598
	sub_8316A598(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x8315a088
	if (!cr6.lt) goto loc_8315A088;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8315A088:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315a0a0
	if (cr6.eq) goto loc_8315A0A0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8315A0A0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316a5a8
	sub_8316A5A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8315a05c
	if (!cr0.eq) goto loc_8315A05C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315A0D0"))) PPC_WEAK_FUNC(sub_8315A0D0);
PPC_FUNC_IMPL(__imp__sub_8315A0D0) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315a100
	if (cr6.eq) goto loc_8315A100;
	// bl 0x8315c968
	sub_8315C968(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_8315A100:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315a114
	if (cr6.eq) goto loc_8315A114;
	// bl 0x8316a4e8
	sub_8316A4E8(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_8315A114:
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

__attribute__((alias("__imp__sub_8315A148"))) PPC_WEAK_FUNC(sub_8315A148);
PPC_FUNC_IMPL(__imp__sub_8315A148) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83168650
	sub_83168650(ctx, base);
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8315a17c
	if (!cr6.eq) goto loc_8315A17C;
	// mulli r3,r31,136
	ctx.r3.s64 = r31.s64 * 136;
	// b 0x8315a198
	goto loc_8315A198;
loc_8315A17C:
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8315a18c
	if (!cr6.eq) goto loc_8315A18C;
	// rlwinm r3,r31,10,0,21
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 10) & 0xFFFFFC00;
	// b 0x8315a198
	goto loc_8315A198;
loc_8315A18C:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// bne cr6,0x8315a198
	if (!cr6.eq) goto loc_8315A198;
	// mulli r3,r31,300
	ctx.r3.s64 = r31.s64 * 300;
loc_8315A198:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x8316afa8
	sub_8316AFA8(ctx, base);
	// add r29,r3,r29
	r29.u64 = ctx.r3.u64 + r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315ba40
	sub_8315BA40(ctx, base);
	// add r3,r3,r29
	ctx.r3.u64 = ctx.r3.u64 + r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315A1C0"))) PPC_WEAK_FUNC(sub_8315A1C0);
PPC_FUNC_IMPL(__imp__sub_8315A1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,26592
	ctx.r5.s64 = r11.s64 + 26592;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315a27c
	if (cr6.eq) goto loc_8315A27C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,26560
	ctx.r10.s64 = r11.s64 + 26560;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// bne cr6,0x8315a2a0
	if (!cr6.eq) goto loc_8315A2A0;
	// mulli r4,r29,136
	ctx.r4.s64 = r29.s64 * 136;
loc_8315A238:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8316af68
	sub_8316AF68(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315a2c4
	if (!cr6.eq) goto loc_8315A2C4;
loc_8315A258:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
loc_8315A27C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,26580
	ctx.r4.s64 = r11.s64 + 26580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
loc_8315A2A0:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x8315a2b0
	if (!cr6.eq) goto loc_8315A2B0;
	// rlwinm r4,r29,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 10) & 0xFFFFFC00;
	// b 0x8315a238
	goto loc_8315A238;
loc_8315A2B0:
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x8315a2c0
	if (!cr6.eq) goto loc_8315A2C0;
	// mulli r4,r29,300
	ctx.r4.s64 = r29.s64 * 300;
	// b 0x8315a238
	goto loc_8315A238;
loc_8315A2C0:
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
loc_8315A2C4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r5,r11,26568
	ctx.r5.s64 = r11.s64 + 26568;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8315ce58
	sub_8315CE58(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315a258
	if (cr6.eq) goto loc_8315A258;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315a318
	if (cr6.eq) goto loc_8315A318;
	// lis r11,-31978
	r11.s64 = -2095710208;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-24504
	ctx.r4.s64 = r11.s64 + -24504;
	// bl 0x8315bc48
	sub_8315BC48(ctx, base);
loc_8315A318:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8315A328"))) PPC_WEAK_FUNC(sub_8315A328);
PPC_FUNC_IMPL(__imp__sub_8315A328) {
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
	// addi r9,r11,26560
	ctx.r9.s64 = r11.s64 + 26560;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315a360
	if (cr6.eq) goto loc_8315A360;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315A360:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A378"))) PPC_WEAK_FUNC(sub_8315A378);
PPC_FUNC_IMPL(__imp__sub_8315A378) {
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
	// addi r9,r11,26624
	ctx.r9.s64 = r11.s64 + 26624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315a3b0
	if (cr6.eq) goto loc_8315A3B0;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315A3B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A3C8"))) PPC_WEAK_FUNC(sub_8315A3C8);
PPC_FUNC_IMPL(__imp__sub_8315A3C8) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8315A3F8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8315a3f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315A3F8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// li r5,108
	ctx.r5.s64 = 108;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r10,r11,26636
	ctx.r10.s64 = r11.s64 + 26636;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r30.u8);
	// stb r30,65(r31)
	PPC_STORE_U8(r31.u32 + 65, r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,116
	ctx.r5.s64 = 116;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A478"))) PPC_WEAK_FUNC(sub_8315A478);
PPC_FUNC_IMPL(__imp__sub_8315A478) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315a818
	if (cr6.eq) goto loc_8315A818;
	// li r25,0
	r25.s64 = 0;
	// li r24,1
	r24.s64 = 1;
loc_8315A49C:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315a4ac
	if (!cr6.eq) goto loc_8315A4AC;
	// stw r25,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r25.u32);
loc_8315A4AC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315a7c8
	if (!cr6.eq) goto loc_8315A7C8;
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315a5a0
	if (!cr6.eq) goto loc_8315A5A0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// addi r5,r31,184
	ctx.r5.s64 = r31.s64 + 184;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8316bc78
	sub_8316BC78(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8315a590
	if (cr6.eq) goto loc_8315A590;
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// extsw r9,r11
	ctx.r9.s64 = r11.s32;
	// lbz r8,189(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 189);
	// stw r24,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r24.u32);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r25,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r25.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x8316b548
	sub_8316B548(ctx, base);
	// lbz r6,189(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 189);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// bl 0x8316b558
	sub_8316B558(ctx, base);
	// lhz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 204);
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x8316b5d0
	sub_8316B5D0(ctx, base);
	// lbz r3,189(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 189);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315a590
	if (cr6.eq) goto loc_8315A590;
	// addi r29,r31,206
	r29.s64 = r31.s64 + 206;
loc_8315A564:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lhz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U16(r29.u32 + 16);
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x8316b560
	sub_8316B560(ctx, base);
	// lbz r11,189(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 189);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x8315a564
	if (cr6.lt) goto loc_8315A564;
loc_8315A590:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8316a638
	sub_8316A638(ctx, base);
loc_8315A5A0:
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315a79c
	if (!cr6.eq) goto loc_8315A79C;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r26,r25
	r26.u64 = r25.u64;
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8316bc10
	sub_8316BC10(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315a5f0
	if (cr6.eq) goto loc_8315A5F0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// stw r25,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r25.u32);
	// b 0x8315a49c
	goto loc_8315A49C;
loc_8315A5F0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315a654
	if (!cr6.gt) goto loc_8315A654;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
loc_8315A60C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x8316a598
	sub_8316A598(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315a730
	if (cr6.eq) goto loc_8315A730;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315a730
	if (cr6.eq) goto loc_8315A730;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// rlwinm r26,r11,30,2,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// blt cr6,0x8315a60c
	if (cr6.lt) goto loc_8315A60C;
loc_8315A654:
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r29,r6,r11
	r29.s64 = r11.s64 - ctx.r6.s64;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8316afe0
	sub_8316AFE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x8315a694
	if (!cr6.gt) goto loc_8315A694;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8315A694:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8315a6f4
	if (!cr6.gt) goto loc_8315A6F4;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
loc_8315A6CC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8316a5a8
	sub_8316A5A8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8315a6cc
	if (cr6.lt) goto loc_8315A6CC;
loc_8315A6F4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8316bc10
	sub_8316BC10(ctx, base);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315a748
	if (cr6.eq) goto loc_8315A748;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// stw r25,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r25.u32);
	// b 0x8315a49c
	goto loc_8315A49C;
loc_8315A730:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b68
	return;
loc_8315A748:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x8315a79c
	if (cr0.gt) goto loc_8315A79C;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x8315a78c
	if (cr6.gt) goto loc_8315A78C;
	// li r11,2
	r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_8315A78C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
loc_8315A79C:
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315a818
	if (!cr6.eq) goto loc_8315A818;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a620
	sub_8316A620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315a818
	if (!cr6.eq) goto loc_8315A818;
	// li r11,2
	r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b68
	return;
loc_8315A7C8:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315a7d8
	if (!cr6.eq) goto loc_8315A7D8;
	// stw r25,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r25.u32);
loc_8315A7D8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8315a818
	if (!cr6.eq) goto loc_8315A818;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// ble cr6,0x8315a808
	if (!cr6.gt) goto loc_8315A808;
	// stw r24,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r24.u32);
loc_8315A808:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
loc_8315A818:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8315A820"))) PPC_WEAK_FUNC(sub_8315A820);
PPC_FUNC_IMPL(__imp__sub_8315A820) {
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
	// addi r9,r11,26624
	ctx.r9.s64 = r11.s64 + 26624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315a858
	if (cr6.eq) goto loc_8315A858;
	// li r4,304
	ctx.r4.s64 = 304;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315A858:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A870"))) PPC_WEAK_FUNC(sub_8315A870);
PPC_FUNC_IMPL(__imp__sub_8315A870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,44
	cr6.compare<uint32_t>(ctx.r5.u32, 44, xer);
	// bge cr6,0x8315a888
	if (!cr6.lt) goto loc_8315A888;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8315A888:
	// lbz r10,27(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 27);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r9,26(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,43(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 43);
	// lbz r7,25(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 25);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r9,42(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 42);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 24);
	// rlwinm r8,r5,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lbz r5,41(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 41);
	// lbz r31,40(r4)
	r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 40);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 | ctx.r6.u64;
	// or r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 | ctx.r5.u64;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// rlwinm r5,r7,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// or r10,r5,r31
	ctx.r10.u64 = ctx.r5.u64 | r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,40(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lbz r9,22(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 22);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stw r8,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r8.u32);
	// lbz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// divw r5,r10,r6
	ctx.r5.s32 = ctx.r10.s32 / ctx.r6.s32;
	// stw r5,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r5.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A918"))) PPC_WEAK_FUNC(sub_8315A918);
PPC_FUNC_IMPL(__imp__sub_8315A918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b2c
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r30,r6,r10
	r30.u32 = ctx.r6.u32 / ctx.r10.u32;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x8315a938
	if (cr6.lt) goto loc_8315A938;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
loc_8315A938:
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// blt cr6,0x8315a944
	if (cr6.lt) goto loc_8315A944;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8315A944:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315a9ec
	if (cr6.eq) goto loc_8315A9EC;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,-31440(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24296(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24296);
	f0.f64 = double(temp.f32);
loc_8315A960:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315a9e0
	if (cr6.eq) goto loc_8315A9E0;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8315A974:
	// lbz r11,1(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r29,0(r5)
	r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// blt cr6,0x8315a9b0
	if (cr6.lt) goto loc_8315A9B0;
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r11.u64);
	// lfd f12,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// b 0x8315a9c4
	goto loc_8315A9C4;
loc_8315A9B0:
	// std r11,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, r11.u64);
	// lfd f12,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
loc_8315A9C4:
	// stfsx f9,r9,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, temp.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x8315a974
	if (cr6.lt) goto loc_8315A974;
loc_8315A9E0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8315a960
	if (cr6.lt) goto loc_8315A960;
loc_8315A9EC:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r10,r31,r11
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r11.s32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315AA08"))) PPC_WEAK_FUNC(sub_8315AA08);
PPC_FUNC_IMPL(__imp__sub_8315AA08) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r11,26660
	ctx.r9.s64 = r11.s64 + 26660;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lfs f0,-30580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30580);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// li r5,96
	ctx.r5.s64 = 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// lis r7,-31947
	ctx.r7.s64 = -2093678592;
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// lfs f0,26704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26704);
	f0.f64 = double(temp.f32);
	// stfs f0,256(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f0,26700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26700);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 260, temp.u32);
	// lfs f0,26700(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26700);
	f0.f64 = double(temp.f32);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// stfs f0,264(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 264, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AAD8"))) PPC_WEAK_FUNC(sub_8315AAD8);
PPC_FUNC_IMPL(__imp__sub_8315AAD8) {
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
	// addi r10,r11,26660
	ctx.r10.s64 = r11.s64 + 26660;
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
	// beq cr6,0x8315ab20
	if (cr6.eq) goto loc_8315AB20;
	// li r4,272
	ctx.r4.s64 = 272;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315AB20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AB38"))) PPC_WEAK_FUNC(sub_8315AB38);
PPC_FUNC_IMPL(__imp__sub_8315AB38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26668
	ctx.r7.s64 = ctx.r8.s64 + 26668;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r9,r3,100
	ctx.r9.s64 = ctx.r3.s64 + 100;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
loc_8315AB84:
	// stfs f0,-32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -32, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stbx r8,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// blt cr6,0x8315ab84
	if (cr6.lt) goto loc_8315AB84;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ABA8"))) PPC_WEAK_FUNC(sub_8315ABA8);
PPC_FUNC_IMPL(__imp__sub_8315ABA8) {
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
	// lis r11,-32237
	r11.s64 = -2112684032;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f31,-15484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15484);
	f31.f64 = double(temp.f32);
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bgt cr6,0x8315abe0
	if (cr6.gt) goto loc_8315ABE0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,26720
	ctx.r4.s64 = r11.s64 + 26720;
	// b 0x8315abf8
	goto loc_8315ABF8;
loc_8315ABE0:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f31,24336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24336);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x8315ac08
	if (!cr6.gt) goto loc_8315AC08;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,26676
	ctx.r4.s64 = r11.s64 + 26676;
loc_8315ABF8:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
loc_8315AC08:
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

__attribute__((alias("__imp__sub_8315AC20"))) PPC_WEAK_FUNC(sub_8315AC20);
PPC_FUNC_IMPL(__imp__sub_8315AC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831b1438
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4480(r1)
	ea = -4480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stfs f1,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// li r11,8
	r11.s64 = 8;
	// li r23,0
	r23.s64 = 0;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// stw r23,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r23.u32);
	// lfs f29,28(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 28);
	f29.f64 = double(temp.f32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lfs f31,32(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + 32);
	f31.f64 = double(temp.f32);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// mr r11,r23
	r11.u64 = r23.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
loc_8315AC78:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r10,516
	ctx.r10.s64 = ctx.r10.s64 + 516;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8315ac78
	if (cr6.lt) goto loc_8315AC78;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315acb8
	if (cr6.eq) goto loc_8315ACB8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315ACB8:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r19,r11
	r19.u64 = r11.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8315ad14
	if (!cr6.lt) goto loc_8315AD14;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x83144dc0
	sub_83144DC0(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315ad00
	if (cr6.eq) goto loc_8315AD00;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8315ACE8:
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8315ace8
	if (cr6.lt) goto loc_8315ACE8;
loc_8315AD00:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4480
	ctx.r1.s64 = ctx.r1.s64 + 4480;
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831b1484
	// b 0x831b0b54
	return;
loc_8315AD14:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315af50
	if (cr6.eq) goto loc_8315AF50;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r21,r22,r11
	r21.s64 = r11.s64 - r22.s64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r25,r22,80
	r25.s64 = r22.s64 + 80;
	// mr r27,r22
	r27.u64 = r22.u64;
	// lfs f28,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f28.f64 = double(temp.f32);
	// addi r28,r24,68
	r28.s64 = r24.s64 + 68;
	// addi r26,r24,100
	r26.s64 = r24.s64 + 100;
	// lfs f30,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// li r20,1
	r20.s64 = 1;
loc_8315AD50:
	// lbzx r11,r21,r25
	r11.u64 = PPC_LOAD_U8(r21.u32 + r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315aea4
	if (cr6.eq) goto loc_8315AEA4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8315ad90
	if (cr6.eq) goto loc_8315AD90;
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315ad90
	if (!cr6.eq) goto loc_8315AD90;
	// lwz r11,64(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 64);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8315ad84
	if (!cr6.lt) goto loc_8315AD84;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8315AD84:
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8315AD90:
	// lwz r11,64(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 64);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8315ada4
	if (!cr6.lt) goto loc_8315ADA4;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8315ADA4:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8315adbc
	if (cr6.lt) goto loc_8315ADBC;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x8315adc4
	goto loc_8315ADC4;
loc_8315ADBC:
	// lwzx r11,r21,r27
	r11.u64 = PPC_LOAD_U32(r21.u32 + r27.u32);
	// lwz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_8315ADC4:
	// lbzx r9,r26,r31
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + r31.u32);
	// lfs f31,32(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 32);
	f31.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8315adf4
	if (cr6.eq) goto loc_8315ADF4;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fmr f13,f28
	ctx.f13.f64 = f28.f64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stbx r23,r26,r31
	PPC_STORE_U8(r26.u32 + r31.u32, r23.u8);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// b 0x8315adfc
	goto loc_8315ADFC;
loc_8315ADF4:
	// lfs f13,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
loc_8315ADFC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315ae60
	if (cr6.eq) goto loc_8315AE60;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8315AE14:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x8315ae40
	if (cr6.lt) goto loc_8315AE40;
loc_8315AE1C:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x8315ae40
	if (!cr6.lt) goto loc_8315AE40;
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - f30.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x8315ae1c
	if (!cr6.lt) goto loc_8315AE1C;
loc_8315AE40:
	// fsubs f12,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f30.f64 - f31.f64));
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(f0.f64 * f31.f64));
	// fadds f31,f31,f29
	f31.f64 = double(float(f31.f64 + f29.f64));
	// fmadds f10,f12,f13,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8315ae14
	if (!cr0.eq) goto loc_8315AE14;
loc_8315AE60:
	// stfs f13,-32(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r28.u32 + -32, temp.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stb r20,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r20.u8);
	// bne cr6,0x8315af38
	if (!cr6.eq) goto loc_8315AF38;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315af38
	if (cr6.eq) goto loc_8315AF38;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r6
	ctx.r4.u64 = r11.u64 + ctx.r6.u64;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bl 0x831b1358
	sub_831B1358(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// b 0x8315af34
	goto loc_8315AF34;
loc_8315AEA4:
	// stfs f28,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// stfs f28,-32(r28)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r28.u32 + -32, temp.u32);
	// lbzx r11,r26,r31
	r11.u64 = PPC_LOAD_U8(r26.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315aebc
	if (cr6.eq) goto loc_8315AEBC;
	// stbx r23,r26,r31
	PPC_STORE_U8(r26.u32 + r31.u32, r23.u8);
loc_8315AEBC:
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315aef0
	if (!cr6.eq) goto loc_8315AEF0;
	// lwz r11,64(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 64);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8315aedc
	if (!cr6.lt) goto loc_8315AEDC;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_8315AEDC:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8315AEF0:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// lfs f0,32(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r24.u32 + 32);
	f0.f64 = double(temp.f32);
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f10,f11,f29,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f29.f64 + f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fadds f31,f5,f29
	f31.f64 = double(float(ctx.f5.f64 + f29.f64));
loc_8315AF34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8315AF38:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// blt cr6,0x8315ad50
	if (cr6.lt) goto loc_8315AD50;
loc_8315AF50:
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stfs f31,32(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r24.u32 + 32, temp.u32);
	// stw r19,68(r22)
	PPC_STORE_U32(r22.u32 + 68, r19.u32);
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315af84
	if (cr6.eq) goto loc_8315AF84;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8315AF6C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8315af6c
	if (cr6.lt) goto loc_8315AF6C;
loc_8315AF84:
	// addi r1,r1,4480
	ctx.r1.s64 = ctx.r1.s64 + 4480;
	// addi r12,r1,-112
	r12.s64 = ctx.r1.s64 + -112;
	// bl 0x831b1484
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_8315AF98"))) PPC_WEAK_FUNC(sub_8315AF98);
PPC_FUNC_IMPL(__imp__sub_8315AF98) {
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
	// addi r10,r11,26668
	ctx.r10.s64 = r11.s64 + 26668;
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
	// beq cr6,0x8315afe0
	if (cr6.eq) goto loc_8315AFE0;
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315AFE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AFF8"))) PPC_WEAK_FUNC(sub_8315AFF8);
PPC_FUNC_IMPL(__imp__sub_8315AFF8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r31,-31947
	r31.s64 = -2093678592;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f1,26648(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 26648);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// lis r30,-31947
	r30.s64 = -2093678592;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// lfs f1,26644(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 26644);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,26644(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 26644);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fdivs f12,f30,f13
	ctx.f12.f64 = double(float(f30.f64 / ctx.f13.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fmadds f2,f11,f31,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * f31.f64 + f0.f64));
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,26644(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 26644);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x8315b068
	if (!cr6.lt) goto loc_8315B068;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_8315B068:
	// lfs f1,26648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 26648);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x8315b078
	if (cr6.gt) goto loc_8315B078;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_8315B078:
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

__attribute__((alias("__imp__sub_8315B098"))) PPC_WEAK_FUNC(sub_8315B098);
PPC_FUNC_IMPL(__imp__sub_8315B098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r10,r11,26768
	ctx.r10.s64 = r11.s64 + 26768;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r7,r10,17860
	ctx.r7.s64 = ctx.r10.s64 + 17860;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
loc_8315B0D0:
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r8,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315B0E8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315b0e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315B0E8;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315B100:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315b100
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315B100;
	// addi r10,r11,84
	ctx.r10.s64 = r11.s64 + 84;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315B118:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315b118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315B118;
	// addi r10,r11,116
	ctx.r10.s64 = r11.s64 + 116;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315B130:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315b130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315B130;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r11,r11,148
	r11.s64 = r11.s64 + 148;
	// bge 0x8315b0d0
	if (!cr0.lt) goto loc_8315B0D0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-9876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f13,1212(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1212, temp.u32);
	// stfs f0,1216(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1216, temp.u32);
	// stfs f0,1220(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B168"))) PPC_WEAK_FUNC(sub_8315B168);
PPC_FUNC_IMPL(__imp__sub_8315B168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315b1a4
	if (cr6.eq) goto loc_8315B1A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315B1A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,1216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1216);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8315b424
	if (cr6.eq) goto loc_8315B424;
	// lfs f13,1220(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8315b424
	if (cr6.eq) goto loc_8315B424;
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315b424
	if (cr6.eq) goto loc_8315B424;
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
loc_8315B1E0:
	// lbzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315b410
	if (cr6.eq) goto loc_8315B410;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blt cr6,0x8315b204
	if (cr6.lt) goto loc_8315B204;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8315b20c
	goto loc_8315B20C;
loc_8315B204:
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8315B20C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x8315b398
	if (cr6.lt) goto loc_8315B398;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_8315B22C:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -84);
	ctx.f3.f64 = double(temp.f32);
	// stfs f9,32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// fmadds f2,f11,f10,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f5,-36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + -36, temp.u32);
	// fmadds f1,f9,f8,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fnmsubs f0,f7,f6,f1
	f0.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 - ctx.f1.f64)));
	// fnmsubs f13,f5,f4,f0
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f4.f64 - f0.f64)));
	// stfs f13,-40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -40, temp.u32);
	// lfs f12,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f11,-8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,32(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// fmuls f0,f12,f10
	f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f5,-36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + -36, temp.u32);
	// fmadds f13,f3,f9,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + f0.f64));
	// fmadds f12,f1,f8,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fnmsubs f11,f7,f6,f12
	ctx.f11.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 - ctx.f12.f64)));
	// fnmsubs f10,f5,f4,f11
	ctx.f10.f64 = double(float(-(ctx.f5.f64 * ctx.f4.f64 - ctx.f11.f64)));
	// stfs f10,-40(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + -40, temp.u32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f2
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f8,-4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfs f7,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -68);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,-84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// fmuls f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f2,-36(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + -36, temp.u32);
	// fmadds f10,f0,f6,f11
	ctx.f10.f64 = double(float(f0.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmadds f9,f12,f5,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fnmsubs f8,f4,f3,f9
	ctx.f8.f64 = double(float(-(ctx.f4.f64 * ctx.f3.f64 - ctx.f9.f64)));
	// fnmsubs f7,f2,f1,f8
	ctx.f7.f64 = double(float(-(ctx.f2.f64 * ctx.f1.f64 - ctx.f8.f64)));
	// stfs f7,-40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + -40, temp.u32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,-36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -36);
	f0.f64 = double(temp.f32);
	// lfs f13,-68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -68);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmadds f10,f4,f3,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f2,32(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f11,28(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// fmadds f9,f2,f1,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fnmsubs f8,f0,f13,f9
	ctx.f8.f64 = double(float(-(f0.f64 * ctx.f13.f64 - ctx.f9.f64)));
	// lfs f7,-40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -72);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f5,f7,f6,f8
	ctx.f5.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 - ctx.f8.f64)));
	// lfs f4,-84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -84);
	ctx.f4.f64 = double(temp.f32);
	// stfs f7,-36(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + -36, temp.u32);
	// stfs f5,-40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + -40, temp.u32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x8315b22c
	if (!cr0.eq) goto loc_8315B22C;
loc_8315B398:
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bge cr6,0x8315b410
	if (!cr6.lt) goto loc_8315B410;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r7.s64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8315B3AC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f13,-8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-68(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -68);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-72(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -72);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -84);
	ctx.f3.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// fmadds f2,f11,f10,f12
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stfs f5,-36(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + -36, temp.u32);
	// fmadds f1,f9,f8,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fnmsubs f0,f7,f6,f1
	f0.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 - ctx.f1.f64)));
	// fnmsubs f13,f5,f4,f0
	ctx.f13.f64 = double(float(-(ctx.f5.f64 * ctx.f4.f64 - f0.f64)));
	// stfs f13,-40(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -40, temp.u32);
	// fmuls f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8315b3ac
	if (!cr0.eq) goto loc_8315B3AC;
loc_8315B410:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r11,r11,148
	r11.s64 = r11.s64 + 148;
	// cmplw cr6,r5,r3
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, xer);
	// blt cr6,0x8315b1e0
	if (cr6.lt) goto loc_8315B1E0;
loc_8315B424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B440"))) PPC_WEAK_FUNC(sub_8315B440);
PPC_FUNC_IMPL(__imp__sub_8315B440) {
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
	// addi r9,r10,26768
	ctx.r9.s64 = ctx.r10.s64 + 26768;
	// addi r11,r31,1212
	r11.s64 = r31.s64 + 1212;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r9,17860
	ctx.r9.s64 = ctx.r9.s64 + 17860;
loc_8315B478:
	// addi r11,r11,-148
	r11.s64 = r11.s64 + -148;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bge 0x8315b478
	if (!cr0.lt) goto loc_8315B478;
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
	// beq cr6,0x8315b4ac
	if (cr6.eq) goto loc_8315B4AC;
	// li r4,1224
	ctx.r4.s64 = 1224;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315B4AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B4C8"))) PPC_WEAK_FUNC(sub_8315B4C8);
PPC_FUNC_IMPL(__imp__sub_8315B4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315b510
	if (!cr6.eq) goto loc_8315B510;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315b568
	if (cr6.eq) goto loc_8315B568;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8315B510:
	// li r11,1
	r11.s64 = 1;
	// lwz r10,72(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, r11.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// stb r9,80(r4)
	PPC_STORE_U8(ctx.r4.u32 + 80, ctx.r9.u8);
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lfs f12,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// clrldi r7,r11,32
	ctx.r7.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f0,-5316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -5316);
	f0.f64 = double(temp.f32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fcmpu cr6,f7,f13
	cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// blt cr6,0x8315b568
	if (cr6.lt) goto loc_8315B568;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
loc_8315B568:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B578"))) PPC_WEAK_FUNC(sub_8315B578);
PPC_FUNC_IMPL(__imp__sub_8315B578) {
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
	// addi r10,r11,26776
	ctx.r10.s64 = r11.s64 + 26776;
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
	// beq cr6,0x8315b5c0
	if (cr6.eq) goto loc_8315B5C0;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315B5C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B5D8"))) PPC_WEAK_FUNC(sub_8315B5D8);
PPC_FUNC_IMPL(__imp__sub_8315B5D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315b604
	if (!cr6.eq) goto loc_8315B604;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8315B604:
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315b628
	if (cr6.eq) goto loc_8315B628;
	// addi r11,r4,80
	r11.s64 = ctx.r4.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8315B61C:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8315b61c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315B61C;
loc_8315B628:
	// stw r9,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B630"))) PPC_WEAK_FUNC(sub_8315B630);
PPC_FUNC_IMPL(__imp__sub_8315B630) {
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
	// addi r10,r11,26784
	ctx.r10.s64 = r11.s64 + 26784;
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
	// beq cr6,0x8315b678
	if (cr6.eq) goto loc_8315B678;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315B678:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B690"))) PPC_WEAK_FUNC(sub_8315B690);
PPC_FUNC_IMPL(__imp__sub_8315B690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r31,-32231
	r31.s64 = -2112290816;
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r31,r31,26792
	r31.s64 = r31.s64 + 26792;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// beq cr6,0x8315b704
	if (cr6.eq) goto loc_8315B704;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r9,r3,40
	ctx.r9.s64 = ctx.r3.s64 + 40;
loc_8315B6EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8315b6ec
	if (!cr0.eq) goto loc_8315B6EC;
loc_8315B704:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B710"))) PPC_WEAK_FUNC(sub_8315B710);
PPC_FUNC_IMPL(__imp__sub_8315B710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lwz r3,76(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 76);
	// lwz r11,72(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// li r25,4
	r25.s64 = 4;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8315b748
	if (!cr6.eq) goto loc_8315B748;
	// li r25,2
	r25.s64 = 2;
loc_8315B748:
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// li r21,0
	r21.s64 = 0;
	// lwz r23,72(r24)
	r23.u64 = PPC_LOAD_U32(r24.u32 + 72);
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315b938
	if (!cr6.gt) goto loc_8315B938;
	// mr r22,r24
	r22.u64 = r24.u64;
	// addi r28,r26,40
	r28.s64 = r26.s64 + 40;
	// li r20,1
	r20.s64 = 1;
loc_8315B770:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315b7a4
	if (!cr6.eq) goto loc_8315B7A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// add r11,r27,r24
	r11.u64 = r27.u64 + r24.u64;
	// stb r21,80(r11)
	PPC_STORE_U8(r11.u32 + 80, r21.u8);
	// b 0x8315b920
	goto loc_8315B920;
loc_8315B7A4:
	// lwz r10,64(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 64);
	// mr r30,r21
	r30.u64 = r21.u64;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// bge cr6,0x8315b7b8
	if (!cr6.lt) goto loc_8315B7B8;
	// lwz r30,0(r22)
	r30.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_8315B7B8:
	// divwu r31,r11,r25
	r31.u32 = r11.u32 / r25.u32;
	// cmplw cr6,r23,r31
	cr6.compare<uint32_t>(r23.u32, r31.u32, xer);
	// bgt cr6,0x8315b7c8
	if (cr6.gt) goto loc_8315B7C8;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_8315B7C8:
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// mullw r29,r31,r25
	r29.s64 = int64_t(r31.s32) * int64_t(r25.s32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8315b8d4
	if (cr6.lt) goto loc_8315B8D4;
	// bne cr6,0x8315b8e4
	if (!cr6.eq) goto loc_8315B8E4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// blt cr6,0x8315b888
	if (cr6.lt) goto loc_8315B888;
	// addi r9,r31,-4
	ctx.r9.s64 = r31.s64 + -4;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8315B808:
	// lhz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lhz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,-4(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,0(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x8315b808
	if (!cr0.eq) goto loc_8315B808;
loc_8315B888:
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// bge cr6,0x8315b8e4
	if (!cr6.lt) goto loc_8315B8E4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// add r10,r11,r7
	ctx.r10.u64 = r11.u64 + ctx.r7.u64;
	// subf r11,r9,r31
	r11.s64 = r31.s64 - ctx.r9.s64;
loc_8315B8A4:
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8315b8a4
	if (!cr0.eq) goto loc_8315B8A4;
	// b 0x8315b8e4
	goto loc_8315B8E4;
loc_8315B8D4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_8315B8E4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// subf r11,r31,r23
	r11.s64 = r23.s64 - r31.s64;
	// mullw. r5,r11,r25
	ctx.r5.s64 = int64_t(r11.s32) * int64_t(r25.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8315b910
	if (cr0.eq) goto loc_8315B910;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_8315B910:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8315b920
	if (cr6.eq) goto loc_8315B920;
	// add r11,r27,r24
	r11.u64 = r27.u64 + r24.u64;
	// stb r20,80(r11)
	PPC_STORE_U8(r11.u32 + 80, r20.u8);
loc_8315B920:
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x8315b770
	if (cr6.lt) goto loc_8315B770;
loc_8315B938:
	// lwz r11,80(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// lwz r10,36(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// add r9,r31,r11
	ctx.r9.u64 = r31.u64 + r11.u64;
	// stw r9,80(r26)
	PPC_STORE_U32(r26.u32 + 80, ctx.r9.u32);
	// stw r10,68(r24)
	PPC_STORE_U32(r24.u32 + 68, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_8315B958"))) PPC_WEAK_FUNC(sub_8315B958);
PPC_FUNC_IMPL(__imp__sub_8315B958) {
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
	// addi r10,r11,26792
	ctx.r10.s64 = r11.s64 + 26792;
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
	// beq cr6,0x8315b9a0
	if (cr6.eq) goto loc_8315B9A0;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315B9A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B9B8"))) PPC_WEAK_FUNC(sub_8315B9B8);
PPC_FUNC_IMPL(__imp__sub_8315B9B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315B9D8"))) PPC_WEAK_FUNC(sub_8315B9D8);
PPC_FUNC_IMPL(__imp__sub_8315B9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B9E0"))) PPC_WEAK_FUNC(sub_8315B9E0);
PPC_FUNC_IMPL(__imp__sub_8315B9E0) {
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
	// addi r10,r11,26800
	ctx.r10.s64 = r11.s64 + 26800;
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
	// beq cr6,0x8315ba28
	if (cr6.eq) goto loc_8315BA28;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315BA28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BA40"))) PPC_WEAK_FUNC(sub_8315BA40);
PPC_FUNC_IMPL(__imp__sub_8315BA40) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83168650
	sub_83168650(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r28,1832
	r30.s64 = r28.s64 + 1832;
	// beq cr6,0x8315ba88
	if (cr6.eq) goto loc_8315BA88;
loc_8315BA6C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,512
	ctx.r4.s64 = 512;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// bl 0x8316afa8
	sub_8316AFA8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// bne 0x8315ba6c
	if (!cr0.eq) goto loc_8315BA6C;
loc_8315BA88:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x8315bad0
	if (cr6.lt) goto loc_8315BAD0;
	// beq cr6,0x8315bac4
	if (cr6.eq) goto loc_8315BAC4;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// blt cr6,0x8315babc
	if (cr6.lt) goto loc_8315BABC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,26808
	ctx.r4.s64 = r11.s64 + 26808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8315BABC:
	// addi r11,r30,76
	r11.s64 = r30.s64 + 76;
	// b 0x8315bae0
	goto loc_8315BAE0;
loc_8315BAC4:
	// bl 0x83162490
	sub_83162490(ctx, base);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// b 0x8315bae0
	goto loc_8315BAE0;
loc_8315BAD0:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83168650
	sub_83168650(ctx, base);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// addi r11,r11,304
	r11.s64 = r11.s64 + 304;
loc_8315BAE0:
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - r28.s64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,156
	ctx.r3.s64 = r11.s64 + 156;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8315BAF8"))) PPC_WEAK_FUNC(sub_8315BAF8);
PPC_FUNC_IMPL(__imp__sub_8315BAF8) {
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
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315bb34
	if (cr6.eq) goto loc_8315BB34;
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r4,64(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315BB34:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x831613a0
	sub_831613A0(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x8315bb74
	if (!cr6.eq) goto loc_8315BB74;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r11,0
	r11.s64 = 0;
	// stw r11,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, r11.u32);
	// lwz r9,1828(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1828);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_8315BB74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BB90"))) PPC_WEAK_FUNC(sub_8315BB90);
PPC_FUNC_IMPL(__imp__sub_8315BB90) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8315bbc0
	if (cr6.eq) goto loc_8315BBC0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8315bbd0
	if (!cr6.eq) goto loc_8315BBD0;
loc_8315BBC0:
	// stw r30,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r30.u32);
	// stw r30,56(r11)
	PPC_STORE_U32(r11.u32 + 56, r30.u32);
	// stb r29,65(r11)
	PPC_STORE_U8(r11.u32 + 65, r29.u8);
	// stw r29,68(r11)
	PPC_STORE_U32(r11.u32 + 68, r29.u32);
loc_8315BBD0:
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x83162358
	sub_83162358(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,1760(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1760);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,1764(r31)
	PPC_STORE_U32(r31.u32 + 1764, r29.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x8315bbf4
	if (!cr6.gt) goto loc_8315BBF4;
	// stw r30,1768(r31)
	PPC_STORE_U32(r31.u32 + 1768, r30.u32);
loc_8315BBF4:
	// lwz r11,1828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1828);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315BC08"))) PPC_WEAK_FUNC(sub_8315BC08);
PPC_FUNC_IMPL(__imp__sub_8315BC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,116
	ctx.r3.s64 = r11.s64 + 116;
	// stw r10,1768(r11)
	PPC_STORE_U32(r11.u32 + 1768, ctx.r10.u32);
	// b 0x831623a8
	sub_831623A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315BC20"))) PPC_WEAK_FUNC(sub_8315BC20);
PPC_FUNC_IMPL(__imp__sub_8315BC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,116
	ctx.r3.s64 = r11.s64 + 116;
	// stw r10,1768(r11)
	PPC_STORE_U32(r11.u32 + 1768, ctx.r10.u32);
	// b 0x83162400
	sub_83162400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315BC38"))) PPC_WEAK_FUNC(sub_8315BC38);
PPC_FUNC_IMPL(__imp__sub_8315BC38) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1804, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BC40"))) PPC_WEAK_FUNC(sub_8315BC40);
PPC_FUNC_IMPL(__imp__sub_8315BC40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1804(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1804);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BC48"))) PPC_WEAK_FUNC(sub_8315BC48);
PPC_FUNC_IMPL(__imp__sub_8315BC48) {
	PPC_FUNC_PROLOGUE();
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BC58"))) PPC_WEAK_FUNC(sub_8315BC58);
PPC_FUNC_IMPL(__imp__sub_8315BC58) {
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,26872(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26872);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8315bc90
	if (cr6.lt) goto loc_8315BC90;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f13,26868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26868);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x8315bc94
	if (!cr6.gt) goto loc_8315BC94;
loc_8315BC90:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f13.f64;
loc_8315BC94:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f13,9288(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9288);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,-18480(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + -18480);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(f0.f64 * ctx.f13.f64));
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1820(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1820, temp.u32);
	// addi r3,r31,1620
	ctx.r3.s64 = r31.s64 + 1620;
	// lfs f13,1816(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1816);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x8315aba8
	sub_8315ABA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BCD8"))) PPC_WEAK_FUNC(sub_8315BCD8);
PPC_FUNC_IMPL(__imp__sub_8315BCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f13,f0,f5
	ctx.f13.f64 = double(float(f0.f64 * ctx.f5.f64));
	// stfs f6,48(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmuls f12,f0,f4
	ctx.f12.f64 = double(float(f0.f64 * ctx.f4.f64));
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f11,f0,f3
	ctx.f11.f64 = double(float(f0.f64 * ctx.f3.f64));
	// stfs f2,32(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmuls f10,f0,f2
	ctx.f10.f64 = double(float(f0.f64 * ctx.f2.f64));
	// stfs f3,36(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmuls f9,f0,f1
	ctx.f9.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// lfs f0,-21804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21804);
	f0.f64 = double(temp.f32);
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * f0.f64));
	// fctidz f3,f8
	ctx.f3.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// fctidz f2,f7
	ctx.f2.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// fctidz f0,f6
	f0.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// fctidz f13,f5
	ctx.f13.s64 = (ctx.f5.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// fctidz f12,f4
	ctx.f12.s64 = (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x83161360
	sub_83161360(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BD88"))) PPC_WEAK_FUNC(sub_8315BD88);
PPC_FUNC_IMPL(__imp__sub_8315BD88) {
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
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// bl 0x8315aff8
	sub_8315AFF8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8315aff8
	sub_8315AFF8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bne cr6,0x8315bdf0
	if (!cr6.eq) goto loc_8315BDF0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// bne cr6,0x8315bdf0
	if (!cr6.eq) goto loc_8315BDF0;
	// fmr f2,f0
	ctx.f2.f64 = f0.f64;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// b 0x8315bdf4
	goto loc_8315BDF4;
loc_8315BDF0:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_8315BDF4:
	// addi r3,r31,392
	ctx.r3.s64 = r31.s64 + 392;
	// bl 0x83162a88
	sub_83162A88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_8315BE20"))) PPC_WEAK_FUNC(sub_8315BE20);
PPC_FUNC_IMPL(__imp__sub_8315BE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,1824(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x83151f78
	sub_83151F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315BE38"))) PPC_WEAK_FUNC(sub_8315BE38);
PPC_FUNC_IMPL(__imp__sub_8315BE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,1760(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1760, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BE40"))) PPC_WEAK_FUNC(sub_8315BE40);
PPC_FUNC_IMPL(__imp__sub_8315BE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BE50"))) PPC_WEAK_FUNC(sub_8315BE50);
PPC_FUNC_IMPL(__imp__sub_8315BE50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r5,r10,26944
	ctx.r5.s64 = ctx.r10.s64 + 26944;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stfs f30,24(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f31,28(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stfs f31,36(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lis r3,-32231
	ctx.r3.s64 = -2112290816;
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// addi r5,r3,26932
	ctx.r5.s64 = ctx.r3.s64 + 26932;
	// lfs f0,28704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28704);
	f0.f64 = double(temp.f32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stw r6,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r6.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// bl 0x8315aa08
	sub_8315AA08(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r30.u32);
	// addi r5,r11,26916
	ctx.r5.s64 = r11.s64 + 26916;
	// addi r3,r31,392
	ctx.r3.s64 = r31.s64 + 392;
	// bl 0x8315b098
	sub_8315B098(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, r30.u32);
	// addi r5,r10,26900
	ctx.r5.s64 = ctx.r10.s64 + 26900;
	// addi r3,r31,1620
	ctx.r3.s64 = r31.s64 + 1620;
	// bl 0x8315ab38
	sub_8315AB38(ctx, base);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r30,1728(r31)
	PPC_STORE_U32(r31.u32 + 1728, r30.u32);
	// addi r5,r9,26888
	ctx.r5.s64 = ctx.r9.s64 + 26888;
	// stfs f31,1760(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 1760, temp.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r28,1756(r31)
	PPC_STORE_U32(r31.u32 + 1756, r28.u32);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// stw r30,1740(r31)
	PPC_STORE_U32(r31.u32 + 1740, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,1744(r31)
	PPC_STORE_U32(r31.u32 + 1744, r30.u32);
	// addi r4,r8,26776
	ctx.r4.s64 = ctx.r8.s64 + 26776;
	// stw r30,1748(r31)
	PPC_STORE_U32(r31.u32 + 1748, r30.u32);
	// addi r3,r7,26876
	ctx.r3.s64 = ctx.r7.s64 + 26876;
	// stw r30,1752(r31)
	PPC_STORE_U32(r31.u32 + 1752, r30.u32);
	// addi r10,r6,26784
	ctx.r10.s64 = ctx.r6.s64 + 26784;
	// stw r30,1764(r31)
	PPC_STORE_U32(r31.u32 + 1764, r30.u32);
	// stw r30,1768(r31)
	PPC_STORE_U32(r31.u32 + 1768, r30.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r5,1736(r31)
	PPC_STORE_U32(r31.u32 + 1736, ctx.r5.u32);
	// lfs f0,2244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r4,1732(r31)
	PPC_STORE_U32(r31.u32 + 1732, ctx.r4.u32);
	// addi r11,r31,72
	r11.s64 = r31.s64 + 72;
	// stw r30,1772(r31)
	PPC_STORE_U32(r31.u32 + 1772, r30.u32);
	// stw r3,1780(r31)
	PPC_STORE_U32(r31.u32 + 1780, ctx.r3.u32);
	// stw r28,1800(r31)
	PPC_STORE_U32(r31.u32 + 1800, r28.u32);
	// stw r30,1784(r31)
	PPC_STORE_U32(r31.u32 + 1784, r30.u32);
	// stw r10,1776(r31)
	PPC_STORE_U32(r31.u32 + 1776, ctx.r10.u32);
	// stw r30,1788(r31)
	PPC_STORE_U32(r31.u32 + 1788, r30.u32);
	// stw r30,1792(r31)
	PPC_STORE_U32(r31.u32 + 1792, r30.u32);
	// stw r30,1796(r31)
	PPC_STORE_U32(r31.u32 + 1796, r30.u32);
	// stw r30,1804(r31)
	PPC_STORE_U32(r31.u32 + 1804, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, r30.u32);
	// stw r30,1812(r31)
	PPC_STORE_U32(r31.u32 + 1812, r30.u32);
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f30,f13
	ctx.f12.f64 = double(float(f30.f64 / ctx.f13.f64));
	// stfs f12,1816(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1816, temp.u32);
	// stfs f0,1820(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1820, temp.u32);
	// stw r8,1824(r31)
	PPC_STORE_U32(r31.u32 + 1824, ctx.r8.u32);
	// stw r27,1828(r31)
	PPC_STORE_U32(r31.u32 + 1828, r27.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8315BFD4:
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8315bfd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315BFD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8315BFF8"))) PPC_WEAK_FUNC(sub_8315BFF8);
PPC_FUNC_IMPL(__imp__sub_8315BFF8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,26944
	ctx.r9.s64 = r11.s64 + 26944;
	// addi r8,r10,26784
	ctx.r8.s64 = ctx.r10.s64 + 26784;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,1776
	ctx.r3.s64 = r31.s64 + 1776;
	// stw r8,1776(r31)
	PPC_STORE_U32(r31.u32 + 1776, ctx.r8.u32);
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r3,r31,1732
	ctx.r3.s64 = r31.s64 + 1732;
	// addi r6,r7,26776
	ctx.r6.s64 = ctx.r7.s64 + 26776;
	// stw r6,1732(r31)
	PPC_STORE_U32(r31.u32 + 1732, ctx.r6.u32);
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// addi r3,r31,1620
	ctx.r3.s64 = r31.s64 + 1620;
	// addi r4,r5,26668
	ctx.r4.s64 = ctx.r5.s64 + 26668;
	// stw r4,1620(r31)
	PPC_STORE_U32(r31.u32 + 1620, ctx.r4.u32);
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r31,392
	ctx.r3.s64 = r31.s64 + 392;
	// addi r9,r11,26768
	ctx.r9.s64 = r11.s64 + 26768;
	// addi r11,r3,1212
	r11.s64 = ctx.r3.s64 + 1212;
	// stw r9,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r9,17860
	ctx.r9.s64 = ctx.r9.s64 + 17860;
loc_8315C074:
	// addi r11,r11,-148
	r11.s64 = r11.s64 + -148;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bge 0x8315c074
	if (!cr0.lt) goto loc_8315C074;
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// addi r10,r11,26660
	ctx.r10.s64 = r11.s64 + 26660;
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C0B0"))) PPC_WEAK_FUNC(sub_8315C0B0);
PPC_FUNC_IMPL(__imp__sub_8315C0B0) {
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
	// lwz r4,1824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1824);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x8315c0d8
	if (cr6.eq) goto loc_8315C0D8;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x83151e88
	sub_83151E88(ctx, base);
loc_8315C0D8:
	// lwz r4,1812(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8315c100
	if (cr6.eq) goto loc_8315C100;
	// lwz r5,1808(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1808);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315c100
	if (cr6.eq) goto loc_8315C100;
	// addi r3,r31,1776
	ctx.r3.s64 = r31.s64 + 1776;
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, r29.u32);
loc_8315C100:
	// lwz r5,1772(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1772);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315c11c
	if (cr6.eq) goto loc_8315C11C;
	// addi r4,r31,1776
	ctx.r4.s64 = r31.s64 + 1776;
	// addi r3,r31,1732
	ctx.r3.s64 = r31.s64 + 1732;
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,1772(r31)
	PPC_STORE_U32(r31.u32 + 1772, r29.u32);
loc_8315C11C:
	// lwz r5,1728(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1728);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315c138
	if (cr6.eq) goto loc_8315C138;
	// addi r4,r31,1732
	ctx.r4.s64 = r31.s64 + 1732;
	// addi r3,r31,1620
	ctx.r3.s64 = r31.s64 + 1620;
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,1728(r31)
	PPC_STORE_U32(r31.u32 + 1728, r29.u32);
loc_8315C138:
	// lwz r5,1616(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1616);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315c154
	if (cr6.eq) goto loc_8315C154;
	// addi r4,r31,1620
	ctx.r4.s64 = r31.s64 + 1620;
	// addi r3,r31,392
	ctx.r3.s64 = r31.s64 + 392;
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, r29.u32);
loc_8315C154:
	// lwz r5,388(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 388);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315c170
	if (cr6.eq) goto loc_8315C170;
	// addi r4,r31,392
	ctx.r4.s64 = r31.s64 + 392;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,388(r31)
	PPC_STORE_U32(r31.u32 + 388, r29.u32);
loc_8315C170:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c194
	if (cr6.eq) goto loc_8315C194;
	// lwz r5,112(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315c194
	if (cr6.eq) goto loc_8315C194;
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
loc_8315C194:
	// lwz r3,1812(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c1b8
	if (cr6.eq) goto loc_8315C1B8;
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
	// stw r29,1812(r31)
	PPC_STORE_U32(r31.u32 + 1812, r29.u32);
loc_8315C1B8:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c1dc
	if (cr6.eq) goto loc_8315C1DC;
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
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
loc_8315C1DC:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c1fc
	if (cr6.eq) goto loc_8315C1FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
loc_8315C1FC:
	// addi r31,r31,72
	r31.s64 = r31.s64 + 72;
	// li r30,8
	r30.s64 = 8;
loc_8315C204:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c218
	if (cr6.eq) goto loc_8315C218;
	// bl 0x8316a4e8
	sub_8316A4E8(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8315C218:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8315c204
	if (!cr0.eq) goto loc_8315C204;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315C230"))) PPC_WEAK_FUNC(sub_8315C230);
PPC_FUNC_IMPL(__imp__sub_8315C230) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,26992
	ctx.r5.s64 = r11.s64 + 26992;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c2bc
	if (cr6.eq) goto loc_8315C2BC;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315C270:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315c270
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315C270;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// addi r9,r10,26648
	ctx.r9.s64 = ctx.r10.s64 + 26648;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, r11.u8);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8315C2BC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27004
	ctx.r4.s64 = r11.s64 + 27004;
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

__attribute__((alias("__imp__sub_8315C2E8"))) PPC_WEAK_FUNC(sub_8315C2E8);
PPC_FUNC_IMPL(__imp__sub_8315C2E8) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315c554
	if (cr6.eq) goto loc_8315C554;
	// li r25,0
	r25.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// li r22,-1
	r22.s64 = -1;
	// li r23,2
	r23.s64 = 2;
loc_8315C314:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315c324
	if (!cr6.eq) goto loc_8315C324;
	// stw r25,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r25.u32);
loc_8315C324:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315c544
	if (!cr6.eq) goto loc_8315C544;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315c380
	if (!cr6.eq) goto loc_8315C380;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8315a870
	sub_8315A870(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8315c378
	if (cr6.eq) goto loc_8315C378;
	// stw r24,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r24.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r25,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r25.u32);
	// b 0x8315c37c
	goto loc_8315C37C;
loc_8315C378:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8315C37C:
	// bl 0x8316a638
	sub_8316A638(ctx, base);
loc_8315C380:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315c51c
	if (!cr6.eq) goto loc_8315C51C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r26,r25
	r26.u64 = r25.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// subf. r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8315c3ac
	if (!cr0.eq) goto loc_8315C3AC;
	// stw r25,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r25.u32);
	// b 0x8315c314
	goto loc_8315C314;
loc_8315C3AC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315c41c
	if (!cr6.gt) goto loc_8315C41C;
	// addi r29,r1,112
	r29.s64 = ctx.r1.s64 + 112;
	// addi r30,r1,144
	r30.s64 = ctx.r1.s64 + 144;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
loc_8315C3D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x8316a598
	sub_8316A598(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315c504
	if (cr6.eq) goto loc_8315C504;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315c504
	if (cr6.eq) goto loc_8315C504;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// rlwinm r26,r11,30,2,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// blt cr6,0x8315c3d4
	if (cr6.lt) goto loc_8315C3D4;
loc_8315C41C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r4,r10,r11
	ctx.r4.s64 = r11.s64 - ctx.r10.s64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315a918
	sub_8315A918(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x8315c4a8
	if (!cr6.gt) goto loc_8315C4A8;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
loc_8315C480:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8316a5a8
	sub_8316A5A8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8315c480
	if (cr6.lt) goto loc_8315C480;
loc_8315C4A8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x8315c4ec
	if (cr0.gt) goto loc_8315C4EC;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,44
	cr6.compare<uint32_t>(r11.u32, 44, xer);
	// bgt cr6,0x8315c4dc
	if (cr6.gt) goto loc_8315C4DC;
	// stw r23,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r23.u32);
loc_8315C4DC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
loc_8315C4EC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// subf. r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8315c51c
	if (!cr0.eq) goto loc_8315C51C;
	// stw r25,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r25.u32);
	// b 0x8315c314
	goto loc_8315C314;
loc_8315C504:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b60
	return;
loc_8315C51C:
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315c554
	if (!cr6.eq) goto loc_8315C554;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a620
	sub_8316A620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315c554
	if (!cr6.eq) goto loc_8315C554;
	// stw r23,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r23.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b60
	return;
loc_8315C544:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315c554
	if (!cr6.eq) goto loc_8315C554;
	// stw r25,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r25.u32);
loc_8315C554:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8315C560"))) PPC_WEAK_FUNC(sub_8315C560);
PPC_FUNC_IMPL(__imp__sub_8315C560) {
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
	// addi r9,r11,26624
	ctx.r9.s64 = r11.s64 + 26624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315c598
	if (cr6.eq) goto loc_8315C598;
	// li r4,76
	ctx.r4.s64 = 76;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315C598:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C5B0"))) PPC_WEAK_FUNC(sub_8315C5B0);
PPC_FUNC_IMPL(__imp__sub_8315C5B0) {
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
	// bl 0x831b1430
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// lfs f30,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x8315c610
	if (!cr6.eq) goto loc_8315C610;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c838
	if (cr6.eq) goto loc_8315C838;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b147c
	// b 0x831b0b70
	return;
loc_8315C610:
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lfs f31,-15484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15484);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x8315c648
	if (cr6.gt) goto loc_8315C648;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,27060
	ctx.r4.s64 = r11.s64 + 27060;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// stfs f31,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b147c
	// b 0x831b0b70
	return;
loc_8315C648:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f27,24336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24336);
	f27.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(f0.f64, f27.f64);
	// ble cr6,0x8315c680
	if (!cr6.gt) goto loc_8315C680;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r11,27016
	ctx.r4.s64 = r11.s64 + 27016;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// stfs f27,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r29.u32 + 28, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b147c
	// b 0x831b0b70
	return;
loc_8315C680:
	// lwz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// lfs f13,76(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lwz r28,72(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// fmuls f26,f13,f0
	f26.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f28,f0
	f28.f64 = f0.f64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8315c6b4
	if (cr6.eq) goto loc_8315C6B4;
	// addi r11,r27,80
	r11.s64 = r27.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8315C6A8:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x8315c6a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315C6A8;
loc_8315C6B4:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8315c6e0
	if (cr6.eq) goto loc_8315C6E0;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f10,f13,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + f0.f64));
loc_8315C6E0:
	// lbz r11,100(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 100);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315c6f0
	if (!cr6.eq) goto loc_8315C6F0;
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + f30.f64));
loc_8315C6F0:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = f0.f64;
	// li r30,0
	r30.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8315c838
	if (cr6.eq) goto loc_8315C838;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f29,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f29.f64 = double(temp.f32);
loc_8315C70C:
	// cmplwi cr6,r26,128
	cr6.compare<uint32_t>(r26.u32, 128, xer);
	// bgt cr6,0x8315c838
	if (cr6.gt) goto loc_8315C838;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x8315c728
	if (!cr6.gt) goto loc_8315C728;
	// fmr f0,f27
	f0.f64 = f27.f64;
	// b 0x8315c72c
	goto loc_8315C72C;
loc_8315C728:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_8315C72C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8315c848
	if (!cr6.gt) goto loc_8315C848;
	// lbz r11,100(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 100);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315c750
	if (!cr6.eq) goto loc_8315C750;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x8315c750
	if (cr6.eq) goto loc_8315C750;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(f0.f64 - f30.f64));
loc_8315C750:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fadds f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 + f30.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f5,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f4,f30,f5
	ctx.f4.f64 = double(float(f30.f64 - ctx.f5.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * f28.f64));
	// fcmpu cr6,f3,f30
	cr6.compare(ctx.f3.f64, f30.f64);
	// bge cr6,0x8315c79c
	if (!cr6.lt) goto loc_8315C79C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8315C79C:
	// cmplwi cr6,r7,128
	cr6.compare<uint32_t>(ctx.r7.u32, 128, xer);
	// ble cr6,0x8315c7a8
	if (!cr6.gt) goto loc_8315C7A8;
	// li r7,128
	ctx.r7.s64 = 128;
loc_8315C7A8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8315c7cc
	if (cr6.eq) goto loc_8315C7CC;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f10,f13,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + f0.f64));
loc_8315C7CC:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315c7d8
	if (!cr6.eq) goto loc_8315C7D8;
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + f30.f64));
loc_8315C7D8:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(r31.u32, 128, xer);
	// ble cr6,0x8315c7f0
	if (!cr6.gt) goto loc_8315C7F0;
	// li r31,128
	r31.s64 = 128;
loc_8315C7F0:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8315ac20
	sub_8315AC20(ctx, base);
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f31,f31,f12
	f31.f64 = double(float(f31.f64 - ctx.f12.f64));
	// fcmpu cr6,f31,f29
	cr6.compare(f31.f64, f29.f64);
	// bge cr6,0x8315c830
	if (!cr6.lt) goto loc_8315C830;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_8315C830:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x8315c70c
	if (cr6.lt) goto loc_8315C70C;
loc_8315C838:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b147c
	// b 0x831b0b70
	return;
loc_8315C848:
	// li r31,0
	r31.s64 = 0;
	// subf r7,r30,r28
	ctx.r7.s64 = r28.s64 - r30.s64;
	// b 0x8315c7f0
	goto loc_8315C7F0;
}

__attribute__((alias("__imp__sub_8315C858"))) PPC_WEAK_FUNC(sub_8315C858);
PPC_FUNC_IMPL(__imp__sub_8315C858) {
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
	PPCRegister f31{};
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
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8315c8a0
	if (!cr6.eq) goto loc_8315C8A0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,27152
	ctx.r4.s64 = r11.s64 + 27152;
	// b 0x8315c94c
	goto loc_8315C94C;
loc_8315C8A0:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315c8cc
	if (cr6.eq) goto loc_8315C8CC;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8315C8B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8315c8e4
	if (cr6.eq) goto loc_8315C8E4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x8315c8b0
	if (cr6.lt) goto loc_8315C8B0;
loc_8315C8CC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8315c8f4
	if (!cr6.eq) goto loc_8315C8F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,27140
	ctx.r4.s64 = r11.s64 + 27140;
	// b 0x8315c94c
	goto loc_8315C94C;
loc_8315C8E4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-2
	ctx.r5.s64 = -2;
	// addi r4,r11,27128
	ctx.r4.s64 = r11.s64 + 27128;
	// b 0x8315c94c
	goto loc_8315C94C;
loc_8315C8F4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,27120
	ctx.r5.s64 = r11.s64 + 27120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315c940
	if (cr6.eq) goto loc_8315C940;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8315b690
	sub_8315B690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315c958
	if (!cr6.eq) goto loc_8315C958;
loc_8315C940:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27108
	ctx.r4.s64 = r11.s64 + 27108;
loc_8315C94C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8315C958:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8315C968"))) PPC_WEAK_FUNC(sub_8315C968);
PPC_FUNC_IMPL(__imp__sub_8315C968) {
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
	// bl 0x8315c0b0
	sub_8315C0B0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315c9a0
	if (cr6.eq) goto loc_8315C9A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315C9A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C9B8"))) PPC_WEAK_FUNC(sub_8315C9B8);
PPC_FUNC_IMPL(__imp__sub_8315C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8315baf8
	sub_8315BAF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C9C4"))) PPC_WEAK_FUNC(sub_8315C9C4);
PPC_FUNC_IMPL(__imp__sub_8315C9C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315C9C8"))) PPC_WEAK_FUNC(sub_8315C9C8);
PPC_FUNC_IMPL(__imp__sub_8315C9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8315c9e8
	if (cr6.eq) goto loc_8315C9E8;
	// lwz r11,1804(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1804);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8315c9e8
	if (cr6.eq) goto loc_8315C9E8;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x83161380
	sub_83161380(ctx, base);
	return;
loc_8315C9E8:
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x83161390
	sub_83161390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C9F0"))) PPC_WEAK_FUNC(sub_8315C9F0);
PPC_FUNC_IMPL(__imp__sub_8315C9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// beq cr6,0x8315ca20
	if (cr6.eq) goto loc_8315CA20;
	// lwz r10,1804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1804);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8315ca20
	if (cr6.eq) goto loc_8315CA20;
	// lwz r4,1824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// b 0x83151ec0
	sub_83151EC0(ctx, base);
	return;
loc_8315CA20:
	// lwz r4,1824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// b 0x83151ee8
	sub_83151EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315CA28"))) PPC_WEAK_FUNC(sub_8315CA28);
PPC_FUNC_IMPL(__imp__sub_8315CA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// beq cr6,0x8315ca58
	if (cr6.eq) goto loc_8315CA58;
	// lwz r10,1804(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1804);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8315ca58
	if (cr6.eq) goto loc_8315CA58;
	// lwz r4,1824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// b 0x83151f08
	sub_83151F08(ctx, base);
	return;
loc_8315CA58:
	// lwz r4,1824(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// b 0x83151f40
	sub_83151F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315CA60"))) PPC_WEAK_FUNC(sub_8315CA60);
PPC_FUNC_IMPL(__imp__sub_8315CA60) {
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
	// bl 0x8315bff8
	sub_8315BFF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315ca9c
	if (cr6.eq) goto loc_8315CA9C;
	// li r4,1832
	ctx.r4.s64 = 1832;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315CA9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CAB8"))) PPC_WEAK_FUNC(sub_8315CAB8);
PPC_FUNC_IMPL(__imp__sub_8315CAB8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8315cb28
	if (!cr6.gt) goto loc_8315CB28;
	// addi r29,r31,72
	r29.s64 = r31.s64 + 72;
loc_8315CAF4:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8316af68
	sub_8316AF68(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8315caf4
	if (cr6.lt) goto loc_8315CAF4;
loc_8315CB28:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// blt cr6,0x8315cb90
	if (cr6.lt) goto loc_8315CB90;
	// beq cr6,0x8315cb80
	if (cr6.eq) goto loc_8315CB80;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// blt cr6,0x8315cb70
	if (cr6.lt) goto loc_8315CB70;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,27212
	ctx.r4.s64 = r11.s64 + 27212;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// stw r26,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r26.u32);
	// b 0x8315cbe4
	goto loc_8315CBE4;
loc_8315CB58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315CB5C:
	// bl 0x8315c0b0
	sub_8315C0B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
loc_8315CB70:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8315c230
	sub_8315C230(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// b 0x8315cbe4
	goto loc_8315CBE4;
loc_8315CB80:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83162588
	sub_83162588(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// b 0x8315cbe4
	goto loc_8315CBE4;
loc_8315CB90:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,26992
	ctx.r5.s64 = r11.s64 + 26992;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,304
	ctx.r3.s64 = 304;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cbbc
	if (cr6.eq) goto loc_8315CBBC;
	// bl 0x8315a3c8
	sub_8315A3C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315cbd4
	if (!cr6.eq) goto loc_8315CBD4;
loc_8315CBBC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,26948
	ctx.r4.s64 = r11.s64 + 26948;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x8315cbe0
	goto loc_8315CBE0;
loc_8315CBD4:
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
loc_8315CBE0:
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
loc_8315CBE4:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lis r7,-31978
	ctx.r7.s64 = -2095710208;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// addi r8,r31,72
	ctx.r8.s64 = r31.s64 + 72;
	// addi r4,r6,27200
	ctx.r4.s64 = ctx.r6.s64 + 27200;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r9,r7,-13896
	ctx.r9.s64 = ctx.r7.s64 + -13896;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, r11.u32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r6,88(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r6,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r6.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r7,92(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r7,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r7.u32);
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r11,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, r11.u32);
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r6,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r6.u32);
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8315c858
	sub_8315C858(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8315cb5c
	if (cr6.eq) goto loc_8315CB5C;
	// lfs f6,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8315bcd8
	sub_8315BCD8(ctx, base);
	// lfs f0,1820(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1820);
	f0.f64 = double(temp.f32);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lfs f13,1816(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 1816);
	ctx.f13.f64 = double(temp.f32);
	// addi r28,r31,1620
	r28.s64 = r31.s64 + 1620;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,1648(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1648, temp.u32);
	// lfs f31,-15484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15484);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x8315cce0
	if (cr6.gt) goto loc_8315CCE0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,26720
	ctx.r4.s64 = r11.s64 + 26720;
	// b 0x8315ccf8
	goto loc_8315CCF8;
loc_8315CCE0:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f31,24336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24336);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x8315cd08
	if (!cr6.gt) goto loc_8315CD08;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,26676
	ctx.r4.s64 = r11.s64 + 26676;
loc_8315CCF8:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// stfs f31,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 28, temp.u32);
loc_8315CD08:
	// lwz r30,32(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r29,20(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// addi r5,r11,27176
	ctx.r5.s64 = r11.s64 + 27176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cd68
	if (cr6.eq) goto loc_8315CD68;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r29.u32);
	// addi r9,r11,27184
	ctx.r9.s64 = r11.s64 + 27184;
	// stw r24,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r24.u32);
	// addi r8,r10,26800
	ctx.r8.s64 = ctx.r10.s64 + 26800;
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r26.u32);
	// stw r26,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r26.u32);
	// b 0x8315cd80
	goto loc_8315CD80;
loc_8315CD68:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27164
	ctx.r4.s64 = r11.s64 + 27164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8315CD80:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1812(r31)
	PPC_STORE_U32(r31.u32 + 1812, ctx.r3.u32);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// addi r30,r31,392
	r30.s64 = r31.s64 + 392;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,1616(r31)
	PPC_STORE_U32(r31.u32 + 1616, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// addi r30,r31,1732
	r30.s64 = r31.s64 + 1732;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,1728(r31)
	PPC_STORE_U32(r31.u32 + 1728, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// addi r29,r31,1776
	r29.s64 = r31.s64 + 1776;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,1772(r31)
	PPC_STORE_U32(r31.u32 + 1772, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1812(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,1812(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1812);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x83151e30
	sub_83151E30(ctx, base);
	// stw r3,1824(r31)
	PPC_STORE_U32(r31.u32 + 1824, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8315cb58
	if (cr6.eq) goto loc_8315CB58;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8315CE58"))) PPC_WEAK_FUNC(sub_8315CE58);
PPC_FUNC_IMPL(__imp__sub_8315CE58) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,27284
	ctx.r5.s64 = r11.s64 + 27284;
	// li r3,1832
	ctx.r3.s64 = 1832;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315ced0
	if (cr6.eq) goto loc_8315CED0;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8315be50
	sub_8315BE50(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8315cef4
	if (!cr6.eq) goto loc_8315CEF4;
loc_8315CED0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27272
	ctx.r4.s64 = r11.s64 + 27272;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
loc_8315CEF4:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8315cab8
	sub_8315CAB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8315cf44
	if (!cr6.eq) goto loc_8315CF44;
	// bl 0x8315c0b0
	sub_8315C0B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8315CF44:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8315CF50"))) PPC_WEAK_FUNC(sub_8315CF50);
PPC_FUNC_IMPL(__imp__sub_8315CF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CF60"))) PPC_WEAK_FUNC(sub_8315CF60);
PPC_FUNC_IMPL(__imp__sub_8315CF60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CF68"))) PPC_WEAK_FUNC(sub_8315CF68);
PPC_FUNC_IMPL(__imp__sub_8315CF68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CF70"))) PPC_WEAK_FUNC(sub_8315CF70);
PPC_FUNC_IMPL(__imp__sub_8315CF70) {
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
	// addi r9,r11,27304
	ctx.r9.s64 = r11.s64 + 27304;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315cfa8
	if (cr6.eq) goto loc_8315CFA8;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315CFA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CFC0"))) PPC_WEAK_FUNC(sub_8315CFC0);
PPC_FUNC_IMPL(__imp__sub_8315CFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315cfe8
	if (!cr6.eq) goto loc_8315CFE8;
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315cfe8
	if (!cr6.eq) goto loc_8315CFE8;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8315CFE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CFF0"))) PPC_WEAK_FUNC(sub_8315CFF0);
PPC_FUNC_IMPL(__imp__sub_8315CFF0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,24020
	ctx.r6.s64 = r11.s64 + 24020;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315d050
	if (cr6.eq) goto loc_8315D050;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315D050:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,24008
	ctx.r4.s64 = r11.s64 + 24008;
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

__attribute__((alias("__imp__sub_8315D080"))) PPC_WEAK_FUNC(sub_8315D080);
PPC_FUNC_IMPL(__imp__sub_8315D080) {
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
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315d0c0
	if (cr6.eq) goto loc_8315D0C0;
loc_8315D0A8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8315d0a8
	if (!cr6.eq) goto loc_8315D0A8;
loc_8315D0C0:
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315d0e8
	if (cr6.eq) goto loc_8315D0E8;
loc_8315D0D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8315d0d0
	if (!cr6.eq) goto loc_8315D0D0;
loc_8315D0E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D100"))) PPC_WEAK_FUNC(sub_8315D100);
PPC_FUNC_IMPL(__imp__sub_8315D100) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315d15c
	if (cr6.eq) goto loc_8315D15C;
loc_8315D124:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8315d150
	if (!cr6.eq) goto loc_8315D150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8315d154
	goto loc_8315D154;
loc_8315D150:
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_8315D154:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8315d124
	if (!cr6.eq) goto loc_8315D124;
loc_8315D15C:
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315d1a4
	if (cr6.eq) goto loc_8315D1A4;
loc_8315D16C:
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x8315d198
	if (!cr6.eq) goto loc_8315D198;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83150b70
	sub_83150B70(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8315d19c
	goto loc_8315D19C;
loc_8315D198:
	// lwz r5,4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
loc_8315D19C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8315d16c
	if (!cr6.eq) goto loc_8315D16C;
loc_8315D1A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315D1B0"))) PPC_WEAK_FUNC(sub_8315D1B0);
PPC_FUNC_IMPL(__imp__sub_8315D1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315d1f0
	if (cr6.eq) goto loc_8315D1F0;
loc_8315D1D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315d1d4
	if (!cr6.eq) goto loc_8315D1D4;
loc_8315D1F0:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315d218
	if (cr6.eq) goto loc_8315D218;
loc_8315D1FC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315d1fc
	if (!cr6.eq) goto loc_8315D1FC;
loc_8315D218:
	// li r11,1
	r11.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D228"))) PPC_WEAK_FUNC(sub_8315D228);
PPC_FUNC_IMPL(__imp__sub_8315D228) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bgt 0x8315d268
	if (cr0.gt) goto loc_8315D268;
	// bl 0x8315d080
	sub_8315D080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315D268:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D280"))) PPC_WEAK_FUNC(sub_8315D280);
PPC_FUNC_IMPL(__imp__sub_8315D280) {
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
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315d2c8
	if (cr6.eq) goto loc_8315D2C8;
	// bl 0x8315cff0
	sub_8315CFF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315d2f8
	if (cr6.eq) goto loc_8315D2F8;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// b 0x8315d304
	goto loc_8315D304;
loc_8315D2C8:
	// bl 0x8315cff0
	sub_8315CFF0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315d2f8
	if (cr6.eq) goto loc_8315D2F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315d300
	if (cr6.eq) goto loc_8315D300;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24144
	ctx.r4.s64 = r11.s64 + 24144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_8315D2F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315d314
	goto loc_8315D314;
loc_8315D300:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_8315D304:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8315D314:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D330"))) PPC_WEAK_FUNC(sub_8315D330);
PPC_FUNC_IMPL(__imp__sub_8315D330) {
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
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,27320
	ctx.r6.s64 = r11.s64 + 27320;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315d3c4
	if (cr6.eq) goto loc_8315D3C4;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,27304
	ctx.r8.s64 = ctx.r10.s64 + 27304;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r31,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// b 0x8315d3dc
	goto loc_8315D3DC;
loc_8315D3C4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27308
	ctx.r4.s64 = r11.s64 + 27308;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8315D3DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D3F8"))) PPC_WEAK_FUNC(sub_8315D3F8);
PPC_FUNC_IMPL(__imp__sub_8315D3F8) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8315d280
	sub_8315D280(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8315d438
	if (!cr6.eq) goto loc_8315D438;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315D438:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8315D460"))) PPC_WEAK_FUNC(sub_8315D460);
PPC_FUNC_IMPL(__imp__sub_8315D460) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,40(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315d4c8
	if (cr6.eq) goto loc_8315D4C8;
loc_8315D480:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83151748
	sub_83151748(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315d4d4
	if (cr6.eq) goto loc_8315D4D4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8315d280
	sub_8315D280(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315d510
	if (cr6.eq) goto loc_8315D510;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8315d480
	if (!cr6.eq) goto loc_8315D480;
loc_8315D4C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8315D4D4:
	// lwz r30,40(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315d504
	if (cr6.eq) goto loc_8315D504;
loc_8315D4E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8315d100
	sub_8315D100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83151300
	sub_83151300(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8315d4e0
	if (!cr6.eq) goto loc_8315D4E0;
loc_8315D504:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8315D510:
	// lwz r30,40(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315d540
	if (cr6.eq) goto loc_8315D540;
loc_8315D51C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8315d100
	sub_8315D100(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83151300
	sub_83151300(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8315d51c
	if (!cr6.eq) goto loc_8315D51C;
loc_8315D540:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315D550"))) PPC_WEAK_FUNC(sub_8315D550);
PPC_FUNC_IMPL(__imp__sub_8315D550) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,27320
	ctx.r6.s64 = r11.s64 + 27320;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315d604
	if (cr6.eq) goto loc_8315D604;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,27304
	ctx.r8.s64 = ctx.r10.s64 + 27304;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// bl 0x8315d460
	sub_8315D460(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8315d5fc
	if (!cr6.eq) goto loc_8315D5FC;
	// bl 0x8315d228
	sub_8315D228(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8315D5FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8315D604:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27332
	ctx.r4.s64 = r11.s64 + 27332;
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
}

__attribute__((alias("__imp__sub_8315D628"))) PPC_WEAK_FUNC(sub_8315D628);
PPC_FUNC_IMPL(__imp__sub_8315D628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D638"))) PPC_WEAK_FUNC(sub_8315D638);
PPC_FUNC_IMPL(__imp__sub_8315D638) {
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
	// addi r9,r11,27356
	ctx.r9.s64 = r11.s64 + 27356;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315d670
	if (cr6.eq) goto loc_8315D670;
	// li r4,60
	ctx.r4.s64 = 60;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315D670:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D688"))) PPC_WEAK_FUNC(sub_8315D688);
PPC_FUNC_IMPL(__imp__sub_8315D688) {
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
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315D6A4"))) PPC_WEAK_FUNC(sub_8315D6A4);
PPC_FUNC_IMPL(__imp__sub_8315D6A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D6A8"))) PPC_WEAK_FUNC(sub_8315D6A8);
PPC_FUNC_IMPL(__imp__sub_8315D6A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315d6d0
	if (cr6.eq) goto loc_8315D6D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315D6D0:
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

__attribute__((alias("__imp__sub_8315D6E8"))) PPC_WEAK_FUNC(sub_8315D6E8);
PPC_FUNC_IMPL(__imp__sub_8315D6E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r6,68(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x831699e0
	sub_831699E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8315d720
	if (!cr6.eq) goto loc_8315D720;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_8315D720:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83168938
	sub_83168938(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// ble cr6,0x8315d73c
	if (!cr6.gt) goto loc_8315D73C;
	// li r11,3
	r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8315D73C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// mr r30,r26
	r30.u64 = r26.u64;
	// stb r26,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r26.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// sth r26,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r26.u16);
	// ble cr6,0x8315d7c8
	if (!cr6.gt) goto loc_8315D7C8;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
loc_8315D760:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r8,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, ctx.r8.u32);
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lbz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8315d7b4
	if (!cr6.eq) goto loc_8315D7B4;
	// stb r27,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r27.u8);
	// sth r30,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r30.u16);
loc_8315D7B4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8315d760
	if (cr6.lt) goto loc_8315D760;
loc_8315D7C8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315d7ec
	if (!cr6.eq) goto loc_8315D7EC;
	// lbz r11,36(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315d7ec
	if (!cr6.eq) goto loc_8315D7EC;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// stb r27,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r27.u8);
	// sth r26,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r26.u16);
loc_8315D7EC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8315D800"))) PPC_WEAK_FUNC(sub_8315D800);
PPC_FUNC_IMPL(__imp__sub_8315D800) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315d9dc
	if (cr6.eq) goto loc_8315D9DC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315d830
	if (!cr6.eq) goto loc_8315D830;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
loc_8315D830:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8315d9d0
	if (!cr6.eq) goto loc_8315D9D0;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r28,2
	r28.s64 = 2;
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315d8d8
	if (!cr6.eq) goto loc_8315D8D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315d6e8
	sub_8315D6E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8315d8d4
	if (cr6.eq) goto loc_8315D8D4;
	// addi r5,r31,72
	ctx.r5.s64 = r31.s64 + 72;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x8316bc78
	sub_8316BC78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315d8d8
	if (cr6.eq) goto loc_8315D8D8;
	// lhz r11,132(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 132);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315d89c
	if (!cr6.eq) goto loc_8315D89C;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r30.u8);
	// sth r30,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r30.u16);
	// b 0x8315d8d0
	goto loc_8315D8D0;
loc_8315D89C:
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - r11.s64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stb r29,36(r31)
	PPC_STORE_U8(r31.u32 + 36, r29.u8);
	// stw r7,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r6,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// sth r29,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r29.u16);
loc_8315D8D0:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8315D8D4:
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
loc_8315D8D8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8315d9a8
	if (!cr6.eq) goto loc_8315D9A8;
	// li r30,-1
	r30.s64 = -1;
loc_8315D8E8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315d8e8
	if (!cr6.eq) goto loc_8315D8E8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83169dc8
	sub_83169DC8(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// ble cr6,0x8315d994
	if (!cr6.gt) goto loc_8315D994;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8315D91C:
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8315d98c
	if (!cr6.lt) goto loc_8315D98C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x8315dee8
	sub_8315DEE8(ctx, base);
	// lbz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8315d980
	if (cr6.eq) goto loc_8315D980;
	// lhz r11,38(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8315d98c
	if (cr6.eq) goto loc_8315D98C;
loc_8315D980:
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r11.u8);
loc_8315D98C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8315d91c
	if (!cr0.eq) goto loc_8315D91C;
loc_8315D994:
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8315d9a8
	if (!cr6.eq) goto loc_8315D9A8;
	// stb r29,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r29.u8);
loc_8315D9A8:
	// lbz r11,49(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 49);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315d9dc
	if (!cr6.eq) goto loc_8315D9DC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a620
	sub_8316A620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315d9dc
	if (!cr6.eq) goto loc_8315D9DC;
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8315D9D0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315d9dc
	if (!cr6.eq) goto loc_8315D9DC;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
loc_8315D9DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8315D9E8"))) PPC_WEAK_FUNC(sub_8315D9E8);
PPC_FUNC_IMPL(__imp__sub_8315D9E8) {
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
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2048
	ctx.r7.s64 = 2048;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83170c60
	sub_83170C60(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x83170c70
	sub_83170C70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315DA40"))) PPC_WEAK_FUNC(sub_8315DA40);
PPC_FUNC_IMPL(__imp__sub_8315DA40) {
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
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315da64
	if (cr6.eq) goto loc_8315DA64;
	// bl 0x831721c8
	sub_831721C8(ctx, base);
loc_8315DA64:
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
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DA90"))) PPC_WEAK_FUNC(sub_8315DA90);
PPC_FUNC_IMPL(__imp__sub_8315DA90) {
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
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315dabc
	if (!cr6.eq) goto loc_8315DABC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8315dae8
	goto loc_8315DAE8;
loc_8315DABC:
	// bl 0x83172310
	sub_83172310(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x8315dae4
	if (cr6.eq) goto loc_8315DAE4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315DAE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315DAE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DB00"))) PPC_WEAK_FUNC(sub_8315DB00);
PPC_FUNC_IMPL(__imp__sub_8315DB00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// b 0x83171658
	sub_83171658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DB08"))) PPC_WEAK_FUNC(sub_8315DB08);
PPC_FUNC_IMPL(__imp__sub_8315DB08) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8316a628
	sub_8316A628(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315db3c
	if (!cr6.eq) goto loc_8315DB3C;
loc_8315DB30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_8315DB3C:
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// bl 0x831699e0
	sub_831699E0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8315db30
	if (cr6.eq) goto loc_8315DB30;
	// bl 0x83168938
	sub_83168938(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315dbe4
	if (cr6.eq) goto loc_8315DBE4;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
loc_8315DB7C:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r8,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, ctx.r8.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lbz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x8315dbd0
	if (!cr6.eq) goto loc_8315DBD0;
	// stb r27,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r27.u8);
	// sth r31,38(r30)
	PPC_STORE_U16(r30.u32 + 38, r31.u16);
loc_8315DBD0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8315db7c
	if (cr6.lt) goto loc_8315DB7C;
loc_8315DBE4:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315dc00
	if (!cr6.eq) goto loc_8315DC00;
	// li r11,0
	r11.s64 = 0;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// stb r27,36(r30)
	PPC_STORE_U8(r30.u32 + 36, r27.u8);
	// sth r11,38(r30)
	PPC_STORE_U16(r30.u32 + 38, r11.u16);
loc_8315DC00:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8316a638
	sub_8316A638(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8315DC28"))) PPC_WEAK_FUNC(sub_8315DC28);
PPC_FUNC_IMPL(__imp__sub_8315DC28) {
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
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x83171be8
	sub_83171BE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8315dc60
	if (!cr6.eq) goto loc_8315DC60;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315DC60:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a508
	sub_8316A508(ctx, base);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x83170c70
	sub_83170C70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8315DC90"))) PPC_WEAK_FUNC(sub_8315DC90);
PPC_FUNC_IMPL(__imp__sub_8315DC90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// b 0x83171648
	sub_83171648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DC98"))) PPC_WEAK_FUNC(sub_8315DC98);
PPC_FUNC_IMPL(__imp__sub_8315DC98) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315de00
	if (cr6.eq) goto loc_8315DE00;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315dcd8
	if (!cr6.eq) goto loc_8315DCD8;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x83171be8
	sub_83171BE8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8315dcd8
	if (!cr6.eq) goto loc_8315DCD8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_8315DCD8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315de00
	if (!cr6.eq) goto loc_8315DE00;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x83170c68
	sub_83170C68(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bne cr6,0x8315dd00
	if (!cr6.eq) goto loc_8315DD00;
	// li r11,3
	r11.s64 = 3;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_8315DD00:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315dd24
	if (!cr6.eq) goto loc_8315DD24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315db08
	sub_8315DB08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8315dd24
	if (!cr6.eq) goto loc_8315DD24;
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
loc_8315DD24:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r30,2
	r30.s64 = 2;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315dd48
	if (!cr6.eq) goto loc_8315DD48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315dc28
	sub_8315DC28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8315dd48
	if (!cr6.eq) goto loc_8315DD48;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_8315DD48:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8315de00
	if (!cr6.eq) goto loc_8315DE00;
	// lwz r11,452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 452);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315ddc4
	if (!cr6.eq) goto loc_8315DDC4;
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r31,196
	ctx.r5.s64 = r31.s64 + 196;
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rotlwi r11,r11,3
	r11.u64 = __builtin_rotateleft32(r11.u32, 3);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r31
	ctx.r6.u64 = r11.u64 + r31.u64;
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// bl 0x83170c60
	sub_83170C60(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8315ddc4
	if (!cr6.eq) goto loc_8315DDC4;
	// lbz r11,36(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315ddb4
	if (cr6.eq) goto loc_8315DDB4;
	// lhz r11,38(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 38);
	// lbz r10,50(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8315ddc0
	if (cr6.eq) goto loc_8315DDC0;
loc_8315DDB4:
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r11.u8);
loc_8315DDC0:
	// stw r30,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r30.u32);
loc_8315DDC4:
	// lbz r11,50(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 50);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8315dddc
	if (!cr6.lt) goto loc_8315DDDC;
	// stw r29,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r29.u32);
	// b 0x8315dde8
	goto loc_8315DDE8;
loc_8315DDDC:
	// stb r29,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r29.u8);
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x83170c88
	sub_83170C88(ctx, base);
loc_8315DDE8:
	// lbz r11,49(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 49);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8315de00
	if (!cr6.eq) goto loc_8315DE00;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// bne cr6,0x8315de00
	if (!cr6.eq) goto loc_8315DE00;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
loc_8315DE00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8315DE08"))) PPC_WEAK_FUNC(sub_8315DE08);
PPC_FUNC_IMPL(__imp__sub_8315DE08) {
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
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
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

__attribute__((alias("__imp__sub_8315DE58"))) PPC_WEAK_FUNC(sub_8315DE58);
PPC_FUNC_IMPL(__imp__sub_8315DE58) {
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
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8315de8c
	if (cr6.eq) goto loc_8315DE8C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8315de8c
	if (cr6.eq) goto loc_8315DE8C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8315decc
	if (!cr6.eq) goto loc_8315DECC;
loc_8315DE8C:
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
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315ded0
	if (cr6.eq) goto loc_8315DED0;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r31,24(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315dec8
	if (cr6.eq) goto loc_8315DEC8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831544c8
	sub_831544C8(ctx, base);
loc_8315DEC8:
	// stw r31,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r31.u32);
loc_8315DECC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8315DED0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DEE8"))) PPC_WEAK_FUNC(sub_8315DEE8);
PPC_FUNC_IMPL(__imp__sub_8315DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315DEF8"))) PPC_WEAK_FUNC(sub_8315DEF8);
PPC_FUNC_IMPL(__imp__sub_8315DEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315DF08"))) PPC_WEAK_FUNC(sub_8315DF08);
PPC_FUNC_IMPL(__imp__sub_8315DF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DF20"))) PPC_WEAK_FUNC(sub_8315DF20);
PPC_FUNC_IMPL(__imp__sub_8315DF20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83154748
	sub_83154748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF28"))) PPC_WEAK_FUNC(sub_8315DF28);
PPC_FUNC_IMPL(__imp__sub_8315DF28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83154758
	sub_83154758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF30"))) PPC_WEAK_FUNC(sub_8315DF30);
PPC_FUNC_IMPL(__imp__sub_8315DF30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83154778
	sub_83154778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF38"))) PPC_WEAK_FUNC(sub_8315DF38);
PPC_FUNC_IMPL(__imp__sub_8315DF38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83154800
	sub_83154800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF40"))) PPC_WEAK_FUNC(sub_8315DF40);
PPC_FUNC_IMPL(__imp__sub_8315DF40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x831547b0
	sub_831547B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF48"))) PPC_WEAK_FUNC(sub_8315DF48);
PPC_FUNC_IMPL(__imp__sub_8315DF48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x831547c8
	sub_831547C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF50"))) PPC_WEAK_FUNC(sub_8315DF50);
PPC_FUNC_IMPL(__imp__sub_8315DF50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x831547e8
	sub_831547E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF58"))) PPC_WEAK_FUNC(sub_8315DF58);
PPC_FUNC_IMPL(__imp__sub_8315DF58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// b 0x83154768
	sub_83154768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF60"))) PPC_WEAK_FUNC(sub_8315DF60);
PPC_FUNC_IMPL(__imp__sub_8315DF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83154838
	sub_83154838(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315DF70"))) PPC_WEAK_FUNC(sub_8315DF70);
PPC_FUNC_IMPL(__imp__sub_8315DF70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DF78"))) PPC_WEAK_FUNC(sub_8315DF78);
PPC_FUNC_IMPL(__imp__sub_8315DF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315df88
	if (cr6.eq) goto loc_8315DF88;
	// b 0x83154848
	sub_83154848(ctx, base);
	return;
loc_8315DF88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315DF90"))) PPC_WEAK_FUNC(sub_8315DF90);
PPC_FUNC_IMPL(__imp__sub_8315DF90) {
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
	// li r29,1
	r29.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315dfd8
	if (cr6.eq) goto loc_8315DFD8;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8315dfc8
	if (cr6.eq) goto loc_8315DFC8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8315dfd8
	if (!cr6.eq) goto loc_8315DFD8;
loc_8315DFC8:
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
	// stw r29,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r29.u32);
	// stb r30,49(r11)
	PPC_STORE_U8(r11.u32 + 49, r30.u8);
	// stb r30,50(r11)
	PPC_STORE_U8(r11.u32 + 50, r30.u8);
loc_8315DFD8:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154e38
	sub_83154E38(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315dff8
	if (!cr6.eq) goto loc_8315DFF8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154ef8
	sub_83154EF8(ctx, base);
loc_8315DFF8:
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315E008"))) PPC_WEAK_FUNC(sub_8315E008);
PPC_FUNC_IMPL(__imp__sub_8315E008) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315e02c
	if (cr6.eq) goto loc_8315E02C;
	// bl 0x83154e70
	sub_83154E70(ctx, base);
loc_8315E02C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E048"))) PPC_WEAK_FUNC(sub_8315E048);
PPC_FUNC_IMPL(__imp__sub_8315E048) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315e06c
	if (cr6.eq) goto loc_8315E06C;
	// bl 0x83154ea8
	sub_83154EA8(ctx, base);
loc_8315E06C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E088"))) PPC_WEAK_FUNC(sub_8315E088);
PPC_FUNC_IMPL(__imp__sub_8315E088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x83154ee0
	sub_83154EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315E098"))) PPC_WEAK_FUNC(sub_8315E098);
PPC_FUNC_IMPL(__imp__sub_8315E098) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E0A0"))) PPC_WEAK_FUNC(sub_8315E0A0);
PPC_FUNC_IMPL(__imp__sub_8315E0A0) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315e0cc
	if (cr6.eq) goto loc_8315E0CC;
	// bl 0x83154ef8
	sub_83154EF8(ctx, base);
loc_8315E0CC:
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E0E8"))) PPC_WEAK_FUNC(sub_8315E0E8);
PPC_FUNC_IMPL(__imp__sub_8315E0E8) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8315e10c
	if (cr6.eq) goto loc_8315E10C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8315e26c
	if (!cr6.eq) goto loc_8315E26C;
loc_8315E10C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8315e12c
	if (cr6.eq) goto loc_8315E12C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8315e12c
	if (cr6.eq) goto loc_8315E12C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8315e1bc
	if (!cr6.eq) goto loc_8315E1BC;
loc_8315E12C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8315E130:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// beq cr6,0x8315e214
	if (cr6.eq) goto loc_8315E214;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154548
	sub_83154548(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x8315e130
	if (cr6.lt) goto loc_8315E130;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x8315e1bc
	if (!cr6.eq) goto loc_8315E1BC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x831546e8
	sub_831546E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315e1bc
	if (!cr6.eq) goto loc_8315E1BC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154708
	sub_83154708(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315e1bc
	if (!cr6.eq) goto loc_8315E1BC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154ea8
	sub_83154EA8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315E1BC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x831546d8
	sub_831546D8(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315e230
	if (!cr6.eq) goto loc_8315E230;
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x8315e26c
	if (!cr6.lt) goto loc_8315E26C;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315e224
	if (cr6.eq) goto loc_8315E224;
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8315e224
	if (cr6.eq) goto loc_8315E224;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8315e26c
	if (!cr6.eq) goto loc_8315E26C;
loc_8315E214:
	// li r11,4
	r11.s64 = 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8315E224:
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8315E230:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8315e264
	if (cr6.eq) goto loc_8315E264;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x8315e26c
	if (!cr6.gt) goto loc_8315E26C;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// bgt cr6,0x8315e26c
	if (cr6.gt) goto loc_8315E26C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8315e26c
	if (!cr6.eq) goto loc_8315E26C;
	// li r11,2
	r11.s64 = 2;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8315E264:
	// li r11,3
	r11.s64 = 3;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8315E26C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315E278"))) PPC_WEAK_FUNC(sub_8315E278);
PPC_FUNC_IMPL(__imp__sub_8315E278) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E280"))) PPC_WEAK_FUNC(sub_8315E280);
PPC_FUNC_IMPL(__imp__sub_8315E280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315e2a0
	if (cr6.eq) goto loc_8315E2A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8315E2A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E2B0"))) PPC_WEAK_FUNC(sub_8315E2B0);
PPC_FUNC_IMPL(__imp__sub_8315E2B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315e2c0
	if (cr6.eq) goto loc_8315E2C0;
	// b 0x831546f8
	sub_831546F8(ctx, base);
	return;
loc_8315E2C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E2C8"))) PPC_WEAK_FUNC(sub_8315E2C8);
PPC_FUNC_IMPL(__imp__sub_8315E2C8) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315e300
	if (cr6.eq) goto loc_8315E300;
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
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
loc_8315E300:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E318"))) PPC_WEAK_FUNC(sub_8315E318);
PPC_FUNC_IMPL(__imp__sub_8315E318) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315e350
	if (!cr6.eq) goto loc_8315E350;
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
loc_8315E350:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315e370
	if (cr6.eq) goto loc_8315E370;
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_8315E370:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E388"))) PPC_WEAK_FUNC(sub_8315E388);
PPC_FUNC_IMPL(__imp__sub_8315E388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E3A0"))) PPC_WEAK_FUNC(sub_8315E3A0);
PPC_FUNC_IMPL(__imp__sub_8315E3A0) {
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
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,27512
	ctx.r6.s64 = r11.s64 + 27512;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315e42c
	if (cr6.eq) goto loc_8315E42C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,27380
	ctx.r9.s64 = ctx.r10.s64 + 27380;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stb r11,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, r11.u8);
	// stb r11,49(r3)
	PPC_STORE_U8(ctx.r3.u32 + 49, r11.u8);
	// stb r11,50(r3)
	PPC_STORE_U8(ctx.r3.u32 + 50, r11.u8);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r30.u32);
loc_8315E414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315E42C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27500
	ctx.r4.s64 = r11.s64 + 27500;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315e414
	goto loc_8315E414;
}

__attribute__((alias("__imp__sub_8315E448"))) PPC_WEAK_FUNC(sub_8315E448);
PPC_FUNC_IMPL(__imp__sub_8315E448) {
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
	// addi r9,r11,27356
	ctx.r9.s64 = r11.s64 + 27356;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315e480
	if (cr6.eq) goto loc_8315E480;
	// li r4,188
	ctx.r4.s64 = 188;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315E480:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E498"))) PPC_WEAK_FUNC(sub_8315E498);
PPC_FUNC_IMPL(__imp__sub_8315E498) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,27580
	ctx.r6.s64 = r11.s64 + 27580;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,456
	ctx.r3.s64 = 456;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315e54c
	if (cr6.eq) goto loc_8315E54C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,27404
	ctx.r10.s64 = r11.s64 + 27404;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// stb r30,49(r31)
	PPC_STORE_U8(r31.u32 + 49, r30.u8);
	// stb r30,50(r31)
	PPC_STORE_U8(r31.u32 + 50, r30.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// bl 0x83172370
	sub_83172370(ctx, base);
	// stw r3,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315e56c
	if (!cr6.eq) goto loc_8315E56C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,27536
	ctx.r4.s64 = r11.s64 + 27536;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8315E54C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27524
	ctx.r4.s64 = r11.s64 + 27524;
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
loc_8315E56C:
	// std r30,184(r31)
	PPC_STORE_U64(r31.u32 + 184, r30.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,196(r31)
	PPC_STORE_U8(r31.u32 + 196, r30.u8);
	// stw r30,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8315E588"))) PPC_WEAK_FUNC(sub_8315E588);
PPC_FUNC_IMPL(__imp__sub_8315E588) {
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
	// addi r9,r11,27356
	ctx.r9.s64 = r11.s64 + 27356;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315e5c0
	if (cr6.eq) goto loc_8315E5C0;
	// li r4,456
	ctx.r4.s64 = 456;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315E5C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E5D8"))) PPC_WEAK_FUNC(sub_8315E5D8);
PPC_FUNC_IMPL(__imp__sub_8315E5D8) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8315e618
	if (cr6.eq) goto loc_8315E618;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8315e618
	if (cr6.eq) goto loc_8315E618;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8315e618
	if (cr6.eq) goto loc_8315E618;
	// bl 0x8315e0e8
	sub_8315E0E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8315E618:
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

__attribute__((alias("__imp__sub_8315E630"))) PPC_WEAK_FUNC(sub_8315E630);
PPC_FUNC_IMPL(__imp__sub_8315E630) {
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
	// addi r9,r11,27428
	ctx.r9.s64 = r11.s64 + 27428;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315e668
	if (cr6.eq) goto loc_8315E668;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315E668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E680"))) PPC_WEAK_FUNC(sub_8315E680);
PPC_FUNC_IMPL(__imp__sub_8315E680) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x8316a2e8
	sub_8316A2E8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315e6e8
	if (!cr6.eq) goto loc_8315E6E8;
loc_8315E6C8:
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
	// b 0x831b0b70
	return;
loc_8315E6E8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r30,44(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r27,16(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83155158
	sub_83155158(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315e72c
	if (!cr6.eq) goto loc_8315E72C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831552f0
	sub_831552F0(ctx, base);
loc_8315E72C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x8315e6c8
	if (cr6.eq) goto loc_8315E6C8;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83154730
	sub_83154730(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r31,48(r11)
	PPC_STORE_U32(r11.u32 + 48, r31.u32);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154818
	sub_83154818(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154850
	sub_83154850(ctx, base);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154858
	sub_83154858(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8315E780"))) PPC_WEAK_FUNC(sub_8315E780);
PPC_FUNC_IMPL(__imp__sub_8315E780) {
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
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8315e7b8
	if (cr6.eq) goto loc_8315E7B8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x83155230
	sub_83155230(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
loc_8315E7B8:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8315e7cc
	if (cr6.eq) goto loc_8315E7CC;
	// bl 0x8316a4e8
	sub_8316A4E8(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_8315E7CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E7E8"))) PPC_WEAK_FUNC(sub_8315E7E8);
PPC_FUNC_IMPL(__imp__sub_8315E7E8) {
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
	// addi r9,r11,27428
	ctx.r9.s64 = r11.s64 + 27428;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315e820
	if (cr6.eq) goto loc_8315E820;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315E820:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E838"))) PPC_WEAK_FUNC(sub_8315E838);
PPC_FUNC_IMPL(__imp__sub_8315E838) {
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
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8315e3a0
	sub_8315E3A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315e878
	if (!cr6.eq) goto loc_8315E878;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315E878:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E8A0"))) PPC_WEAK_FUNC(sub_8315E8A0);
PPC_FUNC_IMPL(__imp__sub_8315E8A0) {
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
	// addi r9,r11,27428
	ctx.r9.s64 = r11.s64 + 27428;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8315e8d8
	if (cr6.eq) goto loc_8315E8D8;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315E8D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315E8F0"))) PPC_WEAK_FUNC(sub_8315E8F0);
PPC_FUNC_IMPL(__imp__sub_8315E8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8315e498
	sub_8315E498(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8315e99c
	if (cr6.eq) goto loc_8315E99C;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8315E92C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8315e92c
	if (!cr6.eq) goto loc_8315E92C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_8315E950:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8315e950
	if (!cr6.eq) goto loc_8315E950;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpwi cr6,r8,255
	cr6.compare<int32_t>(ctx.r8.s32, 255, xer);
	// ble cr6,0x8315e9a4
	if (!cr6.gt) goto loc_8315E9A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,27596
	ctx.r4.s64 = r11.s64 + 27596;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8315E99C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315ea1c
	goto loc_8315EA1C;
loc_8315E9A4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
loc_8315E9AC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stbx r8,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x8315e9ac
	if (!cr6.eq) goto loc_8315E9AC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8315E9C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8315e9c4
	if (!cr6.eq) goto loc_8315E9C4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8315E9D8:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x8315e9d8
	if (!cr6.eq) goto loc_8315E9D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8315d9e8
	sub_8315D9E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8315EA1C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EA38"))) PPC_WEAK_FUNC(sub_8315EA38);
PPC_FUNC_IMPL(__imp__sub_8315EA38) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r10,27660
	ctx.r6.s64 = ctx.r10.s64 + 27660;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r3,56
	ctx.r3.s64 = 56;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315eb24
	if (cr6.eq) goto loc_8315EB24;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,27428
	ctx.r9.s64 = ctx.r10.s64 + 27428;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r8,27452
	ctx.r6.s64 = ctx.r8.s64 + 27452;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// bl 0x8315e680
	sub_8315E680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315eb40
	if (cr6.eq) goto loc_8315EB40;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154828
	sub_83154828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315EB0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315EB24:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27648
	ctx.r4.s64 = r11.s64 + 27648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315eb0c
	goto loc_8315EB0C;
loc_8315EB40:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315eb0c
	goto loc_8315EB0C;
}

__attribute__((alias("__imp__sub_8315EB60"))) PPC_WEAK_FUNC(sub_8315EB60);
PPC_FUNC_IMPL(__imp__sub_8315EB60) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r10,27684
	ctx.r6.s64 = ctx.r10.s64 + 27684;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315ec5c
	if (cr6.eq) goto loc_8315EC5C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,27428
	ctx.r9.s64 = ctx.r10.s64 + 27428;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r6,r8,27476
	ctx.r6.s64 = ctx.r8.s64 + 27476;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r9,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// bl 0x8315e680
	sub_8315E680(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315ec78
	if (cr6.eq) goto loc_8315EC78;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x83154828
	sub_83154828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8315EC44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8315EC5C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,27672
	ctx.r4.s64 = r11.s64 + 27672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315ec44
	goto loc_8315EC44;
loc_8315EC78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8315ec44
	goto loc_8315EC44;
}

__attribute__((alias("__imp__sub_8315EC98"))) PPC_WEAK_FUNC(sub_8315EC98);
PPC_FUNC_IMPL(__imp__sub_8315EC98) {
	PPC_FUNC_PROLOGUE();
	// b 0x831b4778
	sub_831B4778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315ECA0"))) PPC_WEAK_FUNC(sub_8315ECA0);
PPC_FUNC_IMPL(__imp__sub_8315ECA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315ECC0"))) PPC_WEAK_FUNC(sub_8315ECC0);
PPC_FUNC_IMPL(__imp__sub_8315ECC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ECC8"))) PPC_WEAK_FUNC(sub_8315ECC8);
PPC_FUNC_IMPL(__imp__sub_8315ECC8) {
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
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// lwz r11,-30600(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30600);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8315ed34
	if (!cr6.eq) goto loc_8315ED34;
	// lis r7,-31941
	ctx.r7.s64 = -2093285376;
	// lis r10,-31978
	ctx.r10.s64 = -2095710208;
	// addi r31,r7,-30608
	r31.s64 = ctx.r7.s64 + -30608;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r10,r10,-4968
	ctx.r10.s64 = ctx.r10.s64 + -4968;
	// li r9,32767
	ctx.r9.s64 = 32767;
	// stw r11,-30600(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30600, r11.u32);
	// stw r10,-30608(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30608, ctx.r10.u32);
	// lis r6,-31963
	ctx.r6.s64 = -2094727168;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r3,r6,-20296
	ctx.r3.s64 = ctx.r6.s64 + -20296;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
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
loc_8315ED34:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-30608
	ctx.r3.s64 = r11.s64 + -30608;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ED50"))) PPC_WEAK_FUNC(sub_8315ED50);
PPC_FUNC_IMPL(__imp__sub_8315ED50) {
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
	// lis r9,-31941
	ctx.r9.s64 = -2093285376;
	// lwz r11,-30588(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30588);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8315edb4
	if (!cr6.eq) goto loc_8315EDB4;
	// lis r8,-31941
	ctx.r8.s64 = -2093285376;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r31,r8,-30596
	r31.s64 = ctx.r8.s64 + -30596;
	// stw r11,-30588(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30588, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// lis r7,-31963
	ctx.r7.s64 = -2094727168;
	// stw r10,-30596(r8)
	PPC_STORE_U32(ctx.r8.u32 + -30596, ctx.r10.u32);
	// addi r3,r7,-20288
	ctx.r3.s64 = ctx.r7.s64 + -20288;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
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
loc_8315EDB4:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-30596
	ctx.r3.s64 = r11.s64 + -30596;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315EDD0"))) PPC_WEAK_FUNC(sub_8315EDD0);
PPC_FUNC_IMPL(__imp__sub_8315EDD0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83155508
	sub_83155508(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8315EE38"))) PPC_WEAK_FUNC(sub_8315EE38);
PPC_FUNC_IMPL(__imp__sub_8315EE38) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x831555d8
	sub_831555D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8315EEA8"))) PPC_WEAK_FUNC(sub_8315EEA8);
PPC_FUNC_IMPL(__imp__sub_8315EEA8) {
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
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
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
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
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

__attribute__((alias("__imp__sub_8315EEF8"))) PPC_WEAK_FUNC(sub_8315EEF8);
PPC_FUNC_IMPL(__imp__sub_8315EEF8) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r31,1032
	ctx.r10.s64 = r31.s64 + 1032;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfs f0,2244(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1016(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1016, temp.u32);
	// stfs f0,1020(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1020, temp.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfs f12,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,1024(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1024, temp.u32);
	// stfs f0,1028(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1028, temp.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315EF48:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315ef48
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315EF48;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,1148
	ctx.r10.s64 = r31.s64 + 1148;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r8,208(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// stw r8,1724(r31)
	PPC_STORE_U32(r31.u32 + 1724, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,212(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 212);
	// stw r6,1728(r31)
	PPC_STORE_U32(r31.u32 + 1728, ctx.r6.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315EF88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315ef88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315EF88;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,1180
	ctx.r10.s64 = r31.s64 + 1180;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,176
	r11.s64 = r11.s64 + 176;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315EFB0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315efb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315EFB0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,1732
	ctx.r10.s64 = r31.s64 + 1732;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r8,280(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// stw r8,1796(r31)
	PPC_STORE_U32(r31.u32 + 1796, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,216
	r11.s64 = r11.s64 + 216;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315EFE4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315efe4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315EFE4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,1764
	ctx.r10.s64 = r31.s64 + 1764;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,248
	r11.s64 = r11.s64 + 248;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315F00C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315f00c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315F00C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,1056
	ctx.r10.s64 = r31.s64 + 1056;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r8,284(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 284);
	// stw r8,1800(r31)
	PPC_STORE_U32(r31.u32 + 1800, ctx.r8.u32);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,288(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 288);
	// stw r6,1804(r31)
	PPC_STORE_U32(r31.u32 + 1804, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,292(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 292);
	// stw r4,1808(r31)
	PPC_STORE_U32(r31.u32 + 1808, ctx.r4.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,296(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// stw r11,1812(r31)
	PPC_STORE_U32(r31.u32 + 1812, r11.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,300(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 300);
	// stw r7,1816(r31)
	PPC_STORE_U32(r31.u32 + 1816, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,304(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 304);
	// stw r5,1820(r31)
	PPC_STORE_U32(r31.u32 + 1820, ctx.r5.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,308(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 308);
	// stw r3,1824(r31)
	PPC_STORE_U32(r31.u32 + 1824, ctx.r3.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,312(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 312);
	// stw r8,1828(r31)
	PPC_STORE_U32(r31.u32 + 1828, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,56
	r11.s64 = r11.s64 + 56;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315F094:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315f094
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315F094;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,1088
	ctx.r10.s64 = r31.s64 + 1088;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315F0BC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315f0bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315F0BC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r31,1120
	ctx.r10.s64 = r31.s64 + 1120;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,120
	r11.s64 = r11.s64 + 120;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315F0E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315f0e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315F0E4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x8314c538
	sub_8314C538(ctx, base);
	// stw r3,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, ctx.r3.u32);
	// addi r10,r31,1832
	ctx.r10.s64 = r31.s64 + 1832;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r11,316
	r11.s64 = r11.s64 + 316;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315F120:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315f120
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315F120;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83157fa0
	sub_83157FA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1892(r31)
	PPC_STORE_U32(r31.u32 + 1892, ctx.r3.u32);
	// bne cr6,0x8315f17c
	if (!cr6.eq) goto loc_8315F17C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,27916
	ctx.r4.s64 = r11.s64 + 27916;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b78
	return;
loc_8315F17C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83156c68
	sub_83156C68(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// ble cr6,0x8315f1cc
	if (!cr6.gt) goto loc_8315F1CC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r11,27856
	ctx.r4.s64 = r11.s64 + 27856;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b78
	return;
loc_8315F1CC:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8315f240
	if (cr6.eq) goto loc_8315F240;
loc_8315F1D8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x83156cf0
	sub_83156CF0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83156ba0
	sub_83156BA0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8314c498
	sub_8314C498(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8315f254
	if (cr6.eq) goto loc_8315F254;
	// lwz r3,1892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1892);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315f288
	if (cr6.eq) goto loc_8315F288;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x8315f1d8
	if (cr6.lt) goto loc_8315F1D8;
loc_8315F240:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1896(r31)
	PPC_STORE_U32(r31.u32 + 1896, r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b78
	return;
loc_8315F254:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27824
	ctx.r4.s64 = r11.s64 + 27824;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b78
	return;
loc_8315F288:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27780
	ctx.r4.s64 = r11.s64 + 27780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8315F2C0"))) PPC_WEAK_FUNC(sub_8315F2C0);
PPC_FUNC_IMPL(__imp__sub_8315F2C0) {
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
	// li r5,936
	ctx.r5.s64 = 936;
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,1892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1892);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x8315f364
	if (!cr6.eq) goto loc_8315F364;
	// lwz r3,944(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 944);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8315f348
	if (!cr6.eq) goto loc_8315F348;
loc_8315F340:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8315f368
	goto loc_8315F368;
loc_8315F348:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,924(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8315f340
	if (cr6.eq) goto loc_8315F340;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8315f368
	goto loc_8315F368;
loc_8315F364:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8315F368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F380"))) PPC_WEAK_FUNC(sub_8315F380);
PPC_FUNC_IMPL(__imp__sub_8315F380) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r30,1888(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1888);
	// lwz r11,904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 904);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831586c8
	sub_831586C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315F3D0"))) PPC_WEAK_FUNC(sub_8315F3D0);
PPC_FUNC_IMPL(__imp__sub_8315F3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,1892(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1892);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315F3E8"))) PPC_WEAK_FUNC(sub_8315F3E8);
PPC_FUNC_IMPL(__imp__sub_8315F3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,1892(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1892);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315F400"))) PPC_WEAK_FUNC(sub_8315F400);
PPC_FUNC_IMPL(__imp__sub_8315F400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,1892(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1892);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8315F418"))) PPC_WEAK_FUNC(sub_8315F418);
PPC_FUNC_IMPL(__imp__sub_8315F418) {
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
loc_8315F428:
	// lwz r29,944(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 944);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// lwz r11,1900(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1900);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315f494
	if (cr6.eq) goto loc_8315F494;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315f494
	if (cr6.eq) goto loc_8315F494;
loc_8315F458:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8315f470
	if (!cr6.eq) goto loc_8315F470;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x8315f488
	if (cr6.eq) goto loc_8315F488;
loc_8315F470:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315f494
	if (cr6.eq) goto loc_8315F494;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8315f458
	if (!cr0.eq) goto loc_8315F458;
	// b 0x8315f494
	goto loc_8315F494;
loc_8315F488:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_8315F494:
	// lwz r11,1896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1896);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315f4a8
	if (cr6.eq) goto loc_8315F4A8;
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x8315f428
	goto loc_8315F428;
loc_8315F4A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315F4B0"))) PPC_WEAK_FUNC(sub_8315F4B0);
PPC_FUNC_IMPL(__imp__sub_8315F4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r24{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8315eef8
	sub_8315EEF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8315f4f0
	if (!cr6.eq) goto loc_8315F4F0;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
loc_8315F4F0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stfs f13,1008(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 1008, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stfs f0,1012(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1012, temp.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r30.u8);
	// stb r30,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, r30.u8);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// bl 0x8314c280
	sub_8314C280(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8315f55c
	if (!cr6.eq) goto loc_8315F55C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,28148
	ctx.r4.s64 = ctx.r10.s64 + 28148;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x8315f6f4
	goto loc_8315F6F4;
loc_8315F55C:
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// beq cr6,0x8315f5a4
	if (cr6.eq) goto loc_8315F5A4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8315f5a4
	if (!cr6.eq) goto loc_8315F5A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28088
	ctx.r4.s64 = r11.s64 + 28088;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
loc_8315F5A4:
	// lbz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315f6e8
	if (cr6.eq) goto loc_8315F6E8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x8315f6e8
	if (cr6.gt) goto loc_8315F6E8;
	// lbz r7,117(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 117);
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x8315f5e0
	if (!cr6.eq) goto loc_8315F5E0;
	// stw r11,976(r31)
	PPC_STORE_U32(r31.u32 + 976, r11.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,996(r31)
	PPC_STORE_U32(r31.u32 + 996, ctx.r7.u32);
	// b 0x8315f5f8
	goto loc_8315F5F8;
loc_8315F5E0:
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r30,976(r31)
	PPC_STORE_U32(r31.u32 + 976, r30.u32);
	// std r30,984(r31)
	PPC_STORE_U64(r31.u32 + 984, r30.u64);
	// stw r8,996(r31)
	PPC_STORE_U32(r31.u32 + 996, ctx.r8.u32);
	// stw r7,992(r31)
	PPC_STORE_U32(r31.u32 + 992, ctx.r7.u32);
loc_8315F5F8:
	// clrldi r8,r5,32
	ctx.r8.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stb r10,1000(r31)
	PPC_STORE_U8(r31.u32 + 1000, ctx.r10.u8);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,1004(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 1004, temp.u32);
	// bgt cr6,0x8315f6b8
	if (cr6.gt) goto loc_8315F6B8;
	// lis r12,-31978
	r12.s64 = -2095710208;
	// addi r12,r12,-2508
	r12.s64 = r12.s64 + -2508;
	// rlwinm r0,r9,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_8315F64C;
	case 1:
		goto loc_8315F64C;
	case 2:
		goto loc_8315F6A0;
	case 3:
		goto loc_8315F680;
	case 4:
		goto loc_8315F69C;
	case 5:
		goto loc_8315F664;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-2484(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2484);
	// lwz r24,-2484(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2484);
	// lwz r24,-2400(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2400);
	// lwz r24,-2432(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2432);
	// lwz r24,-2404(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2404);
	// lwz r24,-2460(r21)
	r24.u64 = PPC_LOAD_U32(r21.u32 + -2460);
loc_8315F64C:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,980(r31)
	PPC_STORE_U32(r31.u32 + 980, r30.u32);
	// stw r11,1912(r31)
	PPC_STORE_U32(r31.u32 + 1912, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
loc_8315F664:
	// li r11,2
	r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,980(r31)
	PPC_STORE_U32(r31.u32 + 980, r11.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,1912(r31)
	PPC_STORE_U32(r31.u32 + 1912, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
loc_8315F680:
	// li r11,3
	r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,980(r31)
	PPC_STORE_U32(r31.u32 + 980, r11.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,1912(r31)
	PPC_STORE_U32(r31.u32 + 1912, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
loc_8315F69C:
	// li r11,4
	r11.s64 = 4;
loc_8315F6A0:
	// stw r11,980(r31)
	PPC_STORE_U32(r31.u32 + 980, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,1912(r31)
	PPC_STORE_U32(r31.u32 + 1912, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
loc_8315F6B8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28024
	ctx.r4.s64 = r11.s64 + 28024;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
loc_8315F6E8:
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,27960
	ctx.r4.s64 = ctx.r10.s64 + 27960;
loc_8315F6F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315F720"))) PPC_WEAK_FUNC(sub_8315F720);
PPC_FUNC_IMPL(__imp__sub_8315F720) {
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
	// lwz r30,904(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 904);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8315f2c0
	sub_8315F2C0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8315f804
	if (cr6.lt) goto loc_8315F804;
	// beq cr6,0x8315f78c
	if (cr6.eq) goto loc_8315F78C;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x8315f820
	if (!cr6.lt) goto loc_8315F820;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,1888(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1888);
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x83158630
	sub_83158630(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,1888(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 1888);
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x831587d0
	sub_831587D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8315F78C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,1888(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1888);
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x831588d8
	sub_831588D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8315f7d4
	if (cr6.eq) goto loc_8315F7D4;
	// lwz r31,1888(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 1888);
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x83158630
	sub_83158630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8315F7D4:
	// lwz r30,1888(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1888);
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83158f60
	sub_83158F60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8315f820
	if (cr6.eq) goto loc_8315F820;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315f418
	sub_8315F418(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8315F804:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,1888(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1888);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83158630
	sub_83158630(ctx, base);
loc_8315F820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8315F830"))) PPC_WEAK_FUNC(sub_8315F830);
PPC_FUNC_IMPL(__imp__sub_8315F830) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// lfs f0,1012(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1012);
	f0.f64 = double(temp.f32);
	// lfs f13,1008(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1008);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,76(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,72(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fmadds f9,f13,f12,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f9,72(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r30.u32 + 72, temp.u32);
	// stfs f10,76(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 76, temp.u32);
	// lfs f8,1016(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1016);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1020(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1020);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f3,f8,f5,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f7.f64));
	// stfs f3,80(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r30.u32 + 80, temp.u32);
	// stfs f4,84(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r30.u32 + 84, temp.u32);
	// lfs f2,1024(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1024);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,1028(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1028);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmadds f11,f2,f13,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f11,88(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stfs f12,92(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 92, temp.u32);
	// lwz r11,952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 952);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315f8e4
	if (!cr6.eq) goto loc_8315F8E4;
	// ld r10,976(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 976);
	// or r9,r11,r7
	ctx.r9.u64 = r11.u64 | ctx.r7.u64;
	// addi r8,r30,976
	ctx.r8.s64 = r30.s64 + 976;
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// ld r6,984(r30)
	ctx.r6.u64 = PPC_LOAD_U64(r30.u32 + 984);
	// std r6,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r6.u64);
	// ld r5,992(r30)
	ctx.r5.u64 = PPC_LOAD_U64(r30.u32 + 992);
	// std r5,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r5.u64);
	// ld r4,1000(r30)
	ctx.r4.u64 = PPC_LOAD_U64(r30.u32 + 1000);
	// std r4,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r4.u64);
	// stw r9,912(r31)
	PPC_STORE_U32(r31.u32 + 912, ctx.r9.u32);
loc_8315F8E4:
	// lwz r8,912(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 912);
	// rlwinm r11,r8,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8315f920
	if (!cr6.eq) goto loc_8315F920;
	// addi r11,r30,1032
	r11.s64 = r30.s64 + 1032;
	// addi r10,r31,56
	ctx.r10.s64 = r31.s64 + 56;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8315F904:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8315f904
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8315F904;
	// oris r11,r8,16384
	r11.u64 = ctx.r8.u64 | 1073741824;
	// stw r11,912(r31)
	PPC_STORE_U32(r31.u32 + 912, r11.u32);
loc_8315F920:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 120);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,160(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// li r29,1
	r29.s64 = 1;
	// lfs f13,1092(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1092);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(f0.f64 * ctx.f11.f64));
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f9,120(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// fmadds f10,f13,f0,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfs f10,116(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f6,124(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,168(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f3,128(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f7,1100(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f5,f0,f7
	ctx.f5.f64 = double(float(f0.f64 - ctx.f7.f64));
	// fsubs f4,f0,f6
	ctx.f4.f64 = double(float(f0.f64 - ctx.f6.f64));
	// fmuls f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f1,128(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// fmadds f2,f5,f3,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fsubs f0,f0,f2
	f0.f64 = double(float(f0.f64 - ctx.f2.f64));
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lwz r10,916(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 916);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315f990
	if (!cr6.eq) goto loc_8315F990;
	// lwz r11,1120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1120);
	// stw r29,916(r31)
	PPC_STORE_U32(r31.u32 + 916, r29.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_8315F990:
	// lwz r11,924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315f9b0
	if (!cr6.eq) goto loc_8315F9B0;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// lfs f0,1132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1132);
	f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stw r11,924(r31)
	PPC_STORE_U32(r31.u32 + 924, r11.u32);
loc_8315F9B0:
	// lwz r11,924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315f9d0
	if (!cr6.eq) goto loc_8315F9D0;
	// lbz r10,1136(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 1136);
	// oris r9,r11,16384
	ctx.r9.u64 = r11.u64 | 1073741824;
	// stw r9,924(r31)
	PPC_STORE_U32(r31.u32 + 924, ctx.r9.u32);
	// stb r10,160(r31)
	PPC_STORE_U8(r31.u32 + 160, ctx.r10.u8);
loc_8315F9D0:
	// lwz r11,912(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 912);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315f9f0
	if (!cr6.eq) goto loc_8315F9F0;
	// lwz r10,1144(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1144);
	// oris r9,r11,8192
	ctx.r9.u64 = r11.u64 | 536870912;
	// stw r9,912(r31)
	PPC_STORE_U32(r31.u32 + 912, ctx.r9.u32);
	// stw r10,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r10.u32);
loc_8315F9F0:
	// addi r5,r30,1180
	ctx.r5.s64 = r30.s64 + 1180;
	// addi r4,r30,1148
	ctx.r4.s64 = r30.s64 + 1148;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83156880
	sub_83156880(ctx, base);
	// lwz r11,924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315fa20
	if (!cr6.eq) goto loc_8315FA20;
	// lwz r10,1724(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1724);
	// oris r9,r11,2048
	ctx.r9.u64 = r11.u64 | 134217728;
	// stw r9,924(r31)
	PPC_STORE_U32(r31.u32 + 924, ctx.r9.u32);
	// stw r10,748(r31)
	PPC_STORE_U32(r31.u32 + 748, ctx.r10.u32);
loc_8315FA20:
	// lwz r11,924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315fa40
	if (!cr6.eq) goto loc_8315FA40;
	// lwz r10,1728(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1728);
	// oris r9,r11,1024
	ctx.r9.u64 = r11.u64 | 67108864;
	// stw r9,924(r31)
	PPC_STORE_U32(r31.u32 + 924, ctx.r9.u32);
	// stw r10,752(r31)
	PPC_STORE_U32(r31.u32 + 752, ctx.r10.u32);
loc_8315FA40:
	// lwz r11,924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 924);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8315fa60
	if (!cr6.eq) goto loc_8315FA60;
	// lwz r10,1796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1796);
	// oris r9,r11,512
	ctx.r9.u64 = r11.u64 | 33554432;
	// stw r9,924(r31)
	PPC_STORE_U32(r31.u32 + 924, ctx.r9.u32);
	// stw r10,820(r31)
	PPC_STORE_U32(r31.u32 + 820, ctx.r10.u32);
loc_8315FA60:
	// lfs f0,1764(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1764);
	f0.f64 = double(temp.f32);
	// lfs f13,788(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 788);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1732(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1732);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,756(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 756);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,756(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 756, temp.u32);
	// stfs f11,788(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 788, temp.u32);
	// lbz r11,928(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fa98
	if (!cr6.eq) goto loc_8315FA98;
	// lwz r11,1800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1800);
	// stw r11,824(r31)
	PPC_STORE_U32(r31.u32 + 824, r11.u32);
	// stb r29,928(r31)
	PPC_STORE_U8(r31.u32 + 928, r29.u8);
loc_8315FA98:
	// lfs f0,1768(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1768);
	f0.f64 = double(temp.f32);
	// lfs f13,792(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 792);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1736(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1736);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,760(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 760);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,760(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 760, temp.u32);
	// stfs f11,792(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 792, temp.u32);
	// lbz r11,929(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 929);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fad0
	if (!cr6.eq) goto loc_8315FAD0;
	// lwz r11,1804(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1804);
	// stw r11,828(r31)
	PPC_STORE_U32(r31.u32 + 828, r11.u32);
	// stb r29,929(r31)
	PPC_STORE_U8(r31.u32 + 929, r29.u8);
loc_8315FAD0:
	// lfs f0,796(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 796);
	f0.f64 = double(temp.f32);
	// lfs f13,1740(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1740);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1772(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1772);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,764(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 764);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmadds f9,f13,f0,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// stfs f9,764(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 764, temp.u32);
	// stfs f10,796(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 796, temp.u32);
	// lbz r11,930(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 930);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fb08
	if (!cr6.eq) goto loc_8315FB08;
	// lwz r11,1808(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1808);
	// stw r11,832(r31)
	PPC_STORE_U32(r31.u32 + 832, r11.u32);
	// stb r29,930(r31)
	PPC_STORE_U8(r31.u32 + 930, r29.u8);
loc_8315FB08:
	// lfs f0,1776(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1776);
	f0.f64 = double(temp.f32);
	// lfs f13,800(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1744(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1744);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,768(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 768);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,768(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 768, temp.u32);
	// stfs f11,800(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 800, temp.u32);
	// lbz r11,931(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 931);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fb40
	if (!cr6.eq) goto loc_8315FB40;
	// lwz r11,1812(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1812);
	// stw r11,836(r31)
	PPC_STORE_U32(r31.u32 + 836, r11.u32);
	// stb r29,931(r31)
	PPC_STORE_U8(r31.u32 + 931, r29.u8);
loc_8315FB40:
	// lfs f0,1780(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1780);
	f0.f64 = double(temp.f32);
	// lfs f13,804(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1748(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1748);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,772(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 772);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,772(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 772, temp.u32);
	// stfs f11,804(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 804, temp.u32);
	// lbz r11,932(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 932);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fb78
	if (!cr6.eq) goto loc_8315FB78;
	// lwz r11,1816(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1816);
	// stw r11,840(r31)
	PPC_STORE_U32(r31.u32 + 840, r11.u32);
	// stb r29,932(r31)
	PPC_STORE_U8(r31.u32 + 932, r29.u8);
loc_8315FB78:
	// lfs f0,1784(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1784);
	f0.f64 = double(temp.f32);
	// lfs f13,808(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 808);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1752(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1752);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,776(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 776);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,776(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 776, temp.u32);
	// stfs f11,808(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 808, temp.u32);
	// lbz r11,933(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 933);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fbb0
	if (!cr6.eq) goto loc_8315FBB0;
	// lwz r11,1820(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1820);
	// stw r11,844(r31)
	PPC_STORE_U32(r31.u32 + 844, r11.u32);
	// stb r29,933(r31)
	PPC_STORE_U8(r31.u32 + 933, r29.u8);
loc_8315FBB0:
	// lfs f0,1788(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1788);
	f0.f64 = double(temp.f32);
	// lfs f13,812(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 812);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1756(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1756);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,780(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 780);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,780(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 780, temp.u32);
	// stfs f11,812(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 812, temp.u32);
	// lbz r11,934(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 934);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fbe8
	if (!cr6.eq) goto loc_8315FBE8;
	// lwz r11,1824(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1824);
	// stw r11,848(r31)
	PPC_STORE_U32(r31.u32 + 848, r11.u32);
	// stb r29,934(r31)
	PPC_STORE_U8(r31.u32 + 934, r29.u8);
loc_8315FBE8:
	// lfs f0,1792(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1792);
	f0.f64 = double(temp.f32);
	// lfs f13,816(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1760(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1760);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,784(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 784);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f9,784(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 784, temp.u32);
	// stfs f11,816(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 816, temp.u32);
	// lbz r11,935(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 935);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8315fc20
	if (!cr6.eq) goto loc_8315FC20;
	// lwz r11,1828(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1828);
	// stw r11,852(r31)
	PPC_STORE_U32(r31.u32 + 852, r11.u32);
	// stb r29,935(r31)
	PPC_STORE_U8(r31.u32 + 935, r29.u8);
loc_8315FC20:
	// lfs f0,868(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 868);
	f0.f64 = double(temp.f32);
	// lfs f13,864(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 864);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1844(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1844);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,1840(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1840);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmadds f9,f11,f0,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// stfs f9,864(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 864, temp.u32);
	// stfs f10,868(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 868, temp.u32);
	// lfs f7,872(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 872);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1848(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1848);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,876(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 876);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,1852(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1852);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f8,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmuls f3,f8,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f4,872(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 872, temp.u32);
	// stfs f3,876(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 876, temp.u32);
	// lfs f2,856(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 856);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,1832(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1832);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,860(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 860);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f1,f13,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// lfs f0,1836(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 1836);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f11,856(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 856, temp.u32);
	// stfs f12,860(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 860, temp.u32);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r10,1128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1128);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// lwz r10,1124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1124);
	// stw r10,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// stw r29,920(r31)
	PPC_STORE_U32(r31.u32 + 920, r29.u32);
	// lwz r8,1140(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 1140);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r9,936(r30)
	PPC_STORE_U32(r30.u32 + 936, ctx.r9.u32);
	// stw r8,204(r30)
	PPC_STORE_U32(r30.u32 + 204, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315FCB8"))) PPC_WEAK_FUNC(sub_8315FCB8);
PPC_FUNC_IMPL(__imp__sub_8315FCB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1888);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FCD0"))) PPC_WEAK_FUNC(sub_8315FCD0);
PPC_FUNC_IMPL(__imp__sub_8315FCD0) {
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
	// lwz r11,1912(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1912);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8315fd64
	if (cr6.lt) goto loc_8315FD64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x8315fda8
	if (!cr6.lt) goto loc_8315FDA8;
	// lwz r11,1920(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bne cr6,0x8315fd10
	if (!cr6.eq) goto loc_8315FD10;
	// li r11,0
	r11.s64 = 0;
loc_8315FD10:
	// lhz r10,1928(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 1928);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8315fd48
	if (!cr6.gt) goto loc_8315FD48;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8315FD24:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// bne cr6,0x8315fd38
	if (!cr6.eq) goto loc_8315FD38;
	// li r11,0
	r11.s64 = 0;
loc_8315FD38:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8315fd24
	if (cr6.lt) goto loc_8315FD24;
loc_8315FD48:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8315fda8
	goto loc_8315FDA8;
loc_8315FD64:
	// lwz r11,1920(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315fda8
	if (cr6.eq) goto loc_8315FDA8;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315fda8
	if (cr6.eq) goto loc_8315FDA8;
loc_8315FD7C:
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315fda8
	if (cr6.eq) goto loc_8315FDA8;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8315fd7c
	if (!cr0.eq) goto loc_8315FD7C;
loc_8315FDA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FDC0"))) PPC_WEAK_FUNC(sub_8315FDC0);
PPC_FUNC_IMPL(__imp__sub_8315FDC0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,1892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1892);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1920);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315fe3c
	if (cr6.eq) goto loc_8315FE3C;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315fe3c
	if (cr6.eq) goto loc_8315FE3C;
loc_8315FE04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8315fe28
	if (!cr6.eq) goto loc_8315FE28;
	// li r30,1
	r30.s64 = 1;
loc_8315FE28:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315fe3c
	if (cr6.eq) goto loc_8315FE3C;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8315fe04
	if (!cr0.eq) goto loc_8315FE04;
loc_8315FE3C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8315FE48"))) PPC_WEAK_FUNC(sub_8315FE48);
PPC_FUNC_IMPL(__imp__sub_8315FE48) {
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
	// lwz r3,1892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1892);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315fed0
	if (!cr6.eq) goto loc_8315FED0;
	// lwz r11,1920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315fecc
	if (cr6.eq) goto loc_8315FECC;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8315fecc
	if (cr6.eq) goto loc_8315FECC;
loc_8315FE98:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8315fed0
	if (!cr6.eq) goto loc_8315FED0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8315fecc
	if (cr6.eq) goto loc_8315FECC;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8315fe98
	if (!cr0.eq) goto loc_8315FE98;
loc_8315FECC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8315FED0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FEE8"))) PPC_WEAK_FUNC(sub_8315FEE8);
PPC_FUNC_IMPL(__imp__sub_8315FEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,1012(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1012);
	f0.f64 = double(temp.f32);
	// addi r11,r3,40
	r11.s64 = ctx.r3.s64 + 40;
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1008(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1008);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f13,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f11,76(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f8,1016(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1016);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,1020(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1020);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f3,f8,f5,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f5.f64 + ctx.f7.f64));
	// stfs f3,80(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f4,84(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f2,1024(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1024);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,1028(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	f0.f64 = double(temp.f32);
	// lfs f13,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmadds f11,f2,f13,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f11,88(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f12,92(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f10,1840(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,1844(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1844);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,908(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 908);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f5,f10,f7,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f9.f64));
	// stfs f5,904(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 904, temp.u32);
	// stfs f6,908(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 908, temp.u32);
	// lfs f4,1848(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1852(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,916(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 916);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmadds f13,f4,f1,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f3.f64));
	// stfs f13,912(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 912, temp.u32);
	// stfs f0,916(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 916, temp.u32);
	// lfs f12,1832(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,896(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1836(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,900(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f7,f12,f9,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f7,896(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 896, temp.u32);
	// stfs f8,900(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 900, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FFB0"))) PPC_WEAK_FUNC(sub_8315FFB0);
PPC_FUNC_IMPL(__imp__sub_8315FFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// sth r11,1928(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1928, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315FFC0"))) PPC_WEAK_FUNC(sub_8315FFC0);
PPC_FUNC_IMPL(__imp__sub_8315FFC0) {
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
	PPCRegister f31{};
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r3,1892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1892);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bne cr6,0x8315fffc
	if (!cr6.eq) goto loc_8315FFFC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8315FFFC:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1920);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160078
	if (cr6.eq) goto loc_83160078;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83160078
	if (cr6.eq) goto loc_83160078;
loc_83160020:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// beq cr6,0x83160054
	if (cr6.eq) goto loc_83160054;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// b 0x83160064
	goto loc_83160064;
loc_83160054:
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_83160064:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160078
	if (cr6.eq) goto loc_83160078;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83160020
	if (!cr0.eq) goto loc_83160020;
loc_83160078:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83160088"))) PPC_WEAK_FUNC(sub_83160088);
PPC_FUNC_IMPL(__imp__sub_83160088) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,1920(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831600b0
	if (cr6.eq) goto loc_831600B0;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831600bc
	if (!cr6.eq) goto loc_831600BC;
loc_831600B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831600BC:
	// lwz r11,1912(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1912);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83160138
	if (cr6.lt) goto loc_83160138;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x8316013c
	if (!cr6.lt) goto loc_8316013C;
	// lhz r11,1928(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 1928);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beq cr6,0x831600b0
	if (cr6.eq) goto loc_831600B0;
	// li r11,0
	r11.s64 = 0;
loc_831600E4:
	// lhz r10,1928(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 1928);
	// extsh r30,r11
	r30.s64 = r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// bne cr6,0x8316010c
	if (!cr6.eq) goto loc_8316010C;
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
loc_8316010C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// bne cr6,0x83160120
	if (!cr6.eq) goto loc_83160120;
	// li r31,0
	r31.s64 = 0;
loc_83160120:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// bne cr6,0x831600e4
	if (!cr6.eq) goto loc_831600E4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83160138:
	// lwz r3,1932(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1932);
loc_8316013C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83160148"))) PPC_WEAK_FUNC(sub_83160148);
PPC_FUNC_IMPL(__imp__sub_83160148) {
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
	// lwz r11,1888(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1888);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x831601bc
	if (cr6.eq) goto loc_831601BC;
	// lwz r11,1920(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831601b8
	if (cr6.eq) goto loc_831601B8;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831601b8
	if (cr6.eq) goto loc_831601B8;
loc_83160184:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831601bc
	if (!cr6.eq) goto loc_831601BC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831601b8
	if (cr6.eq) goto loc_831601B8;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83160184
	if (!cr0.eq) goto loc_83160184;
loc_831601B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831601BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831601D8"))) PPC_WEAK_FUNC(sub_831601D8);
PPC_FUNC_IMPL(__imp__sub_831601D8) {
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
	// lwz r29,944(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 944);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// lwz r11,1900(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1900);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160250
	if (cr6.eq) goto loc_83160250;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160250
	if (cr6.eq) goto loc_83160250;
loc_83160218:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8316023c
	if (!cr6.eq) goto loc_8316023C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8316023c
	if (!cr6.eq) goto loc_8316023C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8316025c
	if (cr6.gt) goto loc_8316025C;
loc_8316023C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160250
	if (cr6.eq) goto loc_83160250;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83160218
	if (!cr0.eq) goto loc_83160218;
loc_83160250:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8316025C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83160268"))) PPC_WEAK_FUNC(sub_83160268);
PPC_FUNC_IMPL(__imp__sub_83160268) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,28208
	ctx.r6.s64 = r11.s64 + 28208;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831602d4
	if (cr6.eq) goto loc_831602D4;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,27716
	ctx.r9.s64 = ctx.r10.s64 + 27716;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// b 0x831602ec
	goto loc_831602EC;
loc_831602D4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,28192
	ctx.r4.s64 = r11.s64 + 28192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831602EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160308"))) PPC_WEAK_FUNC(sub_83160308);
PPC_FUNC_IMPL(__imp__sub_83160308) {
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
	// addi r9,r11,27716
	ctx.r9.s64 = r11.s64 + 27716;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83160340
	if (cr6.eq) goto loc_83160340;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83160340:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160358"))) PPC_WEAK_FUNC(sub_83160358);
PPC_FUNC_IMPL(__imp__sub_83160358) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,27720
	ctx.r10.s64 = r11.s64 + 27720;
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r7,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r7.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x83148b18
	sub_83148B18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831478c0
	sub_831478C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831478c0
	sub_831478C0(ctx, base);
	// addi r3,r31,976
	ctx.r3.s64 = r31.s64 + 976;
	// bl 0x83148b18
	sub_83148B18(ctx, base);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30584(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30584);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-30584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30584, r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x831603e0
	if (!cr6.eq) goto loc_831603E0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-30584(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30584, r11.u32);
loc_831603E0:
	// stw r11,1888(r31)
	PPC_STORE_U32(r31.u32 + 1888, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,1892(r31)
	PPC_STORE_U32(r31.u32 + 1892, r30.u32);
	// stw r30,1900(r31)
	PPC_STORE_U32(r31.u32 + 1900, r30.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(r31.u32 + 1904, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83160400"))) PPC_WEAK_FUNC(sub_83160400);
PPC_FUNC_IMPL(__imp__sub_83160400) {
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
	// addi r9,r11,27720
	ctx.r9.s64 = r11.s64 + 27720;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83160438
	if (cr6.eq) goto loc_83160438;
	// li r4,1912
	ctx.r4.s64 = 1912;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83160438:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160450"))) PPC_WEAK_FUNC(sub_83160450);
PPC_FUNC_IMPL(__imp__sub_83160450) {
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
	// li r29,0
	r29.s64 = 0;
	// addi r30,r28,1900
	r30.s64 = r28.s64 + 1900;
	// lwz r11,1900(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1900);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160514
	if (cr6.eq) goto loc_83160514;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83160514
	if (cr6.eq) goto loc_83160514;
loc_83160480:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x83160494
	if (!cr6.eq) goto loc_83160494;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_83160494:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8316053c
	if (cr0.eq) goto loc_8316053C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831604b0
	if (!cr6.eq) goto loc_831604B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_831604B0:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831604c4
	if (!cr6.eq) goto loc_831604C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_831604C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831604d8
	if (cr6.eq) goto loc_831604D8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_831604D8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831604ec
	if (cr6.eq) goto loc_831604EC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_831604EC:
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
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
	// bne cr6,0x83160480
	if (!cr6.eq) goto loc_83160480;
loc_83160514:
	// lwz r3,1892(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1892);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83160534
	if (cr6.eq) goto loc_83160534;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,1892(r28)
	PPC_STORE_U32(r28.u32 + 1892, r29.u32);
loc_83160534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8316053C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8316054C:
	// b 0x8316054c
	goto loc_8316054C;
}

__attribute__((alias("__imp__sub_83160550"))) PPC_WEAK_FUNC(sub_83160550);
PPC_FUNC_IMPL(__imp__sub_83160550) {
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
	// lwz r29,944(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 944);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488a8
	sub_831488A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831488b0
	sub_831488B0(ctx, base);
	// lwz r11,1900(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1900);
	// addi r29,r31,1900
	r29.s64 = r31.s64 + 1900;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831605b8
	if (cr6.eq) goto loc_831605B8;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831605b8
	if (cr6.eq) goto loc_831605B8;
loc_83160598:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x831605e0
	if (cr6.eq) goto loc_831605E0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831605b8
	if (cr6.eq) goto loc_831605B8;
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83160598
	if (!cr0.eq) goto loc_83160598;
loc_831605B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x83160268
	sub_83160268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831605d8
	if (cr6.eq) goto loc_831605D8;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831489e0
	sub_831489E0(ctx, base);
loc_831605D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831605E0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r5.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831605F8"))) PPC_WEAK_FUNC(sub_831605F8);
PPC_FUNC_IMPL(__imp__sub_831605F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1912);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160600"))) PPC_WEAK_FUNC(sub_83160600);
PPC_FUNC_IMPL(__imp__sub_83160600) {
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
	// addi r9,r11,27720
	ctx.r9.s64 = r11.s64 + 27720;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83160638
	if (cr6.eq) goto loc_83160638;
	// li r4,1920
	ctx.r4.s64 = 1920;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83160638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160650"))) PPC_WEAK_FUNC(sub_83160650);
PPC_FUNC_IMPL(__imp__sub_83160650) {
	PPC_FUNC_PROLOGUE();
	// b 0x83160450
	sub_83160450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83160658"))) PPC_WEAK_FUNC(sub_83160658);
PPC_FUNC_IMPL(__imp__sub_83160658) {
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
	// addi r9,r11,27720
	ctx.r9.s64 = r11.s64 + 27720;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83160690
	if (cr6.eq) goto loc_83160690;
	// li r4,1936
	ctx.r4.s64 = 1936;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83160690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831606A8"))) PPC_WEAK_FUNC(sub_831606A8);
PPC_FUNC_IMPL(__imp__sub_831606A8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r29,1920
	r31.s64 = r29.s64 + 1920;
loc_831606C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160748
	if (cr6.eq) goto loc_83160748;
	// addic. r3,r11,-8
	xer.ca = r11.u32 > 7;
	ctx.r3.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83160748
	if (cr0.eq) goto loc_83160748;
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83160758
	if (cr0.eq) goto loc_83160758;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x831606f0
	if (!cr6.eq) goto loc_831606F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_831606F0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83160704
	if (!cr6.eq) goto loc_83160704;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_83160704:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83160718
	if (cr6.eq) goto loc_83160718;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83160718:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8316072c
	if (cr6.eq) goto loc_8316072C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8316072C:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x831606c0
	goto loc_831606C0;
loc_83160748:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83160450
	sub_83160450(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83160758:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83160768:
	// b 0x83160768
	goto loc_83160768;
}

__attribute__((alias("__imp__sub_83160770"))) PPC_WEAK_FUNC(sub_83160770);
PPC_FUNC_IMPL(__imp__sub_83160770) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8315f2c0
	sub_8315F2C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// blt cr6,0x831608cc
	if (cr6.lt) goto loc_831608CC;
	// beq cr6,0x831607c4
	if (cr6.eq) goto loc_831607C4;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// bge cr6,0x83160914
	if (!cr6.lt) goto loc_83160914;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831607C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831601d8
	sub_831601D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831608a8
	if (cr6.eq) goto loc_831608A8;
	// lwz r11,1912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83160854
	if (cr6.lt) goto loc_83160854;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x83160914
	if (!cr6.lt) goto loc_83160914;
	// lwz r11,1920(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// bne cr6,0x831607fc
	if (!cr6.eq) goto loc_831607FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_831607FC:
	// lhz r11,1928(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 1928);
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83160834
	if (!cr6.gt) goto loc_83160834;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83160810:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// bne cr6,0x83160824
	if (!cr6.eq) goto loc_83160824;
	// li r3,0
	ctx.r3.s64 = 0;
loc_83160824:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83160810
	if (cr6.lt) goto loc_83160810;
loc_83160834:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83160854:
	// lwz r11,1920(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160914
	if (cr6.eq) goto loc_83160914;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83160914
	if (cr6.eq) goto loc_83160914;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
loc_83160870:
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160914
	if (cr6.eq) goto loc_83160914;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83160870
	if (!cr0.eq) goto loc_83160870;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831608A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831608CC:
	// lwz r11,1920(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160914
	if (cr6.eq) goto loc_83160914;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83160914
	if (cr6.eq) goto loc_83160914;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
loc_831608E8:
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160914
	if (cr6.eq) goto loc_83160914;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x831608e8
	if (!cr0.eq) goto loc_831608E8;
loc_83160914:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83160920"))) PPC_WEAK_FUNC(sub_83160920);
PPC_FUNC_IMPL(__imp__sub_83160920) {
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
	// li r5,936
	ctx.r5.s64 = 936;
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,1892(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1892);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83160550
	sub_83160550(ctx, base);
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x831609a8
	if (!cr6.eq) goto loc_831609A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,924(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 924);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x831609a8
	if (!cr6.eq) goto loc_831609A8;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831609b0
	goto loc_831609B0;
loc_831609A8:
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
loc_831609B0:
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

__attribute__((alias("__imp__sub_831609D0"))) PPC_WEAK_FUNC(sub_831609D0);
PPC_FUNC_IMPL(__imp__sub_831609D0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,28368
	ctx.r6.s64 = r11.s64 + 28368;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1920
	ctx.r3.s64 = 1920;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83160a6c
	if (cr6.eq) goto loc_83160A6C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83160358
	sub_83160358(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,28236
	ctx.r9.s64 = r11.s64 + 28236;
	// stw r10,1912(r31)
	PPC_STORE_U32(r31.u32 + 1912, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83160a88
	if (!cr6.eq) goto loc_83160A88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83160a8c
	goto loc_83160A8C;
loc_83160A6C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,28356
	ctx.r4.s64 = r11.s64 + 28356;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83160a8c
	goto loc_83160A8C;
loc_83160A88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83160A8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160AA8"))) PPC_WEAK_FUNC(sub_83160AA8);
PPC_FUNC_IMPL(__imp__sub_83160AA8) {
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
	// bl 0x83160920
	sub_83160920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83160af4
	if (cr6.eq) goto loc_83160AF4;
	// lwz r3,904(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 904);
	// addi r30,r31,40
	r30.s64 = r31.s64 + 40;
	// lwz r29,1888(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1888);
	// bl 0x831488b8
	sub_831488B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x83158f60
	sub_83158F60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83160af4
	if (cr6.eq) goto loc_83160AF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8315f418
	sub_8315F418(ctx, base);
loc_83160AF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83160B00"))) PPC_WEAK_FUNC(sub_83160B00);
PPC_FUNC_IMPL(__imp__sub_83160B00) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,28392
	ctx.r6.s64 = r11.s64 + 28392;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r3,1936
	ctx.r3.s64 = 1936;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83160bb0
	if (cr6.eq) goto loc_83160BB0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83160358
	sub_83160358(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,28296
	ctx.r9.s64 = ctx.r10.s64 + 28296;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,1916(r31)
	PPC_STORE_U32(r31.u32 + 1916, r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,1920(r31)
	PPC_STORE_U32(r31.u32 + 1920, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1924(r31)
	PPC_STORE_U32(r31.u32 + 1924, r11.u32);
	// sth r8,1928(r31)
	PPC_STORE_U16(r31.u32 + 1928, ctx.r8.u16);
	// stw r11,1932(r31)
	PPC_STORE_U32(r31.u32 + 1932, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83160bcc
	if (!cr6.eq) goto loc_83160BCC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83160bd0
	goto loc_83160BD0;
loc_83160BB0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,28380
	ctx.r4.s64 = r11.s64 + 28380;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83160bd0
	goto loc_83160BD0;
loc_83160BCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83160BD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160BE8"))) PPC_WEAK_FUNC(sub_83160BE8);
PPC_FUNC_IMPL(__imp__sub_83160BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r24{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x83160920
	sub_83160920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83160f20
	if (cr6.eq) goto loc_83160F20;
	// lwz r11,1920(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160f20
	if (cr6.eq) goto loc_83160F20;
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83160f20
	if (cr6.eq) goto loc_83160F20;
	// lwz r11,1912(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1912);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x83160f14
	if (cr6.gt) goto loc_83160F14;
	// lis r12,-31978
	r12.s64 = -2095710208;
	// addi r12,r12,3136
	r12.s64 = r12.s64 + 3136;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83160C50;
	case 1:
		goto loc_83160CF4;
	case 2:
		goto loc_83160D6C;
	case 3:
		goto loc_83160E04;
	default:
		__builtin_unreachable();
	}
	// lwz r24,3152(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 3152);
	// lwz r24,3316(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 3316);
	// lwz r24,3436(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 3436);
	// lwz r24,3588(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 3588);
loc_83160C50:
	// lwz r3,944(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 944);
	// bl 0x831487c0
	sub_831487C0(ctx, base);
	// lwz r11,940(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 940);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83160c90
	if (!cr6.eq) goto loc_83160C90;
	// bl 0x8315edd0
	sub_8315EDD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83160c88
	if (!cr6.eq) goto loc_83160C88;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,28448
	ctx.r4.s64 = r11.s64 + 28448;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x83160c90
	goto loc_83160C90;
loc_83160C88:
	// stw r3,940(r28)
	PPC_STORE_U32(r28.u32 + 940, ctx.r3.u32);
	// li r29,1
	r29.s64 = 1;
loc_83160C90:
	// addi r30,r28,40
	r30.s64 = r28.s64 + 40;
loc_83160C94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83160cc0
	if (cr6.eq) goto loc_83160CC0;
	// addic. r31,r11,-8
	xer.ca = r11.u32 > 7;
	r31.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x83160c94
	if (!cr0.eq) goto loc_83160C94;
loc_83160CC0:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x83160f14
	if (!cr6.eq) goto loc_83160F14;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,940(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 940);
	// bl 0x8315ee38
	sub_8315EE38(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83160f14
	if (!cr6.eq) goto loc_83160F14;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,28408
	ctx.r4.s64 = r11.s64 + 28408;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83160CF4:
	// bl 0x8315ecc8
	sub_8315ECC8(ctx, base);
	// lwz r10,1916(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 1916);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83160d10
	if (!cr6.eq) goto loc_83160D10;
	// li r30,0
	r30.s64 = 0;
	// b 0x83160d30
	goto loc_83160D30;
loc_83160D10:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,1916(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 1916);
	// divwu r9,r3,r10
	ctx.r9.u32 = ctx.r3.u32 / ctx.r10.u32;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r30,r8,r3
	r30.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_83160D30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83160D34:
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x83160ef8
	if (cr6.eq) goto loc_83160EF8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// bne cr6,0x83160d50
	if (!cr6.eq) goto loc_83160D50;
	// li r31,0
	r31.s64 = 0;
loc_83160D50:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83160d34
	if (!cr6.eq) goto loc_83160D34;
	// sth r30,1928(r28)
	PPC_STORE_U16(r28.u32 + 1928, r30.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83160D6C:
	// lhz r10,1928(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 1928);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,1916(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 1916);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// extsh r5,r7
	ctx.r5.s64 = ctx.r7.s16;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r5,1928(r28)
	PPC_STORE_U16(r28.u32 + 1928, ctx.r5.u16);
	// cmpw cr6,r4,r6
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, xer);
	// blt cr6,0x83160d9c
	if (cr6.lt) goto loc_83160D9C;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,1928(r28)
	PPC_STORE_U16(r28.u32 + 1928, ctx.r10.u16);
loc_83160D9C:
	// lhz r10,1928(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 1928);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
loc_83160DA4:
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x83160de0
	if (cr6.eq) goto loc_83160DE0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// bne cr6,0x83160dc4
	if (!cr6.eq) goto loc_83160DC4;
	// li r31,0
	r31.s64 = 0;
loc_83160DC4:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// bne cr6,0x83160da4
	if (!cr6.eq) goto loc_83160DA4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83160DE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83160E04:
	// bl 0x8315ecc8
	sub_8315ECC8(ctx, base);
	// lwz r10,1916(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 1916);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lhz r10,1928(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 1928);
	// bne cr6,0x83160e5c
	if (!cr6.eq) goto loc_83160E5C;
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// blt cr6,0x83160e48
	if (cr6.lt) goto loc_83160E48;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,1916(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 1916);
	// divwu r9,r3,r10
	ctx.r9.u32 = ctx.r3.u32 / ctx.r10.u32;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r30,r8,r3
	r30.s64 = ctx.r3.s64 - ctx.r8.s64;
	// b 0x83160ebc
	goto loc_83160EBC;
loc_83160E48:
	// lhz r11,1928(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 1928);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// clrlwi r30,r10,31
	r30.u64 = ctx.r10.u32 & 0x1;
	// b 0x83160ebc
	goto loc_83160EBC;
loc_83160E5C:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,32768
	cr6.compare<uint32_t>(ctx.r10.u32, 32768, xer);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// blt cr6,0x83160e88
	if (cr6.lt) goto loc_83160E88;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,1916(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 1916);
	// divwu r9,r3,r10
	ctx.r9.u32 = ctx.r3.u32 / ctx.r10.u32;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r30,r8,r3
	r30.s64 = ctx.r3.s64 - ctx.r8.s64;
	// b 0x83160ebc
	goto loc_83160EBC;
loc_83160E88:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1916(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1916);
	// lhz r10,1928(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 1928);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// divwu r8,r3,r9
	ctx.r8.u32 = ctx.r3.u32 / ctx.r9.u32;
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r9,r7,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r7.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// divwu r5,r6,r11
	ctx.r5.u32 = ctx.r6.u32 / r11.u32;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r11.s32);
	// subf r30,r4,r6
	r30.s64 = ctx.r6.s64 - ctx.r4.s64;
loc_83160EBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_83160EC0:
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x83160ef8
	if (cr6.eq) goto loc_83160EF8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-8
	r31.s64 = r11.s64 + -8;
	// bne cr6,0x83160edc
	if (!cr6.eq) goto loc_83160EDC;
	// li r31,0
	r31.s64 = 0;
loc_83160EDC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83160ec0
	if (!cr6.eq) goto loc_83160EC0;
	// sth r30,1928(r28)
	PPC_STORE_U16(r28.u32 + 1928, r30.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83160EF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r30,1928(r28)
	PPC_STORE_U16(r28.u32 + 1928, r30.u16);
loc_83160F14:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83160F20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83160F30"))) PPC_WEAK_FUNC(sub_83160F30);
PPC_FUNC_IMPL(__imp__sub_83160F30) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83160f88
	if (cr6.lt) goto loc_83160F88;
	// beq cr6,0x83160f74
	if (cr6.eq) goto loc_83160F74;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28516
	ctx.r4.s64 = r11.s64 + 28516;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83160F74:
	// bl 0x83160b00
	sub_83160B00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83160F88:
	// bl 0x831609d0
	sub_831609D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83160FA0"))) PPC_WEAK_FUNC(sub_83160FA0);
PPC_FUNC_IMPL(__imp__sub_83160FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x8315eef8
	sub_8315EEF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83160fe0
	if (!cr6.eq) goto loc_83160FE0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b68
	return;
loc_83160FE0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r24,1
	r24.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// mr r25,r30
	r25.u64 = r30.u64;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// mr r26,r30
	r26.u64 = r30.u64;
	// stfs f0,1008(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 1008, temp.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	f0.f64 = double(temp.f32);
	// stw r24,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r24.u32);
	// stfs f0,1012(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 1012, temp.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83161044
	if (cr6.eq) goto loc_83161044;
loc_83161024:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x83161030
	if (!cr6.eq) goto loc_83161030;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_83161030:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83161024
	if (!cr6.eq) goto loc_83161024;
loc_83161044:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r27,r30
	r27.u64 = r30.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// beq cr6,0x831611b8
	if (cr6.eq) goto loc_831611B8;
loc_83161064:
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83161080:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83161080
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83161080;
	// addi r11,r1,272
	r11.s64 = ctx.r1.s64 + 272;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8316109C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8316109c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8316109C;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r30.u32);
	// addi r11,r1,312
	r11.s64 = ctx.r1.s64 + 312;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831610C0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831610c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831610C0;
	// addi r11,r1,344
	r11.s64 = ctx.r1.s64 + 344;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831610DC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831610dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831610DC;
	// addi r11,r1,380
	r11.s64 = ctx.r1.s64 + 380;
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831610FC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831610fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831610FC;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8314ba98
	sub_8314BA98(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// bl 0x8314deb8
	sub_8314DEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83161214
	if (cr6.eq) goto loc_83161214;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83161158
	if (cr6.lt) goto loc_83161158;
	// bne cr6,0x831611f8
	if (!cr6.eq) goto loc_831611F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83160b00
	sub_83160B00(ctx, base);
	// b 0x83161160
	goto loc_83161160;
loc_83161158:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831609d0
	sub_831609D0(ctx, base);
loc_83161160:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83161208
	if (cr6.eq) goto loc_83161208;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r29,1920
	ctx.r3.s64 = r29.s64 + 1920;
	// bl 0x83153d40
	sub_83153D40(ctx, base);
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
	// cmplw cr6,r25,r3
	cr6.compare<uint32_t>(r25.u32, ctx.r3.u32, xer);
	// bgt cr6,0x831611ac
	if (cr6.gt) goto loc_831611AC;
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_831611AC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x83161064
	if (cr6.lt) goto loc_83161064;
loc_831611B8:
	// stw r25,1932(r29)
	PPC_STORE_U32(r29.u32 + 1932, r25.u32);
	// stw r26,1916(r29)
	PPC_STORE_U32(r29.u32 + 1916, r26.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x83161274
	if (cr6.gt) goto loc_83161274;
	// lis r12,-31978
	r12.s64 = -2095710208;
	// addi r12,r12,4584
	r12.s64 = r12.s64 + 4584;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8316122C;
	case 1:
		goto loc_8316123C;
	case 2:
		goto loc_8316124C;
	case 3:
		goto loc_83161260;
	default:
		__builtin_unreachable();
	}
	// lwz r24,4652(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 4652);
	// lwz r24,4668(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 4668);
	// lwz r24,4684(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 4684);
	// lwz r24,4704(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 4704);
loc_831611F8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28516
	ctx.r4.s64 = r11.s64 + 28516;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83161208:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,28644
	ctx.r4.s64 = r11.s64 + 28644;
	// b 0x8316127c
	goto loc_8316127C;
loc_83161214:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,28600
	ctx.r4.s64 = r11.s64 + 28600;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x83161284
	goto loc_83161284;
loc_8316122C:
	// stw r30,1912(r29)
	PPC_STORE_U32(r29.u32 + 1912, r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b68
	return;
loc_8316123C:
	// stw r24,1912(r29)
	PPC_STORE_U32(r29.u32 + 1912, r24.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b68
	return;
loc_8316124C:
	// li r11,2
	r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1912(r29)
	PPC_STORE_U32(r29.u32 + 1912, r11.u32);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b68
	return;
loc_83161260:
	// li r11,3
	r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,1912(r29)
	PPC_STORE_U32(r29.u32 + 1912, r11.u32);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b68
	return;
loc_83161274:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,28560
	ctx.r4.s64 = r11.s64 + 28560;
loc_8316127C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83161284:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_831612A8"))) PPC_WEAK_FUNC(sub_831612A8);
PPC_FUNC_IMPL(__imp__sub_831612A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,300(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// addi r3,r3,300
	ctx.r3.s64 = ctx.r3.s64 + 300;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_831612C0"))) PPC_WEAK_FUNC(sub_831612C0);
PPC_FUNC_IMPL(__imp__sub_831612C0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lwz r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// cmplwi cr6,r8,8
	cr6.compare<uint32_t>(ctx.r8.u32, 8, xer);
	// beq cr6,0x83161314
	if (cr6.eq) goto loc_83161314;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,28720
	ctx.r4.s64 = r11.s64 + 28720;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_83161314:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83161348
	if (!cr6.gt) goto loc_83161348;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
loc_8316132C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r11,r11,516
	r11.s64 = r11.s64 + 516;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8316132c
	if (cr6.lt) goto loc_8316132C;
loc_83161348:
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

__attribute__((alias("__imp__sub_83161360"))) PPC_WEAK_FUNC(sub_83161360);
PPC_FUNC_IMPL(__imp__sub_83161360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// stw r4,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r4.u32);
	// stw r5,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r5.u32);
	// stw r6,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, ctx.r6.u32);
	// stw r7,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, ctx.r7.u32);
	// stw r8,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161380"))) PPC_WEAK_FUNC(sub_83161380);
PPC_FUNC_IMPL(__imp__sub_83161380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// stfs f1,260(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161390"))) PPC_WEAK_FUNC(sub_83161390);
PPC_FUNC_IMPL(__imp__sub_83161390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,260(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// stfs f1,264(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831613A0"))) PPC_WEAK_FUNC(sub_831613A0);
PPC_FUNC_IMPL(__imp__sub_831613A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831613A8"))) PPC_WEAK_FUNC(sub_831613A8);
PPC_FUNC_IMPL(__imp__sub_831613A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,236(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lfs f0,28708(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28708);
	f0.f64 = double(temp.f32);
	// stw r8,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// lwz r8,240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stw r5,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r5.u32);
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// lwz r8,240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// addi r9,r3,100
	ctx.r9.s64 = ctx.r3.s64 + 100;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83161418
	if (!cr6.eq) goto loc_83161418;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r8,r8,28704
	ctx.r8.s64 = ctx.r8.s64 + 28704;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// b 0x83161440
	goto loc_83161440;
loc_83161418:
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r8,r8,28704
	ctx.r8.s64 = ctx.r8.s64 + 28704;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(f0.f64 / ctx.f12.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_83161440:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f0,28708(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28708);
	f0.f64 = double(temp.f32);
	// stw r4,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r4.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r6,244(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r4,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// lfs f13,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,248(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831614d8
	if (!cr6.eq) goto loc_831614D8;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x831614fc
	goto loc_831614FC;
loc_831614D8:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// fsubs f9,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f0.f64 - ctx.f13.f64));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_831614FC:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r11,4
	r11.s64 = 4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lfs f13,28708(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28708);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, r11.u32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fnmsubs f8,f9,f12,f0
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f12.f64 - f0.f64)));
	// stfs f8,4(r9)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stfs f13,124(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// li r11,8
	r11.s64 = 8;
	// lfs f7,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,128(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fcmpu cr6,f7,f0
	cr6.compare(ctx.f7.f64, f0.f64);
	// beq cr6,0x83161554
	if (cr6.eq) goto loc_83161554;
	// li r11,5
	r11.s64 = 5;
loc_83161554:
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83161560"))) PPC_WEAK_FUNC(sub_83161560);
PPC_FUNC_IMPL(__imp__sub_83161560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// lwz r10,252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// lwz r11,252(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8316158c
	if (!cr6.eq) goto loc_8316158C;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,136(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// b 0x831615ac
	goto loc_831615AC;
loc_8316158C:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(f0.f64 / ctx.f11.f64));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,136(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
loc_831615AC:
	// li r10,6
	ctx.r10.s64 = 6;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r10,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r9,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r9.u32);
	// stw r8,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r8.u32);
	// lfs f0,28708(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28708);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831615E8"))) PPC_WEAK_FUNC(sub_831615E8);
PPC_FUNC_IMPL(__imp__sub_831615E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8688(r1)
	ea = -8688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lfs f0,260(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 260);
	f0.f64 = double(temp.f32);
	// lfs f13,264(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x83161860
	if (!cr6.eq) goto loc_83161860;
	// fmuls f31,f0,f31
	f31.f64 = double(float(f0.f64 * f31.f64));
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f0,28704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28704);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x8316165c
	if (!cr6.eq) goto loc_8316165C;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83161ab4
	if (cr6.eq) goto loc_83161AB4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,8688
	ctx.r1.s64 = ctx.r1.s64 + 8688;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
loc_8316165C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f0,28708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28708);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x831616c0
	if (!cr6.eq) goto loc_831616C0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83161690
	if (cr6.eq) goto loc_83161690;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83161690:
	// lwz r10,68(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83161ab4
	if (cr6.eq) goto loc_83161AB4;
	// addi r11,r25,80
	r11.s64 = r25.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831616A8:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x831616a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831616A8;
	// addi r1,r1,8688
	ctx.r1.s64 = ctx.r1.s64 + 8688;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
loc_831616C0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,4352
	ctx.r3.s64 = ctx.r1.s64 + 4352;
	// bl 0x831612c0
	sub_831612C0(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831616f0
	if (cr6.eq) goto loc_831616F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,4352
	ctx.r4.s64 = ctx.r1.s64 + 4352;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831616F0:
	// lwz r11,4420(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4420);
	// li r24,0
	r24.s64 = 0;
	// mr r28,r11
	r28.u64 = r11.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r11.u32);
	// beq cr6,0x83161828
	if (cr6.eq) goto loc_83161828;
	// addi r11,r1,4352
	r11.s64 = ctx.r1.s64 + 4352;
	// addi r31,r25,80
	r31.s64 = r25.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subf r29,r25,r11
	r29.s64 = r11.s64 - r25.s64;
	// li r23,1
	r23.s64 = 1;
loc_83161720:
	// lwz r11,4416(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4416);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x83161734
	if (!cr6.lt) goto loc_83161734;
	// lwzx r4,r29,r3
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + ctx.r3.u32);
loc_83161734:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8316174c
	if (cr6.lt) goto loc_8316174C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// b 0x83161754
	goto loc_83161754;
loc_8316174C:
	// lwz r5,72(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_83161754:
	// lbzx r11,r29,r31
	r11.u64 = PPC_LOAD_U8(r29.u32 + r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83161810
	if (!cr6.eq) goto loc_83161810;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83161810
	if (cr6.eq) goto loc_83161810;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83161810
	if (cr6.eq) goto loc_83161810;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x831617d8
	if (cr6.lt) goto loc_831617D8;
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r8,4
	r11.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r8,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r8.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83161798:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfsx f12,r11,r6
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x83161798
	if (!cr0.eq) goto loc_83161798;
loc_831617D8:
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bge cr6,0x83161808
	if (!cr6.lt) goto loc_83161808;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r8,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r8.s64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// subf r10,r7,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_831617F0:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x831617f0
	if (!cr0.eq) goto loc_831617F0;
loc_83161808:
	// stb r23,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r23.u8);
	// b 0x83161814
	goto loc_83161814;
loc_83161810:
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
loc_83161814:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x83161720
	if (cr6.lt) goto loc_83161720;
loc_83161828:
	// lwz r10,4416(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4416);
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83161ab4
	if (cr6.eq) goto loc_83161AB4;
	// addi r10,r1,4352
	ctx.r10.s64 = ctx.r1.s64 + 4352;
loc_8316183C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// lwz r9,4416(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4416);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8316183c
	if (cr6.lt) goto loc_8316183C;
	// addi r1,r1,8688
	ctx.r1.s64 = ctx.r1.s64 + 8688;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
loc_83161860:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831612c0
	sub_831612C0(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83161890
	if (cr6.eq) goto loc_83161890;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83161890:
	// lwz r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lfs f13,260(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,264(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 264);
	f0.f64 = double(temp.f32);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// li r24,0
	r24.s64 = 0;
	// mr r26,r11
	r26.u64 = r11.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r11,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r11.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// fdivs f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// beq cr6,0x83161a80
	if (cr6.eq) goto loc_83161A80;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r30,r25,80
	r30.s64 = r25.s64 + 80;
	// mr r31,r25
	r31.u64 = r25.u64;
	// subf r27,r25,r11
	r27.s64 = r11.s64 - r25.s64;
	// li r23,1
	r23.s64 = 1;
loc_831618E4:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x831618f8
	if (!cr6.lt) goto loc_831618F8;
	// lwzx r3,r27,r31
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
loc_831618F8:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x83161910
	if (cr6.lt) goto loc_83161910;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x83161918
	goto loc_83161918;
loc_83161910:
	// lwz r4,72(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_83161918:
	// lbzx r11,r27,r30
	r11.u64 = PPC_LOAD_U8(r27.u32 + r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83161a68
	if (!cr6.eq) goto loc_83161A68;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83161a68
	if (cr6.eq) goto loc_83161A68;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83161a68
	if (cr6.eq) goto loc_83161A68;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// blt cr6,0x83161a14
	if (cr6.lt) goto loc_83161A14;
	// addi r7,r4,-3
	ctx.r7.s64 = ctx.r4.s64 + -3;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// subf r6,r5,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_83161954:
	// clrldi r21,r10,32
	r21.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfs f12,-12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// addi r22,r9,1
	r22.s64 = ctx.r9.s64 + 1;
	// std r21,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r21.u64);
	// clrldi r21,r9,32
	r21.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r22,r22,32
	r22.u64 = r22.u64 & 0xFFFFFFFF;
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r21,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r21.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r22,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r22.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r22,r9,-1
	r22.s64 = ctx.r9.s64 + -1;
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// clrldi r22,r22,32
	r22.u64 = r22.u64 & 0xFFFFFFFF;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// std r22,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r22.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f11,f4
	ctx.f11.f64 = double(float(ctx.f4.f64));
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// fmadds f8,f1,f13,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f10,f3,f13,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f7,f11,f13,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + f0.f64));
	// fmadds f9,f2,f13,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + f0.f64));
	// fmuls f4,f8,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fmuls f3,f7,f31
	ctx.f3.f64 = double(float(ctx.f7.f64 * f31.f64));
	// fmuls f5,f9,f31
	ctx.f5.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f2,-4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfsx f1,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f6,f1
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f11,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f5,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// blt cr6,0x83161954
	if (cr6.lt) goto loc_83161954;
loc_83161A14:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x83161a60
	if (!cr6.lt) goto loc_83161A60;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
loc_83161A28:
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfsx f12,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f9,f13,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + f0.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// blt cr6,0x83161a28
	if (cr6.lt) goto loc_83161A28;
loc_83161A60:
	// stb r23,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r23.u8);
	// b 0x83161a6c
	goto loc_83161A6C;
loc_83161A68:
	// stb r24,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r24.u8);
loc_83161A6C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// blt cr6,0x831618e4
	if (cr6.lt) goto loc_831618E4;
loc_83161A80:
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f0,260(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 260);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 264, temp.u32);
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83161ab4
	if (cr6.eq) goto loc_83161AB4;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_83161A9C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r24,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// lwz r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83161a9c
	if (cr6.lt) goto loc_83161A9C;
loc_83161AB4:
	// addi r1,r1,8688
	ctx.r1.s64 = ctx.r1.s64 + 8688;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83161AC0"))) PPC_WEAK_FUNC(sub_83161AC0);
PPC_FUNC_IMPL(__imp__sub_83161AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4624(r1)
	ea = -4624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r15,4644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4644, r15.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// bl 0x831612c0
	sub_831612C0(ctx, base);
	// lwz r11,8(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83161b14
	if (cr6.eq) goto loc_83161B14;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83161B14:
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83161b58
	if (!cr6.eq) goto loc_83161B58;
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r11,r17
	r11.u64 = r17.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83162298
	if (cr6.eq) goto loc_83162298;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
loc_83161B38:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r17,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r17.u32);
	// lwz r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83161b38
	if (cr6.lt) goto loc_83161B38;
	// addi r1,r1,4624
	ctx.r1.s64 = ctx.r1.s64 + 4624;
	// b 0x831b0b40
	return;
loc_83161B58:
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r16,1
	r16.s64 = 1;
	// stw r11,68(r20)
	PPC_STORE_U32(r20.u32 + 68, r11.u32);
	// lfs f11,264(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r15.u32 + 264);
	ctx.f11.f64 = double(temp.f32);
	// lwz r25,0(r19)
	r25.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r30,0(r18)
	r30.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lfs f9,260(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 260);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// bne cr6,0x83161b84
	if (!cr6.eq) goto loc_83161B84;
	// mr r16,r17
	r16.u64 = r17.u64;
loc_83161B84:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// fsubs f0,f9,f11
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// mr r23,r17
	r23.u64 = r17.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(f0.f64 / ctx.f10.f64));
	// beq cr6,0x83162254
	if (cr6.eq) goto loc_83162254;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// addi r21,r20,80
	r21.s64 = r20.s64 + 80;
	// subf r9,r20,r11
	ctx.r9.s64 = r11.s64 - r20.s64;
	// mr r22,r20
	r22.u64 = r20.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_83161BC0:
	// lwz r25,0(r19)
	r25.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,0(r18)
	r30.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// cmplw cr6,r23,r10
	cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, xer);
	// add r8,r25,r11
	ctx.r8.u64 = r25.u64 + r11.u64;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
	// bge cr6,0x83161bec
	if (!cr6.lt) goto loc_83161BEC;
	// lwzx r31,r9,r22
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
loc_83161BEC:
	// lwz r11,64(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 64);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x83161c04
	if (cr6.lt) goto loc_83161C04;
	// mr r28,r17
	r28.u64 = r17.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// b 0x83161c0c
	goto loc_83161C0C;
loc_83161C04:
	// lwz r28,72(r20)
	r28.u64 = PPC_LOAD_U32(r20.u32 + 72);
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
loc_83161C0C:
	// lbzx r11,r9,r21
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r21.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83162204
	if (!cr6.eq) goto loc_83162204;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83162204
	if (cr6.eq) goto loc_83162204;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83162204
	if (cr6.eq) goto loc_83162204;
	// mr r24,r28
	r24.u64 = r28.u64;
	// mr r11,r17
	r11.u64 = r17.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x831621f8
	if (cr6.eq) goto loc_831621F8;
loc_83161C38:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x83161e9c
	if (cr6.lt) goto loc_83161E9C;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,80(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// add r10,r25,r10
	ctx.r10.u64 = r25.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
loc_83161C58:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// bge cr6,0x83161c7c
	if (!cr6.lt) goto loc_83161C7C;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// bge cr6,0x83161c58
	if (!cr6.lt) goto loc_83161C58;
	// b 0x83161e9c
	goto loc_83161E9C;
loc_83161C7C:
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(r16.s32, 1, xer);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// bne cr6,0x83161ddc
	if (!cr6.eq) goto loc_83161DDC;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83161d88
	if (cr6.lt) goto loc_83161D88;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r6,r28,-3
	ctx.r6.s64 = r28.s64 + -3;
	// addi r8,r11,2
	ctx.r8.s64 = r11.s64 + 2;
	// subf r5,r4,r31
	ctx.r5.s64 = r31.s64 - ctx.r4.s64;
loc_83161CB8:
	// clrldi r3,r9,32
	ctx.r3.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f0,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 88);
	f0.f64 = double(temp.f32);
	// addi r29,r8,-1
	r29.s64 = ctx.r8.s64 + -1;
	// lfs f13,-12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// clrldi r3,r8,32
	ctx.r3.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r29,r29,32
	r29.u64 = r29.u64 & 0xFFFFFFFF;
	// lfd f6,176(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r29.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f6
	ctx.f4.f64 = double(ctx.f6.s64);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f2,128(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f8,f5
	ctx.f8.f64 = double(float(ctx.f5.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f5,f12,f10,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fmadds f4,f8,f10,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * f0.f64));
	// fmadds f7,f3,f10,f11
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f3,f6,f10,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f1,-4(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfsx f0,r5,r10
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// lfs f13,88(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f6,-4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,88(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// stfs f2,4(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f1,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// lfs f0,88(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 88);
	f0.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * f0.f64));
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x83161cb8
	if (cr6.lt) goto loc_83161CB8;
loc_83161D88:
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// bge cr6,0x83161e94
	if (!cr6.lt) goto loc_83161E94;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r4,r31
	ctx.r8.s64 = r31.s64 - ctx.r4.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
loc_83161D9C:
	// clrldi r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f0,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 88);
	f0.f64 = double(temp.f32);
	// lfsx f13,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r7,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r7.u64);
	// lfd f12,208(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, xer);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmadds f6,f7,f10,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64));
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// blt cr6,0x83161d9c
	if (cr6.lt) goto loc_83161D9C;
	// b 0x83161e94
	goto loc_83161E94;
loc_83161DDC:
	// lfs f0,88(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 88);
	f0.f64 = double(temp.f32);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// fmuls f0,f0,f9
	f0.f64 = double(float(f0.f64 * ctx.f9.f64));
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83161e64
	if (cr6.lt) goto loc_83161E64;
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r11,3
	ctx.r9.s64 = r11.s64 + 3;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r4,r31
	ctx.r6.s64 = r31.s64 - ctx.r4.s64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
loc_83161E24:
	// lfs f13,-12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,-4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lfsx f8,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f6,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * f0.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne 0x83161e24
	if (!cr0.eq) goto loc_83161E24;
loc_83161E64:
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bge cr6,0x83161e94
	if (!cr6.lt) goto loc_83161E94;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r4,r31
	ctx.r8.s64 = r31.s64 - ctx.r4.s64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r9,r7,r28
	ctx.r9.s64 = r28.s64 - ctx.r7.s64;
loc_83161E7C:
	// lfsx f13,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83161e7c
	if (!cr0.eq) goto loc_83161E7C;
loc_83161E94:
	// add r30,r24,r30
	r30.u64 = r24.u64 + r30.u64;
	// mr r24,r17
	r24.u64 = r17.u64;
loc_83161E9C:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r29,r24
	r29.u64 = r24.u64;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// ble cr6,0x83161eb4
	if (!cr6.gt) goto loc_83161EB4;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_83161EB4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831621ec
	if (cr6.eq) goto loc_831621EC;
	// add r6,r29,r11
	ctx.r6.u64 = r29.u64 + r11.u64;
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(r16.s32, 1, xer);
	// bne cr6,0x8316208c
	if (!cr6.eq) goto loc_8316208C;
	// clrldi r10,r30,32
	ctx.r10.u64 = r30.u64 & 0xFFFFFFFF;
	// lfs f12,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// subf r9,r11,r6
	ctx.r9.s64 = ctx.r6.s64 - r11.s64;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f7,144(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// fmuls f0,f12,f10
	f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmadds f4,f5,f12,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f13,f4,f11
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f12,f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f3.f64));
	// blt cr6,0x8316202c
	if (cr6.lt) goto loc_8316202C;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - r11.s64;
	// addi r5,r11,3
	ctx.r5.s64 = r11.s64 + 3;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// subf r3,r4,r31
	ctx.r3.s64 = r31.s64 - ctx.r4.s64;
	// add r30,r5,r30
	r30.u64 = ctx.r5.u64 + r30.u64;
loc_83161F44:
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lfs f8,-12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// clrldi r14,r9,32
	r14.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r5,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r14,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r14.u64);
	// clrldi r14,r10,32
	r14.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f6,96(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r14,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, r14.u64);
	// lfd f5,224(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfd f7,192(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// lfd f2,104(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// ld r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// frsp f7,f4
	ctx.f7.f64 = double(float(ctx.f4.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// frsp f5,f3
	ctx.f5.f64 = double(float(ctx.f3.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmuls f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f3,f7,f7
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// fmuls f6,f5,f12
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f7,f5,f5
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f5,f4,f4
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f3,f3,f0,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 * f0.f64 + ctx.f2.f64));
	// fmuls f2,f1,f1
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmuls f1,f1,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f6.f64));
	// fmadds f6,f5,f0,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 * f0.f64 + ctx.f4.f64));
	// fadds f5,f3,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// fmadds f4,f2,f0,f1
	ctx.f4.f64 = double(float(ctx.f2.f64 * f0.f64 + ctx.f1.f64));
	// fadds f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fmuls f1,f5,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f1,-4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// fadds f7,f4,f13
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lfsx f8,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f3,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f5,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// blt cr6,0x83161f44
	if (cr6.lt) goto loc_83161F44;
loc_8316202C:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x831621e4
	if (!cr6.lt) goto loc_831621E4;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// subf r8,r4,r31
	ctx.r8.s64 = r31.s64 - ctx.r4.s64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
loc_83162048:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lfsx f8,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// lfd f7,136(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f2,f4,f0,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * f0.f64 + ctx.f3.f64));
	// fadds f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fmuls f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// blt cr6,0x83162048
	if (cr6.lt) goto loc_83162048;
	// b 0x831621e4
	goto loc_831621E4;
loc_8316208C:
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - r11.s64;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f9
	f0.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x83162198
	if (cr6.lt) goto loc_83162198;
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - r11.s64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r9,r11,3
	ctx.r9.s64 = r11.s64 + 3;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,2
	ctx.r9.s64 = r30.s64 + 2;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r3,r4,r31
	ctx.r3.s64 = r31.s64 - ctx.r4.s64;
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + r11.u64;
loc_831620E4:
	// clrldi r11,r9,32
	r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f12,-12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// addi r15,r9,-1
	r15.s64 = ctx.r9.s64 + -1;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, r11.u64);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// clrldi r11,r15,32
	r11.u64 = r15.u64 & 0xFFFFFFFF;
	// clrldi r15,r30,32
	r15.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, r11.u64);
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// std r15,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, r15.u64);
	// lfd f7,168(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// std r11,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, r11.u64);
	// lfd f6,200(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lfd f5,184(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfd f8,152(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f3,f8
	ctx.f3.f64 = double(ctx.f8.s64);
	// fmadds f7,f2,f0,f13
	ctx.f7.f64 = double(float(ctx.f2.f64 * f0.f64 + ctx.f13.f64));
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// fmuls f2,f7,f12
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f2,-4(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f5,f1,f0,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f13.f64));
	// lfsx f1,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * f0.f64 + ctx.f13.f64));
	// fmuls f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fcfid f3,f6
	ctx.f3.f64 = double(ctx.f6.s64);
	// lfs f8,-4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// frsp f6,f3
	ctx.f6.f64 = double(float(ctx.f3.f64));
	// lfs f4,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// fmadds f5,f6,f0,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f13.f64));
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x831620e4
	if (!cr0.eq) goto loc_831620E4;
	// lwz r15,4644(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4644);
loc_83162198:
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x831621e4
	if (!cr6.lt) goto loc_831621E4;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r4,r31
	ctx.r9.s64 = r31.s64 - ctx.r4.s64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_831621B0:
	// clrldi r8,r30,32
	ctx.r8.u64 = r30.u64 & 0xFFFFFFFF;
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r8,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r8.u64);
	// lfd f8,216(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmadds f5,f6,f0,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * f0.f64 + ctx.f13.f64));
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x831621b0
	if (!cr0.eq) goto loc_831621B0;
loc_831621E4:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// subf r24,r29,r24
	r24.s64 = r24.s64 - r29.s64;
loc_831621EC:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x83161c38
	if (!cr6.eq) goto loc_83161C38;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831621F8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r11.u8);
	// b 0x8316223c
	goto loc_8316223C;
loc_83162204:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x83162238
	if (cr6.lt) goto loc_83162238;
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// addi r11,r26,12
	r11.s64 = r26.s64 + 12;
loc_8316221C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bge cr6,0x83162238
	if (!cr6.lt) goto loc_83162238;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// bge cr6,0x8316221c
	if (!cr6.lt) goto loc_8316221C;
loc_83162238:
	// stb r17,0(r21)
	PPC_STORE_U8(r21.u32 + 0, r17.u8);
loc_8316223C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// blt cr6,0x83161bc0
	if (cr6.lt) goto loc_83161BC0;
loc_83162254:
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(r16.s32, 1, xer);
	// bne cr6,0x83162264
	if (!cr6.eq) goto loc_83162264;
	// lfs f0,260(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r15.u32 + 260);
	f0.f64 = double(temp.f32);
	// stfs f0,264(r15)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r15.u32 + 264, temp.u32);
loc_83162264:
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r11,r17
	r11.u64 = r17.u64;
	// stw r25,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r25.u32);
	// stw r30,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83162298
	if (cr6.eq) goto loc_83162298;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
loc_83162280:
	// stw r17,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r17.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83162280
	if (cr6.lt) goto loc_83162280;
loc_83162298:
	// addi r1,r1,4624
	ctx.r1.s64 = ctx.r1.s64 + 4624;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_831622A0"))) PPC_WEAK_FUNC(sub_831622A0);
PPC_FUNC_IMPL(__imp__sub_831622A0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,232(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831622cc
	if (!cr6.eq) goto loc_831622CC;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x831615e8
	sub_831615E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_831622CC:
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83161ac0
	sub_83161AC0(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83162314
	if (cr6.lt) goto loc_83162314;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r11.u32);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stw r10,232(r31)
	PPC_STORE_U32(r31.u32 + 232, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83162314:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r6,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r6.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f11,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83162358"))) PPC_WEAK_FUNC(sub_83162358);
PPC_FUNC_IMPL(__imp__sub_83162358) {
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
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83162398
	if (!cr6.eq) goto loc_83162398;
	// bl 0x831613a8
	sub_831613A8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,40
	r11.s64 = ctx.r3.s64 + 40;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lfs f0,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, r11.u32);
loc_83162398:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831623A8"))) PPC_WEAK_FUNC(sub_831623A8);
PPC_FUNC_IMPL(__imp__sub_831623A8) {
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
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831623f0
	if (!cr6.gt) goto loc_831623F0;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bgt cr6,0x831623f0
	if (cr6.gt) goto loc_831623F0;
	// bl 0x83161560
	sub_83161560(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,136
	r11.s64 = ctx.r3.s64 + 136;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lfs f0,220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, r11.u32);
loc_831623F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162400"))) PPC_WEAK_FUNC(sub_83162400);
PPC_FUNC_IMPL(__imp__sub_83162400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r9,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r9.u32);
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28732(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28732);
	f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,136(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// stfs f11,140(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stw r7,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r7.u32);
	// stfs f10,220(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r6,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r6.u32);
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// addi r11,r3,136
	r11.s64 = ctx.r3.s64 + 136;
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// lfs f0,28708(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28708);
	f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lwz r4,152(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r4,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162490"))) PPC_WEAK_FUNC(sub_83162490);
PPC_FUNC_IMPL(__imp__sub_83162490) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x83168650
	sub_83168650(ctx, base);
	// addi r3,r3,12416
	ctx.r3.s64 = ctx.r3.s64 + 12416;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831624B8"))) PPC_WEAK_FUNC(sub_831624B8);
PPC_FUNC_IMPL(__imp__sub_831624B8) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831624E8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831624e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831624E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// li r5,12288
	ctx.r5.s64 = 12288;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r10,r11,28736
	ctx.r10.s64 = r11.s64 + 28736;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r30.u8);
	// stb r30,65(r31)
	PPC_STORE_U8(r31.u32 + 65, r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,12368(r31)
	PPC_STORE_U32(r31.u32 + 12368, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,12372(r31)
	PPC_STORE_U32(r31.u32 + 12372, r30.u32);
	// stw r30,12376(r31)
	PPC_STORE_U32(r31.u32 + 12376, r30.u32);
	// stw r30,12380(r31)
	PPC_STORE_U32(r31.u32 + 12380, r30.u32);
	// stw r30,12384(r31)
	PPC_STORE_U32(r31.u32 + 12384, r30.u32);
	// stw r30,12388(r31)
	PPC_STORE_U32(r31.u32 + 12388, r30.u32);
	// stw r30,12392(r31)
	PPC_STORE_U32(r31.u32 + 12392, r30.u32);
	// stw r30,12396(r31)
	PPC_STORE_U32(r31.u32 + 12396, r30.u32);
	// stw r30,12400(r31)
	PPC_STORE_U32(r31.u32 + 12400, r30.u32);
	// stw r30,12404(r31)
	PPC_STORE_U32(r31.u32 + 12404, r30.u32);
	// stw r30,12408(r31)
	PPC_STORE_U32(r31.u32 + 12408, r30.u32);
	// stw r30,12412(r31)
	PPC_STORE_U32(r31.u32 + 12412, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162588"))) PPC_WEAK_FUNC(sub_83162588);
PPC_FUNC_IMPL(__imp__sub_83162588) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,28792
	ctx.r5.s64 = r11.s64 + 28792;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,12416
	ctx.r3.s64 = 12416;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831625c8
	if (cr6.eq) goto loc_831625C8;
	// bl 0x831624b8
	sub_831624B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831625f0
	if (!cr6.eq) goto loc_831625F0;
loc_831625C8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28748
	ctx.r4.s64 = r11.s64 + 28748;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
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
loc_831625F0:
	// bl 0x83166d00
	sub_83166D00(ctx, base);
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

__attribute__((alias("__imp__sub_83162610"))) PPC_WEAK_FUNC(sub_83162610);
PPC_FUNC_IMPL(__imp__sub_83162610) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83162648
	if (cr6.eq) goto loc_83162648;
	// bl 0x83166b70
	sub_83166B70(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83166a70
	sub_83166A70(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
loc_83162648:
	// lwz r3,12372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12372);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8316265c
	if (cr6.eq) goto loc_8316265C;
	// bl 0x8316bdf8
	sub_8316BDF8(ctx, base);
	// stw r30,12372(r31)
	PPC_STORE_U32(r31.u32 + 12372, r30.u32);
loc_8316265C:
	// lwz r3,12368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12368);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83162670
	if (cr6.eq) goto loc_83162670;
	// bl 0x8316bdf8
	sub_8316BDF8(ctx, base);
	// stw r30,12368(r31)
	PPC_STORE_U32(r31.u32 + 12368, r30.u32);
loc_83162670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162688"))) PPC_WEAK_FUNC(sub_83162688);
PPC_FUNC_IMPL(__imp__sub_83162688) {
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
	// addi r9,r11,26624
	ctx.r9.s64 = r11.s64 + 26624;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x831626c0
	if (cr6.eq) goto loc_831626C0;
	// li r4,12416
	ctx.r4.s64 = 12416;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831626C0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831626D8"))) PPC_WEAK_FUNC(sub_831626D8);
PPC_FUNC_IMPL(__imp__sub_831626D8) {
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
	// bl 0x83162610
	sub_83162610(ctx, base);
	// bl 0x831668e0
	sub_831668E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83162714
	if (cr6.eq) goto loc_83162714;
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
loc_83162714:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162728"))) PPC_WEAK_FUNC(sub_83162728);
PPC_FUNC_IMPL(__imp__sub_83162728) {
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
	// bl 0x83162610
	sub_83162610(ctx, base);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,12376
	ctx.r3.s64 = r31.s64 + 12376;
	// bl 0x8316bd58
	sub_8316BD58(ctx, base);
	// stw r3,12368(r31)
	PPC_STORE_U32(r31.u32 + 12368, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,12396
	ctx.r3.s64 = r31.s64 + 12396;
	// bl 0x8316bd58
	sub_8316BD58(ctx, base);
	// lwz r11,12368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12368);
	// addi r30,r31,12372
	r30.s64 = r31.s64 + 12372;
	// stw r3,12372(r31)
	PPC_STORE_U32(r31.u32 + 12372, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831627dc
	if (cr6.eq) goto loc_831627DC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831627dc
	if (cr6.eq) goto loc_831627DC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316be20
	sub_8316BE20(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8316be20
	sub_8316BE20(ctx, base);
	// li r7,12288
	ctx.r7.s64 = 12288;
	// lwz r3,12368(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12368);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83166920
	sub_83166920(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// bne cr6,0x831627c4
	if (!cr6.eq) goto loc_831627C4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,28852
	ctx.r4.s64 = r11.s64 + 28852;
	// b 0x831627e4
	goto loc_831627E4;
loc_831627C4:
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83165350
	sub_83165350(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83166af0
	sub_83166AF0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x831627f0
	goto loc_831627F0;
loc_831627DC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,28808
	ctx.r4.s64 = r11.s64 + 28808;
loc_831627E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831627F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162808"))) PPC_WEAK_FUNC(sub_83162808);
PPC_FUNC_IMPL(__imp__sub_83162808) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83162a5c
	if (cr6.eq) goto loc_83162A5C;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8316283c
	if (!cr6.eq) goto loc_8316283C;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
loc_8316283C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83162a40
	if (!cr6.eq) goto loc_83162A40;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831629b0
	if (!cr6.eq) goto loc_831629B0;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a518
	sub_8316A518(ctx, base);
	// addi r6,r1,98
	ctx.r6.s64 = ctx.r1.s64 + 98;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8316b6b0
	sub_8316B6B0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8316289c
	if (!cr6.eq) goto loc_8316289C;
loc_83162884:
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8316a528
	sub_8316A528(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
loc_8316289C:
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// beq cr6,0x831628c8
	if (cr6.eq) goto loc_831628C8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28976
	ctx.r4.s64 = r11.s64 + 28976;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
loc_831628C8:
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,97
	ctx.r9.s64 = ctx.r1.s64 + 97;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r8,r1,99
	ctx.r8.s64 = ctx.r1.s64 + 99;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,101
	ctx.r6.s64 = ctx.r1.s64 + 101;
	// addi r5,r1,102
	ctx.r5.s64 = ctx.r1.s64 + 102;
	// bl 0x8316b700
	sub_8316B700(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x83162884
	if (cr6.eq) goto loc_83162884;
	// lbz r11,97(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83162a64
	if (cr6.lt) goto loc_83162A64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83162a64
	if (!cr6.gt) goto loc_83162A64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x83162a64
	if (cr6.lt) goto loc_83162A64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x83162954
	if (!cr6.gt) goto loc_83162954;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28924
	ctx.r4.s64 = r11.s64 + 28924;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
loc_83162954:
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8316a528
	sub_8316A528(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83162728
	sub_83162728(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831629a8
	if (!cr6.eq) goto loc_831629A8;
	// li r11,2
	r11.s64 = 2;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
loc_831629A8:
	// li r11,1
	r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_831629B0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831629e8
	if (!cr6.eq) goto loc_831629E8;
	// li r11,96
	r11.s64 = 96;
	// divwu r10,r30,r11
	ctx.r10.u32 = r30.u32 / r11.u32;
	// addic. r30,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	r30.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x831629dc
	if (!cr0.gt) goto loc_831629DC;
loc_831629CC:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83167090
	sub_83167090(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x831629cc
	if (!cr0.eq) goto loc_831629CC;
loc_831629DC:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x83165348
	sub_83165348(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
loc_831629E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8315def8
	sub_8315DEF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8315def8
	sub_8315DEF8(ctx, base);
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83162a40
	if (!cr6.eq) goto loc_83162A40;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83162a40
	if (!cr6.eq) goto loc_83162A40;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83162a40
	if (!cr6.eq) goto loc_83162A40;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83162a40
	if (cr6.lt) goto loc_83162A40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83162610
	sub_83162610(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_83162A40:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83162a5c
	if (!cr6.eq) goto loc_83162A5C;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83162a5c
	if (!cr6.eq) goto loc_83162A5C;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
loc_83162A5C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
loc_83162A64:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,28892
	ctx.r4.s64 = r11.s64 + 28892;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83162A88"))) PPC_WEAK_FUNC(sub_83162A88);
PPC_FUNC_IMPL(__imp__sub_83162A88) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bne cr6,0x83162ac0
	if (!cr6.eq) goto loc_83162AC0;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x83162b24
	if (cr6.eq) goto loc_83162B24;
loc_83162AC0:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f12,1212(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1212);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// lfs f13,26548(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26548);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x83162ae4
	if (!cr6.gt) goto loc_83162AE4;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_83162AE4:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-21220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21220);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x83162af8
	if (!cr6.lt) goto loc_83162AF8;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_83162AF8:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lfs f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31000);
	f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// ble cr6,0x83162b10
	if (!cr6.gt) goto loc_83162B10;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_83162B10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x83162b24
	if (!cr6.lt) goto loc_83162B24;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_83162B24:
	// lfs f0,1216(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1216);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bne cr6,0x83162b3c
	if (!cr6.eq) goto loc_83162B3C;
	// lfs f0,1220(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1220);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// beq cr6,0x83162b7c
	if (cr6.eq) goto loc_83162B7C;
loc_83162B3C:
	// addi r29,r28,28
	r29.s64 = r28.s64 + 28;
	// lfs f1,1212(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1212);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x831442b0
	sub_831442B0(ctx, base);
	// addi r30,r28,176
	r30.s64 = r28.s64 + 176;
	// li r31,7
	r31.s64 = 7;
loc_83162B5C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// bne 0x83162b5c
	if (!cr0.eq) goto loc_83162B5C;
	// stfs f30,1216(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r28.u32 + 1216, temp.u32);
	// stfs f31,1220(r28)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r28.u32 + 1220, temp.u32);
loc_83162B7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83162B90"))) PPC_WEAK_FUNC(sub_83162B90);
PPC_FUNC_IMPL(__imp__sub_83162B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r9,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r9.u8);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r8,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r8.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r7,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r7.u8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r3,3(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 | ctx.r6.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r5,r3
	ctx.r3.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r3,r9
	ctx.r10.u64 = ctx.r3.u64 | ctx.r9.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sth r3,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r3.u16);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r9,60(r4)
	PPC_STORE_U8(ctx.r4.u32 + 60, ctx.r9.u8);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r8,61(r4)
	PPC_STORE_U8(ctx.r4.u32 + 61, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162C48"))) PPC_WEAK_FUNC(sub_83162C48);
PPC_FUNC_IMPL(__imp__sub_83162C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// lbz r5,3(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r3,2(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// sth r9,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r9.u16);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r8,r9,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r7,r8,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r6,r7,r3
	ctx.r6.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r10,r3,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r3,r5,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 | ctx.r8.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r9,r7
	ctx.r8.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r3,6(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// or r5,r6,r3
	ctx.r5.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwinm r3,r5,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r3,r10
	r11.u64 = ctx.r3.u64 | ctx.r10.u64;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162D38"))) PPC_WEAK_FUNC(sub_83162D38);
PPC_FUNC_IMPL(__imp__sub_83162D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r7.u16);
	// extsh r3,r5
	ctx.r3.s64 = ctx.r5.s16;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x83162d74
	if (!cr6.gt) goto loc_83162D74;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_83162D74:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r10,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83162d9c
	if (!cr6.gt) goto loc_83162D9C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r10.u8);
loc_83162D9C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r10,6(r4)
	PPC_STORE_U8(ctx.r4.u32 + 6, ctx.r10.u8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83162dc4
	if (!cr6.gt) goto loc_83162DC4;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,7(r4)
	PPC_STORE_U8(ctx.r4.u32 + 7, ctx.r10.u8);
loc_83162DC4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// stb r10,8(r4)
	PPC_STORE_U8(ctx.r4.u32 + 8, ctx.r10.u8);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83162dec
	if (!cr6.gt) goto loc_83162DEC;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,9(r4)
	PPC_STORE_U8(ctx.r4.u32 + 9, ctx.r10.u8);
loc_83162DEC:
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r10,10(r4)
	PPC_STORE_U8(ctx.r4.u32 + 10, ctx.r10.u8);
	// blelr cr6
	if (!cr6.gt) return;
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r11,11(r4)
	PPC_STORE_U8(ctx.r4.u32 + 11, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83162E10"))) PPC_WEAK_FUNC(sub_83162E10);
PPC_FUNC_IMPL(__imp__sub_83162E10) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83162e30
	if (cr6.eq) goto loc_83162E30;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_83162E30:
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// bge cr6,0x83162e44
	if (!cr6.lt) goto loc_83162E44;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83162E44:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r6,32768
	cr6.compare<uint32_t>(ctx.r6.u32, 32768, xer);
	// beq cr6,0x83162e70
	if (cr6.eq) goto loc_83162E70;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83162E70:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r29,r11,2
	r29.s64 = r11.s64 + 2;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// beq cr6,0x83162e90
	if (cr6.eq) goto loc_83162E90;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_83162E90:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83162fb0
	if (cr6.eq) goto loc_83162FB0;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x83162eb0
	if (!cr6.lt) goto loc_83162EB0;
loc_83162EA4:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83162EB0:
	// addi r30,r11,-6
	r30.s64 = r11.s64 + -6;
	// cmpwi cr6,r30,16
	cr6.compare<int32_t>(r30.s32, 16, xer);
	// blt cr6,0x83162ea4
	if (cr6.lt) goto loc_83162EA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83162b90
	sub_83162B90(ctx, base);
	// lbz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 60);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// addi r28,r30,-16
	r28.s64 = r30.s64 + -16;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x83162ee4
	if (!cr6.eq) goto loc_83162EE4;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r28,r28,-12
	r28.s64 = r28.s64 + -12;
loc_83162EE4:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x83162fb0
	if (cr6.lt) goto loc_83162FB0;
	// lbz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// sth r6,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r6.u16);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r28,r4
	cr6.compare<int32_t>(r28.s32, ctx.r4.s32, xer);
	// blt cr6,0x83162fb0
	if (cr6.lt) goto loc_83162FB0;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83162f50
	if (!cr6.gt) goto loc_83162F50;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
loc_83162F30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83162c48
	sub_83162C48(ctx, base);
	// lhz r11,14(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x83162f30
	if (cr6.lt) goto loc_83162F30;
loc_83162F50:
	// lhz r11,14(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r7,r28
	r29.s64 = r28.s64 - ctx.r7.s64;
	// ble cr6,0x83162fb0
	if (!cr6.gt) goto loc_83162FB0;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
loc_83162F80:
	// cmpwi cr6,r29,12
	cr6.compare<int32_t>(r29.s32, 12, xer);
	// blt cr6,0x83162fb0
	if (cr6.lt) goto loc_83162FB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83162d38
	sub_83162D38(ctx, base);
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,-12
	r29.s64 = r29.s64 + -12;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// blt cr6,0x83162f80
	if (cr6.lt) goto loc_83162F80;
loc_83162FB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83162FC0"))) PPC_WEAK_FUNC(sub_83162FC0);
PPC_FUNC_IMPL(__imp__sub_83162FC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,52
	cr6.compare<int32_t>(ctx.r5.s32, 52, xer);
	// bge cr6,0x83162fe4
	if (!cr6.lt) goto loc_83162FE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83162FE4:
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// li r5,44
	ctx.r5.s64 = 44;
	// rlwinm r29,r11,0,0,28
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r6,r28,r3
	ctx.r6.u64 = r28.u64 + ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r30.u32);
	// srawi r4,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// stw r6,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r6.u32);
	// stw r30,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r30.u32);
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// stw r30,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r30.u32);
	// stw r30,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r30.u32);
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83163078"))) PPC_WEAK_FUNC(sub_83163078);
PPC_FUNC_IMPL(__imp__sub_83163078) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8316310c
	if (cr6.eq) goto loc_8316310C;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r7,r28,r3
	ctx.r7.u64 = r28.u64 + ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// srawi r5,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
loc_8316310C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83163118"))) PPC_WEAK_FUNC(sub_83163118);
PPC_FUNC_IMPL(__imp__sub_83163118) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83163168
	if (!cr6.eq) goto loc_83163168;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83163168
	if (!cr6.eq) goto loc_83163168;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8316316c
	if (cr6.eq) goto loc_8316316C;
loc_83163168:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8316316C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163180"))) PPC_WEAK_FUNC(sub_83163180);
PPC_FUNC_IMPL(__imp__sub_83163180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x831631a4
	if (!cr6.eq) goto loc_831631A4;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x831631a0
	if (cr6.eq) goto loc_831631A0;
	// li r11,2
	r11.s64 = 2;
loc_831631A0:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
loc_831631A4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831631c8
	if (!cr6.eq) goto loc_831631C8;
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r10,30
	ctx.r10.s64 = 30;
	// lwz r11,-30564(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30564);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// b 0x831631d0
	goto loc_831631D0;
loc_831631C8:
	// li r11,32
	r11.s64 = 32;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
loc_831631D0:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83163200
	if (!cr6.eq) goto loc_83163200;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,27112
	ctx.r7.s64 = ctx.r8.s64 + 27112;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r5,r7
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// b 0x83163204
	goto loc_83163204;
loc_83163200:
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
loc_83163204:
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-31947
	ctx.r9.s64 = -2093678592;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r9,26720
	ctx.r8.s64 = ctx.r9.s64 + 26720;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163238"))) PPC_WEAK_FUNC(sub_83163238);
PPC_FUNC_IMPL(__imp__sub_83163238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1434
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r7,r5,128
	ctx.r7.s64 = ctx.r5.s64 + 128;
	// addi r31,r5,132
	r31.s64 = ctx.r5.s64 + 132;
	// addi r30,r5,252
	r30.s64 = ctx.r5.s64 + 252;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_83163264:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f1,f9,f8,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f10,f7,f5,f1
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f1.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f5,f4,f3,f10
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f10.f64));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f5,f2,f0,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * f0.f64 + ctx.f5.f64));
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f31,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f30,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f13,f13,f12,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f5.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f29,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f29.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f28,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f28.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f13,f11,f9,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f8,f7,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f13.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f6,f4,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f6,f3,f1,f7
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f4,f10,f2,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f6.f64));
	// fmadds f3,f0,f31,f4
	ctx.f3.f64 = double(float(f0.f64 * f31.f64 + ctx.f4.f64));
	// fmadds f2,f30,f12,f3
	ctx.f2.f64 = double(float(f30.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fmadds f1,f5,f29,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * f29.f64 + ctx.f2.f64));
	// fmadds f0,f28,f11,f1
	f0.f64 = double(float(f28.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fmadds f12,f9,f13,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + f0.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f3,f9,f7,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f8.f64));
	// lfs f4,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f12,f6,f5,f3
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f3.f64));
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f7,f4,f2,f12
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f12.f64));
	// lfs f8,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f2,f1,f0,f7
	ctx.f2.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f7.f64));
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// fmadds f2,f13,f11,f2
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f2.f64));
	// lfs f7,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f31,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfs f30,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// lfs f29,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f28,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmadds f10,f10,f9,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f2.f64));
	// lfs f27,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmadds f9,f8,f6,f10
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f5,f4,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f3,f1,f8
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f8.f64));
	// fmadds f5,f0,f12,f6
	ctx.f5.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f30,f11,f4
	ctx.f3.f64 = double(float(f30.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f2,f29,f31,f3
	ctx.f2.f64 = double(float(f29.f64 * f31.f64 + ctx.f3.f64));
	// fmadds f1,f28,f27,f2
	ctx.f1.f64 = double(float(f28.f64 * f27.f64 + ctx.f2.f64));
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fneg f0,f1
	f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,0(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bne 0x83163264
	if (!cr0.eq) goto loc_83163264;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r29,4224
	ctx.r10.s64 = r29.s64 + 4224;
	// lfs f0,2240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 64, temp.u32);
loc_83163504:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f6,f11,f9,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f12.f64));
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f1,f10,f7,f6
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f10,f8,f4,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f1.f64));
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f5,f5,f2,f10
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f10.f64));
	// lfs f4,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f1,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f5,f3,f13,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f31,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f30,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f0,f11,f5
	ctx.f11.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f5.f64));
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f29,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f29.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f28,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f28.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f12,f12,f8,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f11.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f6,f9,f6,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f2,f7,f2,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f6.f64));
	// fmadds f12,f4,f10,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f2.f64));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f10,f1,f13,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f9,f3,f30,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * f30.f64 + ctx.f10.f64));
	// fmadds f7,f31,f0,f9
	ctx.f7.f64 = double(float(f31.f64 * f0.f64 + ctx.f9.f64));
	// fmadds f6,f5,f28,f7
	ctx.f6.f64 = double(float(ctx.f5.f64 * f28.f64 + ctx.f7.f64));
	// fmadds f5,f29,f8,f6
	ctx.f5.f64 = double(float(f29.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f3,f11,f4,f5
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f5.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f1,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f13,f1,f2,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f3.f64));
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f8,f12,f0,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f3,f10,f11,f8
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f8.f64));
	// lfs f4,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f1,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f12,f7,f9,f3
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f3.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f6,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// fmadds f7,f2,f4,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f7.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lfs f4,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f2,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f30,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f29,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f29.f64 = double(temp.f32);
	// lfs f28,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f28.f64 = double(temp.f32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f27.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f7
	ctx.f1.f64 = double(float(f0.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmadds f0,f11,f13,f1
	f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f1.f64));
	// fmadds f13,f9,f10,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + f0.f64));
	// fmadds f11,f6,f8,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f10,f3,f5,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f11.f64));
	// fmadds f9,f4,f12,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f8,f30,f2,f9
	ctx.f8.f64 = double(float(f30.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f7,f29,f31,f8
	ctx.f7.f64 = double(float(f29.f64 * f31.f64 + ctx.f8.f64));
	// fmadds f6,f28,f27,f7
	ctx.f6.f64 = double(float(f28.f64 * f27.f64 + ctx.f7.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bne 0x83163504
	if (!cr0.eq) goto loc_83163504;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f5,f10,f8
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f2,f9,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f7,f4,f10
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f4,f3,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f7,f0,f1
	ctx.f7.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f0,f12,f7
	f0.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + f0.f64));
	// fadds f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fadds f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fadds f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f0,f13,f2
	f0.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 + f0.f64));
	// fadds f10,f4,f13
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// fadds f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fadds f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f5,f31,f6
	ctx.f5.f64 = double(float(f31.f64 + ctx.f6.f64));
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f2,f3
	f0.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fadds f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fadds f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,192(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 192, temp.u32);
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x831b1480
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83163910"))) PPC_WEAK_FUNC(sub_83163910);
PPC_FUNC_IMPL(__imp__sub_83163910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83163930:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83163930
	if (!cr0.eq) goto loc_83163930;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163A98"))) PPC_WEAK_FUNC(sub_83163A98);
PPC_FUNC_IMPL(__imp__sub_83163A98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83163AB8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,-3584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3584);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83163ab8
	if (!cr0.eq) goto loc_83163AB8;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163C20"))) PPC_WEAK_FUNC(sub_83163C20);
PPC_FUNC_IMPL(__imp__sub_83163C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83163C40:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,-3968(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3968);
	f26.f64 = double(temp.f32);
	// lfs f25,-3584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3584);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83163c40
	if (!cr0.eq) goto loc_83163C40;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163DA8"))) PPC_WEAK_FUNC(sub_83163DA8);
PPC_FUNC_IMPL(__imp__sub_83163DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83163DC8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,-3712
	r11.s64 = ctx.r8.s64 + -3712;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83163dc8
	if (!cr0.eq) goto loc_83163DC8;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83163F30"))) PPC_WEAK_FUNC(sub_83163F30);
PPC_FUNC_IMPL(__imp__sub_83163F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_83163F50:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,-3968
	ctx.r8.s64 = ctx.r8.s64 + -3968;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x83163f50
	if (!cr0.eq) goto loc_83163F50;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831640B8"))) PPC_WEAK_FUNC(sub_831640B8);
PPC_FUNC_IMPL(__imp__sub_831640B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
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
	// bl 0x831b142c
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,-3772(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -3772);
	f0.f64 = double(temp.f32);
loc_831640D8:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r7,384
	ctx.r8.s64 = ctx.r7.s64 + 384;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,384(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 384);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f4,f9,f12,f10
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f12,f7,f8,f4
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f5,f6,f12
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r8,r8,384
	ctx.r8.s64 = ctx.r8.s64 + 384;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// fmadds f7,f2,f3,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f7.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,-3712
	ctx.r8.s64 = ctx.r8.s64 + -3712;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f30,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// fmadds f1,f13,f1,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r8,384
	r11.s64 = ctx.r8.s64 + 384;
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// lfs f29,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lfs f27,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// lfs f26,128(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 128);
	f26.f64 = double(temp.f32);
	// lfs f25,512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 512);
	f25.f64 = double(temp.f32);
	// fmadds f1,f10,f11,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f1.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f8,f9,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fmadds f9,f5,f6,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f10.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f6,f2,f3,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f5,f30,f31,f6
	ctx.f5.f64 = double(float(f30.f64 * f31.f64 + ctx.f6.f64));
	// fmadds f4,f7,f13,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fmadds f3,f27,f29,f4
	ctx.f3.f64 = double(float(f27.f64 * f29.f64 + ctx.f4.f64));
	// fmadds f2,f26,f28,f3
	ctx.f2.f64 = double(float(f26.f64 * f28.f64 + ctx.f3.f64));
	// fmadds f1,f25,f11,f2
	ctx.f1.f64 = double(float(f25.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x831640d8
	if (!cr0.eq) goto loc_831640D8;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1478
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

