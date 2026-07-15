#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8317D4E0"))) PPC_WEAK_FUNC(sub_8317D4E0);
PPC_FUNC_IMPL(__imp__sub_8317D4E0) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
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

__attribute__((alias("__imp__sub_8317D528"))) PPC_WEAK_FUNC(sub_8317D528);
PPC_FUNC_IMPL(__imp__sub_8317D528) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r27,1
	r27.s64 = 1;
	// addi r29,r11,-23608
	r29.s64 = r11.s64 + -23608;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r29,-40
	r30.s64 = r29.s64 + -40;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8317D54C:
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8317d588
	if (cr6.eq) goto loc_8317D588;
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
	// addi r11,r29,256
	r11.s64 = r29.s64 + 256;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8317d54c
	if (cr6.lt) goto loc_8317D54C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8317D588:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8317d5ac
	if (!cr6.gt) goto loc_8317D5AC;
	// addi r31,r29,-40
	r31.s64 = r29.s64 + -40;
loc_8317D594:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83137878
	sub_83137878(ctx, base);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8317d594
	if (!cr6.eq) goto loc_8317D594;
loc_8317D5AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8317D5B8"))) PPC_WEAK_FUNC(sub_8317D5B8);
PPC_FUNC_IMPL(__imp__sub_8317D5B8) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-23648
	r30.s64 = r11.s64 + -23648;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8317D5D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d5e8
	if (cr6.eq) goto loc_8317D5E8;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8317D5E8:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8317d5d4
	if (cr6.lt) goto loc_8317D5D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317D608"))) PPC_WEAK_FUNC(sub_8317D608);
PPC_FUNC_IMPL(__imp__sub_8317D608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1340(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1340);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x83137908
	sub_83137908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D620"))) PPC_WEAK_FUNC(sub_8317D620);
PPC_FUNC_IMPL(__imp__sub_8317D620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D628"))) PPC_WEAK_FUNC(sub_8317D628);
PPC_FUNC_IMPL(__imp__sub_8317D628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1340(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1340);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x831379a0
	sub_831379A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317D640"))) PPC_WEAK_FUNC(sub_8317D640);
PPC_FUNC_IMPL(__imp__sub_8317D640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D648"))) PPC_WEAK_FUNC(sub_8317D648);
PPC_FUNC_IMPL(__imp__sub_8317D648) {
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
	// lwz r31,40(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r29,44(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r30,48(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bgt cr6,0x8317d690
	if (cr6.gt) goto loc_8317D690;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x8317d690
	if (cr6.gt) goto loc_8317D690;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8317d690
	if (!cr6.eq) goto loc_8317D690;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8317D690:
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(r31.s32, 2, xer);
	// bgt cr6,0x8317d6b0
	if (cr6.gt) goto loc_8317D6B0;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// ble cr6,0x8317d6b0
	if (!cr6.gt) goto loc_8317D6B0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19020
	ctx.r3.s64 = r11.s64 + -19020;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8317D6B0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8317c978
	sub_8317C978(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// bge cr6,0x8317d6d4
	if (!cr6.lt) goto loc_8317D6D4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-19056
	ctx.r3.s64 = r11.s64 + -19056;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8317D6D4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8317d70c
	if (!cr6.gt) goto loc_8317D70C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r29,r11,-19092
	r29.s64 = r11.s64 + -19092;
loc_8317D6E4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317d6fc
	if (!cr6.eq) goto loc_8317D6FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_8317D6FC:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8317d6e4
	if (!cr6.eq) goto loc_8317D6E4;
loc_8317D70C:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8317D718"))) PPC_WEAK_FUNC(sub_8317D718);
PPC_FUNC_IMPL(__imp__sub_8317D718) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8317d85c
	if (cr6.eq) goto loc_8317D85C;
	// bl 0x8317d608
	sub_8317D608(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83186350
	sub_83186350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ebe8
	sub_8317EBE8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x83186350
	sub_83186350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f9c0
	sub_8317F9C0(ctx, base);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d774
	if (cr6.eq) goto loc_8317D774;
	// bl 0x8317f560
	sub_8317F560(ctx, base);
loc_8317D774:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d784
	if (cr6.eq) goto loc_8317D784;
	// bl 0x8313e568
	sub_8313E568(ctx, base);
loc_8317D784:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d794
	if (cr6.eq) goto loc_8317D794;
	// bl 0x83183d68
	sub_83183D68(ctx, base);
loc_8317D794:
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d7b0
	if (cr6.eq) goto loc_8317D7B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317D7B0:
	// lwz r3,1140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d7cc
	if (cr6.eq) goto loc_8317D7CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317D7CC:
	// lwz r3,1268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d7dc
	if (cr6.eq) goto loc_8317D7DC;
	// bl 0x82dfd900
	sub_82DFD900(ctx, base);
loc_8317D7DC:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317d7ec
	if (cr6.eq) goto loc_8317D7EC;
	// bl 0x8317ce28
	sub_8317CE28(ctx, base);
loc_8317D7EC:
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x8317bcb0
	sub_8317BCB0(ctx, base);
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x8317bcb0
	sub_8317BCB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831902d0
	sub_831902D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831901c8
	sub_831901C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317d820
	if (cr6.eq) goto loc_8317D820;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18984
	ctx.r3.s64 = r11.s64 + -18984;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317D820:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x8317d628
	sub_8317D628(ctx, base);
	// lwz r3,1340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1340);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// lwz r30,1340(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1340);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8317d85c
	if (cr6.lt) goto loc_8317D85C;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,1340(r31)
	PPC_STORE_U32(r31.u32 + 1340, r30.u32);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
loc_8317D85C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317D878"))) PPC_WEAK_FUNC(sub_8317D878);
PPC_FUNC_IMPL(__imp__sub_8317D878) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8317d9a0
	if (cr6.eq) goto loc_8317D9A0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8317d9a0
	if (cr6.eq) goto loc_8317D9A0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8317D8B0:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8317d8b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8317D8B0;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x8317d8ec
	if (cr6.gt) goto loc_8317D8EC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18920
	ctx.r3.s64 = r11.s64 + -18920;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b7c
	return;
loc_8317D8EC:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83192438
	sub_83192438(ctx, base);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8317d980
	if (!cr6.eq) goto loc_8317D980;
	// lbz r11,145(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8317d980
	if (!cr6.eq) goto loc_8317D980;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8317d3f8
	sub_8317D3F8(ctx, base);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lbz r11,184(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 184);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// bl 0x83180ce0
	sub_83180CE0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8317d448
	sub_8317D448(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b7c
	return;
loc_8317D980:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b7c
	return;
loc_8317D9A0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18960
	ctx.r3.s64 = r11.s64 + -18960;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317D9B8"))) PPC_WEAK_FUNC(sub_8317D9B8);
PPC_FUNC_IMPL(__imp__sub_8317D9B8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x8317d9e0
	if (!cr6.lt) goto loc_8317D9E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8317D9E0:
	// lwz r11,1152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317d9fc
	if (cr6.eq) goto loc_8317D9FC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317d460
	sub_8317D460(ctx, base);
	// b 0x8317da04
	goto loc_8317DA04;
loc_8317D9FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317d498
	sub_8317D498(ctx, base);
loc_8317DA04:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r11,r31,31
	r11.s64 = r31.s64 + 31;
	// stw r31,1176(r30)
	PPC_STORE_U32(r30.u32 + 1176, r31.u32);
	// rlwinm r3,r11,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r3,1180(r30)
	PPC_STORE_U32(r30.u32 + 1180, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317DA30"))) PPC_WEAK_FUNC(sub_8317DA30);
PPC_FUNC_IMPL(__imp__sub_8317DA30) {
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
	// lwz r11,1172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1172);
	// lwz r30,1176(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1176);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8317da60
	if (cr6.gt) goto loc_8317DA60;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8317da6c
	if (!cr6.eq) goto loc_8317DA6C;
loc_8317DA60:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18880
	ctx.r3.s64 = r11.s64 + -18880;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317DA6C:
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317da80
	if (!cr6.eq) goto loc_8317DA80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317d4e0
	sub_8317D4E0(ctx, base);
loc_8317DA80:
	// li r11,0
	r11.s64 = 0;
	// stw r11,1176(r31)
	PPC_STORE_U32(r31.u32 + 1176, r11.u32);
	// stw r11,1180(r31)
	PPC_STORE_U32(r31.u32 + 1180, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317DAA8"))) PPC_WEAK_FUNC(sub_8317DAA8);
PPC_FUNC_IMPL(__imp__sub_8317DAA8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8317d648
	sub_8317D648(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317dae0
	if (!cr6.eq) goto loc_8317DAE0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8317DAE0:
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c800
	sub_8317C800(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8317c840
	sub_8317C840(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// srawi r9,r9,7
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r8,1
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	ctx.r7.s64 = r11.s32 >> 7;
	// mullw r11,r9,r8
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,9,0,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,256
	r11.s64 = r11.s64 + 256;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317DB88"))) PPC_WEAK_FUNC(sub_8317DB88);
PPC_FUNC_IMPL(__imp__sub_8317DB88) {
	PPC_FUNC_PROLOGUE();
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
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8317c6e0
	sub_8317C6E0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317daa8
	sub_8317DAA8(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c8e8
	sub_8317C8E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c8c8
	sub_8317C8C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c8d8
	sub_8317C8D8(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x8318bb10
	sub_8318BB10(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8317c918
	sub_8317C918(ctx, base);
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,192
	ctx.r3.s64 = r11.s64 + 192;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317DC68"))) PPC_WEAK_FUNC(sub_8317DC68);
PPC_FUNC_IMPL(__imp__sub_8317DC68) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8317dc94
	if (!cr6.eq) goto loc_8317DC94;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18716
	ctx.r3.s64 = r11.s64 + -18716;
	// b 0x8317dce8
	goto loc_8317DCE8;
loc_8317DC94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x8317dce0
	if (cr6.eq) goto loc_8317DCE0;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8317dce0
	if (cr6.eq) goto loc_8317DCE0;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x8317dcd4
	if (cr6.eq) goto loc_8317DCD4;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x8317dcd4
	if (cr6.eq) goto loc_8317DCD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317db88
	sub_8317DB88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c920
	sub_8317C920(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// b 0x8317dcf0
	goto loc_8317DCF0;
loc_8317DCD4:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18768
	ctx.r3.s64 = r11.s64 + -18768;
	// b 0x8317dce8
	goto loc_8317DCE8;
loc_8317DCE0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18820
	ctx.r3.s64 = r11.s64 + -18820;
loc_8317DCE8:
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317DCF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317DD08"))) PPC_WEAK_FUNC(sub_8317DD08);
PPC_FUNC_IMPL(__imp__sub_8317DD08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r18,0
	r18.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r25,16(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r21,0(r30)
	r21.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x8317c8c8
	sub_8317C8C8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r25,2
	ctx.r3.s64 = r25.s64 + 2;
	// bl 0x8318bb10
	sub_8318BB10(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317c8d8
	sub_8317C8D8(ctx, base);
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r31,r11,-23656
	r31.s64 = r11.s64 + -23656;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r9,r31,460
	ctx.r9.s64 = r31.s64 + 460;
	// addi r8,r31,316
	ctx.r8.s64 = r31.s64 + 316;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r15.u32);
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// addi r5,r31,308
	ctx.r5.s64 = r31.s64 + 308;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8317c6e0
	sub_8317C6E0(ctx, base);
	// addi r5,r31,44
	ctx.r5.s64 = r31.s64 + 44;
	// addi r4,r31,312
	ctx.r4.s64 = r31.s64 + 312;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317daa8
	sub_8317DAA8(ctx, base);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317c8e8
	sub_8317C8E8(ctx, base);
	// bl 0x8317c918
	sub_8317C918(ctx, base);
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r27,r11,128
	r27.s64 = r11.s64 + 128;
	// bl 0x8317d9b8
	sub_8317D9B8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addi r4,r11,64
	ctx.r4.s64 = r11.s64 + 64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317cac0
	sub_8317CAC0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8317de68
	if (cr6.eq) goto loc_8317DE68;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r11,2
	ctx.r5.s64 = r11.s64 + 2;
	// bl 0x8318bb20
	sub_8318BB20(ctx, base);
	// bl 0x8318bbc0
	sub_8318BBC0(ctx, base);
	// lwz r18,20(r3)
	r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x8317de68
	if (cr6.eq) goto loc_8317DE68;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317cbe8
	sub_8317CBE8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_8317DE68:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8317cd30
	sub_8317CD30(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r17,1
	cr6.compare<int32_t>(r17.s32, 1, xer);
	// bne cr6,0x8317dea0
	if (!cr6.eq) goto loc_8317DEA0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,316(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,460(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 460);
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x8317dea8
	goto loc_8317DEA8;
loc_8317DEA0:
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_8317DEA8:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// addi r11,r3,31
	r11.s64 = ctx.r3.s64 + 31;
	// lwz r14,88(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831901d0
	sub_831901D0(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x8317e1dc
	if (!cr6.eq) goto loc_8317E1DC;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x8317e1dc
	if (!cr6.eq) goto loc_8317E1DC;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// lwz r20,88(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// lwz r19,96(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8317e1dc
	if (cr6.eq) goto loc_8317E1DC;
	// cmpwi cr6,r17,1
	cr6.compare<int32_t>(r17.s32, 1, xer);
	// bne cr6,0x8317df88
	if (!cr6.eq) goto loc_8317DF88;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8317df7c
	if (cr6.eq) goto loc_8317DF7C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x8317df88
	if (!cr6.eq) goto loc_8317DF88;
loc_8317DF7C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18516
	ctx.r3.s64 = r11.s64 + -18516;
	// b 0x8317e1e4
	goto loc_8317E1E4;
loc_8317DF88:
	// addi r11,r22,63
	r11.s64 = r22.s64 + 63;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// rlwinm r27,r11,0,0,25
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r27.u32);
	// bl 0x8317c800
	sub_8317C800(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// li r23,0
	r23.s64 = 0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r28,r11,-9208
	r28.s64 = r11.s64 + -9208;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// stw r11,68(r28)
	PPC_STORE_U32(r28.u32 + 68, r11.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r26,180(r28)
	PPC_STORE_U32(r28.u32 + 180, r26.u32);
	// lwz r26,268(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// stw r24,196(r28)
	PPC_STORE_U32(r28.u32 + 196, r24.u32);
	// stw r11,72(r28)
	PPC_STORE_U32(r28.u32 + 72, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,76(r28)
	PPC_STORE_U32(r28.u32 + 76, r11.u32);
	// stw r10,80(r28)
	PPC_STORE_U32(r28.u32 + 80, ctx.r10.u32);
	// stw r9,84(r28)
	PPC_STORE_U32(r28.u32 + 84, ctx.r9.u32);
	// stw r11,88(r28)
	PPC_STORE_U32(r28.u32 + 88, r11.u32);
	// mr r11,r23
	r11.u64 = r23.u64;
	// stw r10,92(r28)
	PPC_STORE_U32(r28.u32 + 92, ctx.r10.u32);
	// stw r25,96(r28)
	PPC_STORE_U32(r28.u32 + 96, r25.u32);
	// stw r11,100(r28)
	PPC_STORE_U32(r28.u32 + 100, r11.u32);
	// beq cr6,0x8317e048
	if (cr6.eq) goto loc_8317E048;
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(r21.s32, 2, xer);
	// beq cr6,0x8317e020
	if (cr6.eq) goto loc_8317E020;
	// cmpwi cr6,r21,3
	cr6.compare<int32_t>(r21.s32, 3, xer);
	// bne cr6,0x8317e06c
	if (!cr6.eq) goto loc_8317E06C;
	// addi r4,r28,200
	ctx.r4.s64 = r28.s64 + 200;
	// b 0x8317e04c
	goto loc_8317E04C;
loc_8317E020:
	// addi r4,r28,104
	ctx.r4.s64 = r28.s64 + 104;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r27,1112(r29)
	PPC_STORE_U32(r29.u32 + 1112, r27.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// stw r10,1120(r29)
	PPC_STORE_U32(r29.u32 + 1120, ctx.r10.u32);
	// b 0x8317e068
	goto loc_8317E068;
loc_8317E048:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8317E04C:
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stw r27,1112(r29)
	PPC_STORE_U32(r29.u32 + 1112, r27.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r26,1120(r29)
	PPC_STORE_U32(r29.u32 + 1120, r26.u32);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
loc_8317E068:
	// stw r11,1116(r29)
	PPC_STORE_U32(r29.u32 + 1116, r11.u32);
loc_8317E06C:
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r26.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317e090
	if (cr6.eq) goto loc_8317E090;
	// divw r10,r11,r26
	ctx.r10.s32 = r11.s32 / r26.s32;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
loc_8317E090:
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x8317c840
	sub_8317C840(ctx, base);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r28,68
	ctx.r3.s64 = r28.s64 + 68;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r16.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r25.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r15,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r15.u32);
	// stw r14,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r14.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// bl 0x83190380
	sub_83190380(ctx, base);
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// beq cr6,0x8317e0f8
	if (cr6.eq) goto loc_8317E0F8;
	// cmpwi cr6,r21,9
	cr6.compare<int32_t>(r21.s32, 9, xer);
	// bne cr6,0x8317e100
	if (!cr6.eq) goto loc_8317E100;
loc_8317E0F8:
	// addi r3,r28,172
	ctx.r3.s64 = r28.s64 + 172;
	// bl 0x8318e398
	sub_8318E398(ctx, base);
loc_8317E100:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8318d450
	sub_8318D450(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8317e138
	if (!cr6.eq) goto loc_8317E138;
	// li r3,-305
	ctx.r3.s64 = -305;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18560
	ctx.r3.s64 = r11.s64 + -18560;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b40
	return;
loc_8317E138:
	// lis r11,-31976
	r11.s64 = -2095579136;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,-16424
	ctx.r4.s64 = r11.s64 + -16424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318ffa8
	sub_8318FFA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317e174
	if (cr6.eq) goto loc_8317E174;
	// li r3,-303
	ctx.r3.s64 = -303;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18600
	ctx.r3.s64 = r11.s64 + -18600;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b40
	return;
loc_8317E174:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8317c6c0
	sub_8317C6C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1268(r29)
	PPC_STORE_U32(r29.u32 + 1268, ctx.r3.u32);
	// bne cr6,0x8317e1a4
	if (!cr6.eq) goto loc_8317E1A4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18640
	ctx.r3.s64 = r11.s64 + -18640;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b40
	return;
loc_8317E1A4:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,1080(r29)
	PPC_STORE_U32(r29.u32 + 1080, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,1084(r29)
	PPC_STORE_U32(r29.u32 + 1084, r11.u32);
	// bl 0x8317cd80
	sub_8317CD80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r23,1272(r29)
	PPC_STORE_U32(r29.u32 + 1272, r23.u32);
	// stw r23,1336(r29)
	PPC_STORE_U32(r29.u32 + 1336, r23.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b40
	return;
loc_8317E1DC:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18668
	ctx.r3.s64 = r11.s64 + -18668;
loc_8317E1E4:
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831902d0
	sub_831902D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_8317E200"))) PPC_WEAK_FUNC(sub_8317E200);
PPC_FUNC_IMPL(__imp__sub_8317E200) {
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
	// lis r29,-31930
	r29.s64 = -2092564480;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-14176
	r30.s64 = r11.s64 + -14176;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317e240
	if (cr6.eq) goto loc_8317E240;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317E240:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317d718
	sub_8317D718(ctx, base);
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317e268
	if (cr6.eq) goto loc_8317E268;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317E268:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317E270"))) PPC_WEAK_FUNC(sub_8317E270);
PPC_FUNC_IMPL(__imp__sub_8317E270) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8317e2a0
	if (!cr6.eq) goto loc_8317E2A0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18168
	ctx.r3.s64 = r11.s64 + -18168;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E2A0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8317d118
	sub_8317D118(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317e648
	if (!cr6.eq) goto loc_8317E648;
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r26,108
	r11.s64 = r26.s64 + 108;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8317E2C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8317e2e4
	if (!cr6.eq) goto loc_8317E2E4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,1344
	r11.s64 = r11.s64 + 1344;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// blt cr6,0x8317e2c4
	if (cr6.lt) goto loc_8317E2C4;
loc_8317E2E4:
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// bne cr6,0x8317e30c
	if (!cr6.eq) goto loc_8317E30C;
	// li r3,-11
	ctx.r3.s64 = -11;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18248
	ctx.r3.s64 = r11.s64 + -18248;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E30C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8317d060
	sub_8317D060(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8317e334
	if (!cr6.eq) goto loc_8317E334;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18312
	ctx.r3.s64 = r11.s64 + -18312;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E334:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// rlwinm r24,r29,2,0,29
	r24.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,-23648
	r25.s64 = r11.s64 + -23648;
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// bl 0x83137908
	sub_83137908(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8317e648
	if (cr6.lt) goto loc_8317E648;
	// li r5,1344
	ctx.r5.s64 = 1344;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317d0c0
	sub_8317D0C0(ctx, base);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// li r5,60
	ctx.r5.s64 = 60;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8317d648
	sub_8317D648(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317e39c
	if (!cr6.eq) goto loc_8317E39C;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8317E39C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317dd08
	sub_8317DD08(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r28.u32);
	// bne cr6,0x8317e3d8
	if (!cr6.eq) goto loc_8317E3D8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18348
	ctx.r3.s64 = r11.s64 + -18348;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317E3C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e200
	sub_8317E200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E3D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317cd98
	sub_8317CD98(ctx, base);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8317c6e0
	sub_8317C6E0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,12(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// bl 0x8317ce68
	sub_8317CE68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317d050
	sub_8317D050(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1108(r31)
	PPC_STORE_U32(r31.u32 + 1108, ctx.r3.u32);
	// bne cr6,0x8317e448
	if (!cr6.eq) goto loc_8317E448;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18384
	ctx.r3.s64 = r11.s64 + -18384;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e200
	sub_8317E200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E448:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8313c358
	sub_8313C358(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,1140(r31)
	PPC_STORE_U32(r31.u32 + 1140, ctx.r3.u32);
	// bne cr6,0x8317e480
	if (!cr6.eq) goto loc_8317E480;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18420
	ctx.r3.s64 = r11.s64 + -18420;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e200
	sub_8317E200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E480:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,1
	r29.s64 = 1;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x83181f00
	sub_83181F00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317e4c8
	if (cr6.eq) goto loc_8317E4C8;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x8317e4d0
	goto loc_8317E4D0;
loc_8317E4C8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8317E4D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r29.u32);
	// stb r30,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r30.u8);
	// stb r30,129(r31)
	PPC_STORE_U8(r31.u32 + 129, r30.u8);
	// stb r30,130(r31)
	PPC_STORE_U8(r31.u32 + 130, r30.u8);
	// stb r30,131(r31)
	PPC_STORE_U8(r31.u32 + 131, r30.u8);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// bl 0x83192968
	sub_83192968(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831929a0
	sub_831929A0(ctx, base);
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1108);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x83183d60
	sub_83183D60(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8317e644
	if (cr6.eq) goto loc_8317E644;
	// bl 0x8317eec0
	sub_8317EEC0(ctx, base);
	// lwz r3,1108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1108);
	// bl 0x8313e0e8
	sub_8313E0E8(ctx, base);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x8313e128
	sub_8313E128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317d160
	sub_8317D160(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8317e3c4
	if (cr6.eq) goto loc_8317E3C4;
	// lwz r6,12(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r4,192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// bl 0x8317f558
	sub_8317F558(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317e590
	if (!cr6.eq) goto loc_8317E590;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18448
	ctx.r3.s64 = r11.s64 + -18448;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e200
	sub_8317E200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E590:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// bl 0x8317f880
	sub_8317F880(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f958
	sub_8317F958(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1040(r31)
	PPC_STORE_U32(r31.u32 + 1040, r11.u32);
	// bl 0x8317f9e8
	sub_8317F9E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317e5e0
	if (cr6.eq) goto loc_8317E5E0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18488
	ctx.r3.s64 = r11.s64 + -18488;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e200
	sub_8317E200(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_8317E5E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317fa50
	sub_8317FA50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180690
	sub_83180690(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831811a8
	sub_831811A8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r30.u32);
	// stw r30,1276(r31)
	PPC_STORE_U32(r31.u32 + 1276, r30.u32);
	// stw r30,1280(r31)
	PPC_STORE_U32(r31.u32 + 1280, r30.u32);
	// stw r30,1284(r31)
	PPC_STORE_U32(r31.u32 + 1284, r30.u32);
	// stw r30,1316(r31)
	PPC_STORE_U32(r31.u32 + 1316, r30.u32);
	// stw r11,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, r11.u32);
	// stw r30,1320(r31)
	PPC_STORE_U32(r31.u32 + 1320, r30.u32);
	// stw r30,1324(r31)
	PPC_STORE_U32(r31.u32 + 1324, r30.u32);
	// stw r30,1328(r31)
	PPC_STORE_U32(r31.u32 + 1328, r30.u32);
	// stw r30,1332(r31)
	PPC_STORE_U32(r31.u32 + 1332, r30.u32);
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// stw r11,1340(r31)
	PPC_STORE_U32(r31.u32 + 1340, r11.u32);
	// lwzx r3,r24,r25
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// bl 0x831379a0
	sub_831379A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bge cr6,0x8317e64c
	if (!cr6.lt) goto loc_8317E64C;
loc_8317E644:
	// bl 0x8317e200
	sub_8317E200(ctx, base);
loc_8317E648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317E64C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8317E658"))) PPC_WEAK_FUNC(sub_8317E658);
PPC_FUNC_IMPL(__imp__sub_8317E658) {
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
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31930
	r30.s64 = -2092564480;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-21356(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r29,r11,-14392
	r29.s64 = r11.s64 + -14392;
	// beq cr6,0x8317e708
	if (cr6.eq) goto loc_8317E708;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r28,48(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r27,44(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-18124
	ctx.r4.s64 = r11.s64 + -18124;
	// lwz r26,36(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r25,32(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r24,28(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r23,24(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// bl 0x831b1630
	sub_831B1630(ctx, base);
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317e708
	if (cr6.eq) goto loc_8317E708;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317E708:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e270
	sub_8317E270(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317e738
	if (cr6.eq) goto loc_8317E738;
	// stw r31,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r31.u32);
	// addi r4,r29,108
	ctx.r4.s64 = r29.s64 + 108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317E738:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_8317E748"))) PPC_WEAK_FUNC(sub_8317E748);
PPC_FUNC_IMPL(__imp__sub_8317E748) {
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
	// bl 0x8312dae0
	sub_8312DAE0(ctx, base);
	// mulli r3,r3,1000
	ctx.r3.s64 = ctx.r3.s64 * 1000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E770"))) PPC_WEAK_FUNC(sub_8317E770);
PPC_FUNC_IMPL(__imp__sub_8317E770) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,-8936
	ctx.r3.s64 = r11.s64 + -8936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x8317b648
	sub_8317B648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f260
	sub_8317F260(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317bb30
	sub_8317BB30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317E7C8"))) PPC_WEAK_FUNC(sub_8317E7C8);
PPC_FUNC_IMPL(__imp__sub_8317E7C8) {
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
	// bl 0x8317f260
	sub_8317F260(ctx, base);
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x8317bcb0
	sub_8317BCB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E800"))) PPC_WEAK_FUNC(sub_8317E800);
PPC_FUNC_IMPL(__imp__sub_8317E800) {
	PPC_FUNC_PROLOGUE();
	// b 0x8320ca68
	sub_8320CA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E808"))) PPC_WEAK_FUNC(sub_8317E808);
PPC_FUNC_IMPL(__imp__sub_8317E808) {
	PPC_FUNC_PROLOGUE();
	// b 0x8320c4f8
	sub_8320C4F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E810"))) PPC_WEAK_FUNC(sub_8317E810);
PPC_FUNC_IMPL(__imp__sub_8317E810) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8320cb10
	sub_8320CB10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E828"))) PPC_WEAK_FUNC(sub_8317E828);
PPC_FUNC_IMPL(__imp__sub_8317E828) {
	PPC_FUNC_PROLOGUE();
	// b 0x8320c8b8
	sub_8320C8B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E830"))) PPC_WEAK_FUNC(sub_8317E830);
PPC_FUNC_IMPL(__imp__sub_8317E830) {
	PPC_FUNC_PROLOGUE();
	// b 0x8320c8f0
	sub_8320C8F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E838"))) PPC_WEAK_FUNC(sub_8317E838);
PPC_FUNC_IMPL(__imp__sub_8317E838) {
	PPC_FUNC_PROLOGUE();
	// b 0x8320c3a8
	sub_8320C3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E840"))) PPC_WEAK_FUNC(sub_8317E840);
PPC_FUNC_IMPL(__imp__sub_8317E840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8320baa0
	sub_8320BAA0(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x8317e8d0
	if (cr6.gt) goto loc_8317E8D0;
	// lis r12,-31976
	r12.s64 = -2095579136;
	// addi r12,r12,-6032
	r12.s64 = r12.s64 + -6032;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		goto loc_8317E880;
	case 1:
		goto loc_8317E894;
	case 2:
		goto loc_8317E8A8;
	case 3:
		goto loc_8317E8BC;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-6016(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -6016);
	// lwz r24,-5996(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -5996);
	// lwz r24,-5976(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -5976);
	// lwz r24,-5956(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + -5956);
loc_8317E880:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317E894:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317E8A8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317E8BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317E8D0:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E8E8"))) PPC_WEAK_FUNC(sub_8317E8E8);
PPC_FUNC_IMPL(__imp__sub_8317E8E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8320c3e0
	sub_8320C3E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E8F0"))) PPC_WEAK_FUNC(sub_8317E8F0);
PPC_FUNC_IMPL(__imp__sub_8317E8F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
loc_8317E908:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8320c478
	sub_8320C478(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// blt cr6,0x8317e908
	if (cr6.lt) goto loc_8317E908;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317E930"))) PPC_WEAK_FUNC(sub_8317E930);
PPC_FUNC_IMPL(__imp__sub_8317E930) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8320bb78
	sub_8320BB78(ctx, base);
	// bl 0x831362d8
	sub_831362D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317E958"))) PPC_WEAK_FUNC(sub_8317E958);
PPC_FUNC_IMPL(__imp__sub_8317E958) {
	PPC_FUNC_PROLOGUE();
	// b 0x8320bbf8
	sub_8320BBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317E960"))) PPC_WEAK_FUNC(sub_8317E960);
PPC_FUNC_IMPL(__imp__sub_8317E960) {
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
	// bl 0x8320baf8
	sub_8320BAF8(ctx, base);
	// bl 0x8317e748
	sub_8317E748(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8320baa0
	sub_8320BAA0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8317e9cc
	if (cr6.eq) goto loc_8317E9CC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8317e9a8
	if (cr6.lt) goto loc_8317E9A8;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
loc_8317E9A8:
	// std r28,664(r31)
	PPC_STORE_U64(r31.u32 + 664, r28.u64);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317e9fc
	if (!cr6.eq) goto loc_8317E9FC;
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317E9CC:
	// ld r11,664(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 664);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// ori r9,r10,16960
	ctx.r9.u64 = ctx.r10.u64 | 16960;
	// lwz r10,660(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// mulld r11,r11,r8
	r11.s64 = r11.s64 * ctx.r8.s64;
	// divd r11,r11,r9
	r11.s64 = r11.s64 / ctx.r9.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8317E9FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317EA08"))) PPC_WEAK_FUNC(sub_8317EA08);
PPC_FUNC_IMPL(__imp__sub_8317EA08) {
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
	// bl 0x8317b750
	sub_8317B750(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317ea40
	if (cr6.eq) goto loc_8317EA40;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-18056
	ctx.r3.s64 = r11.s64 + -18056;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8317EA40:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e770
	sub_8317E770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b750
	sub_8317B750(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8317ea88
	if (cr6.eq) goto loc_8317EA88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8320cd58
	sub_8320CD58(ctx, base);
	// lis r11,-31976
	r11.s64 = -2095579136;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-5792
	ctx.r4.s64 = r11.s64 + -5792;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c208
	sub_8317C208(ctx, base);
loc_8317EA88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317EA90"))) PPC_WEAK_FUNC(sub_8317EA90);
PPC_FUNC_IMPL(__imp__sub_8317EA90) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8317b240
	sub_8317B240(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c208
	sub_8317C208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b750
	sub_8317B750(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317ead0
	if (cr6.eq) goto loc_8317EAD0;
	// bl 0x8320cc48
	sub_8320CC48(ctx, base);
loc_8317EAD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e7c8
	sub_8317E7C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EAF0"))) PPC_WEAK_FUNC(sub_8317EAF0);
PPC_FUNC_IMPL(__imp__sub_8317EAF0) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x8318da30
	sub_8318DA30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317eb34
	if (cr6.eq) goto loc_8317EB34;
	// li r3,-311
	ctx.r3.s64 = -311;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17980
	ctx.r3.s64 = r11.s64 + -17980;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,-311
	ctx.r3.s64 = -311;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317EB34:
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

__attribute__((alias("__imp__sub_8317EB48"))) PPC_WEAK_FUNC(sub_8317EB48);
PPC_FUNC_IMPL(__imp__sub_8317EB48) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x8318c610
	sub_8318C610(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317eb8c
	if (cr6.eq) goto loc_8317EB8C;
	// li r3,-307
	ctx.r3.s64 = -307;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17952
	ctx.r3.s64 = r11.s64 + -17952;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// li r3,-307
	ctx.r3.s64 = -307;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317EB8C:
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

__attribute__((alias("__imp__sub_8317EBA0"))) PPC_WEAK_FUNC(sub_8317EBA0);
PPC_FUNC_IMPL(__imp__sub_8317EBA0) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x8318c6d0
	sub_8318C6D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317ebc8
	if (cr6.eq) goto loc_8317EBC8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17924
	ctx.r3.s64 = r11.s64 + -17924;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317EBC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EBD8"))) PPC_WEAK_FUNC(sub_8317EBD8);
PPC_FUNC_IMPL(__imp__sub_8317EBD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EBE8"))) PPC_WEAK_FUNC(sub_8317EBE8);
PPC_FUNC_IMPL(__imp__sub_8317EBE8) {
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
	// lwz r29,72(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8317ecb0
	if (cr6.eq) goto loc_8317ECB0;
	// bl 0x83186840
	sub_83186840(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// bl 0x8318d648
	sub_8318D648(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317ec38
	if (cr6.eq) goto loc_8317EC38;
	// li r3,-308
	ctx.r3.s64 = -308;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17884
	ctx.r3.s64 = r11.s64 + -17884;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317EC38:
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// bl 0x8317b978
	sub_8317B978(ctx, base);
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x8317b978
	sub_8317B978(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// stw r30,1264(r31)
	PPC_STORE_U32(r31.u32 + 1264, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317ec60
	if (cr6.eq) goto loc_8317EC60;
	// bl 0x83183dd0
	sub_83183DD0(ctx, base);
loc_8317EC60:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317ec70
	if (cr6.eq) goto loc_8317EC70;
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
loc_8317EC70:
	// lwz r11,1284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1284);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317ec98
	if (!cr6.eq) goto loc_8317EC98;
	// li r11,-1
	r11.s64 = -1;
	// stw r30,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r30.u32);
	// stw r30,1288(r31)
	PPC_STORE_U32(r31.u32 + 1288, r30.u32);
	// stw r30,1280(r31)
	PPC_STORE_U32(r31.u32 + 1280, r30.u32);
	// stw r30,1316(r31)
	PPC_STORE_U32(r31.u32 + 1316, r30.u32);
	// stw r11,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, r11.u32);
	// b 0x8317eca0
	goto loc_8317ECA0;
loc_8317EC98:
	// li r11,2
	r11.s64 = 2;
	// stw r11,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r11.u32);
loc_8317ECA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1336(r31)
	PPC_STORE_U32(r31.u32 + 1336, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181498
	sub_83181498(ctx, base);
loc_8317ECB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317ECB8"))) PPC_WEAK_FUNC(sub_8317ECB8);
PPC_FUNC_IMPL(__imp__sub_8317ECB8) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317ecf8
	if (cr6.eq) goto loc_8317ECF8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17852
	ctx.r3.s64 = r11.s64 + -17852;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8317ECF8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ebe8
	sub_8317EBE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831814b0
	sub_831814B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317ED30"))) PPC_WEAK_FUNC(sub_8317ED30);
PPC_FUNC_IMPL(__imp__sub_8317ED30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 496);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x8317ed48
	if (cr6.eq) goto loc_8317ED48;
	// blr 
	return;
loc_8317ED48:
	// lwz r10,1184(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1184);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8317ed70
	if (!cr6.eq) goto loc_8317ED70;
	// lwz r10,1212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1212);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,500(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8317ed70
	if (!cr6.eq) goto loc_8317ED70;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317ED70:
	// lwz r10,1220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1220);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,1248(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1248);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,500(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 500);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EDA0"))) PPC_WEAK_FUNC(sub_8317EDA0);
PPC_FUNC_IMPL(__imp__sub_8317EDA0) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317edd4
	if (cr6.eq) goto loc_8317EDD4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17776
	ctx.r3.s64 = r11.s64 + -17776;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8317EDD4:
	// lbz r11,130(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 130);
	// lwz r30,72(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317edf0
	if (!cr6.eq) goto loc_8317EDF0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8317eeb4
	if (cr6.eq) goto loc_8317EEB4;
loc_8317EDF0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317ee10
	if (!cr6.eq) goto loc_8317EE10;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8317ee10
	if (!cr6.eq) goto loc_8317EE10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ed30
	sub_8317ED30(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317eeb4
	if (!cr6.eq) goto loc_8317EEB4;
loc_8317EE10:
	// bl 0x8317be90
	sub_8317BE90(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317ee54
	if (!cr6.eq) goto loc_8317EE54;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317ee54
	if (!cr6.eq) goto loc_8317EE54;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181e80
	sub_83181E80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8317ee4c
	if (!cr6.eq) goto loc_8317EE4C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8317ee54
	if (!cr6.eq) goto loc_8317EE54;
loc_8317EE4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186840
	sub_83186840(ctx, base);
loc_8317EE54:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318db08
	sub_8318DB08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317ee98
	if (cr6.eq) goto loc_8317EE98;
	// li r3,-310
	ctx.r3.s64 = -310;
	// bl 0x8317bf80
	sub_8317BF80(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8317ee84
	if (!cr6.eq) goto loc_8317EE84;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,-13428
	ctx.r4.s64 = r11.s64 + -13428;
	// b 0x8317ee8c
	goto loc_8317EE8C;
loc_8317EE84:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,-13432
	ctx.r4.s64 = r11.s64 + -13432;
loc_8317EE8C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17812
	ctx.r3.s64 = r11.s64 + -17812;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317EE98:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x8317ba40
	sub_8317BA40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x8317ba40
	sub_8317BA40(ctx, base);
	// stb r29,130(r31)
	PPC_STORE_U8(r31.u32 + 130, r29.u8);
loc_8317EEB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317EEC0"))) PPC_WEAK_FUNC(sub_8317EEC0);
PPC_FUNC_IMPL(__imp__sub_8317EEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,1116(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1116);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-17736(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -17736);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8317b0b8
	sub_8317B0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EF10"))) PPC_WEAK_FUNC(sub_8317EF10);
PPC_FUNC_IMPL(__imp__sub_8317EF10) {
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
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317ef44
	if (cr6.eq) goto loc_8317EF44;
	// bl 0x83183e08
	sub_83183E08(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8317ef44
	if (!cr6.eq) goto loc_8317EF44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317eba0
	sub_8317EBA0(ctx, base);
loc_8317EF44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317EF58"))) PPC_WEAK_FUNC(sub_8317EF58);
PPC_FUNC_IMPL(__imp__sub_8317EF58) {
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
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8317EF7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8317ef7c
	if (!cr6.eq) goto loc_8317EF7C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,1084(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1084);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8317efc4
	if (!cr6.gt) goto loc_8317EFC4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17728
	ctx.r3.s64 = r11.s64 + -17728;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,1084(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1084);
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// b 0x8317efe4
	goto loc_8317EFE4;
loc_8317EFC4:
	// lwz r10,1080(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8317EFCC:
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
	// bne cr6,0x8317efcc
	if (!cr6.eq) goto loc_8317EFCC;
loc_8317EFE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F000"))) PPC_WEAK_FUNC(sub_8317F000);
PPC_FUNC_IMPL(__imp__sub_8317F000) {
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
	// bl 0x8317ef58
	sub_8317EF58(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,1096(r31)
	PPC_STORE_U32(r31.u32 + 1096, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,1100(r31)
	PPC_STORE_U32(r31.u32 + 1100, r29.u32);
	// stw r11,1092(r31)
	PPC_STORE_U32(r31.u32 + 1092, r11.u32);
	// stw r10,1088(r31)
	PPC_STORE_U32(r31.u32 + 1088, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317F040"))) PPC_WEAK_FUNC(sub_8317F040);
PPC_FUNC_IMPL(__imp__sub_8317F040) {
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
	// bl 0x83186318
	sub_83186318(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8317f074
	if (!cr6.eq) goto loc_8317F074;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8317F074:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83186238
	sub_83186238(ctx, base);
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
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F0A0"))) PPC_WEAK_FUNC(sub_8317F0A0);
PPC_FUNC_IMPL(__imp__sub_8317F0A0) {
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
	// bl 0x8317bd40
	sub_8317BD40(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,1336(r31)
	PPC_STORE_U32(r31.u32 + 1336, r28.u32);
	// bl 0x83181498
	sub_83181498(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317f14c
	if (cr6.eq) goto loc_8317F14C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317cfa8
	sub_8317CFA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317f0f8
	if (cr6.eq) goto loc_8317F0F8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17656
	ctx.r3.s64 = r11.s64 + -17656;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317F0F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317bc48
	sub_8317BC48(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317bc48
	sub_8317BC48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317fa70
	sub_8317FA70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f9e8
	sub_8317F9E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8317f13c
	if (cr6.eq) goto loc_8317F13C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17700
	ctx.r3.s64 = r11.s64 + -17700;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317F13C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317fa50
	sub_8317FA50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180690
	sub_83180690(ctx, base);
loc_8317F14C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ebd8
	sub_8317EBD8(ctx, base);
	// bl 0x8317eaf0
	sub_8317EAF0(ctx, base);
	// lbz r11,130(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 130);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// bl 0x8317eda0
	sub_8317EDA0(ctx, base);
	// addi r30,r31,1184
	r30.s64 = r31.s64 + 1184;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317ba40
	sub_8317BA40(ctx, base);
	// addi r29,r31,1220
	r29.s64 = r31.s64 + 1220;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317ba40
	sub_8317BA40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317b920
	sub_8317B920(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317b920
	sub_8317B920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bl 0x8317b060
	sub_8317B060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8317b070
	sub_8317B070(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// stb r28,129(r31)
	PPC_STORE_U8(r31.u32 + 129, r28.u8);
	// stw r28,1272(r31)
	PPC_STORE_U32(r31.u32 + 1272, r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317F1D0"))) PPC_WEAK_FUNC(sub_8317F1D0);
PPC_FUNC_IMPL(__imp__sub_8317F1D0) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317f208
	if (cr6.eq) goto loc_8317F208;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17616
	ctx.r3.s64 = r11.s64 + -17616;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x8317f244
	goto loc_8317F244;
loc_8317F208:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83186350
	sub_83186350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ebe8
	sub_8317EBE8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,1104(r31)
	PPC_STORE_U32(r31.u32 + 1104, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1128(r31)
	PPC_STORE_U32(r31.u32 + 1128, r11.u32);
	// stw r10,1124(r31)
	PPC_STORE_U32(r31.u32 + 1124, ctx.r10.u32);
	// stw r11,1132(r31)
	PPC_STORE_U32(r31.u32 + 1132, r11.u32);
	// stw r11,1136(r31)
	PPC_STORE_U32(r31.u32 + 1136, r11.u32);
	// bl 0x8317f0a0
	sub_8317F0A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83186350
	sub_83186350(ctx, base);
loc_8317F244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F260"))) PPC_WEAK_FUNC(sub_8317F260);
PPC_FUNC_IMPL(__imp__sub_8317F260) {
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
	// bl 0x83185ad0
	sub_83185AD0(ctx, base);
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-11152
	r30.s64 = r11.s64 + -11152;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317f2a4
	if (cr6.eq) goto loc_8317F2A4;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317F2A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ecb8
	sub_8317ECB8(ctx, base);
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317f2cc
	if (cr6.eq) goto loc_8317F2CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317F2CC:
	// bl 0x83185ae0
	sub_83185AE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317F2D8"))) PPC_WEAK_FUNC(sub_8317F2D8);
PPC_FUNC_IMPL(__imp__sub_8317F2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// b 0x8317f000
	sub_8317F000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F2E8"))) PPC_WEAK_FUNC(sub_8317F2E8);
PPC_FUNC_IMPL(__imp__sub_8317F2E8) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x83186350
	sub_83186350(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831812a8
	sub_831812A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831814b0
	sub_831814B0(ctx, base);
	// lwz r11,1108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1104(r31)
	PPC_STORE_U32(r31.u32 + 1104, r11.u32);
	// bl 0x8317ebe8
	sub_8317EBE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f0a0
	sub_8317F0A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83186350
	sub_83186350(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f2d8
	sub_8317F2D8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317F378"))) PPC_WEAK_FUNC(sub_8317F378);
PPC_FUNC_IMPL(__imp__sub_8317F378) {
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
	// bl 0x83185ad0
	sub_83185AD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f1d0
	sub_8317F1D0(ctx, base);
	// bl 0x83185ae0
	sub_83185AE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F3C0"))) PPC_WEAK_FUNC(sub_8317F3C0);
PPC_FUNC_IMPL(__imp__sub_8317F3C0) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317f3f8
	if (cr6.eq) goto loc_8317F3F8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17532
	ctx.r3.s64 = r11.s64 + -17532;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x8317f424
	goto loc_8317F424;
loc_8317F3F8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8317f410
	if (!cr6.eq) goto loc_8317F410;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17572
	ctx.r3.s64 = r11.s64 + -17572;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x8317f424
	goto loc_8317F424;
loc_8317F410:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f2e8
	sub_8317F2E8(ctx, base);
loc_8317F424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F440"))) PPC_WEAK_FUNC(sub_8317F440);
PPC_FUNC_IMPL(__imp__sub_8317F440) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83185ad0
	sub_83185AD0(ctx, base);
	// lis r28,-31930
	r28.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-13960
	r31.s64 = r11.s64 + -13960;
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317f48c
	if (cr6.eq) goto loc_8317F48C;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317F48C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317f3c0
	sub_8317F3C0(ctx, base);
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317f4b8
	if (cr6.eq) goto loc_8317F4B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8317F4B8:
	// bl 0x83185ae0
	sub_83185AE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317F4C8"))) PPC_WEAK_FUNC(sub_8317F4C8);
PPC_FUNC_IMPL(__imp__sub_8317F4C8) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,184(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x8317fee0
	sub_8317FEE0(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192cf8
	sub_83192CF8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831924c0
	sub_831924C0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8317F530"))) PPC_WEAK_FUNC(sub_8317F530);
PPC_FUNC_IMPL(__imp__sub_8317F530) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8317f4c8
	sub_8317F4C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F548"))) PPC_WEAK_FUNC(sub_8317F548);
PPC_FUNC_IMPL(__imp__sub_8317F548) {
	PPC_FUNC_PROLOGUE();
	// b 0x83193088
	sub_83193088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F550"))) PPC_WEAK_FUNC(sub_8317F550);
PPC_FUNC_IMPL(__imp__sub_8317F550) {
	PPC_FUNC_PROLOGUE();
	// li r3,8223
	ctx.r3.s64 = 8223;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F558"))) PPC_WEAK_FUNC(sub_8317F558);
PPC_FUNC_IMPL(__imp__sub_8317F558) {
	PPC_FUNC_PROLOGUE();
	// b 0x831932d8
	sub_831932D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F560"))) PPC_WEAK_FUNC(sub_8317F560);
PPC_FUNC_IMPL(__imp__sub_8317F560) {
	PPC_FUNC_PROLOGUE();
	// b 0x831931d0
	sub_831931D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317F568"))) PPC_WEAK_FUNC(sub_8317F568);
PPC_FUNC_IMPL(__imp__sub_8317F568) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F570"))) PPC_WEAK_FUNC(sub_8317F570);
PPC_FUNC_IMPL(__imp__sub_8317F570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// srawi r11,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	r11.s64 = ctx.r4.s32 >> 3;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,224(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F5A8"))) PPC_WEAK_FUNC(sub_8317F5A8);
PPC_FUNC_IMPL(__imp__sub_8317F5A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// srawi r11,r4,3
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	r11.s64 = ctx.r4.s32 >> 3;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F5E0"))) PPC_WEAK_FUNC(sub_8317F5E0);
PPC_FUNC_IMPL(__imp__sub_8317F5E0) {
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317f638
	if (cr6.eq) goto loc_8317F638;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8317f624
	if (cr6.eq) goto loc_8317F624;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8317f610
	if (cr6.eq) goto loc_8317F610;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17484
	ctx.r3.s64 = r11.s64 + -17484;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8317F610:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317F624:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317F638:
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

__attribute__((alias("__imp__sub_8317F650"))) PPC_WEAK_FUNC(sub_8317F650);
PPC_FUNC_IMPL(__imp__sub_8317F650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stw r11,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F660"))) PPC_WEAK_FUNC(sub_8317F660);
PPC_FUNC_IMPL(__imp__sub_8317F660) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F670"))) PPC_WEAK_FUNC(sub_8317F670);
PPC_FUNC_IMPL(__imp__sub_8317F670) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83193510
	sub_83193510(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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

__attribute__((alias("__imp__sub_8317F6C8"))) PPC_WEAK_FUNC(sub_8317F6C8);
PPC_FUNC_IMPL(__imp__sub_8317F6C8) {
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
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r31,3
	r31.s64 = 3;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8317f74c
	if (cr6.eq) goto loc_8317F74C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8317f734
	if (cr6.eq) goto loc_8317F734;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8317f71c
	if (cr6.eq) goto loc_8317F71C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17444
	ctx.r3.s64 = r11.s64 + -17444;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
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
loc_8317F71C:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8317F734:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8317F74C:
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

__attribute__((alias("__imp__sub_8317F768"))) PPC_WEAK_FUNC(sub_8317F768);
PPC_FUNC_IMPL(__imp__sub_8317F768) {
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
	// lwz r11,156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8317f7ec
	if (cr6.eq) goto loc_8317F7EC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8317f7d4
	if (cr6.eq) goto loc_8317F7D4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8317f7bc
	if (cr6.eq) goto loc_8317F7BC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17404
	ctx.r3.s64 = r11.s64 + -17404;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
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
loc_8317F7BC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8317F7D4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8317F7EC:
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

__attribute__((alias("__imp__sub_8317F808"))) PPC_WEAK_FUNC(sub_8317F808);
PPC_FUNC_IMPL(__imp__sub_8317F808) {
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
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8317f864
	if (cr6.lt) goto loc_8317F864;
	// beq cr6,0x8317f84c
	if (cr6.eq) goto loc_8317F84C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17368
	ctx.r3.s64 = r11.s64 + -17368;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
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
loc_8317F84C:
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
loc_8317F864:
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

__attribute__((alias("__imp__sub_8317F880"))) PPC_WEAK_FUNC(sub_8317F880);
PPC_FUNC_IMPL(__imp__sub_8317F880) {
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
	// bl 0x8317f568
	sub_8317F568(ctx, base);
	// bl 0x8319c858
	sub_8319C858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F8A8"))) PPC_WEAK_FUNC(sub_8317F8A8);
PPC_FUNC_IMPL(__imp__sub_8317F8A8) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8317f8e4
	if (cr6.eq) goto loc_8317F8E4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17336
	ctx.r3.s64 = r11.s64 + -17336;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8317F8E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f568
	sub_8317F568(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83193468
	sub_83193468(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83157920
	sub_83157920(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8317F910"))) PPC_WEAK_FUNC(sub_8317F910);
PPC_FUNC_IMPL(__imp__sub_8317F910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8317f930
	if (cr6.eq) goto loc_8317F930;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8317f930
	if (cr6.eq) goto loc_8317F930;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_8317F930:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F938"))) PPC_WEAK_FUNC(sub_8317F938);
PPC_FUNC_IMPL(__imp__sub_8317F938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317f950
	if (cr6.eq) goto loc_8317F950;
	// cmpwi cr6,r11,257
	cr6.compare<int32_t>(r11.s32, 257, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_8317F950:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F958"))) PPC_WEAK_FUNC(sub_8317F958);
PPC_FUNC_IMPL(__imp__sub_8317F958) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x8317f938
	sub_8317F938(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317f9a8
	if (!cr6.eq) goto loc_8317F9A8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1048(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1048);
	// lwz r3,1044(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1044);
	// bl 0x8313d0e0
	sub_8313D0E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317f9ac
	if (!cr6.eq) goto loc_8317F9AC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17284
	ctx.r3.s64 = r11.s64 + -17284;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317e200
	sub_8317E200(ctx, base);
loc_8317F9A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8317F9AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F9C0"))) PPC_WEAK_FUNC(sub_8317F9C0);
PPC_FUNC_IMPL(__imp__sub_8317F9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1040(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8317F9E0"))) PPC_WEAK_FUNC(sub_8317F9E0);
PPC_FUNC_IMPL(__imp__sub_8317F9E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317F9E8"))) PPC_WEAK_FUNC(sub_8317F9E8);
PPC_FUNC_IMPL(__imp__sub_8317F9E8) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8317f910
	sub_8317F910(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317fa18
	if (!cr6.eq) goto loc_8317FA18;
loc_8317FA04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317FA18:
	// lwz r5,1040(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8317fa04
	if (cr6.eq) goto loc_8317FA04;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8318dbd0
	sub_8318DBD0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FA50"))) PPC_WEAK_FUNC(sub_8317FA50);
PPC_FUNC_IMPL(__imp__sub_8317FA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,1064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1064, r11.u32);
	// stw r11,1068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1068, r11.u32);
	// stw r11,1072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1072, r11.u32);
	// stw r10,1060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1060, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FA70"))) PPC_WEAK_FUNC(sub_8317FA70);
PPC_FUNC_IMPL(__imp__sub_8317FA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,1040(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1040);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8317FA8C"))) PPC_WEAK_FUNC(sub_8317FA8C);
PPC_FUNC_IMPL(__imp__sub_8317FA8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FA90"))) PPC_WEAK_FUNC(sub_8317FA90);
PPC_FUNC_IMPL(__imp__sub_8317FA90) {
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
	// lwz r11,1068(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1068);
	// lwz r31,184(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8317fabc
	if (!cr6.eq) goto loc_8317FABC;
loc_8317FAB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8317faf4
	goto loc_8317FAF4;
loc_8317FABC:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r10,-17232
	ctx.r5.s64 = ctx.r10.s64 + -17232;
	// lwz r10,1072(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1072);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r4,r10,-17240
	ctx.r4.s64 = ctx.r10.s64 + -17240;
	// bl 0x8313dba8
	sub_8313DBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317fab0
	if (cr6.eq) goto loc_8317FAB0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8317FAF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83193478
	sub_83193478(ctx, base);
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

__attribute__((alias("__imp__sub_8317FB10"))) PPC_WEAK_FUNC(sub_8317FB10);
PPC_FUNC_IMPL(__imp__sub_8317FB10) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x8317f910
	sub_8317F910(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8317fb40
	if (!cr6.eq) goto loc_8317FB40;
loc_8317FB2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8317FB40:
	// lwz r11,1040(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317fb2c
	if (cr6.eq) goto loc_8317FB2C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8318dbd0
	sub_8318DBD0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FB78"))) PPC_WEAK_FUNC(sub_8317FB78);
PPC_FUNC_IMPL(__imp__sub_8317FB78) {
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
	// bl 0x83193400
	sub_83193400(ctx, base);
	// lis r11,-31976
	r11.s64 = -2095579136;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17072
	ctx.r3.s64 = r11.s64 + -17072;
	// bl 0x831930d8
	sub_831930D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FBA8"))) PPC_WEAK_FUNC(sub_8317FBA8);
PPC_FUNC_IMPL(__imp__sub_8317FBA8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,88(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8317fbe8
	if (!cr6.eq) goto loc_8317FBE8;
	// lwz r4,48(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// bl 0x8317f5a8
	sub_8317F5A8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8317fbdc
	if (cr6.eq) goto loc_8317FBDC;
	// stw r3,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r3.u32);
	// b 0x8317fbe4
	goto loc_8317FBE4;
loc_8317FBDC:
	// li r11,17
	r11.s64 = 17;
	// stw r11,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, r11.u32);
loc_8317FBE4:
	// lwz r11,92(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
loc_8317FBE8:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8317f568
	sub_8317F568(ctx, base);
	// bl 0x8319c858
	sub_8319C858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FC08"))) PPC_WEAK_FUNC(sub_8317FC08);
PPC_FUNC_IMPL(__imp__sub_8317FC08) {
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
	// lwz r4,48(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// bl 0x8317f570
	sub_8317F570(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lwz r11,152(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8317fc50
	if (cr6.eq) goto loc_8317FC50;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,156(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// bl 0x83193698
	sub_83193698(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8317FC50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FC60"))) PPC_WEAK_FUNC(sub_8317FC60);
PPC_FUNC_IMPL(__imp__sub_8317FC60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r4,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r4.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x8317fcac
	if (cr6.eq) goto loc_8317FCAC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// b 0x8317fcf4
	goto loc_8317FCF4;
loc_8317FCAC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83180c98
	sub_83180C98(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8317f660
	sub_8317F660(ctx, base);
	// srawi r11,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r11.s64 = r30.s32 >> 1;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addze r6,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r6.s64 = temp.s64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8317f660
	sub_8317F660(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
loc_8317FCF4:
	// bl 0x8317f660
	sub_8317F660(ctx, base);
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

__attribute__((alias("__imp__sub_8317FD10"))) PPC_WEAK_FUNC(sub_8317FD10);
PPC_FUNC_IMPL(__imp__sub_8317FD10) {
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
	// bl 0x8317f6c8
	sub_8317F6C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r11.u32);
	// bl 0x8317f768
	sub_8317F768(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// stw r11,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// stw r11,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r11.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x8317f808
	sub_8317F808(ctx, base);
	// stw r3,116(r30)
	PPC_STORE_U32(r30.u32 + 116, ctx.r3.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x8317f808
	sub_8317F808(ctx, base);
	// stw r3,120(r30)
	PPC_STORE_U32(r30.u32 + 120, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FD90"))) PPC_WEAK_FUNC(sub_8317FD90);
PPC_FUNC_IMPL(__imp__sub_8317FD90) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8317f8a8
	sub_8317F8A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8317FD98"))) PPC_WEAK_FUNC(sub_8317FD98);
PPC_FUNC_IMPL(__imp__sub_8317FD98) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,1040(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1040);
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8317fe08
	if (cr6.eq) goto loc_8317FE08;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-17216
	ctx.r5.s64 = ctx.r10.s64 + -17216;
	// lwz r10,1044(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1044);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r4,r10,-17224
	ctx.r4.s64 = ctx.r10.s64 + -17224;
	// bl 0x8313dba8
	sub_8313DBA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8317fe20
	if (!cr6.eq) goto loc_8317FE20;
loc_8317FE08:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1068(r31)
	PPC_STORE_U32(r31.u32 + 1068, r11.u32);
	// stw r11,1072(r31)
	PPC_STORE_U32(r31.u32 + 1072, r11.u32);
	// stw r10,1064(r31)
	PPC_STORE_U32(r31.u32 + 1064, ctx.r10.u32);
	// b 0x8317fec8
	goto loc_8317FEC8;
loc_8317FE20:
	// lwz r3,1052(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1052);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8317fea8
	if (cr6.eq) goto loc_8317FEA8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,1052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1052);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1068(r31)
	PPC_STORE_U32(r31.u32 + 1068, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,1072(r31)
	PPC_STORE_U32(r31.u32 + 1072, ctx.r10.u32);
	// stw r9,1064(r31)
	PPC_STORE_U32(r31.u32 + 1064, ctx.r9.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8317fec8
	goto loc_8317FEC8;
loc_8317FEA8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1068(r31)
	PPC_STORE_U32(r31.u32 + 1068, r11.u32);
	// stw r10,1072(r31)
	PPC_STORE_U32(r31.u32 + 1072, ctx.r10.u32);
	// stw r9,1064(r31)
	PPC_STORE_U32(r31.u32 + 1064, ctx.r9.u32);
	// bl 0x8317fb10
	sub_8317FB10(ctx, base);
loc_8317FEC8:
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

__attribute__((alias("__imp__sub_8317FEE0"))) PPC_WEAK_FUNC(sub_8317FEE0);
PPC_FUNC_IMPL(__imp__sub_8317FEE0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8317f5e0
	sub_8317F5E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8317fc60
	sub_8317FC60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317f650
	sub_8317F650(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317f670
	sub_8317F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8317fd10
	sub_8317FD10(ctx, base);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// stw r11,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r11.u32);
	// bl 0x8317fc08
	sub_8317FC08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r11.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x8317f5a8
	sub_8317F5A8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bl 0x8317fba8
	sub_8317FBA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8317FF90"))) PPC_WEAK_FUNC(sub_8317FF90);
PPC_FUNC_IMPL(__imp__sub_8317FF90) {
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
	// lwz r11,1040(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8317ffbc
	if (cr6.eq) goto loc_8317FFBC;
	// bl 0x8317fd98
	sub_8317FD98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317fa90
	sub_8317FA90(ctx, base);
loc_8317FFBC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8317FFD0"))) PPC_WEAK_FUNC(sub_8317FFD0);
PPC_FUNC_IMPL(__imp__sub_8317FFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8317f568
	sub_8317F568(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8317fee0
	sub_8317FEE0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83193540
	sub_83193540(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83180018"))) PPC_WEAK_FUNC(sub_83180018);
PPC_FUNC_IMPL(__imp__sub_83180018) {
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
	// bl 0x8317fc08
	sub_8317FC08(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r11,2
	r11.s64 = 2;
	// beq cr6,0x83180048
	if (cr6.eq) goto loc_83180048;
	// li r11,1
	r11.s64 = 1;
loc_83180048:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8317ffd0
	sub_8317FFD0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180088"))) PPC_WEAK_FUNC(sub_83180088);
PPC_FUNC_IMPL(__imp__sub_83180088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1272(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318009c
	if (!cr6.eq) goto loc_8318009C;
	// stw r4,1272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1272, ctx.r4.u32);
	// blr 
	return;
loc_8318009C:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17208
	ctx.r3.s64 = r11.s64 + -17208;
	// b 0x83185b00
	sub_83185B00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831800B0"))) PPC_WEAK_FUNC(sub_831800B0);
PPC_FUNC_IMPL(__imp__sub_831800B0) {
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
	// lwz r11,1060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1060);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x831800e0
	if (!cr6.lt) goto loc_831800E0;
	// bl 0x8317ff90
	sub_8317FF90(ctx, base);
loc_831800E0:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r11,1060(r31)
	PPC_STORE_U32(r31.u32 + 1060, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180100"))) PPC_WEAK_FUNC(sub_83180100);
PPC_FUNC_IMPL(__imp__sub_83180100) {
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
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r27,1036(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 1036);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8317be68
	sub_8317BE68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83180144
	if (cr6.eq) goto loc_83180144;
loc_83180130:
	// li r11,0
	r11.s64 = 0;
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83180144:
	// addi r11,r31,1012
	r11.s64 = r31.s64 + 1012;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x83180130
	if (cr6.eq) goto loc_83180130;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83180168
	if (cr6.eq) goto loc_83180168;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// ble cr6,0x83180168
	if (!cr6.gt) goto loc_83180168;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
loc_83180168:
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r28,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83180178"))) PPC_WEAK_FUNC(sub_83180178);
PPC_FUNC_IMPL(__imp__sub_83180178) {
	PPC_FUNC_PROLOGUE();
	// mulli r5,r5,1000
	ctx.r5.s64 = ctx.r5.s64 * 1000;
	// b 0x831941d0
	sub_831941D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83180180"))) PPC_WEAK_FUNC(sub_83180180);
PPC_FUNC_IMPL(__imp__sub_83180180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831801a0
	if (cr6.eq) goto loc_831801A0;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x83180198
	if (cr6.eq) goto loc_83180198;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_83180198:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_831801A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831801A8"))) PPC_WEAK_FUNC(sub_831801A8);
PPC_FUNC_IMPL(__imp__sub_831801A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x83180224
	if (cr6.gt) goto loc_83180224;
	// lis r12,-31976
	r12.s64 = -2095579136;
	// addi r12,r12,472
	r12.s64 = r12.s64 + 472;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83180230;
	case 1:
		goto loc_831801E8;
	case 2:
		goto loc_831801FC;
	case 3:
		goto loc_83180210;
	default:
		__builtin_unreachable();
	}
	// lwz r24,560(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 560);
	// lwz r24,488(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 488);
	// lwz r24,508(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 508);
	// lwz r24,528(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 528);
loc_831801E8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831801FC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83180210:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83180224:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17148
	ctx.r3.s64 = r11.s64 + -17148;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83180230:
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

__attribute__((alias("__imp__sub_83180248"))) PPC_WEAK_FUNC(sub_83180248);
PPC_FUNC_IMPL(__imp__sub_83180248) {
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
	// lwz r11,88(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83180290
	if (!cr6.gt) goto loc_83180290;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x83180288
	if (!cr6.gt) goto loc_83180288;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83180290
	if (!cr6.eq) goto loc_83180290;
	// lbz r11,108(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8318029c
	if (!cr6.eq) goto loc_8318029C;
loc_83180288:
	// li r31,2
	r31.s64 = 2;
	// b 0x8318029c
	goto loc_8318029C;
loc_83180290:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17100
	ctx.r3.s64 = r11.s64 + -17100;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_8318029C:
	// bl 0x8317be68
	sub_8317BE68(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831802c0
	if (!cr6.eq) goto loc_831802C0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83193638
	sub_83193638(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// beq cr6,0x831802c4
	if (cr6.eq) goto loc_831802C4;
loc_831802C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831802C4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831802D0"))) PPC_WEAK_FUNC(sub_831802D0);
PPC_FUNC_IMPL(__imp__sub_831802D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,88(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// lwz r11,92(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// lbz r11,108(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 108);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r11.u32);
	// lbz r11,109(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 109);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// lbz r11,110(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 110);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// lwz r11,60(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// lwz r11,64(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// stw r10,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180320"))) PPC_WEAK_FUNC(sub_83180320);
PPC_FUNC_IMPL(__imp__sub_83180320) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// beq cr6,0x83180398
	if (cr6.eq) goto loc_83180398;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x83180398
	if (!cr6.gt) goto loc_83180398;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// bl 0x83193748
	sub_83193748(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83180398
	if (cr6.eq) goto loc_83180398;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83180398
	if (!cr6.gt) goto loc_83180398;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r10,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r10.u32);
loc_83180398:
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

__attribute__((alias("__imp__sub_831803B0"))) PPC_WEAK_FUNC(sub_831803B0);
PPC_FUNC_IMPL(__imp__sub_831803B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lhz r11,12(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lhz r11,12(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831803F0"))) PPC_WEAK_FUNC(sub_831803F0);
PPC_FUNC_IMPL(__imp__sub_831803F0) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83180420
	if (cr6.eq) goto loc_83180420;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17048
	ctx.r3.s64 = r11.s64 + -17048;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83180420:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,140(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r28,144(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x83180088
	sub_83180088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// ble cr6,0x83180460
	if (!cr6.gt) goto loc_83180460;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8318c8b0
	sub_8318C8B0(ctx, base);
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_83180460:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83180468"))) PPC_WEAK_FUNC(sub_83180468);
PPC_FUNC_IMPL(__imp__sub_83180468) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831804ac
	if (cr6.eq) goto loc_831804AC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-17004
	ctx.r3.s64 = r11.s64 + -17004;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83180494:
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
loc_831804AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83180494
	if (cr6.eq) goto loc_83180494;
	// bl 0x83191050
	sub_83191050(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831804D8"))) PPC_WEAK_FUNC(sub_831804D8);
PPC_FUNC_IMPL(__imp__sub_831804D8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83191338
	sub_83191338(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x831804fc
	if (!cr6.eq) goto loc_831804FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_831804FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180510"))) PPC_WEAK_FUNC(sub_83180510);
PPC_FUNC_IMPL(__imp__sub_83180510) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83191360
	sub_83191360(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x83180534
	if (!cr6.eq) goto loc_83180534;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83180534:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180548"))) PPC_WEAK_FUNC(sub_83180548);
PPC_FUNC_IMPL(__imp__sub_83180548) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831912c0
	sub_831912C0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83180578
	if (cr6.eq) goto loc_83180578;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83180578:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180590"))) PPC_WEAK_FUNC(sub_83180590);
PPC_FUNC_IMPL(__imp__sub_83180590) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,224
	ctx.r4.s64 = 224;
	// bl 0x831915e0
	sub_831915E0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831805c4
	if (cr6.eq) goto loc_831805C4;
loc_831805B0:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831805C4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83180608
	if (cr6.eq) goto loc_83180608;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x831805f4
	if (cr6.eq) goto loc_831805F4;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x831805b0
	if (!cr6.eq) goto loc_831805B0;
	// li r3,97
	ctx.r3.s64 = 97;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_831805F4:
	// li r3,81
	ctx.r3.s64 = 81;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83180608:
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180620"))) PPC_WEAK_FUNC(sub_83180620);
PPC_FUNC_IMPL(__imp__sub_83180620) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83191248
	sub_83191248(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x83180644
	if (!cr6.eq) goto loc_83180644;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83180644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180658"))) PPC_WEAK_FUNC(sub_83180658);
PPC_FUNC_IMPL(__imp__sub_83180658) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83191270
	sub_83191270(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x8318067c
	if (!cr6.eq) goto loc_8318067C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8318067C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180690"))) PPC_WEAK_FUNC(sub_83180690);
PPC_FUNC_IMPL(__imp__sub_83180690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,212
	ctx.r10.s64 = ctx.r3.s64 + 212;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, r11.u32);
loc_831806AC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bne cr6,0x831806ac
	if (!cr6.eq) goto loc_831806AC;
	// addi r10,r3,504
	ctx.r10.s64 = ctx.r3.s64 + 504;
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, r11.u32);
	// li r9,32
	ctx.r9.s64 = 32;
loc_831806DC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x831806dc
	if (!cr6.eq) goto loc_831806DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180700"))) PPC_WEAK_FUNC(sub_83180700);
PPC_FUNC_IMPL(__imp__sub_83180700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x8318076c
	if (cr6.gt) goto loc_8318076C;
	// lis r12,-31976
	r12.s64 = -2095579136;
	// addi r12,r12,1828
	r12.s64 = r12.s64 + 1828;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83180744;
	case 1:
		goto loc_8318074C;
	case 2:
		goto loc_8318074C;
	case 3:
		goto loc_8318074C;
	case 4:
		goto loc_8318074C;
	case 5:
		goto loc_83180754;
	case 6:
		goto loc_8318075C;
	case 7:
		goto loc_83180764;
	default:
		__builtin_unreachable();
	}
	// lwz r24,1860(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1860);
	// lwz r24,1868(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1868);
	// lwz r24,1868(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1868);
	// lwz r24,1868(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1868);
	// lwz r24,1868(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1868);
	// lwz r24,1876(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1876);
	// lwz r24,1884(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1884);
	// lwz r24,1892(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 1892);
loc_83180744:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8318074C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83180754:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_8318075C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_83180764:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_8318076C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180778"))) PPC_WEAK_FUNC(sub_83180778);
PPC_FUNC_IMPL(__imp__sub_83180778) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// lwz r11,1184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1184);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831807dc
	if (!cr6.eq) goto loc_831807DC;
	// lwz r11,1208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1208);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831807dc
	if (!cr6.eq) goto loc_831807DC;
	// lwz r30,1212(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 1212);
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,500(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 500);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x831807dc
	if (!cr6.eq) goto loc_831807DC;
	// lwz r11,504(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 504);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x831807dc
	if (!cr6.eq) goto loc_831807DC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8317b6f0
	sub_8317B6F0(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_831807DC:
	// lwz r11,1220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1220);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r28,-1
	r28.s64 = -1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180828
	if (!cr6.eq) goto loc_83180828;
	// lwz r11,1244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1244);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180828
	if (!cr6.eq) goto loc_83180828;
	// lwz r28,1248(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 1248);
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,500(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 500);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180828
	if (!cr6.eq) goto loc_83180828;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b6f0
	sub_8317B6F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
loc_83180828:
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r31,504
	ctx.r9.s64 = r31.s64 + 504;
loc_8318083C:
	// lwz r11,-4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180884
	if (!cr6.eq) goto loc_83180884;
	// addi r11,r10,-2
	r11.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x83180884
	if (cr6.eq) goto loc_83180884;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x83180884
	if (cr6.eq) goto loc_83180884;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318086c
	if (!cr6.eq) goto loc_8318086C;
	// li r26,1
	r26.s64 = 1;
loc_8318086C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83180878
	if (!cr6.eq) goto loc_83180878;
	// li r29,1
	r29.s64 = 1;
loc_83180878:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83180884
	if (!cr6.eq) goto loc_83180884;
	// li r27,1
	r27.s64 = 1;
loc_83180884:
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831808cc
	if (!cr6.eq) goto loc_831808CC;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x831808cc
	if (cr6.eq) goto loc_831808CC;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x831808cc
	if (cr6.eq) goto loc_831808CC;
	// lwz r11,16(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831808b4
	if (!cr6.eq) goto loc_831808B4;
	// li r26,1
	r26.s64 = 1;
loc_831808B4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831808c0
	if (!cr6.eq) goto loc_831808C0;
	// li r29,1
	r29.s64 = 1;
loc_831808C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831808cc
	if (!cr6.eq) goto loc_831808CC;
	// li r27,1
	r27.s64 = 1;
loc_831808CC:
	// lwz r11,28(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180910
	if (!cr6.eq) goto loc_83180910;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// beq cr6,0x83180910
	if (cr6.eq) goto loc_83180910;
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, r28.s32, xer);
	// beq cr6,0x83180910
	if (cr6.eq) goto loc_83180910;
	// lwz r11,32(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x831808f8
	if (!cr6.eq) goto loc_831808F8;
	// li r26,1
	r26.s64 = 1;
loc_831808F8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83180904
	if (!cr6.eq) goto loc_83180904;
	// li r29,1
	r29.s64 = 1;
loc_83180904:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83180910
	if (!cr6.eq) goto loc_83180910;
	// li r27,1
	r27.s64 = 1;
loc_83180910:
	// lwz r11,44(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180958
	if (!cr6.eq) goto loc_83180958;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x83180958
	if (cr6.eq) goto loc_83180958;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x83180958
	if (cr6.eq) goto loc_83180958;
	// lwz r11,48(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180940
	if (!cr6.eq) goto loc_83180940;
	// li r26,1
	r26.s64 = 1;
loc_83180940:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8318094c
	if (!cr6.eq) goto loc_8318094C;
	// li r29,1
	r29.s64 = 1;
loc_8318094C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83180958
	if (!cr6.eq) goto loc_83180958;
	// li r27,1
	r27.s64 = 1;
loc_83180958:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r11,r10,-2
	r11.s64 = ctx.r10.s64 + -2;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// blt cr6,0x8318083c
	if (cr6.lt) goto loc_8318083C;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// beq cr6,0x8318097c
	if (cr6.eq) goto loc_8318097C;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x8318098c
	if (!cr6.eq) goto loc_8318098C;
loc_8318097C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,67
	ctx.r4.s64 = 67;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b080
	sub_8317B080(ctx, base);
loc_8318098C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x831809a8
	if (!cr6.eq) goto loc_831809A8;
	// lwz r11,8084(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// b 0x831809d0
	goto loc_831809D0;
loc_831809A8:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x831809cc
	if (!cr6.eq) goto loc_831809CC;
	// lwz r11,8088(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8088);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831809d4
	if (!cr6.eq) goto loc_831809D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b060
	sub_8317B060(ctx, base);
	// b 0x831809d4
	goto loc_831809D4;
loc_831809CC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
loc_831809D0:
	// bne cr6,0x831809e0
	if (!cr6.eq) goto loc_831809E0;
loc_831809D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b060
	sub_8317B060(ctx, base);
loc_831809E0:
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x83180a00
	if (!cr6.eq) goto loc_83180A00;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b240
	sub_8317B240(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b060
	sub_8317B060(ctx, base);
loc_83180A00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83180A08"))) PPC_WEAK_FUNC(sub_83180A08);
PPC_FUNC_IMPL(__imp__sub_83180A08) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x83191108
	sub_83191108(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180a78
	if (!cr6.eq) goto loc_83180A78;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180a78
	if (!cr6.eq) goto loc_83180A78;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83191478
	sub_83191478(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180a78
	if (!cr6.eq) goto loc_83180A78;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_83180A78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83180A80"))) PPC_WEAK_FUNC(sub_83180A80);
PPC_FUNC_IMPL(__imp__sub_83180A80) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x83191108
	sub_83191108(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180aec
	if (!cr6.eq) goto loc_83180AEC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180aec
	if (!cr6.eq) goto loc_83180AEC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831914c8
	sub_831914C8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180aec
	if (!cr6.eq) goto loc_83180AEC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83180ae4
	if (!cr6.eq) goto loc_83180AE4;
	// li r30,1
	r30.s64 = 1;
loc_83180AE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x83180af0
	goto loc_83180AF0;
loc_83180AEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83180AF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180B08"))) PPC_WEAK_FUNC(sub_83180B08);
PPC_FUNC_IMPL(__imp__sub_83180B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,228(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83180B48"))) PPC_WEAK_FUNC(sub_83180B48);
PPC_FUNC_IMPL(__imp__sub_83180B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0af4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r26,72(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwz r24,32(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83180180
	sub_83180180(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r22,0(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r21,4(r30)
	r21.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r20,8(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r19,12(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x831801a8
	sub_831801A8(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r27,52(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r28,24(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r26,48(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r17,44(r30)
	r17.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r16,36(r30)
	r16.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r15,40(r30)
	r15.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x83184820
	sub_83184820(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83180bc8
	if (cr6.eq) goto loc_83180BC8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16952
	ctx.r3.s64 = r11.s64 + -16952;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83180BC8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83180178
	sub_83180178(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83180178
	sub_83180178(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r23,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r23.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r22.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r21,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r21.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r20,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r20.u32);
	// stw r19,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r19.u32);
	// stw r18,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r18.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r25.u32);
	// stw r27,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r27.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// stw r17,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r17.u32);
	// stw r26,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r26.u32);
	// stw r16,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r16.u32);
	// stw r15,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r15.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// bl 0x83180100
	sub_83180100(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83180320
	sub_83180320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,156(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r5,152(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x83180248
	sub_83180248(ctx, base);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// addi r9,r30,72
	ctx.r9.s64 = r30.s64 + 72;
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83180C7C:
	// ld r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x83180c7c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83180C7C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_83180C98"))) PPC_WEAK_FUNC(sub_83180C98);
PPC_FUNC_IMPL(__imp__sub_83180C98) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x831905c0
	sub_831905C0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831803b0
	sub_831803B0(ctx, base);
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

__attribute__((alias("__imp__sub_83180CD8"))) PPC_WEAK_FUNC(sub_83180CD8);
PPC_FUNC_IMPL(__imp__sub_83180CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83180b08
	sub_83180B08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83180CE0"))) PPC_WEAK_FUNC(sub_83180CE0);
PPC_FUNC_IMPL(__imp__sub_83180CE0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,-1
	r26.s64 = -1;
	// cmpwi cr6,r4,2048
	cr6.compare<int32_t>(ctx.r4.s32, 2048, xer);
	// stw r26,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r26.u32);
	// blt cr6,0x83180df4
	if (cr6.lt) goto loc_83180DF4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83180df4
	if (cr6.eq) goto loc_83180DF4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r27,2
	r27.s64 = 2;
	// addi r29,r3,2048
	r29.s64 = ctx.r3.s64 + 2048;
	// addi r30,r4,-2048
	r30.s64 = ctx.r4.s64 + -2048;
	// addi r25,r11,-16920
	r25.s64 = r11.s64 + -16920;
loc_83180D1C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83191808
	sub_83191808(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83180d40
	if (!cr6.eq) goto loc_83180D40;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x83180d70
	goto loc_83180D70;
loc_83180D40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831918b8
	sub_831918B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180d60
	if (!cr6.eq) goto loc_83180D60;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83180d8c
	if (cr6.eq) goto loc_83180D8C;
loc_83180D60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r26.u32);
	// stw r26,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r26.u32);
	// bl 0x831910d0
	sub_831910D0(ctx, base);
loc_83180D70:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,-2048
	r30.s64 = r30.s64 + -2048;
	// addi r29,r29,2048
	r29.s64 = r29.s64 + 2048;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(r27.s32, 3, xer);
	// ble cr6,0x83180d1c
	if (!cr6.gt) goto loc_83180D1C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_83180D8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831804d8
	sub_831804D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
	// bl 0x83180590
	sub_83180590(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r11.u32);
	// bl 0x83180658
	sub_83180658(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r11.u32);
	// bl 0x83180620
	sub_83180620(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r11.u32);
	// bl 0x83180548
	sub_83180548(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r11.u32);
	// bl 0x83180510
	sub_83180510(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// bl 0x831910d0
	sub_831910D0(ctx, base);
loc_83180DF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83180E00"))) PPC_WEAK_FUNC(sub_83180E00);
PPC_FUNC_IMPL(__imp__sub_83180E00) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,496(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 496);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83180efc
	if (cr6.eq) goto loc_83180EFC;
	// li r28,0
	r28.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_83180E2C:
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r29,192
	ctx.r9.s64 = r29.s64 + 192;
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// rlwinm r25,r10,4,0,27
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r30,r9,24
	r30.u64 = ctx.r9.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r28,500(r31)
	PPC_STORE_U32(r31.u32 + 500, r28.u32);
	// stw r28,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r28.u32);
	// stw r28,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r28.u32);
	// stwx r28,r25,r26
	PPC_STORE_U32(r25.u32 + r26.u32, r28.u32);
	// bl 0x83191108
	sub_83191108(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180ee0
	if (!cr6.eq) goto loc_83180EE0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83180ee0
	if (!cr6.eq) goto loc_83180EE0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r24,500(r31)
	PPC_STORE_U32(r31.u32 + 500, r24.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83191388
	sub_83191388(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180ea0
	if (!cr6.eq) goto loc_83180EA0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83180700
	sub_83180700(ctx, base);
	// stw r3,504(r31)
	PPC_STORE_U32(r31.u32 + 504, ctx.r3.u32);
loc_83180EA0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831913d8
	sub_831913D8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180ec0
	if (!cr6.eq) goto loc_83180EC0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r11.u32);
loc_83180EC0:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83191400
	sub_83191400(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180ee0
	if (!cr6.eq) goto loc_83180EE0;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r11,r25,r26
	PPC_STORE_U32(r25.u32 + r26.u32, r11.u32);
loc_83180EE0:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r29,32
	cr6.compare<uint32_t>(r29.u32, 32, xer);
	// blt cr6,0x83180e2c
	if (cr6.lt) goto loc_83180E2C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r24,496(r26)
	PPC_STORE_U32(r26.u32 + 496, r24.u32);
	// bl 0x83180778
	sub_83180778(ctx, base);
loc_83180EFC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83180F08"))) PPC_WEAK_FUNC(sub_83180F08);
PPC_FUNC_IMPL(__imp__sub_83180F08) {
	PPC_FUNC_PROLOGUE();
	// b 0x83180700
	sub_83180700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83180F10"))) PPC_WEAK_FUNC(sub_83180F10);
PPC_FUNC_IMPL(__imp__sub_83180F10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83180f5c
	if (cr6.eq) goto loc_83180F5C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16884
	ctx.r3.s64 = r11.s64 + -16884;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83180F3C:
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_83180F4C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_83180F5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180088
	sub_83180088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b478
	sub_8317B478(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83180f3c
	if (cr6.eq) goto loc_83180F3C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8318c748
	sub_8318C748(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83180f4c
	if (cr6.eq) goto loc_83180F4C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83180ff0
	if (!cr6.eq) goto loc_83180FF0;
	// lwz r28,24(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83180ff0
	if (!cr6.gt) goto loc_83180FF0;
loc_83180FAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180468
	sub_83180468(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83180fec
	if (!cr6.eq) goto loc_83180FEC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8318c8b0
	sub_8318C8B0(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bl 0x8318c748
	sub_8318C748(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// blt cr6,0x83180fac
	if (cr6.lt) goto loc_83180FAC;
loc_83180FEC:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_83180FF0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83180f4c
	if (cr6.eq) goto loc_83180F4C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r4.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// bl 0x831802d0
	sub_831802D0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83180b48
	sub_83180B48(ctx, base);
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
	// stw r10,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// bl 0x831800b0
	sub_831800B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180018
	sub_83180018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83181050"))) PPC_WEAK_FUNC(sub_83181050);
PPC_FUNC_IMPL(__imp__sub_83181050) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,2048
	cr6.compare<int32_t>(ctx.r5.s32, 2048, xer);
	// lwz r11,196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r11.u32);
	// blt cr6,0x831811a0
	if (cr6.lt) goto loc_831811A0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831811a0
	if (cr6.eq) goto loc_831811A0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x83191808
	sub_83191808(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831810a8
	if (!cr6.eq) goto loc_831810A8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16840
	ctx.r3.s64 = r11.s64 + -16840;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_831810A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831918b8
	sub_831918B8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83181198
	if (!cr6.eq) goto loc_83181198;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83181198
	if (!cr6.eq) goto loc_83181198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180a80
	sub_83180A80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831804d8
	sub_831804D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180590
	sub_83180590(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180548
	sub_83180548(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180510
	sub_83180510(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180a08
	sub_83180A08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83180e00
	sub_83180E00(ctx, base);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lwz r10,196(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,6
	ctx.r10.s64 = r11.s64 + 6;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,212(r11)
	PPC_STORE_U32(r11.u32 + 212, ctx.r8.u32);
	// stwx r7,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r7.u32);
	// stw r29,224(r11)
	PPC_STORE_U32(r11.u32 + 224, r29.u32);
	// stw r28,228(r11)
	PPC_STORE_U32(r11.u32 + 228, r28.u32);
	// stw r27,232(r11)
	PPC_STORE_U32(r11.u32 + 232, r27.u32);
	// stw r26,236(r11)
	PPC_STORE_U32(r11.u32 + 236, r26.u32);
	// stw r25,240(r11)
	PPC_STORE_U32(r11.u32 + 240, r25.u32);
	// stw r6,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r6.u32);
	// stw r5,208(r11)
	PPC_STORE_U32(r11.u32 + 208, ctx.r5.u32);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r11.u32);
loc_83181198:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831910d0
	sub_831910D0(ctx, base);
loc_831811A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831811A8"))) PPC_WEAK_FUNC(sub_831811A8);
PPC_FUNC_IMPL(__imp__sub_831811A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r11,-31976
	r11.s64 = -2095579136;
	// addi r4,r11,4176
	ctx.r4.s64 = r11.s64 + 4176;
	// lwz r3,72(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// b 0x83181dd8
	sub_83181DD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831811C0"))) PPC_WEAK_FUNC(sub_831811C0);
PPC_FUNC_IMPL(__imp__sub_831811C0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831811f4
	if (cr6.eq) goto loc_831811F4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16716
	ctx.r3.s64 = r11.s64 + -16716;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831811F4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83181210
	if (!cr6.eq) goto loc_83181210;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16756
	ctx.r3.s64 = r11.s64 + -16756;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83181210:
	// lis r28,-31930
	r28.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r29,r11,-12016
	r29.s64 = r11.s64 + -12016;
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181244
	if (cr6.eq) goto loc_83181244;
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// stw r30,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181244:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8313e470
	sub_8313E470(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x83181274
	if (!cr6.lt) goto loc_83181274;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-16804
	ctx.r3.s64 = r11.s64 + -16804;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x83181280
	goto loc_83181280;
loc_83181274:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_83181280:
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831812a0
	if (cr6.eq) goto loc_831812A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,108
	ctx.r4.s64 = r29.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831812A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831812A8"))) PPC_WEAK_FUNC(sub_831812A8);
PPC_FUNC_IMPL(__imp__sub_831812A8) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831812dc
	if (cr6.eq) goto loc_831812DC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16668
	ctx.r3.s64 = r11.s64 + -16668;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831812DC:
	// lis r30,-31930
	r30.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-11368
	r31.s64 = r11.s64 + -11368;
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181314
	if (cr6.eq) goto loc_83181314;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181314:
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// bl 0x8313e418
	sub_8313E418(ctx, base);
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181340
	if (cr6.eq) goto loc_83181340;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181340:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181348"))) PPC_WEAK_FUNC(sub_83181348);
PPC_FUNC_IMPL(__imp__sub_83181348) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83181380
	if (cr6.eq) goto loc_83181380;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16572
	ctx.r3.s64 = r11.s64 + -16572;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_83181380:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r28,84(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,1080(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83140140
	sub_83140140(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831813d0
	if (!cr6.eq) goto loc_831813D0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83140090
	sub_83140090(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8313e168
	sub_8313E168(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_831813D0:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r11,-16624
	ctx.r3.s64 = r11.s64 + -16624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831813F0"))) PPC_WEAK_FUNC(sub_831813F0);
PPC_FUNC_IMPL(__imp__sub_831813F0) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318142c
	if (cr6.eq) goto loc_8318142C;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16528
	ctx.r3.s64 = r11.s64 + -16528;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318142C:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8313e168
	sub_8313E168(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83181450"))) PPC_WEAK_FUNC(sub_83181450);
PPC_FUNC_IMPL(__imp__sub_83181450) {
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
	// bl 0x8313e2e8
	sub_8313E2E8(ctx, base);
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
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

__attribute__((alias("__imp__sub_83181480"))) PPC_WEAK_FUNC(sub_83181480);
PPC_FUNC_IMPL(__imp__sub_83181480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8313e398
	sub_8313E398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83181490"))) PPC_WEAK_FUNC(sub_83181490);
PPC_FUNC_IMPL(__imp__sub_83181490) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181498"))) PPC_WEAK_FUNC(sub_83181498);
PPC_FUNC_IMPL(__imp__sub_83181498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8313e218
	sub_8313E218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831814A8"))) PPC_WEAK_FUNC(sub_831814A8);
PPC_FUNC_IMPL(__imp__sub_831814A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831814B0"))) PPC_WEAK_FUNC(sub_831814B0);
PPC_FUNC_IMPL(__imp__sub_831814B0) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831814e8
	if (cr6.eq) goto loc_831814E8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16432
	ctx.r3.s64 = r11.s64 + -16432;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// b 0x83181550
	goto loc_83181550;
loc_831814E8:
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8318150c
	if (!cr6.eq) goto loc_8318150C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8318150c
	if (!cr6.eq) goto loc_8318150C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,129(r31)
	PPC_STORE_U8(r31.u32 + 129, ctx.r10.u8);
loc_8318150C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318154c
	if (!cr6.eq) goto loc_8318154C;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x8318154c
	if (!cr6.eq) goto loc_8318154C;
	// bl 0x83194378
	sub_83194378(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83181534
	if (cr6.eq) goto loc_83181534;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16476
	ctx.r3.s64 = r11.s64 + -16476;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83181534:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1184
	ctx.r3.s64 = r31.s64 + 1184;
	// bl 0x8317ba90
	sub_8317BA90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1220
	ctx.r3.s64 = r31.s64 + 1220;
	// bl 0x8317ba90
	sub_8317BA90(ctx, base);
loc_8318154C:
	// stb r30,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r30.u8);
loc_83181550:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181568"))) PPC_WEAK_FUNC(sub_83181568);
PPC_FUNC_IMPL(__imp__sub_83181568) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,54
	ctx.r4.s64 = 54;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8317b098
	sub_8317B098(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x83184820
	sub_83184820(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x831815cc
	if (cr6.gt) goto loc_831815CC;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16388
	ctx.r3.s64 = r11.s64 + -16388;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831815CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83180cd8
	sub_83180CD8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r3,1000
	r11.s64 = ctx.r3.s64 * 1000;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,3000
	r11.s64 = r11.s64 * 3000;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// stw r3,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_83181610"))) PPC_WEAK_FUNC(sub_83181610);
PPC_FUNC_IMPL(__imp__sub_83181610) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83181640
	if (cr6.eq) goto loc_83181640;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16344
	ctx.r3.s64 = r11.s64 + -16344;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83181640:
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-11800
	r30.s64 = r11.s64 + -11800;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181670
	if (cr6.eq) goto loc_83181670;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181670:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831814b0
	sub_831814B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1108);
	// bl 0x8317f378
	sub_8317F378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317eec0
	sub_8317EEC0(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8313e5c0
	sub_8313E5C0(ctx, base);
	// lwz r3,1104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831816b4
	if (cr6.eq) goto loc_831816B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831816B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317c9e0
	sub_8317C9E0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,1272(r31)
	PPC_STORE_U32(r31.u32 + 1272, r11.u32);
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831816e4
	if (cr6.eq) goto loc_831816E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831816E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831816F0"))) PPC_WEAK_FUNC(sub_831816F0);
PPC_FUNC_IMPL(__imp__sub_831816F0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83181724
	if (cr6.eq) goto loc_83181724;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16252
	ctx.r3.s64 = r11.s64 + -16252;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83181724:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83181740
	if (!cr6.eq) goto loc_83181740;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16296
	ctx.r3.s64 = r11.s64 + -16296;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83181740:
	// lis r28,-31930
	r28.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-12880
	r30.s64 = r11.s64 + -12880;
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181774
	if (cr6.eq) goto loc_83181774;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181774:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ef58
	sub_8317EF58(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// bl 0x831811c0
	sub_831811C0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831812a8
	sub_831812A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181610
	sub_83181610(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,1284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1284);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,1288(r31)
	PPC_STORE_U32(r31.u32 + 1288, r11.u32);
	// stw r11,1280(r31)
	PPC_STORE_U32(r31.u32 + 1280, r11.u32);
	// bne cr6,0x831817c4
	if (!cr6.eq) goto loc_831817C4;
	// stw r11,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r11.u32);
loc_831817C4:
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831817e4
	if (cr6.eq) goto loc_831817E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831817E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831817F0"))) PPC_WEAK_FUNC(sub_831817F0);
PPC_FUNC_IMPL(__imp__sub_831817F0) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83181820
	if (cr6.eq) goto loc_83181820;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16204
	ctx.r3.s64 = r11.s64 + -16204;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83181820:
	// lis r30,-31930
	r30.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-11584
	r31.s64 = r11.s64 + -11584;
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181850
	if (cr6.eq) goto loc_83181850;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181850:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831814b0
	sub_831814B0(ctx, base);
	// lwz r3,-21356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318187c
	if (cr6.eq) goto loc_8318187C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318187C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181888"))) PPC_WEAK_FUNC(sub_83181888);
PPC_FUNC_IMPL(__imp__sub_83181888) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831818c0
	if (cr6.eq) goto loc_831818C0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16152
	ctx.r3.s64 = r11.s64 + -16152;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831818C0:
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-12448
	r30.s64 = r11.s64 + -12448;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181900
	if (cr6.eq) goto loc_83181900;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// addi r11,r1,148
	r11.s64 = ctx.r1.s64 + 148;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181900:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x83181348
	sub_83181348(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831812a8
	sub_831812A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181610
	sub_83181610(ctx, base);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r7,148(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,1
	r11.s64 = 1;
	// lwz r8,1284(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1284);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,1296(r31)
	PPC_STORE_U32(r31.u32 + 1296, ctx.r9.u32);
	// stw r10,1288(r31)
	PPC_STORE_U32(r31.u32 + 1288, ctx.r10.u32);
	// stw r7,1300(r31)
	PPC_STORE_U32(r31.u32 + 1300, ctx.r7.u32);
	// stw r11,1280(r31)
	PPC_STORE_U32(r31.u32 + 1280, r11.u32);
	// bne cr6,0x8318195c
	if (!cr6.eq) goto loc_8318195C;
	// stw r11,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r11.u32);
loc_8318195C:
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318197c
	if (cr6.eq) goto loc_8318197C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318197C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181988"))) PPC_WEAK_FUNC(sub_83181988);
PPC_FUNC_IMPL(__imp__sub_83181988) {
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
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831819c4
	if (cr6.eq) goto loc_831819C4;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16104
	ctx.r3.s64 = r11.s64 + -16104;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_831819C4:
	// lis r28,-31930
	r28.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-12232
	r30.s64 = r11.s64 + -12232;
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181a08
	if (cr6.eq) goto loc_83181A08;
	// addi r11,r1,164
	r11.s64 = ctx.r1.s64 + 164;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// addi r11,r1,172
	r11.s64 = ctx.r1.s64 + 172;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181A08:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317ef58
	sub_8317EF58(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x8313e4d0
	sub_8313E4D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x831813f0
	sub_831813F0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831812a8
	sub_831812A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181610
	sub_83181610(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,1
	r11.s64 = 1;
	// lwz r8,1284(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1284);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r9,1304(r31)
	PPC_STORE_U32(r31.u32 + 1304, ctx.r9.u32);
	// stw r10,1288(r31)
	PPC_STORE_U32(r31.u32 + 1288, ctx.r10.u32);
	// stw r7,1308(r31)
	PPC_STORE_U32(r31.u32 + 1308, ctx.r7.u32);
	// stw r11,1280(r31)
	PPC_STORE_U32(r31.u32 + 1280, r11.u32);
	// bne cr6,0x83181a74
	if (!cr6.eq) goto loc_83181A74;
	// stw r11,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r11.u32);
loc_83181A74:
	// lwz r3,-21356(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181a94
	if (cr6.eq) goto loc_83181A94;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181A94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83181AA0"))) PPC_WEAK_FUNC(sub_83181AA0);
PPC_FUNC_IMPL(__imp__sub_83181AA0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8317b380
	sub_8317B380(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1288);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r10,1284(r31)
	PPC_STORE_U32(r31.u32 + 1284, ctx.r10.u32);
	// beq cr6,0x83181b10
	if (cr6.eq) goto loc_83181B10;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83181afc
	if (cr6.eq) goto loc_83181AFC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83181b1c
	if (!cr6.eq) goto loc_83181B1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,1308(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1308);
	// lwz r5,1304(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1304);
	// lwz r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// bl 0x83181988
	sub_83181988(ctx, base);
	// b 0x83181b1c
	goto loc_83181B1C;
loc_83181AFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,1300(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1300);
	// lwz r4,1296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1296);
	// bl 0x83181888
	sub_83181888(ctx, base);
	// b 0x83181b1c
	goto loc_83181B1C;
loc_83181B10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1080(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1080);
	// bl 0x831816f0
	sub_831816F0(ctx, base);
loc_83181B1C:
	// lwz r11,1316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1316);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,1284(r31)
	PPC_STORE_U32(r31.u32 + 1284, ctx.r10.u32);
	// stw r11,1316(r31)
	PPC_STORE_U32(r31.u32 + 1316, r11.u32);
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

__attribute__((alias("__imp__sub_83181B48"))) PPC_WEAK_FUNC(sub_83181B48);
PPC_FUNC_IMPL(__imp__sub_83181B48) {
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
	// bl 0x8317b100
	sub_8317B100(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83181b78
	if (cr6.eq) goto loc_83181B78;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-16052
	ctx.r3.s64 = r11.s64 + -16052;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83181B78:
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-12664
	r30.s64 = r11.s64 + -12664;
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181ba8
	if (cr6.eq) goto loc_83181BA8;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181BA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831812a8
	sub_831812A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831817f0
	sub_831817F0(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// stw r11,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r11.u32);
	// lwz r3,-21356(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21356);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83181be4
	if (cr6.eq) goto loc_83181BE4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83181BE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181BF0"))) PPC_WEAK_FUNC(sub_83181BF0);
PPC_FUNC_IMPL(__imp__sub_83181BF0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8317b380
	sub_8317B380(ctx, base);
	// lwz r11,1312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1312);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// divw r9,r8,r9
	ctx.r9.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x83181c4c
	if (cr6.gt) goto loc_83181C4C;
	// lwz r11,1292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1292);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83181c4c
	if (!cr6.eq) goto loc_83181C4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181b48
	sub_83181B48(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r11.u32);
loc_83181C4C:
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

__attribute__((alias("__imp__sub_83181C60"))) PPC_WEAK_FUNC(sub_83181C60);
PPC_FUNC_IMPL(__imp__sub_83181C60) {
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
	// lwz r11,1276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1276);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83181cf0
	if (cr6.eq) goto loc_83181CF0;
	// lwz r11,1280(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83181cf0
	if (cr6.eq) goto loc_83181CF0;
	// lwz r11,1292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1292);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83181cbc
	if (!cr6.eq) goto loc_83181CBC;
	// bl 0x8317b530
	sub_8317B530(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83181cbc
	if (!cr6.eq) goto loc_83181CBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181568
	sub_83181568(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x83181cf0
	if (cr6.lt) goto loc_83181CF0;
	// li r11,2
	r11.s64 = 2;
	// stw r11,1292(r31)
	PPC_STORE_U32(r31.u32 + 1292, r11.u32);
loc_83181CBC:
	// lwz r11,1292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1292);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83181cd0
	if (cr6.eq) goto loc_83181CD0;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83181cf0
	if (!cr6.eq) goto loc_83181CF0;
loc_83181CD0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317b118
	sub_8317B118(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x83181ce8
	if (!cr6.eq) goto loc_83181CE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181aa0
	sub_83181AA0(ctx, base);
loc_83181CE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181bf0
	sub_83181BF0(ctx, base);
loc_83181CF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D08"))) PPC_WEAK_FUNC(sub_83181D08);
PPC_FUNC_IMPL(__imp__sub_83181D08) {
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
	// beq cr6,0x83181d38
	if (cr6.eq) goto loc_83181D38;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,273
	ctx.r4.u64 = ctx.r4.u64 | 273;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
loc_83181D38:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181D50"))) PPC_WEAK_FUNC(sub_83181D50);
PPC_FUNC_IMPL(__imp__sub_83181D50) {
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
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// bne cr6,0x83181d8c
	if (!cr6.eq) goto loc_83181D8C;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83181db0
	if (!cr6.eq) goto loc_83181DB0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83181db0
	if (!cr6.eq) goto loc_83181DB0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83181D8C:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bne cr6,0x83181db0
	if (!cr6.eq) goto loc_83181DB0;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x83181db0
	if (!cr6.eq) goto loc_83181DB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x83194860
	sub_83194860(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83181db4
	if (cr6.eq) goto loc_83181DB4;
loc_83181DB0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83181DB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181DC8"))) PPC_WEAK_FUNC(sub_83181DC8);
PPC_FUNC_IMPL(__imp__sub_83181DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,643
	r11.s64 = ctx.r4.s64 + 643;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181DD8"))) PPC_WEAK_FUNC(sub_83181DD8);
PPC_FUNC_IMPL(__imp__sub_83181DD8) {
	PPC_FUNC_PROLOGUE();
	// stw r5,3376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3376, ctx.r5.u32);
	// stw r4,3372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3372, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181DE8"))) PPC_WEAK_FUNC(sub_83181DE8);
PPC_FUNC_IMPL(__imp__sub_83181DE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mulli r11,r4,68
	r11.s64 = ctx.r4.s64 * 68;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,5952(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 5952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83181e04
	if (!cr6.eq) goto loc_83181E04;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_83181E04:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83181E10"))) PPC_WEAK_FUNC(sub_83181E10);
PPC_FUNC_IMPL(__imp__sub_83181E10) {
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
	// bl 0x83181d50
	sub_83181D50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83181e40
	if (cr6.eq) goto loc_83181E40;
	// addi r11,r30,643
	r11.s64 = r30.s64 + 643;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r29.u32);
loc_83181E40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181E48"))) PPC_WEAK_FUNC(sub_83181E48);
PPC_FUNC_IMPL(__imp__sub_83181E48) {
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
	// bl 0x83181d50
	sub_83181D50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83181e78
	if (cr6.eq) goto loc_83181E78;
	// addi r11,r30,743
	r11.s64 = r30.s64 + 743;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r29.u32);
loc_83181E78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181E80"))) PPC_WEAK_FUNC(sub_83181E80);
PPC_FUNC_IMPL(__imp__sub_83181E80) {
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
	// bne cr6,0x83181ebc
	if (!cr6.eq) goto loc_83181EBC;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83181EBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83181ee4
	if (cr6.eq) goto loc_83181EE4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83181EE4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181F00"))) PPC_WEAK_FUNC(sub_83181F00);
PPC_FUNC_IMPL(__imp__sub_83181F00) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83181f3c
	if (cr6.eq) goto loc_83181F3C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,279
	ctx.r4.u64 = ctx.r4.u64 | 279;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83181F3C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181de8
	sub_83181DE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83181F58"))) PPC_WEAK_FUNC(sub_83181F58);
PPC_FUNC_IMPL(__imp__sub_83181F58) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,-21984
	r29.s64 = r11.s64 + -21984;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r29,524
	r31.s64 = r29.s64 + 524;
loc_83181F78:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83181f9c
	if (!cr6.eq) goto loc_83181F9C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_83181F9C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,556
	r11.s64 = r29.s64 + 556;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83181f78
	if (cr6.lt) goto loc_83181F78;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83181FB8"))) PPC_WEAK_FUNC(sub_83181FB8);
PPC_FUNC_IMPL(__imp__sub_83181FB8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83182000
	if (!cr6.eq) goto loc_83182000;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181f58
	sub_83181F58(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83182000:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182028
	if (cr6.eq) goto loc_83182028;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,274
	ctx.r4.u64 = ctx.r4.u64 | 274;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83182028:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181e48
	sub_83181E48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83182058"))) PPC_WEAK_FUNC(sub_83182058);
PPC_FUNC_IMPL(__imp__sub_83182058) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8318209c
	if (cr6.eq) goto loc_8318209C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_8318209C:
	// addi r11,r30,-188
	r11.s64 = r30.s64 + -188;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(r11.u32, 67, xer);
	// bgt cr6,0x831820c0
	if (cr6.gt) goto loc_831820C0;
	// addi r10,r30,-172
	ctx.r10.s64 = r30.s64 + -172;
	// lwz r11,6020(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 6020);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,336(r11)
	PPC_STORE_U32(r11.u32 + 336, r28.u32);
	// stw r27,340(r11)
	PPC_STORE_U32(r11.u32 + 340, r27.u32);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
loc_831820C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831820C8"))) PPC_WEAK_FUNC(sub_831820C8);
PPC_FUNC_IMPL(__imp__sub_831820C8) {
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
	// bl 0x83194fd8
	sub_83194FD8(ctx, base);
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

__attribute__((alias("__imp__sub_831820F0"))) PPC_WEAK_FUNC(sub_831820F0);
PPC_FUNC_IMPL(__imp__sub_831820F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6020(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6020);
	// lwz r5,3384(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3384);
	// lwz r4,3380(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3380);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x831950d0
	sub_831950D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83182108"))) PPC_WEAK_FUNC(sub_83182108);
PPC_FUNC_IMPL(__imp__sub_83182108) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r4,6028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6028);
	// bl 0x83197030
	sub_83197030(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831821a4
	if (!cr6.eq) goto loc_831821A4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r5,2048
	cr6.compare<int32_t>(ctx.r5.s32, 2048, xer);
	// blt cr6,0x831821a0
	if (cr6.lt) goto loc_831821A0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8108);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x831821a0
	if (cr6.eq) goto loc_831821A0;
	// lwz r11,8104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8104);
	// clrlwi r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831821a0
	if (!cr6.eq) goto loc_831821A0;
	// lwz r11,8096(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8096);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83182198
	if (cr6.eq) goto loc_83182198;
	// lwz r3,8100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83182198:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,8108(r31)
	PPC_STORE_U32(r31.u32 + 8108, r11.u32);
loc_831821A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831821A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831821B0"))) PPC_WEAK_FUNC(sub_831821B0);
PPC_FUNC_IMPL(__imp__sub_831821B0) {
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
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,6028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6028);
	// bl 0x83197340
	sub_83197340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831821ec
	if (!cr6.eq) goto loc_831821EC;
	// lwz r11,8104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8104);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,8104(r31)
	PPC_STORE_U32(r31.u32 + 8104, r11.u32);
loc_831821EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182208"))) PPC_WEAK_FUNC(sub_83182208);
PPC_FUNC_IMPL(__imp__sub_83182208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stw r4,8096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8096, ctx.r4.u32);
	// stw r5,8100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8100, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182220"))) PPC_WEAK_FUNC(sub_83182220);
PPC_FUNC_IMPL(__imp__sub_83182220) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3404(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83182258
	if (cr6.eq) goto loc_83182258;
	// ld r10,2448(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 2448);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,3408(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3408);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83182258:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182268"))) PPC_WEAK_FUNC(sub_83182268);
PPC_FUNC_IMPL(__imp__sub_83182268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83182290
	if (!cr6.gt) goto loc_83182290;
loc_83182274:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83182298
	if (!cr6.eq) goto loc_83182298;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x83182274
	if (cr6.lt) goto loc_83182274;
loc_83182290:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83182298:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831822A0"))) PPC_WEAK_FUNC(sub_831822A0);
PPC_FUNC_IMPL(__imp__sub_831822A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6028(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6028);
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,5032
	ctx.r3.s64 = r11.s64 + 5032;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831822B8"))) PPC_WEAK_FUNC(sub_831822B8);
PPC_FUNC_IMPL(__imp__sub_831822B8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83197348
	sub_83197348(ctx, base);
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

__attribute__((alias("__imp__sub_83182338"))) PPC_WEAK_FUNC(sub_83182338);
PPC_FUNC_IMPL(__imp__sub_83182338) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x83197028
	sub_83197028(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83182478
	if (!cr6.eq) goto loc_83182478;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r29,128(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r11
	r30.u64 = r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r26,136(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r23,148(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// ble cr6,0x83182398
	if (!cr6.gt) goto loc_83182398;
loc_8318238C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b64
	return;
loc_83182398:
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// bne cr6,0x831823ec
	if (!cr6.eq) goto loc_831823EC;
	// cmpdi cr6,r27,0
	cr6.compare<int64_t>(r27.s64, 0, xer);
	// blt cr6,0x83182428
	if (cr6.lt) goto loc_83182428;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83197508
	sub_83197508(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318238c
	if (!cr6.eq) goto loc_8318238C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r27.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831975a0
	sub_831975A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182428
	if (cr6.eq) goto loc_83182428;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b64
	return;
loc_831823EC:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// bne cr6,0x83182428
	if (!cr6.eq) goto loc_83182428;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r10,-21408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -21408);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83182428
	if (cr6.eq) goto loc_83182428;
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r27.u64);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// addi r3,r28,4952
	ctx.r3.s64 = r28.s64 + 4952;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8318238c
	if (cr6.eq) goto loc_8318238C;
loc_83182428:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bgt cr6,0x83182440
	if (cr6.gt) goto loc_83182440;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x83182454
	goto loc_83182454;
loc_83182440:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// subf r5,r30,r31
	ctx.r5.s64 = r31.s64 - r30.s64;
	// add r4,r30,r25
	ctx.r4.u64 = r30.u64 + r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_83182454:
	// bl 0x83197348
	sub_83197348(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83197338
	sub_83197338(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83182478
	if (!cr6.eq) goto loc_83182478;
	// li r3,1
	ctx.r3.s64 = 1;
loc_83182478:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_83182480"))) PPC_WEAK_FUNC(sub_83182480);
PPC_FUNC_IMPL(__imp__sub_83182480) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194840
	sub_83194840(ctx, base);
	// lwz r4,6036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6036);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x831824b8
	if (cr6.eq) goto loc_831824B8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196970
	sub_83196970(ctx, base);
loc_831824B8:
	// lwz r4,6032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6032);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x831824d0
	if (cr6.eq) goto loc_831824D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196970
	sub_83196970(ctx, base);
loc_831824D0:
	// lwz r4,6040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6040);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x831824e8
	if (cr6.eq) goto loc_831824E8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196970
	sub_83196970(ctx, base);
loc_831824E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182500"))) PPC_WEAK_FUNC(sub_83182500);
PPC_FUNC_IMPL(__imp__sub_83182500) {
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
	// li r30,1
	r30.s64 = 1;
	// lwz r4,6036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6036);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x83182530
	if (cr6.eq) goto loc_83182530;
	// bl 0x83196988
	sub_83196988(ctx, base);
	// clrlwi r30,r3,31
	r30.u64 = ctx.r3.u32 & 0x1;
loc_83182530:
	// lwz r4,6032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6032);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x83182548
	if (cr6.eq) goto loc_83182548;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196988
	sub_83196988(ctx, base);
	// and r30,r3,r30
	r30.u64 = ctx.r3.u64 & r30.u64;
loc_83182548:
	// lwz r4,6040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6040);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x83182564
	if (cr6.eq) goto loc_83182564;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196988
	sub_83196988(ctx, base);
	// and r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 & r30.u64;
	// b 0x83182568
	goto loc_83182568;
loc_83182564:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83182568:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182580"))) PPC_WEAK_FUNC(sub_83182580);
PPC_FUNC_IMPL(__imp__sub_83182580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6020(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6020);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182598"))) PPC_WEAK_FUNC(sub_83182598);
PPC_FUNC_IMPL(__imp__sub_83182598) {
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
	// lis r11,8
	r11.s64 = 524288;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x831825d8
	if (!cr6.eq) goto loc_831825D8;
	// bl 0x831943e8
	sub_831943E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831825d8
	if (!cr6.eq) goto loc_831825D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194418
	sub_83194418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x831825dc
	if (cr6.eq) goto loc_831825DC;
loc_831825D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831825DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831825F0"))) PPC_WEAK_FUNC(sub_831825F0);
PPC_FUNC_IMPL(__imp__sub_831825F0) {
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
	// lwz r4,6028(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6028);
	// lwz r30,6020(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6020);
	// bl 0x83196988
	sub_83196988(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318262c
	if (!cr6.eq) goto loc_8318262C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// bl 0x83182480
	sub_83182480(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x83182630
	goto loc_83182630;
loc_8318262C:
	// li r11,0
	r11.s64 = 0;
loc_83182630:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8318263c
	if (cr6.eq) goto loc_8318263C;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8318263C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83182648"))) PPC_WEAK_FUNC(sub_83182648);
PPC_FUNC_IMPL(__imp__sub_83182648) {
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
	// lwz r4,6036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6036);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x83182678
	if (cr6.eq) goto loc_83182678;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_83182678:
	// lwz r4,6032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6032);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x83182690
	if (cr6.eq) goto loc_83182690;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// or r30,r3,r30
	r30.u64 = ctx.r3.u64 | r30.u64;
loc_83182690:
	// lwz r4,6040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6040);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x831826ac
	if (cr6.eq) goto loc_831826AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | r30.u64;
	// b 0x831826b0
	goto loc_831826B0;
loc_831826AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_831826B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831826C8"))) PPC_WEAK_FUNC(sub_831826C8);
PPC_FUNC_IMPL(__imp__sub_831826C8) {
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
	// lwz r4,6036(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6036);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x831826f8
	if (cr6.eq) goto loc_831826F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x83196938
	sub_83196938(ctx, base);
loc_831826F8:
	// lwz r4,6032(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6032);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x83182710
	if (cr6.eq) goto loc_83182710;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196938
	sub_83196938(ctx, base);
loc_83182710:
	// lwz r4,6040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6040);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x83182728
	if (cr6.eq) goto loc_83182728;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196938
	sub_83196938(ctx, base);
loc_83182728:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182740"))) PPC_WEAK_FUNC(sub_83182740);
PPC_FUNC_IMPL(__imp__sub_83182740) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r31,2660(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2660);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x83182774
	if (cr6.gt) goto loc_83182774;
	// bl 0x831822a0
	sub_831822A0(ctx, base);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83182780
	if (!cr6.gt) goto loc_83182780;
loc_83182774:
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x83182780
	if (!cr6.lt) goto loc_83182780;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_83182780:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x831967d0
	sub_831967D0(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x8318279c
	if (cr6.lt) goto loc_8318279C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8318279C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831827B0"))) PPC_WEAK_FUNC(sub_831827B0);
PPC_FUNC_IMPL(__imp__sub_831827B0) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r30,6020(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6020);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182834
	if (cr6.eq) goto loc_83182834;
	// li r4,80
	ctx.r4.s64 = 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182834
	if (cr6.eq) goto loc_83182834;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967d0
	sub_831967D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83182834
	if (!cr6.eq) goto loc_83182834;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83182834
	if (!cr6.eq) goto loc_83182834;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194830
	sub_83194830(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182834
	if (cr6.eq) goto loc_83182834;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_83182834:
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831828a0
	if (cr6.eq) goto loc_831828A0;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831828a0
	if (cr6.eq) goto loc_831828A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831967d0
	sub_831967D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831828a0
	if (!cr6.eq) goto loc_831828A0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831828a0
	if (!cr6.eq) goto loc_831828A0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194830
	sub_83194830(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831828a0
	if (cr6.eq) goto loc_831828A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_831828A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831828B8"))) PPC_WEAK_FUNC(sub_831828B8);
PPC_FUNC_IMPL(__imp__sub_831828B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,6020(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6020);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_831828E0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83197790
	sub_83197790(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bgt cr6,0x83182900
	if (cr6.gt) goto loc_83182900;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_83182900:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bgt cr6,0x83182910
	if (cr6.gt) goto loc_83182910;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_83182910:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// blt cr6,0x831828e0
	if (cr6.lt) goto loc_831828E0;
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83182938"))) PPC_WEAK_FUNC(sub_83182938);
PPC_FUNC_IMPL(__imp__sub_83182938) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,6020(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6020);
	// addi r31,r3,2320
	r31.s64 = ctx.r3.s64 + 2320;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197728
	sub_83197728(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x83182974
	if (cr6.eq) goto loc_83182974;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83182974
	if (!cr6.gt) goto loc_83182974;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_83182974:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197790
	sub_83197790(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x83182994
	if (cr6.eq) goto loc_83182994;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_83182994:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x831829a8
	if (!cr6.eq) goto loc_831829A8;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_831829A8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x831829bc
	if (!cr6.eq) goto loc_831829BC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_831829BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831829C8"))) PPC_WEAK_FUNC(sub_831829C8);
PPC_FUNC_IMPL(__imp__sub_831829C8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,5036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 5036);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83182a04
	if (cr6.eq) goto loc_83182A04;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83196e58
	sub_83196E58(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 2440);
	// bl 0x83196ad0
	sub_83196AD0(ctx, base);
	// std r3,2440(r31)
	PPC_STORE_U64(r31.u32 + 2440, ctx.r3.u64);
loc_83182A04:
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

__attribute__((alias("__imp__sub_83182A18"))) PPC_WEAK_FUNC(sub_83182A18);
PPC_FUNC_IMPL(__imp__sub_83182A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,0
	r11.s64 = 0;
	// clrldi r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// std r8,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r8.u64);
	// li r8,68
	ctx.r8.s64 = 68;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r6,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r6.u32);
	// stw r5,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r5.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83182A80:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83182a80
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83182A80;
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, r11.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, r11.u32);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182AA0"))) PPC_WEAK_FUNC(sub_83182AA0);
PPC_FUNC_IMPL(__imp__sub_83182AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83182AA8"))) PPC_WEAK_FUNC(sub_83182AA8);
PPC_FUNC_IMPL(__imp__sub_83182AA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x83194ef0
	sub_83194EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83182AB0"))) PPC_WEAK_FUNC(sub_83182AB0);
PPC_FUNC_IMPL(__imp__sub_83182AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3339
	ctx.r4.u64 = ctx.r4.u64 | 3339;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83182AC0"))) PPC_WEAK_FUNC(sub_83182AC0);
PPC_FUNC_IMPL(__imp__sub_83182AC0) {
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
	// addi r31,r5,48
	r31.s64 = ctx.r5.s64 + 48;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,352(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// bl 0x83195178
	sub_83195178(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83195178
	sub_83195178(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x83182b24
	if (!cr6.eq) goto loc_83182B24;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83182b24
	if (!cr6.eq) goto loc_83182B24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83182B24:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r4,r4,3341
	ctx.r4.u64 = ctx.r4.u64 | 3341;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83182B40"))) PPC_WEAK_FUNC(sub_83182B40);
PPC_FUNC_IMPL(__imp__sub_83182B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6020(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6020);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182B50"))) PPC_WEAK_FUNC(sub_83182B50);
PPC_FUNC_IMPL(__imp__sub_83182B50) {
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
	// beq cr6,0x83182b6c
	if (cr6.eq) goto loc_83182B6C;
loc_83182B68:
	// b 0x83182b68
	goto loc_83182B68;
loc_83182B6C:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-23176
	ctx.r4.s64 = r11.s64 + -23176;
	// bl 0x83195088
	sub_83195088(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83182ba4
	if (cr6.eq) goto loc_83182BA4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3329
	ctx.r4.u64 = ctx.r4.u64 | 3329;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83182BA4:
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-21360(r10)
	PPC_STORE_U32(ctx.r10.u32 + -21360, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182BC0"))) PPC_WEAK_FUNC(sub_83182BC0);
PPC_FUNC_IMPL(__imp__sub_83182BC0) {
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
	// bl 0x831822a0
	sub_831822A0(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83182c08
	if (!cr6.eq) goto loc_83182C08;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83182bf4
	if (!cr6.eq) goto loc_83182BF4;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83182c08
	if (cr6.eq) goto loc_83182C08;
loc_83182BF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83182C08:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
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

__attribute__((alias("__imp__sub_83182C30"))) PPC_WEAK_FUNC(sub_83182C30);
PPC_FUNC_IMPL(__imp__sub_83182C30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83182c6c
	if (!cr6.eq) goto loc_83182C6C;
loc_83182C60:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_83182C6C:
	// lwz r31,6020(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 6020);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83182c80
	if (!cr6.eq) goto loc_83182C80;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
loc_83182C80:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83182c90
	if (!cr6.eq) goto loc_83182C90;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_83182C90:
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x83182ce8
	if (cr6.eq) goto loc_83182CE8;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182ccc
	if (cr6.eq) goto loc_83182CCC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x83182ce4
	if (cr6.lt) goto loc_83182CE4;
	// b 0x83182ce8
	goto loc_83182CE8;
loc_83182CCC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83182ce8
	if (cr6.eq) goto loc_83182CE8;
loc_83182CE4:
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
loc_83182CE8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bne cr6,0x83182c60
	if (!cr6.eq) goto loc_83182C60;
	// cmpdi cr6,r28,0
	cr6.compare<int64_t>(r28.s64, 0, xer);
	// blt cr6,0x83182d28
	if (cr6.lt) goto loc_83182D28;
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// cmpd cr6,r28,r10
	cr6.compare<int64_t>(r28.s64, ctx.r10.s64, xer);
	// bge cr6,0x83182d10
	if (!cr6.lt) goto loc_83182D10;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_83182D10:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// cmpd cr6,r28,r11
	cr6.compare<int64_t>(r28.s64, r11.s64, xer);
	// bge cr6,0x83182d24
	if (!cr6.lt) goto loc_83182D24;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_83182D24:
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_83182D28:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r4,6036(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 6036);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83182338
	sub_83182338(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83182D48"))) PPC_WEAK_FUNC(sub_83182D48);
PPC_FUNC_IMPL(__imp__sub_83182D48) {
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
	// li r4,59
	ctx.r4.s64 = 59;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83182d9c
	if (cr6.eq) goto loc_83182D9C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x83182d9c
	if (!cr6.eq) goto loc_83182D9C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831828b8
	sub_831828B8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x83182da0
	if (!cr6.lt) goto loc_83182DA0;
loc_83182D9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83182DA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182DB8"))) PPC_WEAK_FUNC(sub_83182DB8);
PPC_FUNC_IMPL(__imp__sub_83182DB8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// bge cr6,0x83182df8
	if (!cr6.lt) goto loc_83182DF8;
loc_83182DEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83182DF8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831822b8
	sub_831822B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182dec
	if (cr6.eq) goto loc_83182DEC;
	// subf r31,r3,r31
	r31.s64 = r31.s64 - ctx.r3.s64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x83182e44
	if (!cr6.gt) goto loc_83182E44;
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831822b8
	sub_831822B8(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// beq cr6,0x83182e44
	if (cr6.eq) goto loc_83182E44;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r10,-21360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -21360);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,-21360(r11)
	PPC_STORE_U32(r11.u32 + -21360, ctx.r10.u32);
loc_83182E44:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83182E50"))) PPC_WEAK_FUNC(sub_83182E50);
PPC_FUNC_IMPL(__imp__sub_83182E50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r31,r30,6012
	r31.s64 = r30.s64 + 6012;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// lwz r28,8(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// blt cr6,0x83182ed4
	if (cr6.lt) goto loc_83182ED4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83197908
	sub_83197908(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,8
	r11.s64 = 524288;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x83182ec0
	if (!cr6.eq) goto loc_83182EC0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x83182eb4
	if (!cr6.lt) goto loc_83182EB4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831967c0
	sub_831967C0(ctx, base);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_83182EB4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r11.u32);
	// b 0x83182ed8
	goto loc_83182ED8;
loc_83182EC0:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x83182ed8
	if (cr6.eq) goto loc_83182ED8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r11.u32);
	// b 0x83182ed8
	goto loc_83182ED8;
loc_83182ED4:
	// li r27,0
	r27.s64 = 0;
loc_83182ED8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83182598
	sub_83182598(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182f04
	if (cr6.eq) goto loc_83182F04;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83182480
	sub_83182480(ctx, base);
loc_83182EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_83182F04:
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// bge cr6,0x83182f24
	if (!cr6.lt) goto loc_83182F24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831825f0
	sub_831825F0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83182ef8
	if (!cr6.eq) goto loc_83182EF8;
loc_83182F24:
	// cmpwi cr6,r26,64
	cr6.compare<int32_t>(r26.s32, 64, xer);
	// bge cr6,0x83182f5c
	if (!cr6.lt) goto loc_83182F5C;
	// lis r11,1
	r11.s64 = 65536;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// beq cr6,0x83182f44
	if (cr6.eq) goto loc_83182F44;
	// lis r11,4
	r11.s64 = 262144;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bne cr6,0x83182f5c
	if (!cr6.eq) goto loc_83182F5C;
loc_83182F44:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831825f0
	sub_831825F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_83182F5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83182F68"))) PPC_WEAK_FUNC(sub_83182F68);
PPC_FUNC_IMPL(__imp__sub_83182F68) {
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
	// bl 0x83182648
	sub_83182648(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83182fc4
	if (cr6.eq) goto loc_83182FC4;
	// lwz r30,6028(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6028);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83182fc4
	if (!cr6.eq) goto loc_83182FC4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83182740
	sub_83182740(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83182fc4
	if (cr6.eq) goto loc_83182FC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831826c8
	sub_831826C8(ctx, base);
loc_83182FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83182FE0"))) PPC_WEAK_FUNC(sub_83182FE0);
PPC_FUNC_IMPL(__imp__sub_83182FE0) {
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
	// addi r29,r31,6560
	r29.s64 = r31.s64 + 6560;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,6020(r31)
	PPC_STORE_U32(r31.u32 + 6020, r29.u32);
	// bl 0x83182a18
	sub_83182A18(ctx, base);
	// bl 0x83195048
	sub_83195048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83183024
	if (!cr6.eq) goto loc_83183024;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3336
	ctx.r4.u64 = ctx.r4.u64 | 3336;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83183024:
	// lis r11,-31976
	r11.s64 = -2095579136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,10912
	ctx.r4.s64 = r11.s64 + 10912;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83194dd8
	sub_83194DD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83183060
	if (cr6.eq) goto loc_83183060;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83182aa8
	sub_83182AA8(ctx, base);
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3337
	ctx.r4.u64 = ctx.r4.u64 | 3337;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83183060:
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8096(r31)
	PPC_STORE_U32(r31.u32 + 8096, r11.u32);
	// stw r11,8100(r31)
	PPC_STORE_U32(r31.u32 + 8100, r11.u32);
	// stw r11,8104(r31)
	PPC_STORE_U32(r31.u32 + 8104, r11.u32);
	// stw r11,8108(r31)
	PPC_STORE_U32(r31.u32 + 8108, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83183088"))) PPC_WEAK_FUNC(sub_83183088);
PPC_FUNC_IMPL(__imp__sub_83183088) {
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
	// lwz r11,6020(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 6020);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x83182aa8
	sub_83182AA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831830d4
	if (cr6.eq) goto loc_831830D4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3338
	ctx.r4.u64 = ctx.r4.u64 | 3338;
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
loc_831830D4:
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

__attribute__((alias("__imp__sub_831830F0"))) PPC_WEAK_FUNC(sub_831830F0);
PPC_FUNC_IMPL(__imp__sub_831830F0) {
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
	// lwz r10,7720(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7720);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8318311c
	if (!cr6.eq) goto loc_8318311C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318311C:
	// bl 0x83182b40
	sub_83182B40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgt cr6,0x83183130
	if (cr6.gt) goto loc_83183130;
	// addi r3,r10,2208
	ctx.r3.s64 = ctx.r10.s64 + 2208;
loc_83183130:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183140"))) PPC_WEAK_FUNC(sub_83183140);
PPC_FUNC_IMPL(__imp__sub_83183140) {
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// addi r11,r4,3
	r11.s64 = ctx.r4.s64 + 3;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x83183190
	if (cr6.lt) goto loc_83183190;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83182268
	sub_83182268(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83183190
	if (cr6.eq) goto loc_83183190;
	// stw r4,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r4.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83183190:
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x831831c0
	if (cr6.lt) goto loc_831831C0;
loc_83183198:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197908
	sub_83197908(ctx, base);
	// andis. r11,r3,13
	r11.u64 = ctx.r3.u64 & 851968;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831831e4
	if (!cr6.eq) goto loc_831831E4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// bge cr6,0x83183198
	if (!cr6.lt) goto loc_83183198;
loc_831831C0:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x831831e4
	if (cr6.gt) goto loc_831831E4;
	// add r4,r30,r31
	ctx.r4.u64 = r30.u64 + r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83182bc0
	sub_83182BC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831831e4
	if (cr6.eq) goto loc_831831E4;
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
loc_831831E4:
	// stw r29,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831831F0"))) PPC_WEAK_FUNC(sub_831831F0);
PPC_FUNC_IMPL(__imp__sub_831831F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83182db8
	sub_83182DB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x83183238
	if (!cr6.eq) goto loc_83183238;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83183238
	if (cr6.eq) goto loc_83183238;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83183238:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83183248"))) PPC_WEAK_FUNC(sub_83183248);
PPC_FUNC_IMPL(__imp__sub_83183248) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83183284
	if (!cr6.eq) goto loc_83183284;
loc_83183278:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
loc_83183284:
	// lwz r31,6020(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 6020);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x831832d4
	if (!cr6.eq) goto loc_831832D4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83182d48
	sub_83182D48(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// bl 0x83197790
	sub_83197790(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x831832d4
	if (!cr6.eq) goto loc_831832D4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,73
	ctx.r4.s64 = 73;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
loc_831832D4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x831832e4
	if (!cr6.eq) goto loc_831832E4;
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
loc_831832E4:
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x83183394
	if (cr6.eq) goto loc_83183394;
	// li r4,55
	ctx.r4.s64 = 55;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83183320
	if (cr6.eq) goto loc_83183320;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x83183338
	if (cr6.lt) goto loc_83183338;
	// b 0x83183394
	goto loc_83183394;
loc_83183320:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83183394
	if (cr6.eq) goto loc_83183394;
loc_83183338:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// beq cr6,0x83183394
	if (cr6.eq) goto loc_83183394;
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// blt cr6,0x83183394
	if (cr6.lt) goto loc_83183394;
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83183394
	if (!cr6.eq) goto loc_83183394;
	// lbz r11,1(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83183394
	if (!cr6.eq) goto loc_83183394;
	// lbz r11,2(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83183394
	if (!cr6.eq) goto loc_83183394;
	// lbz r11,3(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 3);
	// cmplwi cr6,r11,179
	cr6.compare<uint32_t>(r11.u32, 179, xer);
	// beq cr6,0x83183390
	if (cr6.eq) goto loc_83183390;
	// addi r11,r11,-184
	r11.s64 = r11.s64 + -184;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83183394
	if (cr6.eq) goto loc_83183394;
loc_83183390:
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
loc_83183394:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x83183278
	if (!cr6.eq) goto loc_83183278;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,6032(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 6032);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83182338
	sub_83182338(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_831833C8"))) PPC_WEAK_FUNC(sub_831833C8);
PPC_FUNC_IMPL(__imp__sub_831833C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r4,6040(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6040);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bne cr6,0x831833fc
	if (!cr6.eq) goto loc_831833FC;
loc_831833F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_831833FC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831965a8
	sub_831965A8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,84(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x831833f0
	if (cr6.eq) goto loc_831833F0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x83182db8
	sub_83182DB8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x8318346c
	if (!cr6.eq) goto loc_8318346C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83183454
	if (cr6.eq) goto loc_83183454;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83183454:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8318346c
	if (cr6.eq) goto loc_8318346C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318346C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83183478"))) PPC_WEAK_FUNC(sub_83183478);
PPC_FUNC_IMPL(__imp__sub_83183478) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x831830f0
	sub_831830F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83183508
	if (cr6.eq) goto loc_83183508;
	// lwz r11,6020(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6020);
	// li r10,-1
	ctx.r10.s64 = -1;
	// clrldi r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 & 0x7FFFFFFFFFFFFFFF;
	// ld r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// cmpd cr6,r10,r8
	cr6.compare<int64_t>(ctx.r10.s64, ctx.r8.s64, xer);
	// beq cr6,0x83183508
	if (cr6.eq) goto loc_83183508;
	// ld r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// std r10,3808(r9)
	PPC_STORE_U64(ctx.r9.u32 + 3808, ctx.r10.u64);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x83183508
	if (!cr6.eq) goto loc_83183508;
	// lwz r10,2344(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2344);
	// mulli r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 * 50;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,2348(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2348);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// ld r10,3800(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + 3800);
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
loc_83183508:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183518"))) PPC_WEAK_FUNC(sub_83183518);
PPC_FUNC_IMPL(__imp__sub_83183518) {
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
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x831830f0
	sub_831830F0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831835ac
	if (cr6.eq) goto loc_831835AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x831835ac
	if (!cr6.eq) goto loc_831835AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r31,r11,48
	r31.s64 = r11.s64 + 48;
	// bl 0x83197808
	sub_83197808(ctx, base);
	// cmpwi cr6,r30,176
	cr6.compare<int32_t>(r30.s32, 176, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// blt cr6,0x8318356c
	if (cr6.lt) goto loc_8318356C;
	// li r5,176
	ctx.r5.s64 = 176;
loc_8318356C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83183590
	if (!cr6.gt) goto loc_83183590;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,352(r31)
	PPC_STORE_U32(r31.u32 + 352, ctx.r5.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83183590:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831835ac
	if (!cr6.gt) goto loc_831835AC;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// stw r5,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83197348
	sub_83197348(ctx, base);
loc_831835AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831835B8"))) PPC_WEAK_FUNC(sub_831835B8);
PPC_FUNC_IMPL(__imp__sub_831835B8) {
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
	// bl 0x831830f0
	sub_831830F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83183628
	if (cr6.eq) goto loc_83183628;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83183628
	if (cr6.eq) goto loc_83183628;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,6020(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 6020);
	// bl 0x83198298
	sub_83198298(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83182ac0
	sub_83182AC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318362c
	if (!cr6.eq) goto loc_8318362C;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// std r11,3800(r30)
	PPC_STORE_U64(r30.u32 + 3800, r11.u64);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// std r11,16(r29)
	PPC_STORE_U64(r29.u32 + 16, r11.u64);
loc_83183628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318362C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83183638"))) PPC_WEAK_FUNC(sub_83183638);
PPC_FUNC_IMPL(__imp__sub_83183638) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r24,r28
	r24.u64 = r28.u64;
	// lwz r30,6020(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 6020);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x83197888
	sub_83197888(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83183694
	if (cr6.eq) goto loc_83183694;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r4,r4,3334
	ctx.r4.u64 = ctx.r4.u64 | 3334;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_83183694:
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r11,r6,-188
	r11.s64 = ctx.r6.s64 + -188;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(r11.u32, 67, xer);
	// bgt cr6,0x831837b0
	if (cr6.gt) goto loc_831837B0;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x831837a4
	if (cr6.lt) goto loc_831837A4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bge cr6,0x831837a4
	if (!cr6.lt) goto loc_831837A4;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge cr6,0x831836e0
	if (!cr6.lt) goto loc_831836E0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r4,r4,3342
	ctx.r4.u64 = ctx.r4.u64 | 3342;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
loc_831836E0:
	// bne cr6,0x831836fc
	if (!cr6.eq) goto loc_831836FC;
	// li r11,1
	r11.s64 = 1;
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
loc_831836FC:
	// cmpw cr6,r26,r8
	cr6.compare<int32_t>(r26.s32, ctx.r8.s32, xer);
	// bge cr6,0x8318371c
	if (!cr6.lt) goto loc_8318371C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831825f0
	sub_831825F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
loc_8318371C:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83183744
	if (cr6.eq) goto loc_83183744;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r5,340(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// lwz r4,336(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 336);
	// bl 0x831831f0
	sub_831831F0(ctx, base);
	// b 0x83183770
	goto loc_83183770;
loc_83183744:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,-15952
	r11.s64 = r11.s64 + -15952;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83183770:
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83183798
	if (cr6.lt) goto loc_83183798;
	// beq cr6,0x83183794
	if (cr6.eq) goto loc_83183794;
	// mr r24,r11
	r24.u64 = r11.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
loc_83183794:
	// stw r23,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r23.u32);
loc_83183798:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
loc_831837A4:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3344
	ctx.r4.u64 = ctx.r4.u64 | 3344;
	// b 0x831837b8
	goto loc_831837B8;
loc_831837B0:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3343
	ctx.r4.u64 = ctx.r4.u64 | 3343;
loc_831837B8:
	// li r11,1
	r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_831837D0"))) PPC_WEAK_FUNC(sub_831837D0);
PPC_FUNC_IMPL(__imp__sub_831837D0) {
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x831982f8
	sub_831982F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83183828
	if (cr6.eq) goto loc_83183828;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318381c
	if (cr6.eq) goto loc_8318381C;
	// addi r6,r29,18
	ctx.r6.s64 = r29.s64 + 18;
	// addi r5,r30,-18
	ctx.r5.s64 = r30.s64 + -18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831833c8
	sub_831833C8(ctx, base);
loc_8318381C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83183828:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831833c8
	sub_831833C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83183848"))) PPC_WEAK_FUNC(sub_83183848);
PPC_FUNC_IMPL(__imp__sub_83183848) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831828b8
	sub_831828B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83182f68
	sub_83182F68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83182938
	sub_83182938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831827b0
	sub_831827B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83183478
	sub_83183478(ctx, base);
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

__attribute__((alias("__imp__sub_831838A0"))) PPC_WEAK_FUNC(sub_831838A0);
PPC_FUNC_IMPL(__imp__sub_831838A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r22,0
	r22.s64 = 0;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r22,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r22.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r22,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r22.u32);
	// mr r21,r22
	r21.u64 = r22.u64;
	// lwz r24,6020(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 6020);
	// lwz r27,0(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x83182e50
	sub_83182E50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831838f0
	if (!cr6.eq) goto loc_831838F0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
loc_831838F0:
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x83183908
	if (cr6.lt) goto loc_83183908;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83197908
	sub_83197908(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x8318390c
	goto loc_8318390C;
loc_83183908:
	// mr r23,r22
	r23.u64 = r22.u64;
loc_8318390C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,3392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 3392);
	// lwz r4,3388(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 3388);
	// bl 0x83195108
	sub_83195108(ctx, base);
	// lwz r11,3404(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3404);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318393c
	if (cr6.eq) goto loc_8318393C;
	// lis r11,-31976
	r11.s64 = -2095579136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,8736
	ctx.r4.s64 = r11.s64 + 8736;
	// b 0x83183944
	goto loc_83183944;
loc_8318393C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_83183944:
	// bl 0x83195140
	sub_83195140(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83195178
	sub_83195178(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318397c
	if (cr6.eq) goto loc_8318397C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,3331
	ctx.r4.u64 = ctx.r4.u64 | 3331;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_8318397C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831839a0
	if (cr6.eq) goto loc_831839A0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83183518
	sub_83183518(ctx, base);
loc_831839A0:
	// lwz r11,8096(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8096);
	// lis r26,8
	r26.s64 = 524288;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// cmpw cr6,r10,r26
	cr6.compare<int32_t>(ctx.r10.s32, r26.s32, xer);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,21,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FC;
	// addi r27,r11,4
	r27.s64 = r11.s64 + 4;
	// bne cr6,0x83183a0c
	if (!cr6.eq) goto loc_83183A0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831943e8
	sub_831943E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831839f0
	if (cr6.eq) goto loc_831839F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83182580
	sub_83182580(ctx, base);
loc_831839DC:
	// stw r27,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r27.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r27,344(r24)
	PPC_STORE_U32(r24.u32 + 344, r27.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
loc_831839F0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bne cr6,0x83183a0c
	if (!cr6.eq) goto loc_83183A0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194418
	sub_83194418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831839dc
	if (!cr6.eq) goto loc_831839DC;
loc_83183A0C:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x83183aa0
	if (!cr6.eq) goto loc_83183AA0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83183140
	sub_83183140(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83183b34
	if (!cr6.gt) goto loc_83183B34;
	// lwz r11,344(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 344);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x83183b34
	if (cr6.lt) goto loc_83183B34;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x83183a78
	if (!cr6.lt) goto loc_83183A78;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x83183a8c
	if (!cr6.gt) goto loc_83183A8C;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
loc_83183A78:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,344(r24)
	PPC_STORE_U32(r24.u32 + 344, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
loc_83183A8C:
	// stw r9,344(r24)
	PPC_STORE_U32(r24.u32 + 344, ctx.r9.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r22,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
loc_83183AA0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83183af4
	if (!cr6.eq) goto loc_83183AF4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x831825f0
	sub_831825F0(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83183b34
	if (!cr6.eq) goto loc_83183B34;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// ble cr6,0x83183b34
	if (!cr6.gt) goto loc_83183B34;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x83183ae0
	if (cr6.gt) goto loc_83183AE0;
	// li r11,1
	r11.s64 = 1;
loc_83183AE0:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
loc_83183AF4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// subf r5,r11,r29
	ctx.r5.s64 = r29.s64 - r11.s64;
	// bl 0x83183638
	sub_83183638(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83183b2c
	if (!cr6.eq) goto loc_83183B2C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_83183B2C:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,344(r24)
	PPC_STORE_U32(r24.u32 + 344, r11.u32);
loc_83183B34:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83183B40"))) PPC_WEAK_FUNC(sub_83183B40);
PPC_FUNC_IMPL(__imp__sub_83183B40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r29,40(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83183c00
	if (!cr6.eq) goto loc_83183C00;
loc_83183B64:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83182108
	sub_83182108(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83183c00
	if (!cr6.eq) goto loc_83183C00;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x831838a0
	sub_831838A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83183c00
	if (!cr6.eq) goto loc_83183C00;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r8,2448(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 2448);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// ld r10,2456(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 2456);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// std r9,2448(r31)
	PPC_STORE_U64(r31.u32 + 2448, ctx.r9.u64);
	// std r11,2456(r31)
	PPC_STORE_U64(r31.u32 + 2456, r11.u64);
	// beq cr6,0x83183c00
	if (cr6.eq) goto loc_83183C00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831821b0
	sub_831821B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x83183c00
	if (!cr6.eq) goto loc_83183C00;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83183b64
	if (cr6.eq) goto loc_83183B64;
loc_83183C00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831829c8
	sub_831829C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83183C18"))) PPC_WEAK_FUNC(sub_83183C18);
PPC_FUNC_IMPL(__imp__sub_83183C18) {
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
	// bl 0x83182500
	sub_83182500(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83183c44
	if (!cr6.eq) goto loc_83183C44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83183c70
	goto loc_83183C70;
loc_83183C44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831820f0
	sub_831820F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83183b40
	sub_83183B40(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83183c6c
	if (!cr6.eq) goto loc_83183C6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83183848
	sub_83183848(ctx, base);
loc_83183C6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_83183C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183C88"))) PPC_WEAK_FUNC(sub_83183C88);
PPC_FUNC_IMPL(__imp__sub_83183C88) {
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
	// lis r28,-31930
	r28.s64 = -2092564480;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r31,r11,-5856
	r31.s64 = r11.s64 + -5856;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83183cc8
	if (cr6.eq) goto loc_83183CC8;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83183CC8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83183c18
	sub_83183C18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83183d0c
	if (cr6.eq) goto loc_83183D0C;
	// addi r11,r30,2440
	r11.s64 = r30.s64 + 2440;
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r11,r30,2448
	r11.s64 = r30.s64 + 2448;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r11,r30,2456
	r11.s64 = r30.s64 + 2456;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83183D0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83183D18"))) PPC_WEAK_FUNC(sub_83183D18);
PPC_FUNC_IMPL(__imp__sub_83183D18) {
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
	// bl 0x8313af98
	sub_8313AF98(ctx, base);
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
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

__attribute__((alias("__imp__sub_83183D48"))) PPC_WEAK_FUNC(sub_83183D48);
PPC_FUNC_IMPL(__imp__sub_83183D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x8313b778
	sub_8313B778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83183D54"))) PPC_WEAK_FUNC(sub_83183D54);
PPC_FUNC_IMPL(__imp__sub_83183D54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183D58"))) PPC_WEAK_FUNC(sub_83183D58);
PPC_FUNC_IMPL(__imp__sub_83183D58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8313ad78
	sub_8313AD78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83183D60"))) PPC_WEAK_FUNC(sub_83183D60);
PPC_FUNC_IMPL(__imp__sub_83183D60) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8313b7e8
	sub_8313B7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83183D68"))) PPC_WEAK_FUNC(sub_83183D68);
PPC_FUNC_IMPL(__imp__sub_83183D68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8313bb40
	sub_8313BB40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83183D70"))) PPC_WEAK_FUNC(sub_83183D70);
PPC_FUNC_IMPL(__imp__sub_83183D70) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8313ba70
	sub_8313BA70(ctx, base);
	// extsw r11,r30
	r11.s64 = r30.s32;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// rldicr r7,r11,11,52
	ctx.r7.u64 = __builtin_rotateleft64(r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313b838
	sub_8313B838(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313b0b0
	sub_8313B0B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83183DC8"))) PPC_WEAK_FUNC(sub_83183DC8);
PPC_FUNC_IMPL(__imp__sub_83183DC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8313b8a0
	sub_8313B8A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83183DD0"))) PPC_WEAK_FUNC(sub_83183DD0);
PPC_FUNC_IMPL(__imp__sub_83183DD0) {
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
	// bl 0x8313b920
	sub_8313B920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8313ba70
	sub_8313BA70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183E08"))) PPC_WEAK_FUNC(sub_83183E08);
PPC_FUNC_IMPL(__imp__sub_83183E08) {
	PPC_FUNC_PROLOGUE();
	// b 0x8313af98
	sub_8313AF98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83183E10"))) PPC_WEAK_FUNC(sub_83183E10);
PPC_FUNC_IMPL(__imp__sub_83183E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,26214
	r11.s64 = 1717960704;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// ori r10,r11,26215
	ctx.r10.u64 = r11.u64 | 26215;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mulhw r11,r4,r10
	r11.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83183e64
	if (!cr0.eq) goto loc_83183E64;
	// li r11,10
	r11.s64 = 10;
	// li r10,100
	ctx.r10.s64 = 100;
	// divw r11,r4,r11
	r11.s32 = ctx.r4.s32 / r11.s32;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
loc_83183E64:
	// li r11,1000
	r11.s64 = 1000;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183E78"))) PPC_WEAK_FUNC(sub_83183E78);
PPC_FUNC_IMPL(__imp__sub_83183E78) {
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
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// sth r11,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, r11.u16);
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183EA8"))) PPC_WEAK_FUNC(sub_83183EA8);
PPC_FUNC_IMPL(__imp__sub_83183EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,664(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// cmpwi cr6,r11,-5
	cr6.compare<int32_t>(r11.s32, -5, xer);
	// bne cr6,0x83183ebc
	if (!cr6.eq) goto loc_83183EBC;
	// stw r4,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r4.u32);
	// blr 
	return;
loc_83183EBC:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,672(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// stw r4,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r4.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bgt cr6,0x83183ee0
	if (cr6.gt) goto loc_83183EE0;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83183EE0:
	// lwz r10,676(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// stw r9,672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 672, ctx.r9.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// blt cr6,0x83183ef8
	if (cr6.lt) goto loc_83183EF8;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83183EF8:
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lwz r10,668(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// stw r9,676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 676, ctx.r9.u32);
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x83183f30
	if (cr6.eq) goto loc_83183F30;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x83183f30
	if (!cr6.gt) goto loc_83183F30;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83183f30
	if (cr6.eq) goto loc_83183F30;
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_83183F30:
	// stw r11,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183F38"))) PPC_WEAK_FUNC(sub_83183F38);
PPC_FUNC_IMPL(__imp__sub_83183F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,664(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 664);
	// lwz r10,668(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// lwz r9,672(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + r11.u64;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x83183f5c
	if (!cr6.lt) goto loc_83183F5C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
loc_83183F5C:
	// cmpw cr6,r4,r3
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183F70"))) PPC_WEAK_FUNC(sub_83183F70);
PPC_FUNC_IMPL(__imp__sub_83183F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x83183f84
	if (cr6.eq) goto loc_83183F84;
loc_83183F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83183F84:
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83183f7c
	if (!cr6.eq) goto loc_83183F7C;
	// lwz r11,2416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183FA0"))) PPC_WEAK_FUNC(sub_83183FA0);
PPC_FUNC_IMPL(__imp__sub_83183FA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,724(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 724);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83183fb4
	if (!cr6.eq) goto loc_83183FB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83183FB4:
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83183FC8"))) PPC_WEAK_FUNC(sub_83183FC8);
PPC_FUNC_IMPL(__imp__sub_83183FC8) {
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
	// li r4,71
	ctx.r4.s64 = 71;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83183ff4
	if (!cr6.eq) goto loc_83183FF4;
	// lwz r11,684(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 684);
	// b 0x83183ff8
	goto loc_83183FF8;
loc_83183FF4:
	// lwz r11,748(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 748);
loc_83183FF8:
	// stw r11,728(r31)
	PPC_STORE_U32(r31.u32 + 728, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184010"))) PPC_WEAK_FUNC(sub_83184010);
PPC_FUNC_IMPL(__imp__sub_83184010) {
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
	// li r4,71
	ctx.r4.s64 = 71;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// lwz r10,728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 728);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83184060
	if (!cr6.eq) goto loc_83184060;
	// lwz r11,684(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 684);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r11,444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 444);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83184060:
	// lwz r11,748(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 748);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,752(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 752);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83184080"))) PPC_WEAK_FUNC(sub_83184080);
PPC_FUNC_IMPL(__imp__sub_83184080) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831840ec
	if (cr6.eq) goto loc_831840EC;
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x831840ec
	if (cr6.eq) goto loc_831840EC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r31,3464
	ctx.r4.s64 = r31.s64 + 3464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184010
	sub_83184010(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bgt cr6,0x831840f0
	if (cr6.gt) goto loc_831840F0;
loc_831840EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_831840F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184108"))) PPC_WEAK_FUNC(sub_83184108);
PPC_FUNC_IMPL(__imp__sub_83184108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// ld r11,344(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 344);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x8318411c
	if (!cr6.lt) goto loc_8318411C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8318411C:
	// ld r11,344(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 344);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * r11.s64;
	// ori r9,r9,24464
	ctx.r9.u64 = ctx.r9.u64 | 24464;
	// divd r9,r10,r9
	ctx.r9.s64 = ctx.r10.s64 / ctx.r9.s64;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// std r11,-21376(r10)
	PPC_STORE_U64(ctx.r10.u32 + -21376, r11.u64);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r3,-21364(r11)
	PPC_STORE_U32(r11.u32 + -21364, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184150"))) PPC_WEAK_FUNC(sub_83184150);
PPC_FUNC_IMPL(__imp__sub_83184150) {
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
	// lwz r11,280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// beq cr6,0x8318417c
	if (cr6.eq) goto loc_8318417C;
	// lwz r31,316(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r5,320(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// b 0x8318418c
	goto loc_8318418C;
loc_8318417C:
	// lwz r31,272(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x831841b8
	if (cr6.lt) goto loc_831841B8;
	// lwz r5,276(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
loc_8318418C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r31,-21368(r11)
	PPC_STORE_U32(r11.u32 + -21368, r31.u32);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r3,-21380(r11)
	PPC_STORE_U32(r11.u32 + -21380, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831841B8:
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

__attribute__((alias("__imp__sub_831841D0"))) PPC_WEAK_FUNC(sub_831841D0);
PPC_FUNC_IMPL(__imp__sub_831841D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r4.u32);
	// stw r5,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831841E0"))) PPC_WEAK_FUNC(sub_831841E0);
PPC_FUNC_IMPL(__imp__sub_831841E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4120);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,4124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4124);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184200"))) PPC_WEAK_FUNC(sub_83184200);
PPC_FUNC_IMPL(__imp__sub_83184200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8318423c
	if (cr6.eq) goto loc_8318423C;
	// cmpwi cr6,r11,-4
	cr6.compare<int32_t>(r11.s32, -4, xer);
	// beq cr6,0x8318423c
	if (cr6.eq) goto loc_8318423C;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8318423c
	if (cr6.eq) goto loc_8318423C;
	// cmpwi cr6,r11,-6
	cr6.compare<int32_t>(r11.s32, -6, xer);
	// beq cr6,0x8318423c
	if (cr6.eq) goto loc_8318423C;
	// li r11,-1
	r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8318423C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184248"))) PPC_WEAK_FUNC(sub_83184248);
PPC_FUNC_IMPL(__imp__sub_83184248) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83184284
	if (cr6.eq) goto loc_83184284;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,292
	ctx.r4.u64 = ctx.r4.u64 | 292;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x83184288
	goto loc_83184288;
loc_83184284:
	// stw r30,3488(r31)
	PPC_STORE_U32(r31.u32 + 3488, r30.u32);
loc_83184288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831842A0"))) PPC_WEAK_FUNC(sub_831842A0);
PPC_FUNC_IMPL(__imp__sub_831842A0) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x831842dc
	if (cr6.eq) goto loc_831842DC;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,291
	ctx.r4.u64 = ctx.r4.u64 | 291;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831842DC:
	// stw r30,4196(r31)
	PPC_STORE_U32(r31.u32 + 4196, r30.u32);
	// stw r29,4200(r31)
	PPC_STORE_U32(r31.u32 + 4200, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831842F0"))) PPC_WEAK_FUNC(sub_831842F0);
PPC_FUNC_IMPL(__imp__sub_831842F0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83184330
	if (cr6.eq) goto loc_83184330;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,297
	ctx.r4.u64 = ctx.r4.u64 | 297;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83184330:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r30,4220(r31)
	PPC_STORE_U32(r31.u32 + 4220, r30.u32);
	// stw r29,4224(r31)
	PPC_STORE_U32(r31.u32 + 4224, r29.u32);
	// beq cr6,0x83184350
	if (cr6.eq) goto loc_83184350;
	// stw r28,4204(r31)
	PPC_STORE_U32(r31.u32 + 4204, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83184350:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4204(r31)
	PPC_STORE_U32(r31.u32 + 4204, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83184368"))) PPC_WEAK_FUNC(sub_83184368);
PPC_FUNC_IMPL(__imp__sub_83184368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r5,866
	r11.s64 = ctx.r5.s64 + 866;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184378"))) PPC_WEAK_FUNC(sub_83184378);
PPC_FUNC_IMPL(__imp__sub_83184378) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-15896
	ctx.r10.s64 = ctx.r10.s64 + -15896;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831843e0
	if (!cr6.eq) goto loc_831843E0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,545
	ctx.r4.u64 = ctx.r4.u64 | 545;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x83184414
	goto loc_83184414;
loc_831843E0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// li r7,4
	ctx.r7.s64 = 4;
	// beq cr6,0x831843f0
	if (cr6.eq) goto loc_831843F0;
	// li r7,10
	ctx.r7.s64 = 10;
loc_831843F0:
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-15936
	ctx.r9.s64 = ctx.r9.s64 + -15936;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83184414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184430"))) PPC_WEAK_FUNC(sub_83184430);
PPC_FUNC_IMPL(__imp__sub_83184430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// divw r11,r3,r7
	r11.s32 = ctx.r3.s32 / ctx.r7.s32;
	// lwz r31,12(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r3,r9,60
	ctx.r3.s64 = ctx.r9.s64 * 60;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// divw r10,r10,r7
	ctx.r10.s32 = ctx.r10.s32 / ctx.r7.s32;
	// lwz r7,20(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lhz r4,30(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// mulli r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 * 60;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// srawi r4,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// addze r7,r4
	temp.s64 = ctx.r4.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r7.s64 = temp.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831844A0"))) PPC_WEAK_FUNC(sub_831844A0);
PPC_FUNC_IMPL(__imp__sub_831844A0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,24000
	ctx.r3.s64 = 24000;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x83184430
	sub_83184430(ctx, base);
	// divw r11,r30,r31
	r11.s32 = r30.s32 / r31.s32;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831844E8"))) PPC_WEAK_FUNC(sub_831844E8);
PPC_FUNC_IMPL(__imp__sub_831844E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,30000
	ctx.r3.s64 = 30000;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// bl 0x83184430
	sub_83184430(ctx, base);
	// divw r11,r30,r31
	r11.s32 = r30.s32 / r31.s32;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184530"))) PPC_WEAK_FUNC(sub_83184530);
PPC_FUNC_IMPL(__imp__sub_83184530) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// ori r3,r3,60000
	ctx.r3.u64 = ctx.r3.u64 | 60000;
	// bl 0x83184430
	sub_83184430(ctx, base);
	// divw r11,r30,r31
	r11.s32 = r30.s32 / r31.s32;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184578"))) PPC_WEAK_FUNC(sub_83184578);
PPC_FUNC_IMPL(__imp__sub_83184578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b28
	// li r9,1000
	ctx.r9.s64 = 1000;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// divw r9,r9,r7
	ctx.r9.s32 = ctx.r9.s32 / ctx.r7.s32;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// divw r3,r3,r7
	ctx.r3.s32 = ctx.r3.s32 / ctx.r7.s32;
	// lwz r31,24(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r8,r8,43146
	ctx.r8.u64 = ctx.r8.u64 | 43146;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// mullw r30,r30,r8
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r8.s32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lhz r4,30(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r28,r4
	r28.s64 = ctx.r4.s16;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mulli r4,r10,719
	ctx.r4.s64 = ctx.r10.s64 * 719;
	// li r29,10
	r29.s64 = 10;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// divw r7,r10,r29
	ctx.r7.s32 = ctx.r10.s32 / r29.s32;
	// srawi r10,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r28,r10
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83184608"))) PPC_WEAK_FUNC(sub_83184608);
PPC_FUNC_IMPL(__imp__sub_83184608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b28
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// rlwinm r28,r11,4,0,27
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// ori r8,r8,53946
	ctx.r8.u64 = ctx.r8.u64 | 53946;
	// lwz r31,24(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// mullw r30,r30,r8
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r8.s32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lhz r4,30(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// divw r9,r9,r7
	ctx.r9.s32 = ctx.r9.s32 / ctx.r7.s32;
	// divw r3,r3,r7
	ctx.r3.s32 = ctx.r3.s32 / ctx.r7.s32;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mulli r7,r10,899
	ctx.r7.s64 = ctx.r10.s64 * 899;
	// li r29,10
	r29.s64 = 10;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// srawi r30,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	r30.s64 = ctx.r9.s32 >> 1;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addze r7,r30
	temp.s64 = r30.s64 + xer.ca;
	xer.ca = temp.u32 < r30.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r4,r7
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83184690"))) PPC_WEAK_FUNC(sub_83184690);
PPC_FUNC_IMPL(__imp__sub_83184690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0b2c
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r30,16(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// ori r8,r8,42410
	ctx.r8.u64 = ctx.r8.u64 | 42410;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r31,24(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// divw r10,r10,r7
	ctx.r10.s32 = ctx.r10.s32 / ctx.r7.s32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhz r29,30(r4)
	r29.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mulli r4,r30,30
	ctx.r4.s64 = r30.s64 * 30;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// divw r3,r3,r7
	ctx.r3.s32 = ctx.r3.s32 / ctx.r7.s32;
	// mulli r7,r11,1799
	ctx.r7.s64 = r11.s64 * 1799;
	// li r4,10
	ctx.r4.s64 = 10;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r7,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// divw r11,r11,r4
	r11.s32 = r11.s32 / ctx.r4.s32;
	// extsh r30,r29
	r30.s64 = r29.s16;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r30,r9
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83184718"))) PPC_WEAK_FUNC(sub_83184718);
PPC_FUNC_IMPL(__imp__sub_83184718) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r3,444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 444);
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r11,4148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4148);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,4148(r31)
	PPC_STORE_U32(r31.u32 + 4148, r11.u32);
	// lwz r11,4188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4188);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,4188(r31)
	PPC_STORE_U32(r31.u32 + 4188, r11.u32);
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184788"))) PPC_WEAK_FUNC(sub_83184788);
PPC_FUNC_IMPL(__imp__sub_83184788) {
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
	// lwz r3,4216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4216);
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r11,4212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4212);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,4212(r31)
	PPC_STORE_U32(r31.u32 + 4212, r11.u32);
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831847E0"))) PPC_WEAK_FUNC(sub_831847E0);
PPC_FUNC_IMPL(__imp__sub_831847E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,2340(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2340);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x831847fc
	if (!cr6.eq) goto loc_831847FC;
	// li r10,29970
	ctx.r10.s64 = 29970;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_831847FC:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// addi r10,r10,-15936
	ctx.r10.s64 = ctx.r10.s64 + -15936;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83184820"))) PPC_WEAK_FUNC(sub_83184820);
PPC_FUNC_IMPL(__imp__sub_83184820) {
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
	// li r11,-1
	r11.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x83184864
	if (cr6.eq) goto loc_83184864;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,283
	ctx.r4.u64 = ctx.r4.u64 | 283;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x83184884
	goto loc_83184884;
loc_83184864:
	// lwz r10,2340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2340);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x83184884
	if (cr6.eq) goto loc_83184884;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-15936
	r11.s64 = r11.s64 + -15936;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_83184884:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831848A0"))) PPC_WEAK_FUNC(sub_831848A0);
PPC_FUNC_IMPL(__imp__sub_831848A0) {
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
	// addi r11,r3,3464
	r11.s64 = ctx.r3.s64 + 3464;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r10,724(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 724);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x831848ec
	if (!cr6.lt) goto loc_831848EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,724(r11)
	PPC_STORE_U32(r11.u32 + 724, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_831848EC:
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r11,724(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 724);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r10,r10,-21984
	ctx.r10.s64 = ctx.r10.s64 + -21984;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r6,444(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 444);
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_83184930"))) PPC_WEAK_FUNC(sub_83184930);
PPC_FUNC_IMPL(__imp__sub_83184930) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r10,10000
	ctx.r10.s64 = 10000;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,2756(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2756);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// divw r28,r11,r10
	r28.s32 = r11.s32 / ctx.r10.s32;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r5,r28,r25
	ctx.r5.u64 = r28.u64 + r25.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r29,r27,3464
	r29.s64 = r27.s64 + 3464;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83184994
	if (!cr6.eq) goto loc_83184994;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_83184994:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// subf r5,r28,r25
	ctx.r5.s64 = r25.s64 - r28.s64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831849e8
	if (cr6.eq) goto loc_831849E8;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r11,720(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 720);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// beq cr6,0x83184a6c
	if (cr6.eq) goto loc_83184A6C;
	// lwz r11,712(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 712);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// beq cr6,0x83184a6c
	if (cr6.eq) goto loc_83184A6C;
	// lwz r11,708(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 708);
	// stw r31,712(r29)
	PPC_STORE_U32(r29.u32 + 712, r31.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,708(r29)
	PPC_STORE_U32(r29.u32 + 708, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_831849E8:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r11,440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// cmplwi cr6,r11,59940
	cr6.compare<uint32_t>(r11.u32, 59940, xer);
	// bne cr6,0x83184a1c
	if (!cr6.eq) goto loc_83184A1C;
	// lwz r11,2340(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2340);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bgt cr6,0x83184a1c
	if (cr6.gt) goto loc_83184A1C;
	// lwz r11,688(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 688);
	// lwz r10,692(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 692);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x83184a20
	if (cr6.eq) goto loc_83184A20;
loc_83184A1C:
	// li r11,0
	r11.s64 = 0;
loc_83184A20:
	// lwz r10,708(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 708);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x83184a34
	if (cr6.gt) goto loc_83184A34;
	// lwz r11,716(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 716);
	// b 0x83184a54
	goto loc_83184A54;
loc_83184A34:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83198398
	sub_83198398(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
loc_83184A54:
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,708(r29)
	PPC_STORE_U32(r29.u32 + 708, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r31,720(r29)
	PPC_STORE_U32(r29.u32 + 720, r31.u32);
	// stw r11,716(r29)
	PPC_STORE_U32(r29.u32 + 716, r11.u32);
loc_83184A6C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

