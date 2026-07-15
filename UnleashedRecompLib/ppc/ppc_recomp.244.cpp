#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8318D8E0"))) PPC_WEAK_FUNC(sub_8318D8E0);
PPC_FUNC_IMPL(__imp__sub_8318D8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D8F8"))) PPC_WEAK_FUNC(sub_8318D8F8);
PPC_FUNC_IMPL(__imp__sub_8318D8F8) {
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
	// beq cr6,0x8318d934
	if (cr6.eq) goto loc_8318D934;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,324
	ctx.r4.u64 = ctx.r4.u64 | 324;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318D934:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184b18
	sub_83184B18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318de38
	sub_8318DE38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318D960"))) PPC_WEAK_FUNC(sub_8318D960);
PPC_FUNC_IMPL(__imp__sub_8318D960) {
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
	// beq cr6,0x8318d99c
	if (cr6.eq) goto loc_8318D99C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,325
	ctx.r4.u64 = ctx.r4.u64 | 325;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x8318d9b0
	goto loc_8318D9B0;
loc_8318D99C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181fb8
	sub_83181FB8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318D9B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318D9C8"))) PPC_WEAK_FUNC(sub_8318D9C8);
PPC_FUNC_IMPL(__imp__sub_8318D9C8) {
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
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8318da00
	if (cr6.eq) goto loc_8318DA00;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8318da00
	if (cr6.eq) goto loc_8318DA00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8318da18
	goto loc_8318DA18;
loc_8318DA00:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831851e8
	sub_831851E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d8a8
	sub_8318D8A8(ctx, base);
loc_8318DA18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DA30"))) PPC_WEAK_FUNC(sub_8318DA30);
PPC_FUNC_IMPL(__imp__sub_8318DA30) {
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
	// beq cr6,0x8318da74
	if (cr6.eq) goto loc_8318DA74;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,323
	ctx.r4.u64 = ctx.r4.u64 | 323;
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
loc_8318DA74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318d8e0
	sub_8318D8E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DA90"))) PPC_WEAK_FUNC(sub_8318DA90);
PPC_FUNC_IMPL(__imp__sub_8318DA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8318dae4
	if (cr6.lt) goto loc_8318DAE4;
	// beq cr6,0x8318dac4
	if (cr6.eq) goto loc_8318DAC4;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8318d9c8
	sub_8318D9C8(ctx, base);
	return;
loc_8318DAC4:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r9.u32);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8318d9c8
	sub_8318D9C8(ctx, base);
	return;
loc_8318DAE4:
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// bnelr 
	if (!cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x8318d9c8
	sub_8318D9C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318DB00"))) PPC_WEAK_FUNC(sub_8318DB00);
PPC_FUNC_IMPL(__imp__sub_8318DB00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DB08"))) PPC_WEAK_FUNC(sub_8318DB08);
PPC_FUNC_IMPL(__imp__sub_8318DB08) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318db44
	if (cr6.eq) goto loc_8318DB44;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,322
	ctx.r4.u64 = ctx.r4.u64 | 322;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// b 0x8318db8c
	goto loc_8318DB8C;
loc_8318DB44:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8318db68
	if (!cr6.eq) goto loc_8318DB68;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318db60
	if (!cr6.eq) goto loc_8318DB60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8318db8c
	goto loc_8318DB8C;
loc_8318DB60:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8318db78
	goto loc_8318DB78;
loc_8318DB68:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
loc_8318DB78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// bl 0x8318da90
	sub_8318DA90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
loc_8318DB8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DBA8"))) PPC_WEAK_FUNC(sub_8318DBA8);
PPC_FUNC_IMPL(__imp__sub_8318DBA8) {
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

__attribute__((alias("__imp__sub_8318DBC0"))) PPC_WEAK_FUNC(sub_8318DBC0);
PPC_FUNC_IMPL(__imp__sub_8318DBC0) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1537
	ctx.r4.u64 = ctx.r4.u64 | 1537;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318DBD0"))) PPC_WEAK_FUNC(sub_8318DBD0);
PPC_FUNC_IMPL(__imp__sub_8318DBD0) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318dc10
	if (cr6.eq) goto loc_8318DC10;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,401
	ctx.r4.u64 = ctx.r4.u64 | 401;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318DC10:
	// lwz r10,6504(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 6504);
	// lwz r9,6496(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 6496);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bne cr6,0x8318dc38
	if (!cr6.eq) goto loc_8318DC38;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,1538
	ctx.r4.u64 = ctx.r4.u64 | 1538;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318DC38:
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8318dba8
	sub_8318DBA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196570
	sub_83196570(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318DC78"))) PPC_WEAK_FUNC(sub_8318DC78);
PPC_FUNC_IMPL(__imp__sub_8318DC78) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318dcd0
	if (cr6.eq) goto loc_8318DCD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,6504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6504);
	// bl 0x83196988
	sub_83196988(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318dcd0
	if (!cr6.eq) goto loc_8318DCD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83157148
	sub_83157148(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318dcd0
	if (cr6.eq) goto loc_8318DCD0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194840
	sub_83194840(ctx, base);
loc_8318DCD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DCE8"))) PPC_WEAK_FUNC(sub_8318DCE8);
PPC_FUNC_IMPL(__imp__sub_8318DCE8) {
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
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194830
	sub_83194830(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318dd40
	if (cr6.eq) goto loc_8318DD40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,6504(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6504);
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318dd40
	if (!cr6.eq) goto loc_8318DD40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83157148
	sub_83157148(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318dd40
	if (cr6.eq) goto loc_8318DD40;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194820
	sub_83194820(ctx, base);
loc_8318DD40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DD58"))) PPC_WEAK_FUNC(sub_8318DD58);
PPC_FUNC_IMPL(__imp__sub_8318DD58) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8318dba8
	sub_8318DBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318DD70"))) PPC_WEAK_FUNC(sub_8318DD70);
PPC_FUNC_IMPL(__imp__sub_8318DD70) {
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
	// bl 0x8318dc78
	sub_8318DC78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318dce8
	sub_8318DCE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DDB0"))) PPC_WEAK_FUNC(sub_8318DDB0);
PPC_FUNC_IMPL(__imp__sub_8318DDB0) {
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
	// li r31,0
	r31.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// stw r31,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r31.u32);
loc_8318DDD0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318dd58
	sub_8318DD58(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83196570
	sub_83196570(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// blt cr6,0x8318ddd0
	if (cr6.lt) goto loc_8318DDD0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318DE08"))) PPC_WEAK_FUNC(sub_8318DE08);
PPC_FUNC_IMPL(__imp__sub_8318DE08) {
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
	// addi r4,r3,7664
	ctx.r4.s64 = ctx.r3.s64 + 7664;
	// lwz r5,6504(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6504);
	// stw r4,6496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6496, ctx.r4.u32);
	// bl 0x8318ddb0
	sub_8318DDB0(ctx, base);
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

__attribute__((alias("__imp__sub_8318DE38"))) PPC_WEAK_FUNC(sub_8318DE38);
PPC_FUNC_IMPL(__imp__sub_8318DE38) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318de84
	if (cr6.eq) goto loc_8318DE84;
	// lwz r11,6428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 6428);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318de84
	if (cr6.eq) goto loc_8318DE84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318DE84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318DE90"))) PPC_WEAK_FUNC(sub_8318DE90);
PPC_FUNC_IMPL(__imp__sub_8318DE90) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194830
	sub_83194830(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318ded8
	if (cr6.eq) goto loc_8318DED8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,6436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6436);
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318ded8
	if (!cr6.eq) goto loc_8318DED8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194820
	sub_83194820(ctx, base);
loc_8318DED8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DEF0"))) PPC_WEAK_FUNC(sub_8318DEF0);
PPC_FUNC_IMPL(__imp__sub_8318DEF0) {
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
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318df38
	if (cr6.eq) goto loc_8318DF38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,6436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6436);
	// bl 0x83196988
	sub_83196988(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318df38
	if (!cr6.eq) goto loc_8318DF38;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194840
	sub_83194840(ctx, base);
loc_8318DF38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DF50"))) PPC_WEAK_FUNC(sub_8318DF50);
PPC_FUNC_IMPL(__imp__sub_8318DF50) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
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

__attribute__((alias("__imp__sub_8318DF78"))) PPC_WEAK_FUNC(sub_8318DF78);
PPC_FUNC_IMPL(__imp__sub_8318DF78) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318dfb0
	if (!cr6.eq) goto loc_8318DFB0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318DFB0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318DFE0"))) PPC_WEAK_FUNC(sub_8318DFE0);
PPC_FUNC_IMPL(__imp__sub_8318DFE0) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318e018
	if (!cr6.eq) goto loc_8318E018;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318E018:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E048"))) PPC_WEAK_FUNC(sub_8318E048);
PPC_FUNC_IMPL(__imp__sub_8318E048) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318e08c
	if (cr6.eq) goto loc_8318E08C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831947e0
	sub_831947E0(ctx, base);
loc_8318E08C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E0A8"))) PPC_WEAK_FUNC(sub_8318E0A8);
PPC_FUNC_IMPL(__imp__sub_8318E0A8) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,2561
	ctx.r4.u64 = ctx.r4.u64 | 2561;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E0B8"))) PPC_WEAK_FUNC(sub_8318E0B8);
PPC_FUNC_IMPL(__imp__sub_8318E0B8) {
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
	// bl 0x8318de90
	sub_8318DE90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318def0
	sub_8318DEF0(ctx, base);
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

__attribute__((alias("__imp__sub_8318E0F0"))) PPC_WEAK_FUNC(sub_8318E0F0);
PPC_FUNC_IMPL(__imp__sub_8318E0F0) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8318e120
	if (cr6.eq) goto loc_8318E120;
	// addi r11,r31,7636
	r11.s64 = r31.s64 + 7636;
	// stw r11,6428(r31)
	PPC_STORE_U32(r31.u32 + 6428, r11.u32);
loc_8318E120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E138"))) PPC_WEAK_FUNC(sub_8318E138);
PPC_FUNC_IMPL(__imp__sub_8318E138) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318e170
	if (!cr6.eq) goto loc_8318E170;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318E170:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e0b8
	sub_8318E0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E190"))) PPC_WEAK_FUNC(sub_8318E190);
PPC_FUNC_IMPL(__imp__sub_8318E190) {
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
	// li r11,288
	r11.s64 = 288;
	// cmpwi cr6,r4,288
	cr6.compare<int32_t>(ctx.r4.s32, 288, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// bge cr6,0x8318e1c0
	if (!cr6.lt) goto loc_8318E1C0;
loc_8318E1AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318E1C0:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bne cr6,0x8318e1ac
	if (!cr6.eq) goto loc_8318E1AC;
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8318e1ac
	if (!cr6.eq) goto loc_8318E1AC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r11,12660
	ctx.r4.s64 = r11.s64 + 12660;
	// addi r3,r3,282
	ctx.r3.s64 = ctx.r3.s64 + 282;
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
}

__attribute__((alias("__imp__sub_8318E208"))) PPC_WEAK_FUNC(sub_8318E208);
PPC_FUNC_IMPL(__imp__sub_8318E208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x831361b0
	sub_831361B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E218"))) PPC_WEAK_FUNC(sub_8318E218);
PPC_FUNC_IMPL(__imp__sub_8318E218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x831361e8
	sub_831361E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E228"))) PPC_WEAK_FUNC(sub_8318E228);
PPC_FUNC_IMPL(__imp__sub_8318E228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x83136250
	sub_83136250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E238"))) PPC_WEAK_FUNC(sub_8318E238);
PPC_FUNC_IMPL(__imp__sub_8318E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x831362d8
	sub_831362D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E248"))) PPC_WEAK_FUNC(sub_8318E248);
PPC_FUNC_IMPL(__imp__sub_8318E248) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,6156(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 6156);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8318e390
	if (cr6.eq) goto loc_8318E390;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8318e288
	if (!cr6.eq) goto loc_8318E288;
	// li r30,1
	r30.s64 = 1;
	// li r31,1
	r31.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8318e378
	goto loc_8318E378;
loc_8318E288:
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// bne cr6,0x8318e29c
	if (!cr6.eq) goto loc_8318E29C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8318e378
	goto loc_8318E378;
loc_8318E29C:
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// extsw r11,r30
	r11.s64 = r30.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdiv f1,f0,f13
	ctx.f1.f64 = f0.f64 / ctx.f13.f64;
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,-14676(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14676);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,-24792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24792);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mulli r11,r4,100
	r11.s64 = ctx.r4.s64 * 100;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f13,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f12.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x8318e36c
	if (!cr6.gt) goto loc_8318E36C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// b 0x8318e378
	goto loc_8318E378;
loc_8318E36C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8318E378:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831365c8
	sub_831365C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,4232
	ctx.r3.s64 = r29.s64 + 4232;
	// bl 0x8319c898
	sub_8319C898(ctx, base);
loc_8318E390:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318E398"))) PPC_WEAK_FUNC(sub_8318E398);
PPC_FUNC_IMPL(__imp__sub_8318E398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-12412
	r11.s64 = r11.s64 + -12412;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E3F0"))) PPC_WEAK_FUNC(sub_8318E3F0);
PPC_FUNC_IMPL(__imp__sub_8318E3F0) {
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
	// bl 0x83133838
	sub_83133838(ctx, base);
	// bl 0x8320cdb8
	sub_8320CDB8(ctx, base);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r11,-12412
	ctx.r3.s64 = r11.s64 + -12412;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
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

__attribute__((alias("__imp__sub_8318E430"))) PPC_WEAK_FUNC(sub_8318E430);
PPC_FUNC_IMPL(__imp__sub_8318E430) {
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
	// bl 0x8320cdd0
	sub_8320CDD0(ctx, base);
	// bl 0x83133978
	sub_83133978(ctx, base);
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

__attribute__((alias("__imp__sub_8318E458"))) PPC_WEAK_FUNC(sub_8318E458);
PPC_FUNC_IMPL(__imp__sub_8318E458) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x83194548
	sub_83194548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E468"))) PPC_WEAK_FUNC(sub_8318E468);
PPC_FUNC_IMPL(__imp__sub_8318E468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8318E488"))) PPC_WEAK_FUNC(sub_8318E488);
PPC_FUNC_IMPL(__imp__sub_8318E488) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8318e4d8
	if (cr6.eq) goto loc_8318E4D8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8313daa0
	sub_8313DAA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8318E4D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
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

__attribute__((alias("__imp__sub_8318E508"))) PPC_WEAK_FUNC(sub_8318E508);
PPC_FUNC_IMPL(__imp__sub_8318E508) {
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
	// lwz r30,6156(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8318e468
	sub_8318E468(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8318e548
	if (cr6.lt) goto loc_8318E548;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8318E548:
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,36864
	r11.u64 = r11.u64 | 36864;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8318e55c
	if (cr6.lt) goto loc_8318E55C;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_8318E55C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8318e488
	sub_8318E488(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318E598"))) PPC_WEAK_FUNC(sub_8318E598);
PPC_FUNC_IMPL(__imp__sub_8318E598) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// ble cr6,0x8318e5fc
	if (!cr6.gt) goto loc_8318E5FC;
loc_8318E5C0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83135c58
	sub_83135C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318e5f4
	if (!cr6.eq) goto loc_8318E5F4;
	// addi r31,r31,18
	r31.s64 = r31.s64 + 18;
	// addi r30,r30,18
	r30.s64 = r30.s64 + 18;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x8318e5c0
	if (cr6.lt) goto loc_8318E5C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318E5F4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_8318E5FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318E608"))) PPC_WEAK_FUNC(sub_8318E608);
PPC_FUNC_IMPL(__imp__sub_8318E608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x83136770
	sub_83136770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E618"))) PPC_WEAK_FUNC(sub_8318E618);
PPC_FUNC_IMPL(__imp__sub_8318E618) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r25,r29,36
	r25.s64 = r29.s64 + 36;
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// add r28,r29,r5
	r28.u64 = r29.u64 + ctx.r5.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// bge cr6,0x8318e6d4
	if (!cr6.lt) goto loc_8318E6D4;
loc_8318E648:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bge cr6,0x8318e6d4
	if (!cr6.lt) goto loc_8318E6D4;
loc_8318E654:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x8318e678
	if (!cr6.lt) goto loc_8318E678;
	// addi r31,r31,18
	r31.s64 = r31.s64 + 18;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// blt cr6,0x8318e654
	if (cr6.lt) goto loc_8318E654;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8318E678:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83135c58
	sub_83135C58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318e6a0
	if (cr6.eq) goto loc_8318E6A0;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// bge cr6,0x8318e6a0
	if (!cr6.lt) goto loc_8318E6A0;
	// mr r27,r31
	r27.u64 = r31.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
loc_8318E6A0:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// blt cr6,0x8318e648
	if (cr6.lt) goto loc_8318E648;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8318e6d0
	if (!cr6.eq) goto loc_8318E6D0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// ori r4,r4,3082
	ctx.r4.u64 = ctx.r4.u64 | 3082;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_8318E6D0:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8318E6D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8318E6E0"))) PPC_WEAK_FUNC(sub_8318E6E0);
PPC_FUNC_IMPL(__imp__sub_8318E6E0) {
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
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x83135fb8
	sub_83135FB8(ctx, base);
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

__attribute__((alias("__imp__sub_8318E718"))) PPC_WEAK_FUNC(sub_8318E718);
PPC_FUNC_IMPL(__imp__sub_8318E718) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,6164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6164);
	// bl 0x83197030
	sub_83197030(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8318E768"))) PPC_WEAK_FUNC(sub_8318E768);
PPC_FUNC_IMPL(__imp__sub_8318E768) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,6164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6164);
	// b 0x83197340
	sub_83197340(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E778"))) PPC_WEAK_FUNC(sub_8318E778);
PPC_FUNC_IMPL(__imp__sub_8318E778) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r30,6156(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6156);
	// lwz r4,6164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6164);
	// bl 0x83196848
	sub_83196848(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318e810
	if (cr6.eq) goto loc_8318E810;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83196e58
	sub_83196E58(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r3,2488(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 2488);
	// bl 0x83196ad0
	sub_83196AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r3,2496(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 2496);
	// std r11,2488(r31)
	PPC_STORE_U64(r31.u32 + 2488, r11.u64);
	// bl 0x83196ad0
	sub_83196AD0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// std r3,2496(r31)
	PPC_STORE_U64(r31.u32 + 2496, ctx.r3.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83196e58
	sub_83196E58(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r3,2512(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 2512);
	// bl 0x83196ad0
	sub_83196AD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ld r3,2520(r31)
	ctx.r3.u64 = PPC_LOAD_U64(r31.u32 + 2520);
	// std r11,2512(r31)
	PPC_STORE_U64(r31.u32 + 2512, r11.u64);
	// bl 0x83196ad0
	sub_83196AD0(ctx, base);
	// std r3,2520(r31)
	PPC_STORE_U64(r31.u32 + 2520, ctx.r3.u64);
loc_8318E810:
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

__attribute__((alias("__imp__sub_8318E828"))) PPC_WEAK_FUNC(sub_8318E828);
PPC_FUNC_IMPL(__imp__sub_8318E828) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,6164(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6164);
	// b 0x83196988
	sub_83196988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E830"))) PPC_WEAK_FUNC(sub_8318E830);
PPC_FUNC_IMPL(__imp__sub_8318E830) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,6168(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6168);
	// b 0x83196988
	sub_83196988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E838"))) PPC_WEAK_FUNC(sub_8318E838);
PPC_FUNC_IMPL(__imp__sub_8318E838) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,6168(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6168);
	// b 0x83196970
	sub_83196970(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318E848"))) PPC_WEAK_FUNC(sub_8318E848);
PPC_FUNC_IMPL(__imp__sub_8318E848) {
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
	// bl 0x83135fb8
	sub_83135FB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318e86c
	if (cr6.eq) goto loc_8318E86C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x8318e870
	if (!cr6.eq) goto loc_8318E870;
loc_8318E86C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318E870:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E880"))) PPC_WEAK_FUNC(sub_8318E880);
PPC_FUNC_IMPL(__imp__sub_8318E880) {
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
	// lwz r31,6156(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// beq cr6,0x8318e8c0
	if (cr6.eq) goto loc_8318E8C0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r4.u32);
	// bl 0x83136368
	sub_83136368(ctx, base);
loc_8318E8C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318E8D8"))) PPC_WEAK_FUNC(sub_8318E8D8);
PPC_FUNC_IMPL(__imp__sub_8318E8D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r10,-12412
	ctx.r10.s64 = ctx.r10.s64 + -12412;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8318ea84
	if (cr6.eq) goto loc_8318EA84;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8318ea84
	if (cr6.eq) goto loc_8318EA84;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// li r8,7
	ctx.r8.s64 = 7;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8318E918:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8318e918
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8318E918;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,-6904
	ctx.r9.s64 = ctx.r9.s64 + -6904;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r31,r29,4232
	r31.s64 = r29.s64 + 4232;
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// stw r7,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r7.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r9,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r9.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r10.u32);
	// stw r8,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r8.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,15
	r11.s64 = 983040;
	// ori r30,r11,16960
	r30.u64 = r11.u64 | 16960;
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r30.u64);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// std r30,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r30.u64);
	// li r4,65
	ctx.r4.s64 = 65;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// std r30,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r30.u64);
	// li r4,66
	ctx.r4.s64 = 66;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// std r30,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r30.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// bl 0x8319cb00
	sub_8319CB00(ctx, base);
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c7e8
	sub_8319C7E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c800
	sub_8319C800(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c818
	sub_8319C818(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c830
	sub_8319C830(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c848
	sub_8319C848(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319c898
	sub_8319C898(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// bl 0x8319c6d8
	sub_8319C6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
loc_8318EA84:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3078
	ctx.r4.u64 = ctx.r4.u64 | 3078;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318EAA0"))) PPC_WEAK_FUNC(sub_8318EAA0);
PPC_FUNC_IMPL(__imp__sub_8318EAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// lwz r3,520(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 520);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EAB0"))) PPC_WEAK_FUNC(sub_8318EAB0);
PPC_FUNC_IMPL(__imp__sub_8318EAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// bl 0x83135fb8
	sub_83135FB8(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,-21412(r11)
	PPC_STORE_U32(r11.u32 + -21412, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83136010
	sub_83136010(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// bl 0x8319c600
	sub_8319C600(ctx, base);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// bl 0x8319c6b8
	sub_8319C6B8(ctx, base);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319d0b0
	sub_8319D0B0(ctx, base);
	// ld r11,128(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318EB40"))) PPC_WEAK_FUNC(sub_8318EB40);
PPC_FUNC_IMPL(__imp__sub_8318EB40) {
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
	// bl 0x83136a80
	sub_83136A80(ctx, base);
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

__attribute__((alias("__imp__sub_8318EB68"))) PPC_WEAK_FUNC(sub_8318EB68);
PPC_FUNC_IMPL(__imp__sub_8318EB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// stw r3,520(r11)
	PPC_STORE_U32(r11.u32 + 520, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EB80"))) PPC_WEAK_FUNC(sub_8318EB80);
PPC_FUNC_IMPL(__imp__sub_8318EB80) {
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
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x83135f80
	sub_83135F80(ctx, base);
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

__attribute__((alias("__imp__sub_8318EBB0"))) PPC_WEAK_FUNC(sub_8318EBB0);
PPC_FUNC_IMPL(__imp__sub_8318EBB0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83136580
	sub_83136580(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8319c858
	sub_8319C858(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EBF8"))) PPC_WEAK_FUNC(sub_8318EBF8);
PPC_FUNC_IMPL(__imp__sub_8318EBF8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x831847e0
	sub_831847E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831941d0
	sub_831941D0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EC50"))) PPC_WEAK_FUNC(sub_8318EC50);
PPC_FUNC_IMPL(__imp__sub_8318EC50) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3075
	ctx.r4.u64 = ctx.r4.u64 | 3075;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318EC60"))) PPC_WEAK_FUNC(sub_8318EC60);
PPC_FUNC_IMPL(__imp__sub_8318EC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,7720(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 7720);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8318ec74
	if (!cr6.eq) goto loc_8318EC74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8318EC74:
	// lwz r10,6156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r3,r11,3340
	ctx.r3.s64 = r11.s64 + 3340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EC90"))) PPC_WEAK_FUNC(sub_8318EC90);
PPC_FUNC_IMPL(__imp__sub_8318EC90) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,6156(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6156);
	// bl 0x8318e718
	sub_8318E718(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318ed04
	if (!cr6.eq) goto loc_8318ED04;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8318e768
	sub_8318E768(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318ed04
	if (!cr6.eq) goto loc_8318ED04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e778
	sub_8318E778(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318ED04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318ED10"))) PPC_WEAK_FUNC(sub_8318ED10);
PPC_FUNC_IMPL(__imp__sub_8318ED10) {
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
	// bl 0x8318ec60
	sub_8318EC60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8318ed40
	if (!cr6.eq) goto loc_8318ED40;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8318ED40:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
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

__attribute__((alias("__imp__sub_8318ED68"))) PPC_WEAK_FUNC(sub_8318ED68);
PPC_FUNC_IMPL(__imp__sub_8318ED68) {
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
	// lwz r30,6168(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6168);
	// lwz r29,6164(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 6164);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318edc4
	if (cr6.eq) goto loc_8318EDC4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318edc4
	if (!cr6.eq) goto loc_8318EDC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e6e0
	sub_8318E6E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318edc4
	if (cr6.eq) goto loc_8318EDC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83196938
	sub_83196938(ctx, base);
loc_8318EDC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318EDD0"))) PPC_WEAK_FUNC(sub_8318EDD0);
PPC_FUNC_IMPL(__imp__sub_8318EDD0) {
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r26,r31,4232
	r26.s64 = r31.s64 + 4232;
	// lwz r27,6156(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 6156);
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83135fb8
	sub_83135FB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83136430
	sub_83136430(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8318ee18
	if (cr6.eq) goto loc_8318EE18;
	// lis r11,-31935
	r11.s64 = -2092892160;
	// stw r30,-12384(r11)
	PPC_STORE_U32(r11.u32 + -12384, r30.u32);
loc_8318EE18:
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318ee34
	if (!cr6.eq) goto loc_8318EE34;
	// li r30,0
	r30.s64 = 0;
	// b 0x8318ee74
	goto loc_8318EE74;
loc_8318EE34:
	// cmpwi cr6,r30,-2
	cr6.compare<int32_t>(r30.s32, -2, xer);
	// beq cr6,0x8318ee64
	if (cr6.eq) goto loc_8318EE64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x8318ee58
	if (cr6.eq) goto loc_8318EE58;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8318ee74
	if (cr6.eq) goto loc_8318EE74;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3079
	ctx.r4.u64 = ctx.r4.u64 | 3079;
	// b 0x8318ee6c
	goto loc_8318EE6C;
loc_8318EE58:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3080
	ctx.r4.u64 = ctx.r4.u64 | 3080;
	// b 0x8318ee6c
	goto loc_8318EE6C;
loc_8318EE64:
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3081
	ctx.r4.u64 = ctx.r4.u64 | 3081;
loc_8318EE6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
loc_8318EE74:
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// beq cr6,0x8318ee84
	if (cr6.eq) goto loc_8318EE84;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// bne cr6,0x8318ee98
	if (!cr6.eq) goto loc_8318EE98;
loc_8318EE84:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8319c860
	sub_8319C860(ctx, base);
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(r28.s32, 5, xer);
	// beq cr6,0x8318eea0
	if (cr6.eq) goto loc_8318EEA0;
loc_8318EE98:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8318eeac
	if (cr6.eq) goto loc_8318EEAC;
loc_8318EEA0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e838
	sub_8318E838(ctx, base);
loc_8318EEAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e828
	sub_8318E828(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318eee4
	if (!cr6.eq) goto loc_8318EEE4;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x8318eee4
	if (!cr6.eq) goto loc_8318EEE4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83136668
	sub_83136668(ctx, base);
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318eee4
	if (!cr6.eq) goto loc_8318EEE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e838
	sub_8318E838(ctx, base);
loc_8318EEE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_8318EEF0"))) PPC_WEAK_FUNC(sub_8318EEF0);
PPC_FUNC_IMPL(__imp__sub_8318EEF0) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8318ec60
	sub_8318EC60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8318ef90
	if (cr6.eq) goto loc_8318EF90;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318ef90
	if (!cr6.eq) goto loc_8318EF90;
	// lwz r11,6156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6156);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318e848
	sub_8318E848(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318ef90
	if (cr6.eq) goto loc_8318EF90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831360c0
	sub_831360C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x83136048
	sub_83136048(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x83136138
	sub_83136138(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mullw r11,r10,r3
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8318EF90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318EFA8"))) PPC_WEAK_FUNC(sub_8318EFA8);
PPC_FUNC_IMPL(__imp__sub_8318EFA8) {
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
	// bl 0x8318bd98
	sub_8318BD98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318efdc
	if (cr6.eq) goto loc_8318EFDC;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83136d90
	sub_83136D90(ctx, base);
	// b 0x8318efe0
	goto loc_8318EFE0;
loc_8318EFDC:
	// bl 0x8318eaa0
	sub_8318EAA0(ctx, base);
loc_8318EFE0:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8318f000
	if (!cr6.eq) goto loc_8318F000;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318F000:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831363c8
	sub_831363C8(ctx, base);
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

__attribute__((alias("__imp__sub_8318F028"))) PPC_WEAK_FUNC(sub_8318F028);
PPC_FUNC_IMPL(__imp__sub_8318F028) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r31,6156(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 6156);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x83184200
	sub_83184200(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318f0a0
	if (cr6.eq) goto loc_8318F0A0;
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8318f090
	if (!cr6.eq) goto loc_8318F090;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,4232
	ctx.r3.s64 = r30.s64 + 4232;
	// bl 0x8318eab0
	sub_8318EAB0(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8318f090
	if (!cr6.lt) goto loc_8318F090;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
loc_8318F090:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_8318F0A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318F0B0"))) PPC_WEAK_FUNC(sub_8318F0B0);
PPC_FUNC_IMPL(__imp__sub_8318F0B0) {
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
	// lwz r11,6156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6156);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8318f0e0
	if (!cr6.eq) goto loc_8318F0E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318F0E0:
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r10,-12412
	ctx.r10.s64 = ctx.r10.s64 + -12412;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8318F0F4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8318f0f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8318F0F4;
	// bl 0x8318bd98
	sub_8318BD98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318f120
	if (cr6.eq) goto loc_8318F120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318eb40
	sub_8318EB40(ctx, base);
	// b 0x8318f130
	goto loc_8318F130;
loc_8318F120:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318eb80
	sub_8318EB80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318eb68
	sub_8318EB68(ctx, base);
loc_8318F130:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x8319c660
	sub_8319C660(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318F158"))) PPC_WEAK_FUNC(sub_8318F158);
PPC_FUNC_IMPL(__imp__sub_8318F158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,4232
	ctx.r4.s64 = r11.s64 + 4232;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r10,6156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 6156);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// bne cr6,0x8318f184
	if (!cr6.eq) goto loc_8318F184;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8318F184:
	// b 0x8318ebb0
	sub_8318EBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318F188"))) PPC_WEAK_FUNC(sub_8318F188);
PPC_FUNC_IMPL(__imp__sub_8318F188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F190"))) PPC_WEAK_FUNC(sub_8318F190);
PPC_FUNC_IMPL(__imp__sub_8318F190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,6156(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6156);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r3,4232
	ctx.r4.s64 = ctx.r3.s64 + 4232;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bne cr6,0x8318f1b4
	if (!cr6.eq) goto loc_8318F1B4;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8318F1B4:
	// b 0x8318ebb0
	sub_8318EBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318F1B8"))) PPC_WEAK_FUNC(sub_8318F1B8);
PPC_FUNC_IMPL(__imp__sub_8318F1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F1C0"))) PPC_WEAK_FUNC(sub_8318F1C0);
PPC_FUNC_IMPL(__imp__sub_8318F1C0) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318f1f0
	if (!cr6.eq) goto loc_8318F1F0;
loc_8318F1E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8318f238
	goto loc_8318F238;
loc_8318F1F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e830
	sub_8318E830(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318f1e8
	if (cr6.eq) goto loc_8318F1E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318ec90
	sub_8318EC90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318ed68
	sub_8318ED68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8318edd0
	sub_8318EDD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318eef0
	sub_8318EEF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e880
	sub_8318E880(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8318F238:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F250"))) PPC_WEAK_FUNC(sub_8318F250);
PPC_FUNC_IMPL(__imp__sub_8318F250) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r26,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r26.u32);
	// lwz r30,6156(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 6156);
	// addi r31,r25,3464
	r31.s64 = r25.s64 + 3464;
	// bl 0x8318ed10
	sub_8318ED10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318f2d0
	if (!cr6.eq) goto loc_8318F2D0;
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83184108
	sub_83184108(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8318f460
	if (cr6.lt) goto loc_8318F460;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8318f2e4
	if (!cr6.eq) goto loc_8318F2E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831841d0
	sub_831841D0(ctx, base);
loc_8318F2D0:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// addi r11,r11,-6904
	r11.s64 = r11.s64 + -6904;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
loc_8318F2E4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83184150
	sub_83184150(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x8318f460
	if (cr6.lt) goto loc_8318F460;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831841d0
	sub_831841D0(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r11,r29
	r11.s64 = r29.s64 - r11.s64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8318f3f4
	if (cr6.lt) goto loc_8318F3F4;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addze r10,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8318f3a8
	if (!cr6.gt) goto loc_8318F3A8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r28,r10,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r10,r23,r28
	ctx.r10.s32 = r23.s32 / r28.s32;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r31
	cr6.compare<int32_t>(r29.s32, r31.s32, xer);
	// blt cr6,0x8318f374
	if (cr6.lt) goto loc_8318F374;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8318F374:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8318e598
	sub_8318E598(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// divw r9,r26,r28
	ctx.r9.s32 = r26.s32 / r28.s32;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bgt cr6,0x8318f3d4
	if (cr6.gt) goto loc_8318F3D4;
loc_8318F3A8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318f3d4
	if (cr6.eq) goto loc_8318F3D4;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r11,r11,-6904
	r11.s64 = r11.s64 + -6904;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// bl 0x83135c58
	sub_83135C58(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8318F3D4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318f44c
	if (cr6.eq) goto loc_8318F44C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// b 0x8318f44c
	goto loc_8318F44C;
loc_8318F3F4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8318f44c
	if (cr6.eq) goto loc_8318F44C;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// rlwinm r31,r11,5,0,26
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x8318f440
	if (!cr6.gt) goto loc_8318F440;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8318e608
	sub_8318E608(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r3,r31
	r11.s64 = r31.s64 - ctx.r3.s64;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// bgt cr6,0x8318f44c
	if (cr6.gt) goto loc_8318F44C;
loc_8318F440:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// addi r11,r11,-6904
	r11.s64 = r11.s64 + -6904;
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
loc_8318F44C:
	// stw r26,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r26.u32);
	// extsw r11,r26
	r11.s64 = r26.s32;
	// ld r10,2504(r25)
	ctx.r10.u64 = PPC_LOAD_U64(r25.u32 + 2504);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,2504(r25)
	PPC_STORE_U64(r25.u32 + 2504, r11.u64);
loc_8318F460:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_8318F468"))) PPC_WEAK_FUNC(sub_8318F468);
PPC_FUNC_IMPL(__imp__sub_8318F468) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r30,288
	cr6.compare<int32_t>(r30.s32, 288, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r27,6156(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 6156);
	// blt cr6,0x8318f504
	if (cr6.lt) goto loc_8318F504;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83135bd0
	sub_83135BD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318f4b8
	if (cr6.eq) goto loc_8318F4B8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8318f4e4
	goto loc_8318F4E4;
loc_8318F4B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197be0
	sub_83197BE0(ctx, base);
	// cmpwi cr6,r3,108
	cr6.compare<int32_t>(ctx.r3.s32, 108, xer);
	// blt cr6,0x8318f4d0
	if (cr6.lt) goto loc_8318F4D0;
	// li r11,0
	r11.s64 = 0;
	// b 0x8318f4e4
	goto loc_8318F4E4;
loc_8318F4D0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e618
	sub_8318E618(ctx, base);
	// subf r11,r29,r3
	r11.s64 = ctx.r3.s64 - r29.s64;
loc_8318F4E4:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r9,r10,-3504
	ctx.r9.s64 = ctx.r10.s64 + -3504;
	// extsw r10,r11
	ctx.r10.s64 = r11.s32;
	// stw r9,60(r27)
	PPC_STORE_U32(r27.u32 + 60, ctx.r9.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// ld r11,2504(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 2504);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// std r11,2504(r31)
	PPC_STORE_U64(r31.u32 + 2504, r11.u64);
loc_8318F504:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318F510"))) PPC_WEAK_FUNC(sub_8318F510);
PPC_FUNC_IMPL(__imp__sub_8318F510) {
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r28,6156(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 6156);
	// bl 0x83197be0
	sub_83197BE0(ctx, base);
	// cmpwi cr6,r3,108
	cr6.compare<int32_t>(ctx.r3.s32, 108, xer);
	// blt cr6,0x8318f558
	if (cr6.lt) goto loc_8318F558;
	// lis r11,-31975
	r11.s64 = -2095513600;
	// addi r11,r11,-2968
	r11.s64 = r11.s64 + -2968;
	// stw r11,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8318F558:
	// addi r5,r31,-18
	ctx.r5.s64 = r31.s64 + -18;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8318f5c0
	if (!cr6.gt) goto loc_8318F5C0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r6,r11,-14696
	ctx.r6.s64 = r11.s64 + -14696;
loc_8318F570:
	// add r11,r9,r29
	r11.u64 = ctx.r9.u64 + r29.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r7,r11,18
	ctx.r7.s64 = r11.s64 + 18;
loc_8318F57C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8318f59c
	if (!cr0.eq) goto loc_8318F59C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x8318f57c
	if (!cr6.eq) goto loc_8318F57C;
loc_8318F59C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8318f5b4
	if (!cr6.eq) goto loc_8318F5B4;
	// addi r9,r9,18
	ctx.r9.s64 = ctx.r9.s64 + 18;
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x8318f570
	if (cr6.lt) goto loc_8318F570;
	// b 0x8318f5c0
	goto loc_8318F5C0;
loc_8318F5B4:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// addi r11,r11,-2968
	r11.s64 = r11.s64 + -2968;
	// stw r11,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r11.u32);
loc_8318F5C0:
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// extsw r11,r9
	r11.s64 = ctx.r9.s32;
	// ld r10,2504(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 2504);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,2504(r30)
	PPC_STORE_U64(r30.u32 + 2504, r11.u64);
	// bl 0x8318ed10
	sub_8318ED10(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318f610
	if (!cr6.eq) goto loc_8318F610;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r11,r9,r11
	r11.s32 = ctx.r9.s32 / r11.s32;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r11.u32);
loc_8318F610:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318F618"))) PPC_WEAK_FUNC(sub_8318F618);
PPC_FUNC_IMPL(__imp__sub_8318F618) {
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
	// lis r11,-31975
	r11.s64 = -2095513600;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-4056
	ctx.r4.s64 = r11.s64 + -4056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83184368
	sub_83184368(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83181e10
	sub_83181E10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318F660"))) PPC_WEAK_FUNC(sub_8318F660);
PPC_FUNC_IMPL(__imp__sub_8318F660) {
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
	// bl 0x8318f158
	sub_8318F158(ctx, base);
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

__attribute__((alias("__imp__sub_8318F688"))) PPC_WEAK_FUNC(sub_8318F688);
PPC_FUNC_IMPL(__imp__sub_8318F688) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lwz r30,6156(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 6156);
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// blt cr6,0x8318f744
	if (cr6.lt) goto loc_8318F744;
	// beq cr6,0x8318f72c
	if (cr6.eq) goto loc_8318F72C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8318f758
	if (!cr6.lt) goto loc_8318F758;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8318e848
	sub_8318E848(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318f758
	if (cr6.eq) goto loc_8318F758;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831360c0
	sub_831360C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8318ebf8
	sub_8318EBF8(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r28,r27,r11
	r28.u64 = r27.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83136cb0
	sub_83136CB0(ctx, base);
	// subf r11,r3,r28
	r11.s64 = r28.s64 - ctx.r3.s64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,4232
	ctx.r3.s64 = r31.s64 + 4232;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// extsw r11,r27
	r11.s64 = r27.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// extsw r11,r29
	r11.s64 = r29.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// bl 0x8319c868
	sub_8319C868(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_8318F72C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318f190
	sub_8318F190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
loc_8318F744:
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// bl 0x8318f190
	sub_8318F190(ctx, base);
loc_8318F758:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318F768"))) PPC_WEAK_FUNC(sub_8318F768);
PPC_FUNC_IMPL(__imp__sub_8318F768) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8318ec60
	sub_8318EC60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318f7f0
	if (cr6.eq) goto loc_8318F7F0;
	// lwz r31,6156(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 6156);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8318f7f0
	if (!cr6.eq) goto loc_8318F7F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8318f7f0
	if (cr6.eq) goto loc_8318F7F0;
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r11,-21416(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21416);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831366a0
	sub_831366A0(ctx, base);
	// lis r11,-31975
	r11.s64 = -2095513600;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-2800
	r11.s64 = r11.s64 + -2800;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
loc_8318F7F0:
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

__attribute__((alias("__imp__sub_8318F810"))) PPC_WEAK_FUNC(sub_8318F810);
PPC_FUNC_IMPL(__imp__sub_8318F810) {
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
	// addi r31,r11,-5424
	r31.s64 = r11.s64 + -5424;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318f850
	if (cr6.eq) goto loc_8318F850;
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
loc_8318F850:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8318f1c0
	sub_8318F1C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-21428(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318f894
	if (cr6.eq) goto loc_8318F894;
	// addi r11,r30,2488
	r11.s64 = r30.s64 + 2488;
	// addi r4,r31,108
	ctx.r4.s64 = r31.s64 + 108;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// addi r11,r30,2496
	r11.s64 = r30.s64 + 2496;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r11,r30,2504
	r11.s64 = r30.s64 + 2504;
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
loc_8318F894:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318F8A0"))) PPC_WEAK_FUNC(sub_8318F8A0);
PPC_FUNC_IMPL(__imp__sub_8318F8A0) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318f9bc
	if (cr6.eq) goto loc_8318F9BC;
	// addi r29,r31,7456
	r29.s64 = r31.s64 + 7456;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// stw r29,6156(r31)
	PPC_STORE_U32(r31.u32 + 6156, r29.u32);
	// bl 0x8318e8d8
	sub_8318E8D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318f9c0
	if (!cr6.eq) goto loc_8318F9C0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8318efa8
	sub_8318EFA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8318f908
	if (!cr6.eq) goto loc_8318F908;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3076
	ctx.r4.u64 = ctx.r4.u64 | 3076;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318F908:
	// lis r11,-31975
	r11.s64 = -2095513600;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-7080
	ctx.r4.s64 = r11.s64 + -7080;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83136738
	sub_83136738(ctx, base);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// bl 0x8313d0e0
	sub_8313D0E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8318f94c
	if (!cr6.eq) goto loc_8318F94C;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3077
	ctx.r4.u64 = ctx.r4.u64 | 3077;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8318F94C:
	// addi r11,r31,7636
	r11.s64 = r31.s64 + 7636;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// lis r6,-31975
	ctx.r6.s64 = -2095513600;
	// stw r4,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r4.u32);
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// stw r11,6428(r31)
	PPC_STORE_U32(r31.u32 + 6428, r11.u32);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r6,r6,-7672
	ctx.r6.s64 = ctx.r6.s64 + -7672;
	// addi r7,r7,-7656
	ctx.r7.s64 = ctx.r7.s64 + -7656;
	// addi r8,r8,-7640
	ctx.r8.s64 = ctx.r8.s64 + -7640;
	// addi r9,r9,-7624
	ctx.r9.s64 = ctx.r9.s64 + -7624;
	// addi r10,r10,-7608
	ctx.r10.s64 = ctx.r10.s64 + -7608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// bl 0x83136e28
	sub_83136E28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318f158
	sub_8318F158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318f618
	sub_8318F618(ctx, base);
loc_8318F9BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8318F9C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8318F9C8"))) PPC_WEAK_FUNC(sub_8318F9C8);
PPC_FUNC_IMPL(__imp__sub_8318F9C8) {
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
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318fa04
	if (!cr6.eq) goto loc_8318FA04;
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
loc_8318FA04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184a78
	sub_83184A78(ctx, base);
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

__attribute__((alias("__imp__sub_8318FA30"))) PPC_WEAK_FUNC(sub_8318FA30);
PPC_FUNC_IMPL(__imp__sub_8318FA30) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1793
	ctx.r4.u64 = ctx.r4.u64 | 1793;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FA40"))) PPC_WEAK_FUNC(sub_8318FA40);
PPC_FUNC_IMPL(__imp__sub_8318FA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8318fa68
	if (cr6.eq) goto loc_8318FA68;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8318fa68
	if (cr6.eq) goto loc_8318FA68;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
loc_8318FA68:
	// lwz r11,6368(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6368);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x831968a8
	sub_831968A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FA78"))) PPC_WEAK_FUNC(sub_8318FA78);
PPC_FUNC_IMPL(__imp__sub_8318FA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r4,6368(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6368);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// b 0x831968d8
	sub_831968D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FA90"))) PPC_WEAK_FUNC(sub_8318FA90);
PPC_FUNC_IMPL(__imp__sub_8318FA90) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194850
	sub_83194850(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318fae8
	if (cr6.eq) goto loc_8318FAE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,6368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6368);
	// bl 0x83196988
	sub_83196988(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318fae8
	if (!cr6.eq) goto loc_8318FAE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318f9c8
	sub_8318F9C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318fae8
	if (cr6.eq) goto loc_8318FAE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194840
	sub_83194840(ctx, base);
loc_8318FAE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FB00"))) PPC_WEAK_FUNC(sub_8318FB00);
PPC_FUNC_IMPL(__imp__sub_8318FB00) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83194830
	sub_83194830(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8318fb58
	if (cr6.eq) goto loc_8318FB58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,6368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 6368);
	// bl 0x83196950
	sub_83196950(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8318fb58
	if (!cr6.eq) goto loc_8318FB58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83157148
	sub_83157148(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8318fb58
	if (cr6.eq) goto loc_8318FB58;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194820
	sub_83194820(ctx, base);
loc_8318FB58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FB70"))) PPC_WEAK_FUNC(sub_8318FB70);
PPC_FUNC_IMPL(__imp__sub_8318FB70) {
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
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8318fba8
	if (!cr6.eq) goto loc_8318FBA8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8318FBA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318fa90
	sub_8318FA90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318fb00
	sub_8318FB00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FBD8"))) PPC_WEAK_FUNC(sub_8318FBD8);
PPC_FUNC_IMPL(__imp__sub_8318FBD8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,5964(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5964);
	// bl 0x83196938
	sub_83196938(ctx, base);
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

__attribute__((alias("__imp__sub_8318FC08"))) PPC_WEAK_FUNC(sub_8318FC08);
PPC_FUNC_IMPL(__imp__sub_8318FC08) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,5964(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5964);
	// b 0x83197028
	sub_83197028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FC18"))) PPC_WEAK_FUNC(sub_8318FC18);
PPC_FUNC_IMPL(__imp__sub_8318FC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r4,5964(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5964);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x83197338
	sub_83197338(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FC30"))) PPC_WEAK_FUNC(sub_8318FC30);
PPC_FUNC_IMPL(__imp__sub_8318FC30) {
	PPC_FUNC_PROLOGUE();
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,1281
	ctx.r4.u64 = ctx.r4.u64 | 1281;
	// b 0x8318fee0
	sub_8318FEE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FC40"))) PPC_WEAK_FUNC(sub_8318FC40);
PPC_FUNC_IMPL(__imp__sub_8318FC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,-8144
	r11.s64 = ctx.r4.s64 + -8144;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FC50"))) PPC_WEAK_FUNC(sub_8318FC50);
PPC_FUNC_IMPL(__imp__sub_8318FC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, r11.u32);
	// stw r11,520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 520, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FC60"))) PPC_WEAK_FUNC(sub_8318FC60);
PPC_FUNC_IMPL(__imp__sub_8318FC60) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FC80"))) PPC_WEAK_FUNC(sub_8318FC80);
PPC_FUNC_IMPL(__imp__sub_8318FC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8318fc90
	if (!cr6.eq) goto loc_8318FC90;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
loc_8318FC90:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
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

__attribute__((alias("__imp__sub_8318FCB0"))) PPC_WEAK_FUNC(sub_8318FCB0);
PPC_FUNC_IMPL(__imp__sub_8318FCB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FCB8"))) PPC_WEAK_FUNC(sub_8318FCB8);
PPC_FUNC_IMPL(__imp__sub_8318FCB8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FCC8"))) PPC_WEAK_FUNC(sub_8318FCC8);
PPC_FUNC_IMPL(__imp__sub_8318FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8318fcd8
	if (!cr6.eq) goto loc_8318FCD8;
loc_8318FCD0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8318FCD8:
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8318fcd0
	if (cr6.eq) goto loc_8318FCD0;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// stw r3,-21424(r11)
	PPC_STORE_U32(r11.u32 + -21424, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FCF8"))) PPC_WEAK_FUNC(sub_8318FCF8);
PPC_FUNC_IMPL(__imp__sub_8318FCF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8313ca00
	sub_8313CA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FD00"))) PPC_WEAK_FUNC(sub_8318FD00);
PPC_FUNC_IMPL(__imp__sub_8318FD00) {
	PPC_FUNC_PROLOGUE();
	// b 0x8313ca68
	sub_8313CA68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FD08"))) PPC_WEAK_FUNC(sub_8318FD08);
PPC_FUNC_IMPL(__imp__sub_8318FD08) {
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
	// bl 0x8318c0a8
	sub_8318C0A8(ctx, base);
	// bl 0x83197978
	sub_83197978(ctx, base);
	// bl 0x83194218
	sub_83194218(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FD30"))) PPC_WEAK_FUNC(sub_8318FD30);
PPC_FUNC_IMPL(__imp__sub_8318FD30) {
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
	// bl 0x83194290
	sub_83194290(ctx, base);
	// bl 0x83197988
	sub_83197988(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FD58"))) PPC_WEAK_FUNC(sub_8318FD58);
PPC_FUNC_IMPL(__imp__sub_8318FD58) {
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
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r31,r11,-12380
	r31.s64 = r11.s64 + -12380;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83137798
	sub_83137798(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FD98"))) PPC_WEAK_FUNC(sub_8318FD98);
PPC_FUNC_IMPL(__imp__sub_8318FD98) {
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
	// lwz r3,-12344(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -12344);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318fdc4
	if (cr6.eq) goto loc_8318FDC4;
	// bl 0x83137878
	sub_83137878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12344(r31)
	PPC_STORE_U32(r31.u32 + -12344, r11.u32);
loc_8318FDC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8318FDD8"))) PPC_WEAK_FUNC(sub_8318FDD8);
PPC_FUNC_IMPL(__imp__sub_8318FDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r3,-12344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -12344);
	// b 0x83137908
	sub_83137908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FDE8"))) PPC_WEAK_FUNC(sub_8318FDE8);
PPC_FUNC_IMPL(__imp__sub_8318FDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// lwz r3,-12344(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -12344);
	// b 0x831379a0
	sub_831379A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FDF8"))) PPC_WEAK_FUNC(sub_8318FDF8);
PPC_FUNC_IMPL(__imp__sub_8318FDF8) {
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
	// lis r27,-31930
	r27.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r28,r11,-8664
	r28.s64 = r11.s64 + -8664;
	// lwz r3,-21428(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318fe30
	if (cr6.eq) goto loc_8318FE30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r28,4
	ctx.r4.s64 = r28.s64 + 4;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8318FE30:
	// lis r11,-31930
	r11.s64 = -2092564480;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-21984
	r30.s64 = r11.s64 + -21984;
	// addi r31,r30,524
	r31.s64 = r30.s64 + 524;
loc_8318FE40:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318fe54
	if (cr6.eq) goto loc_8318FE54;
	// bl 0x8318d560
	sub_8318D560(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8318FE54:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,556
	r11.s64 = r30.s64 + 556;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8318fe40
	if (cr6.lt) goto loc_8318FE40;
	// addi r3,r30,432
	ctx.r3.s64 = r30.s64 + 432;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r3,r30,452
	ctx.r3.s64 = r30.s64 + 452;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r3,r30,456
	ctx.r3.s64 = r30.s64 + 456;
	// bl 0x831948c0
	sub_831948C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8318fd98
	sub_8318FD98(ctx, base);
	// bl 0x8318fd30
	sub_8318FD30(ctx, base);
	// bl 0x8318fd00
	sub_8318FD00(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8318fe9c
	if (!cr6.eq) goto loc_8318FE9C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8318FE9C:
	// lwz r11,-21428(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -21428);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8318fed0
	if (cr6.eq) goto loc_8318FED0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r28,108
	ctx.r4.s64 = r28.s64 + 108;
	// stw r10,116(r28)
	PPC_STORE_U32(r28.u32 + 116, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8318FED0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8318FED8"))) PPC_WEAK_FUNC(sub_8318FED8);
PPC_FUNC_IMPL(__imp__sub_8318FED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8318fc60
	sub_8318FC60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8318FEE0"))) PPC_WEAK_FUNC(sub_8318FEE0);
PPC_FUNC_IMPL(__imp__sub_8318FEE0) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8318ff08
	if (!cr6.eq) goto loc_8318FF08;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8318FF08:
	// lis r29,-31930
	r29.s64 = -2092564480;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-6072
	r30.s64 = r11.s64 + -6072;
	// lwz r3,-21428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318ff44
	if (cr6.eq) goto loc_8318FF44;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
loc_8318FF44:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8318ff60
	if (!cr6.eq) goto loc_8318FF60;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// addi r3,r11,412
	ctx.r3.s64 = r11.s64 + 412;
	// bl 0x8318fc80
	sub_8318FC80(ctx, base);
	// b 0x8318ff7c
	goto loc_8318FF7C;
loc_8318FF60:
	// addi r3,r31,2552
	ctx.r3.s64 = r31.s64 + 2552;
	// bl 0x8318fc80
	sub_8318FC80(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8318ff7c
	if (!cr6.gt) goto loc_8318FF7C;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
loc_8318FF7C:
	// lwz r3,-21428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8318ff9c
	if (cr6.eq) goto loc_8318FF9C;
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
loc_8318FF9C:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8318FFA8"))) PPC_WEAK_FUNC(sub_8318FFA8);
PPC_FUNC_IMPL(__imp__sub_8318FFA8) {
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
	// bne cr6,0x8318ffd0
	if (!cr6.eq) goto loc_8318FFD0;
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-21984
	r11.s64 = r11.s64 + -21984;
	// addi r3,r11,412
	ctx.r3.s64 = r11.s64 + 412;
	// b 0x83190004
	goto loc_83190004;
loc_8318FFD0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190000
	if (cr6.eq) goto loc_83190000;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,257
	ctx.r4.u64 = ctx.r4.u64 | 257;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83190000:
	// addi r3,r10,2552
	ctx.r3.s64 = ctx.r10.s64 + 2552;
loc_83190004:
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

__attribute__((alias("__imp__sub_83190020"))) PPC_WEAK_FUNC(sub_83190020);
PPC_FUNC_IMPL(__imp__sub_83190020) {
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
	// lis r11,-31930
	r11.s64 = -2092564480;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-21984
	r31.s64 = r11.s64 + -21984;
	// li r5,139
	ctx.r5.s64 = 139;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319ba18
	sub_8319BA18(ctx, base);
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r11,-15376
	ctx.r4.s64 = r11.s64 + -15376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// ld r11,0(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// addi r3,r31,412
	ctx.r3.s64 = r31.s64 + 412;
	// std r11,400(r31)
	PPC_STORE_U64(r31.u32 + 400, r11.u64);
	// li r11,0
	r11.s64 = 0;
	// stw r11,408(r31)
	PPC_STORE_U32(r31.u32 + 408, r11.u32);
	// bl 0x8318fed8
	sub_8318FED8(ctx, base);
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83183e10
	sub_83183E10(ctx, base);
	// addi r3,r31,452
	ctx.r3.s64 = r31.s64 + 452;
	// bl 0x83196b00
	sub_83196B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318fc50
	sub_8318FC50(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r31,524
	r11.s64 = r31.s64 + 524;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831900A8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x831900a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831900A8;
	// addi r3,r31,456
	ctx.r3.s64 = r31.s64 + 456;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x83194880
	sub_83194880(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831900D8"))) PPC_WEAK_FUNC(sub_831900D8);
PPC_FUNC_IMPL(__imp__sub_831900D8) {
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
	// lis r29,-31930
	r29.s64 = -2092564480;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// addi r30,r11,-8880
	r30.s64 = r11.s64 + -8880;
	// lwz r3,-21428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8319011c
	if (cr6.eq) goto loc_8319011C;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8319011C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lis r8,-31935
	ctx.r8.s64 = -2092892160;
	// addi r11,r11,-13872
	r11.s64 = r11.s64 + -13872;
	// lis r9,-31930
	ctx.r9.s64 = -2092564480;
	// li r10,8144
	ctx.r10.s64 = 8144;
	// stw r11,-12348(r8)
	PPC_STORE_U32(ctx.r8.u32 + -12348, r11.u32);
	// stw r10,-21420(r9)
	PPC_STORE_U32(ctx.r9.u32 + -21420, ctx.r10.u32);
	// bl 0x8318fcf8
	sub_8318FCF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190020
	sub_83190020(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319015c
	if (!cr6.eq) goto loc_8319015C;
	// bl 0x8318fd08
	sub_8318FD08(ctx, base);
	// bl 0x8318fd58
	sub_8318FD58(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8319015C:
	// lwz r11,-21428(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -21428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8319018c
	if (cr6.eq) goto loc_8319018C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r30,108
	ctx.r4.s64 = r30.s64 + 108;
	// stw r10,116(r30)
	PPC_STORE_U32(r30.u32 + 116, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8319018C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83190198"))) PPC_WEAK_FUNC(sub_83190198);
PPC_FUNC_IMPL(__imp__sub_83190198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831901A8"))) PPC_WEAK_FUNC(sub_831901A8);
PPC_FUNC_IMPL(__imp__sub_831901A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,1172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831901B8"))) PPC_WEAK_FUNC(sub_831901B8);
PPC_FUNC_IMPL(__imp__sub_831901B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,1172(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1172, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831901C8"))) PPC_WEAK_FUNC(sub_831901C8);
PPC_FUNC_IMPL(__imp__sub_831901C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831901D0"))) PPC_WEAK_FUNC(sub_831901D0);
PPC_FUNC_IMPL(__imp__sub_831901D0) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83190208
	if (cr6.lt) goto loc_83190208;
	// bl 0x831901c8
	sub_831901C8(ctx, base);
	// lwz r11,1168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1168);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x83190220
	if (cr6.lt) goto loc_83190220;
loc_831901FC:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-13792
	ctx.r3.s64 = r11.s64 + -13792;
	// bl 0x83185b00
	sub_83185B00(ctx, base);
loc_83190208:
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
loc_83190220:
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83190238
	if (cr6.eq) goto loc_83190238;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317d460
	sub_8317D460(ctx, base);
	// b 0x83190240
	goto loc_83190240;
loc_83190238:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8317d498
	sub_8317D498(ctx, base);
loc_83190240:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831901fc
	if (cr6.eq) goto loc_831901FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831901c8
	sub_831901C8(ctx, base);
	// lwz r11,1180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1180);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// bl 0x831901a8
	sub_831901A8(ctx, base);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190280"))) PPC_WEAK_FUNC(sub_83190280);
PPC_FUNC_IMPL(__imp__sub_83190280) {
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
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831902a8
	if (cr6.eq) goto loc_831902A8;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// b 0x831902b0
	goto loc_831902B0;
loc_831902A8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8317d4e0
	sub_8317D4E0(ctx, base);
loc_831902B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831901b8
	sub_831901B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831902D0"))) PPC_WEAK_FUNC(sub_831902D0);
PPC_FUNC_IMPL(__imp__sub_831902D0) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r11,1168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83190330
	if (!cr6.gt) goto loc_83190330;
loc_831902F4:
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lwz r10,1180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 1180);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83190320
	if (cr6.eq) goto loc_83190320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190280
	sub_83190280(ctx, base);
	// lwz r11,1180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1180);
	// stwx r28,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r28.u32);
loc_83190320:
	// lwz r11,1168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1168);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x831902f4
	if (cr6.lt) goto loc_831902F4;
loc_83190330:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8317da30
	sub_8317DA30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83190340"))) PPC_WEAK_FUNC(sub_83190340);
PPC_FUNC_IMPL(__imp__sub_83190340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,-12328
	ctx.r10.s64 = r11.s64 + -12328;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83190358:
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83190358
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83190358;
	// addi r11,r10,-8
	r11.s64 = ctx.r10.s64 + -8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190380"))) PPC_WEAK_FUNC(sub_83190380);
PPC_FUNC_IMPL(__imp__sub_83190380) {
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
	// lis r11,-31935
	r11.s64 = -2092892160;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-12328
	r31.s64 = r11.s64 + -12328;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// mr r11,r30
	r11.u64 = r30.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831903AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831903ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831903AC;
	// li r11,0
	r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// stw r11,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// bl 0x8318bbc0
	sub_8318BBC0(ctx, base);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x83190440
	if (cr6.eq) goto loc_83190440;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83190438
	if (!cr6.gt) goto loc_83190438;
	// subf r8,r11,r29
	ctx.r8.s64 = r29.s64 - r11.s64;
loc_83190414:
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x83190414
	if (cr6.lt) goto loc_83190414;
loc_83190438:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83190440:
	// b 0x83190440
	goto loc_83190440;
}

__attribute__((alias("__imp__sub_83190448"))) PPC_WEAK_FUNC(sub_83190448);
PPC_FUNC_IMPL(__imp__sub_83190448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r10,r11,-12328
	ctx.r10.s64 = r11.s64 + -12328;
	// lwz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x83190464
	if (cr6.gt) goto loc_83190464;
loc_8319045C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83190464:
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8319047c
	if (cr6.eq) goto loc_8319047C;
	// lwz r11,40(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831904cc
	if (!cr6.eq) goto loc_831904CC;
loc_8319047C:
	// addi r11,r10,-8
	r11.s64 = ctx.r10.s64 + -8;
loc_83190480:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319045c
	if (cr6.eq) goto loc_8319045C;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83190480
	if (cr6.lt) goto loc_83190480;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x831904cc
	if (!cr6.gt) goto loc_831904CC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_831904B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8319045c
	if (cr6.eq) goto loc_8319045C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x831904b0
	if (cr6.lt) goto loc_831904B0;
loc_831904CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831904D8"))) PPC_WEAK_FUNC(sub_831904D8);
PPC_FUNC_IMPL(__imp__sub_831904D8) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// bl 0x83190448
	sub_83190448(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190514
	if (cr6.eq) goto loc_83190514;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,3861
	ctx.r4.u64 = ctx.r4.u64 | 3861;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83190514:
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r10,r7,7992
	ctx.r10.s64 = ctx.r7.s64 + 7992;
	// addi r8,r11,-12336
	ctx.r8.s64 = r11.s64 + -12336;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r8,16
	r11.s64 = ctx.r8.s64 + 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8319052C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8319052c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8319052C;
	// ld r11,0(r8)
	r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,8028(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8028, r11.u64);
	// lwz r11,8132(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8132);
	// stw r11,8036(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8036, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190568"))) PPC_WEAK_FUNC(sub_83190568);
PPC_FUNC_IMPL(__imp__sub_83190568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r10,r3,7992
	ctx.r10.s64 = ctx.r3.s64 + 7992;
	// addi r11,r11,-12340
	r11.s64 = r11.s64 + -12340;
	// addi r8,r11,20
	ctx.r8.s64 = r11.s64 + 20;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83190584:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83190584
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83190584;
	// ld r10,8028(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8028);
	// std r10,4(r11)
	PPC_STORE_U64(r11.u32 + 4, ctx.r10.u64);
	// lwz r10,8060(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8060);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8064(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8064);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// lwz r10,8068(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8068);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831905C0"))) PPC_WEAK_FUNC(sub_831905C0);
PPC_FUNC_IMPL(__imp__sub_831905C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,15
	r11.s64 = ctx.r4.s64 + 15;
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// addi r9,r5,15
	ctx.r9.s64 = ctx.r5.s64 + 15;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r8,r10,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// srawi r11,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	r11.s64 = r11.s32 >> 7;
	// sth r8,14(r6)
	PPC_STORE_U16(ctx.r6.u32 + 14, ctx.r8.u16);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r9,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// sth r8,12(r6)
	PPC_STORE_U16(ctx.r6.u32 + 12, ctx.r8.u16);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190640"))) PPC_WEAK_FUNC(sub_83190640);
PPC_FUNC_IMPL(__imp__sub_83190640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lwz r11,8128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8128);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,8120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_83190674:
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r10,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, ctx.r10.u32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r8,8120(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8120);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83190674
	if (cr6.lt) goto loc_83190674;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831906A0"))) PPC_WEAK_FUNC(sub_831906A0);
PPC_FUNC_IMPL(__imp__sub_831906A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,8120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8120);
	// li r11,0
	r11.s64 = 0;
	// lwz r8,8056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8056);
	// lwz r10,5396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5396);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x831906d4
	if (!cr6.gt) goto loc_831906D4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_831906BC:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x831906dc
	if (cr6.eq) goto loc_831906DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x831906bc
	if (cr6.lt) goto loc_831906BC;
loc_831906D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_831906DC:
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r8
	ctx.r3.u64 = r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831906E8"))) PPC_WEAK_FUNC(sub_831906E8);
PPC_FUNC_IMPL(__imp__sub_831906E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,8120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8120);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,8056(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8056);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83190718
	if (!cr6.gt) goto loc_83190718;
loc_831906FC:
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831906fc
	if (cr6.lt) goto loc_831906FC;
loc_83190718:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190720"))) PPC_WEAK_FUNC(sub_83190720);
PPC_FUNC_IMPL(__imp__sub_83190720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,8040(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8040);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,8056(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8056);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8319074c
	if (!cr6.gt) goto loc_8319074C;
loc_83190734:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x83190754
	if (cr6.eq) goto loc_83190754;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x83190734
	if (cr6.lt) goto loc_83190734;
loc_8319074C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_83190754:
	// lwz r10,5396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5396);
	// mulli r11,r11,136
	r11.s64 = r11.s64 * 136;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190768"))) PPC_WEAK_FUNC(sub_83190768);
PPC_FUNC_IMPL(__imp__sub_83190768) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// bl 0x83190720
	sub_83190720(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r4,8052(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8052, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831907A0"))) PPC_WEAK_FUNC(sub_831907A0);
PPC_FUNC_IMPL(__imp__sub_831907A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r4,-8
	ctx.r3.s64 = ctx.r4.s64 + -8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831907A8"))) PPC_WEAK_FUNC(sub_831907A8);
PPC_FUNC_IMPL(__imp__sub_831907A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stw r11,8044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8044, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831907B8"))) PPC_WEAK_FUNC(sub_831907B8);
PPC_FUNC_IMPL(__imp__sub_831907B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8044(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8044);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831907C0"))) PPC_WEAK_FUNC(sub_831907C0);
PPC_FUNC_IMPL(__imp__sub_831907C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8048, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831907C8"))) PPC_WEAK_FUNC(sub_831907C8);
PPC_FUNC_IMPL(__imp__sub_831907C8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r10,8040(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8040);
	// lwz r11,8056(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8056);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83190834
	if (!cr6.gt) goto loc_83190834;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_83190800:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x83190814
	if (cr6.eq) goto loc_83190814;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x83190824
	if (!cr6.eq) goto loc_83190824;
loc_83190814:
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x83190824
	if (!cr6.eq) goto loc_83190824;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_83190824:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,256
	r11.s64 = r11.s64 + 256;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83190800
	if (!cr6.eq) goto loc_83190800;
loc_83190834:
	// lwz r11,8044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8044);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8319084c
	if (!cr6.eq) goto loc_8319084C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8319084c
	if (!cr6.eq) goto loc_8319084C;
	// li r30,-1
	r30.s64 = -1;
loc_8319084C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
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

__attribute__((alias("__imp__sub_83190870"))) PPC_WEAK_FUNC(sub_83190870);
PPC_FUNC_IMPL(__imp__sub_83190870) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r10,8040(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8040);
	// lwz r31,8056(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8056);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x831908d4
	if (!cr6.gt) goto loc_831908D4;
loc_831908A0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x831908b8
	if (!cr6.eq) goto loc_831908B8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x831908cc
	if (cr6.eq) goto loc_831908CC;
loc_831908B8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831908a0
	if (cr6.lt) goto loc_831908A0;
	// b 0x831908d4
	goto loc_831908D4;
loc_831908CC:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_831908D4:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x831908e0
	if (!cr6.eq) goto loc_831908E0;
	// li r31,0
	r31.s64 = 0;
loc_831908E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
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

__attribute__((alias("__imp__sub_83190900"))) PPC_WEAK_FUNC(sub_83190900);
PPC_FUNC_IMPL(__imp__sub_83190900) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190918"))) PPC_WEAK_FUNC(sub_83190918);
PPC_FUNC_IMPL(__imp__sub_83190918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,2
	r11.s64 = 2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190930"))) PPC_WEAK_FUNC(sub_83190930);
PPC_FUNC_IMPL(__imp__sub_83190930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,4
	r11.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190948"))) PPC_WEAK_FUNC(sub_83190948);
PPC_FUNC_IMPL(__imp__sub_83190948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// li r11,3
	r11.s64 = 3;
	// beq cr6,0x83190964
	if (cr6.eq) goto loc_83190964;
	// li r11,0
	r11.s64 = 0;
loc_83190964:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190978"))) PPC_WEAK_FUNC(sub_83190978);
PPC_FUNC_IMPL(__imp__sub_83190978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,28,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x2;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190998"))) PPC_WEAK_FUNC(sub_83190998);
PPC_FUNC_IMPL(__imp__sub_83190998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831909a8
	if (!cr6.eq) goto loc_831909A8;
loc_831909A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_831909A8:
	// lwz r11,84(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831909a0
	if (cr6.lt) goto loc_831909A0;
	// bgt cr6,0x831909f8
	if (cr6.gt) goto loc_831909F8;
	// lwz r11,240(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 240);
	// lwz r10,240(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831909a0
	if (cr6.lt) goto loc_831909A0;
	// bgt cr6,0x831909f8
	if (cr6.gt) goto loc_831909F8;
	// lwz r11,244(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// lwz r10,244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x831909a0
	if (cr6.lt) goto loc_831909A0;
	// bgt cr6,0x831909f8
	if (cr6.gt) goto loc_831909F8;
	// lwz r10,248(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,248(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 248);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_831909F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190A00"))) PPC_WEAK_FUNC(sub_83190A00);
PPC_FUNC_IMPL(__imp__sub_83190A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// addic. r10,r3,1
	xer.ca = ctx.r3.u32 > 4294967294;
	ctx.r10.s64 = ctx.r3.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// bgelr 
	if (!cr0.lt) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190A20"))) PPC_WEAK_FUNC(sub_83190A20);
PPC_FUNC_IMPL(__imp__sub_83190A20) {
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
	// lwz r11,2320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2320);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83190a60
	if (!cr6.gt) goto loc_83190A60;
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x83190a4c
	if (!cr6.eq) goto loc_83190A4C;
	// lwz r11,2324(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2324);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x83190a60
	if (cr6.eq) goto loc_83190A60;
loc_83190A4C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83190A60:
	// lwz r11,3436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	// lwz r3,3440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83190a84
	if (cr6.eq) goto loc_83190A84;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x83190a88
	if (!cr6.eq) goto loc_83190A88;
loc_83190A84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83190A88:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190A98"))) PPC_WEAK_FUNC(sub_83190A98);
PPC_FUNC_IMPL(__imp__sub_83190A98) {
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
	// addi r11,r3,8060
	r11.s64 = ctx.r3.s64 + 8060;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83190b60
	if (cr6.eq) goto loc_83190B60;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x83190b60
	if (cr6.eq) goto loc_83190B60;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x83190b60
	if (cr6.eq) goto loc_83190B60;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x83190af4
	if (!cr6.lt) goto loc_83190AF4;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3869
	ctx.r4.u64 = ctx.r4.u64 | 3869;
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
loc_83190AF4:
	// li r31,0
	r31.s64 = 0;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// lwz r7,8128(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8128);
	// stw r7,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r7.u32);
loc_83190B24:
	// lwz r7,8120(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8120);
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bge cr6,0x83190b34
	if (!cr6.lt) goto loc_83190B34;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_83190B34:
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x83190b68
	if (!cr6.lt) goto loc_83190B68;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r9,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r31,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r31.u32);
	// b 0x83190b24
	goto loc_83190B24;
loc_83190B60:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x83190640
	sub_83190640(ctx, base);
loc_83190B68:
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

__attribute__((alias("__imp__sub_83190B80"))) PPC_WEAK_FUNC(sub_83190B80);
PPC_FUNC_IMPL(__imp__sub_83190B80) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r11,92(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83190bfc
	if (!cr6.eq) goto loc_83190BFC;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x831906e8
	sub_831906E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83190bd0
	if (!cr6.eq) goto loc_83190BD0;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3871
	ctx.r4.u64 = ctx.r4.u64 | 3871;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83190BD0:
	// bl 0x83190720
	sub_83190720(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_83190BD8:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// bl 0x83190948
	sub_83190948(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83190BFC:
	// bl 0x831907a0
	sub_831907A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83190c30
	if (cr6.eq) goto loc_83190C30;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// ori r4,r4,3854
	ctx.r4.u64 = ctx.r4.u64 | 3854;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83190C30:
	// bl 0x831906a0
	sub_831906A0(ctx, base);
	// lwz r11,8052(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8052);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x83190bd8
	if (cr6.eq) goto loc_83190BD8;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// ori r4,r4,3855
	ctx.r4.u64 = ctx.r4.u64 | 3855;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190C68"))) PPC_WEAK_FUNC(sub_83190C68);
PPC_FUNC_IMPL(__imp__sub_83190C68) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r11,8040(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8040);
	// lwz r4,8056(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8056);
	// li r31,0
	r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83190d10
	if (!cr6.gt) goto loc_83190D10;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_83190CA4:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83190cb8
	if (cr6.eq) goto loc_83190CB8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83190cdc
	if (!cr6.eq) goto loc_83190CDC;
loc_83190CB8:
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83190cdc
	if (!cr6.eq) goto loc_83190CDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bl 0x83190998
	sub_83190998(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190cdc
	if (cr6.eq) goto loc_83190CDC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_83190CDC:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r4,r4,256
	ctx.r4.s64 = ctx.r4.s64 + 256;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x83190ca4
	if (!cr6.eq) goto loc_83190CA4;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x83190d10
	if (!cr6.eq) goto loc_83190D10;
	// lwz r11,8044(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8044);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83190d10
	if (!cr6.eq) goto loc_83190D10;
	// lwz r11,8048(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8048);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83190d10
	if (!cr6.eq) goto loc_83190D10;
	// li r31,0
	r31.s64 = 0;
loc_83190D10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
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

__attribute__((alias("__imp__sub_83190D38"))) PPC_WEAK_FUNC(sub_83190D38);
PPC_FUNC_IMPL(__imp__sub_83190D38) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r11,8040(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8040);
	// lwz r4,8056(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8056);
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// ble cr6,0x83190de0
	if (!cr6.gt) goto loc_83190DE0;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_83190D78:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83190d8c
	if (cr6.eq) goto loc_83190D8C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83190dd0
	if (!cr6.eq) goto loc_83190DD0;
loc_83190D8C:
	// lwz r11,100(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83190dd0
	if (!cr6.eq) goto loc_83190DD0;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83190998
	sub_83190998(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190dbc
	if (cr6.eq) goto loc_83190DBC;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// b 0x83190dd0
	goto loc_83190DD0;
loc_83190DBC:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x83190998
	sub_83190998(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190dd0
	if (cr6.eq) goto loc_83190DD0;
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_83190DD0:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r4,r4,256
	ctx.r4.s64 = ctx.r4.s64 + 256;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83190d78
	if (!cr6.eq) goto loc_83190D78;
loc_83190DE0:
	// lwz r11,8044(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8044);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83190df0
	if (!cr6.eq) goto loc_83190DF0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_83190DF0:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt cr6,0x83190e00
	if (cr6.gt) goto loc_83190E00;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// b 0x83190e08
	goto loc_83190E08;
loc_83190E00:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x83190e0c
	if (!cr6.eq) goto loc_83190E0C;
loc_83190E08:
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r30.u32);
loc_83190E0C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83190E28"))) PPC_WEAK_FUNC(sub_83190E28);
PPC_FUNC_IMPL(__imp__sub_83190E28) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190e68
	if (cr6.eq) goto loc_83190E68;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,389
	ctx.r4.u64 = ctx.r4.u64 | 389;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83190E68:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190a98
	sub_83190A98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83190E88"))) PPC_WEAK_FUNC(sub_83190E88);
PPC_FUNC_IMPL(__imp__sub_83190E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r11,r11,-12340
	r11.s64 = r11.s64 + -12340;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x83190a98
	sub_83190A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83190EA0"))) PPC_WEAK_FUNC(sub_83190EA0);
PPC_FUNC_IMPL(__imp__sub_83190EA0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x83190c68
	sub_83190C68(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x83190ee0
	if (!cr6.eq) goto loc_83190EE0;
loc_83190ECC:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83190EE0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190768
	sub_83190768(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r11,4104(r31)
	PPC_STORE_U32(r31.u32 + 4104, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r11,4108(r31)
	PPC_STORE_U32(r31.u32 + 4108, r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x831857f8
	sub_831857F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190ecc
	if (cr6.eq) goto loc_83190ECC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83184bb0
	sub_83184BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83190ecc
	if (cr6.eq) goto loc_83190ECC;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83190f58
	if (!cr6.eq) goto loc_83190F58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190a00
	sub_83190A00(ctx, base);
	// stw r3,100(r29)
	PPC_STORE_U32(r29.u32 + 100, ctx.r3.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
loc_83190F58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83190F68"))) PPC_WEAK_FUNC(sub_83190F68);
PPC_FUNC_IMPL(__imp__sub_83190F68) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190b80
	sub_83190B80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83190FB0"))) PPC_WEAK_FUNC(sub_83190FB0);
PPC_FUNC_IMPL(__imp__sub_83190FB0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x83191024
	if (!cr6.eq) goto loc_83191024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83190d38
	sub_83190D38(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83191028
	if (cr6.eq) goto loc_83191028;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83181dc8
	sub_83181DC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83191028
	if (cr6.eq) goto loc_83191028;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x83185690
	sub_83185690(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83191028
	if (!cr6.eq) goto loc_83191028;
loc_83191024:
	// li r31,0
	r31.s64 = 0;
loc_83191028:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_83191050"))) PPC_WEAK_FUNC(sub_83191050);
PPC_FUNC_IMPL(__imp__sub_83191050) {
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
	// bl 0x8318fcc8
	sub_8318FCC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83191098
	if (cr6.eq) goto loc_83191098;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,387
	ctx.r4.u64 = ctx.r4.u64 | 387;
	// bl 0x8318fee0
	sub_8318FEE0(ctx, base);
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
loc_83191098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83190fb0
	sub_83190FB0(ctx, base);
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

__attribute__((alias("__imp__sub_831910C0"))) PPC_WEAK_FUNC(sub_831910C0);
PPC_FUNC_IMPL(__imp__sub_831910C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-13692
	ctx.r3.s64 = r11.s64 + -13692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831910D0"))) PPC_WEAK_FUNC(sub_831910D0);
PPC_FUNC_IMPL(__imp__sub_831910D0) {
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
	// bl 0x83191608
	sub_83191608(ctx, base);
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r11,r11,-12272
	r11.s64 = r11.s64 + -12272;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191108"))) PPC_WEAK_FUNC(sub_83191108);
PPC_FUNC_IMPL(__imp__sub_83191108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191118
	if (!cr6.lt) goto loc_83191118;
	// b 0x8319edf0
	sub_8319EDF0(ctx, base);
	return;
loc_83191118:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191124
	if (!cr6.lt) goto loc_83191124;
	// b 0x8319e798
	sub_8319E798(ctx, base);
	return;
loc_83191124:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191130"))) PPC_WEAK_FUNC(sub_83191130);
PPC_FUNC_IMPL(__imp__sub_83191130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191140
	if (!cr6.lt) goto loc_83191140;
	// b 0x8319f678
	sub_8319F678(ctx, base);
	return;
loc_83191140:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319114c
	if (!cr6.lt) goto loc_8319114C;
	// b 0x8319e7d8
	sub_8319E7D8(ctx, base);
	return;
loc_8319114C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191158"))) PPC_WEAK_FUNC(sub_83191158);
PPC_FUNC_IMPL(__imp__sub_83191158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191168
	if (!cr6.lt) goto loc_83191168;
	// b 0x8319ef50
	sub_8319EF50(ctx, base);
	return;
loc_83191168:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191174
	if (!cr6.lt) goto loc_83191174;
	// b 0x8319e840
	sub_8319E840(ctx, base);
	return;
loc_83191174:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191180"))) PPC_WEAK_FUNC(sub_83191180);
PPC_FUNC_IMPL(__imp__sub_83191180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191190
	if (!cr6.lt) goto loc_83191190;
	// b 0x8319ea08
	sub_8319EA08(ctx, base);
	return;
loc_83191190:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319119c
	if (!cr6.lt) goto loc_8319119C;
	// b 0x8319de38
	sub_8319DE38(ctx, base);
	return;
loc_8319119C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831911A8"))) PPC_WEAK_FUNC(sub_831911A8);
PPC_FUNC_IMPL(__imp__sub_831911A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831911b8
	if (!cr6.lt) goto loc_831911B8;
	// b 0x8319ea58
	sub_8319EA58(ctx, base);
	return;
loc_831911B8:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831911c4
	if (!cr6.lt) goto loc_831911C4;
	// b 0x8319de68
	sub_8319DE68(ctx, base);
	return;
loc_831911C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831911D0"))) PPC_WEAK_FUNC(sub_831911D0);
PPC_FUNC_IMPL(__imp__sub_831911D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831911e0
	if (!cr6.lt) goto loc_831911E0;
	// b 0x8319ea78
	sub_8319EA78(ctx, base);
	return;
loc_831911E0:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831911ec
	if (!cr6.lt) goto loc_831911EC;
	// b 0x8319de78
	sub_8319DE78(ctx, base);
	return;
loc_831911EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831911F8"))) PPC_WEAK_FUNC(sub_831911F8);
PPC_FUNC_IMPL(__imp__sub_831911F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191208
	if (!cr6.lt) goto loc_83191208;
	// b 0x8319eab0
	sub_8319EAB0(ctx, base);
	return;
loc_83191208:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191214
	if (!cr6.lt) goto loc_83191214;
	// b 0x8319de38
	sub_8319DE38(ctx, base);
	return;
loc_83191214:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191220"))) PPC_WEAK_FUNC(sub_83191220);
PPC_FUNC_IMPL(__imp__sub_83191220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191230
	if (!cr6.lt) goto loc_83191230;
	// b 0x8319eb00
	sub_8319EB00(ctx, base);
	return;
loc_83191230:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319123c
	if (!cr6.lt) goto loc_8319123C;
	// b 0x8319dee8
	sub_8319DEE8(ctx, base);
	return;
loc_8319123C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191248"))) PPC_WEAK_FUNC(sub_83191248);
PPC_FUNC_IMPL(__imp__sub_83191248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191258
	if (!cr6.lt) goto loc_83191258;
	// b 0x8319eb18
	sub_8319EB18(ctx, base);
	return;
loc_83191258:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191264
	if (!cr6.lt) goto loc_83191264;
	// b 0x8319df00
	sub_8319DF00(ctx, base);
	return;
loc_83191264:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191270"))) PPC_WEAK_FUNC(sub_83191270);
PPC_FUNC_IMPL(__imp__sub_83191270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191280
	if (!cr6.lt) goto loc_83191280;
	// b 0x8319eb30
	sub_8319EB30(ctx, base);
	return;
loc_83191280:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319128c
	if (!cr6.lt) goto loc_8319128C;
	// b 0x8319df18
	sub_8319DF18(ctx, base);
	return;
loc_8319128C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191298"))) PPC_WEAK_FUNC(sub_83191298);
PPC_FUNC_IMPL(__imp__sub_83191298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831912a8
	if (!cr6.lt) goto loc_831912A8;
	// b 0x8319eb48
	sub_8319EB48(ctx, base);
	return;
loc_831912A8:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831912b4
	if (!cr6.lt) goto loc_831912B4;
	// b 0x8319df30
	sub_8319DF30(ctx, base);
	return;
loc_831912B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831912C0"))) PPC_WEAK_FUNC(sub_831912C0);
PPC_FUNC_IMPL(__imp__sub_831912C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831912d0
	if (!cr6.lt) goto loc_831912D0;
	// b 0x8319eb60
	sub_8319EB60(ctx, base);
	return;
loc_831912D0:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831912dc
	if (!cr6.lt) goto loc_831912DC;
	// b 0x8319df48
	sub_8319DF48(ctx, base);
	return;
loc_831912DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831912E8"))) PPC_WEAK_FUNC(sub_831912E8);
PPC_FUNC_IMPL(__imp__sub_831912E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831912f8
	if (!cr6.lt) goto loc_831912F8;
	// b 0x8319ebb8
	sub_8319EBB8(ctx, base);
	return;
loc_831912F8:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191304
	if (!cr6.lt) goto loc_83191304;
	// b 0x8319df80
	sub_8319DF80(ctx, base);
	return;
loc_83191304:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191310"))) PPC_WEAK_FUNC(sub_83191310);
PPC_FUNC_IMPL(__imp__sub_83191310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191320
	if (!cr6.lt) goto loc_83191320;
	// b 0x8319ebf8
	sub_8319EBF8(ctx, base);
	return;
loc_83191320:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319132c
	if (!cr6.lt) goto loc_8319132C;
	// b 0x8319dfb8
	sub_8319DFB8(ctx, base);
	return;
loc_8319132C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191338"))) PPC_WEAK_FUNC(sub_83191338);
PPC_FUNC_IMPL(__imp__sub_83191338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191348
	if (!cr6.lt) goto loc_83191348;
	// b 0x8319ec38
	sub_8319EC38(ctx, base);
	return;
loc_83191348:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191354
	if (!cr6.lt) goto loc_83191354;
	// b 0x8319dff0
	sub_8319DFF0(ctx, base);
	return;
loc_83191354:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191360"))) PPC_WEAK_FUNC(sub_83191360);
PPC_FUNC_IMPL(__imp__sub_83191360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191370
	if (!cr6.lt) goto loc_83191370;
	// b 0x8319ec78
	sub_8319EC78(ctx, base);
	return;
loc_83191370:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319137c
	if (!cr6.lt) goto loc_8319137C;
	// b 0x8319e028
	sub_8319E028(ctx, base);
	return;
loc_8319137C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191388"))) PPC_WEAK_FUNC(sub_83191388);
PPC_FUNC_IMPL(__imp__sub_83191388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191398
	if (!cr6.lt) goto loc_83191398;
	// b 0x8319f040
	sub_8319F040(ctx, base);
	return;
loc_83191398:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831913a4
	if (!cr6.lt) goto loc_831913A4;
	// b 0x8319e070
	sub_8319E070(ctx, base);
	return;
loc_831913A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831913B0"))) PPC_WEAK_FUNC(sub_831913B0);
PPC_FUNC_IMPL(__imp__sub_831913B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831913c0
	if (!cr6.lt) goto loc_831913C0;
	// b 0x8319f0e8
	sub_8319F0E8(ctx, base);
	return;
loc_831913C0:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831913cc
	if (!cr6.lt) goto loc_831913CC;
	// b 0x8319e150
	sub_8319E150(ctx, base);
	return;
loc_831913CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831913D8"))) PPC_WEAK_FUNC(sub_831913D8);
PPC_FUNC_IMPL(__imp__sub_831913D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831913e8
	if (!cr6.lt) goto loc_831913E8;
	// b 0x8319f140
	sub_8319F140(ctx, base);
	return;
loc_831913E8:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831913f4
	if (!cr6.lt) goto loc_831913F4;
	// b 0x8319e1e8
	sub_8319E1E8(ctx, base);
	return;
loc_831913F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191400"))) PPC_WEAK_FUNC(sub_83191400);
PPC_FUNC_IMPL(__imp__sub_83191400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191410
	if (!cr6.lt) goto loc_83191410;
	// b 0x8319f188
	sub_8319F188(ctx, base);
	return;
loc_83191410:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319141c
	if (!cr6.lt) goto loc_8319141C;
	// b 0x8319e238
	sub_8319E238(ctx, base);
	return;
loc_8319141C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191428"))) PPC_WEAK_FUNC(sub_83191428);
PPC_FUNC_IMPL(__imp__sub_83191428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191438
	if (!cr6.lt) goto loc_83191438;
	// b 0x8319f200
	sub_8319F200(ctx, base);
	return;
loc_83191438:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191444
	if (!cr6.lt) goto loc_83191444;
	// b 0x8319e2a0
	sub_8319E2A0(ctx, base);
	return;
loc_83191444:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191450"))) PPC_WEAK_FUNC(sub_83191450);
PPC_FUNC_IMPL(__imp__sub_83191450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191460
	if (!cr6.lt) goto loc_83191460;
	// b 0x8319f2b0
	sub_8319F2B0(ctx, base);
	return;
loc_83191460:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319146c
	if (!cr6.lt) goto loc_8319146C;
	// b 0x8319e378
	sub_8319E378(ctx, base);
	return;
loc_8319146C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191478"))) PPC_WEAK_FUNC(sub_83191478);
PPC_FUNC_IMPL(__imp__sub_83191478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191488
	if (!cr6.lt) goto loc_83191488;
	// b 0x8319f320
	sub_8319F320(ctx, base);
	return;
loc_83191488:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191494
	if (!cr6.lt) goto loc_83191494;
	// b 0x8319e3f0
	sub_8319E3F0(ctx, base);
	return;
loc_83191494:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831914A0"))) PPC_WEAK_FUNC(sub_831914A0);
PPC_FUNC_IMPL(__imp__sub_831914A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831914b0
	if (!cr6.lt) goto loc_831914B0;
	// b 0x8319f3a0
	sub_8319F3A0(ctx, base);
	return;
loc_831914B0:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831914bc
	if (!cr6.lt) goto loc_831914BC;
	// b 0x8319e468
	sub_8319E468(ctx, base);
	return;
loc_831914BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831914C8"))) PPC_WEAK_FUNC(sub_831914C8);
PPC_FUNC_IMPL(__imp__sub_831914C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831914d8
	if (!cr6.lt) goto loc_831914D8;
	// b 0x8319f3f0
	sub_8319F3F0(ctx, base);
	return;
loc_831914D8:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831914e4
	if (!cr6.lt) goto loc_831914E4;
	// b 0x8319e4c8
	sub_8319E4C8(ctx, base);
	return;
loc_831914E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831914F0"))) PPC_WEAK_FUNC(sub_831914F0);
PPC_FUNC_IMPL(__imp__sub_831914F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191500
	if (!cr6.lt) goto loc_83191500;
	// b 0x8319f438
	sub_8319F438(ctx, base);
	return;
loc_83191500:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319150c
	if (!cr6.lt) goto loc_8319150C;
	// b 0x8319e510
	sub_8319E510(ctx, base);
	return;
loc_8319150C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191518"))) PPC_WEAK_FUNC(sub_83191518);
PPC_FUNC_IMPL(__imp__sub_83191518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191528
	if (!cr6.lt) goto loc_83191528;
	// b 0x8319f480
	sub_8319F480(ctx, base);
	return;
loc_83191528:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191534
	if (!cr6.lt) goto loc_83191534;
	// b 0x8319e558
	sub_8319E558(ctx, base);
	return;
loc_83191534:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191540"))) PPC_WEAK_FUNC(sub_83191540);
PPC_FUNC_IMPL(__imp__sub_83191540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191550
	if (!cr6.lt) goto loc_83191550;
	// b 0x8319f4d0
	sub_8319F4D0(ctx, base);
	return;
loc_83191550:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x8319155c
	if (!cr6.lt) goto loc_8319155C;
	// b 0x8319e5a8
	sub_8319E5A8(ctx, base);
	return;
loc_8319155C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191568"))) PPC_WEAK_FUNC(sub_83191568);
PPC_FUNC_IMPL(__imp__sub_83191568) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x83191578
	if (!cr6.lt) goto loc_83191578;
	// b 0x8319f520
	sub_8319F520(ctx, base);
	return;
loc_83191578:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x83191584
	if (!cr6.lt) goto loc_83191584;
	// b 0x8319e5f8
	sub_8319E5F8(ctx, base);
	return;
loc_83191584:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191590"))) PPC_WEAK_FUNC(sub_83191590);
PPC_FUNC_IMPL(__imp__sub_83191590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831915a0
	if (!cr6.lt) goto loc_831915A0;
	// b 0x8319f568
	sub_8319F568(ctx, base);
	return;
loc_831915A0:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831915ac
	if (!cr6.lt) goto loc_831915AC;
	// b 0x8319e640
	sub_8319E640(ctx, base);
	return;
loc_831915AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831915B8"))) PPC_WEAK_FUNC(sub_831915B8);
PPC_FUNC_IMPL(__imp__sub_831915B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831915c8
	if (!cr6.lt) goto loc_831915C8;
	// b 0x8319f5c0
	sub_8319F5C0(ctx, base);
	return;
loc_831915C8:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831915d4
	if (!cr6.lt) goto loc_831915D4;
	// b 0x8319e698
	sub_8319E698(ctx, base);
	return;
loc_831915D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831915E0"))) PPC_WEAK_FUNC(sub_831915E0);
PPC_FUNC_IMPL(__imp__sub_831915E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(r11.s32, 200, xer);
	// bge cr6,0x831915f0
	if (!cr6.lt) goto loc_831915F0;
	// b 0x8319f618
	sub_8319F618(ctx, base);
	return;
loc_831915F0:
	// cmpwi cr6,r11,300
	cr6.compare<int32_t>(r11.s32, 300, xer);
	// bge cr6,0x831915fc
	if (!cr6.lt) goto loc_831915FC;
	// b 0x8319e6f0
	sub_8319E6F0(ctx, base);
	return;
loc_831915FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191608"))) PPC_WEAK_FUNC(sub_83191608);
PPC_FUNC_IMPL(__imp__sub_83191608) {
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191620"))) PPC_WEAK_FUNC(sub_83191620);
PPC_FUNC_IMPL(__imp__sub_83191620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r5,15
	r11.s64 = ctx.r5.s64 + 15;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191640"))) PPC_WEAK_FUNC(sub_83191640);
PPC_FUNC_IMPL(__imp__sub_83191640) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
	// addi r10,r10,-13608
	ctx.r10.s64 = ctx.r10.s64 + -13608;
loc_8319168C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x831916ac
	if (!cr0.eq) goto loc_831916AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x8319168c
	if (!cr6.eq) goto loc_8319168C;
loc_831916AC:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x831916c0
	if (!cr6.eq) goto loc_831916C0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x8319d158
	sub_8319D158(ctx, base);
loc_831916C0:
	// mr r11,r31
	r11.u64 = r31.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r8,r11,24
	ctx.r8.s64 = r11.s64 + 24;
	// addi r10,r10,-13636
	ctx.r10.s64 = ctx.r10.s64 + -13636;
loc_831916D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x831916f0
	if (!cr0.eq) goto loc_831916F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x831916d0
	if (!cr6.eq) goto loc_831916D0;
loc_831916F0:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x83191704
	if (!cr6.eq) goto loc_83191704;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x8319d748
	sub_8319D748(ctx, base);
loc_83191704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83191710"))) PPC_WEAK_FUNC(sub_83191710);
PPC_FUNC_IMPL(__imp__sub_83191710) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8319174c
	if (!cr6.gt) goto loc_8319174C;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_83191734:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83191608
	sub_83191608(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,2096
	r30.s64 = r30.s64 + 2096;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83191734
	if (!cr6.eq) goto loc_83191734;
loc_8319174C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191768"))) PPC_WEAK_FUNC(sub_83191768);
PPC_FUNC_IMPL(__imp__sub_83191768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191778"))) PPC_WEAK_FUNC(sub_83191778);
PPC_FUNC_IMPL(__imp__sub_83191778) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r9,r11,-12280
	ctx.r9.s64 = r11.s64 + -12280;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// bgt cr6,0x831917cc
	if (cr6.gt) goto loc_831917CC;
	// bl 0x831910c0
	sub_831910C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r9,8
	ctx.r3.s64 = ctx.r9.s64 + 8;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// bl 0x83191620
	sub_83191620(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x83191710
	sub_83191710(ctx, base);
loc_831917CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831917E0"))) PPC_WEAK_FUNC(sub_831917E0);
PPC_FUNC_IMPL(__imp__sub_831917E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r3,r11,-12272
	ctx.r3.s64 = r11.s64 + -12272;
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-4(r3)
	PPC_STORE_U32(ctx.r3.u32 + -4, r11.u32);
	// bgtlr cr6
	if (cr6.gt) return;
	// b 0x83191608
	sub_83191608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83191800"))) PPC_WEAK_FUNC(sub_83191800);
PPC_FUNC_IMPL(__imp__sub_83191800) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191808"))) PPC_WEAK_FUNC(sub_83191808);
PPC_FUNC_IMPL(__imp__sub_83191808) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r5,2048
	cr6.compare<int32_t>(ctx.r5.s32, 2048, xer);
	// bge cr6,0x83191838
	if (!cr6.lt) goto loc_83191838;
loc_83191830:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831918a0
	goto loc_831918A0;
loc_83191838:
	// lis r11,-31935
	r11.s64 = -2092892160;
	// addi r31,r11,-12272
	r31.s64 = r11.s64 + -12272;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x83191830
	if (!cr6.lt) goto loc_83191830;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83191884
	if (!cr6.gt) goto loc_83191884;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_83191860:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x83191768
	sub_83191768(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83191884
	if (!cr6.eq) goto loc_83191884;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2096
	ctx.r10.s64 = ctx.r10.s64 + 2096;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x83191860
	if (cr6.lt) goto loc_83191860;
loc_83191884:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83191640
	sub_83191640(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_831918A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831918B8"))) PPC_WEAK_FUNC(sub_831918B8);
PPC_FUNC_IMPL(__imp__sub_831918B8) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x83191768
	sub_83191768(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831919d8
	if (cr6.eq) goto loc_831919D8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(r11.u32, 2048, xer);
	// bge cr6,0x83191918
	if (!cr6.lt) goto loc_83191918;
loc_83191904:
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_83191918:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319e8c8
	sub_8319E8C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x83191988
	if (cr6.eq) goto loc_83191988;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8319ef50
	sub_8319EF50(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831919d8
	if (cr6.eq) goto loc_831919D8;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319e9d8
	sub_8319E9D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831919d8
	if (cr6.eq) goto loc_831919D8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319e9f0
	sub_8319E9F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319197c
	if (!cr6.eq) goto loc_8319197C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_8319197C:
	// li r11,2
	r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x831919f0
	goto loc_831919F0;
loc_83191988:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8319dc28
	sub_8319DC28(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831919e4
	if (cr6.eq) goto loc_831919E4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319e840
	sub_8319E840(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319ddd8
	sub_8319DDD8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831919d8
	if (cr6.eq) goto loc_831919D8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319de08
	sub_8319DE08(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8319197c
	if (!cr6.eq) goto loc_8319197C;
loc_831919D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
loc_831919E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83191904
	if (!cr6.eq) goto loc_83191904;
loc_831919F0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r9,r11,100
	ctx.r9.s64 = r11.s64 * 100;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r10,r11,100
	ctx.r10.s64 = r11.s64 * 100;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,100
	r11.s64 = r11.s64 * 100;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83191A40"))) PPC_WEAK_FUNC(sub_83191A40);
PPC_FUNC_IMPL(__imp__sub_83191A40) {
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
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
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
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191AB0"))) PPC_WEAK_FUNC(sub_83191AB0);
PPC_FUNC_IMPL(__imp__sub_83191AB0) {
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
	// bl 0x83195048
	sub_83195048(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83191b18
	if (cr6.eq) goto loc_83191B18;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83195178
	sub_83195178(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83191b18
	if (cr6.eq) goto loc_83191B18;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197728
	sub_83197728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194ef0
	sub_83194EF0(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_83191B18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83191B20"))) PPC_WEAK_FUNC(sub_83191B20);
PPC_FUNC_IMPL(__imp__sub_83191B20) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2048
	cr6.compare<int32_t>(ctx.r4.s32, 2048, xer);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// blt cr6,0x83191b48
	if (cr6.lt) goto loc_83191B48;
	// li r31,2048
	r31.s64 = 2048;
loc_83191B48:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r30,148
	ctx.r3.s64 = r30.s64 + 148;
	// bl 0x83197348
	sub_83197348(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r31.u32);
	// bl 0x83198198
	sub_83198198(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191B80"))) PPC_WEAK_FUNC(sub_83191B80);
PPC_FUNC_IMPL(__imp__sub_83191B80) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x83191bc0
	if (cr6.lt) goto loc_83191BC0;
loc_83191BA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83197908
	sub_83197908(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// beq cr6,0x83191bcc
	if (cr6.eq) goto loc_83191BCC;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bge cr6,0x83191ba0
	if (!cr6.lt) goto loc_83191BA0;
loc_83191BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83191BCC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83191BD8"))) PPC_WEAK_FUNC(sub_83191BD8);
PPC_FUNC_IMPL(__imp__sub_83191BD8) {
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
	// bl 0x83195048
	sub_83195048(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83191c14
	if (!cr6.eq) goto loc_83191C14;
	// cmpwi cr6,r30,6
	cr6.compare<int32_t>(r30.s32, 6, xer);
	// ble cr6,0x83191c08
	if (!cr6.gt) goto loc_83191C08;
	// li r30,6
	r30.s64 = 6;
loc_83191C08:
	// add r3,r30,r29
	ctx.r3.u64 = r30.u64 + r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83191C14:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83195178
	sub_83195178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83194ef0
	sub_83194EF0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83191C48"))) PPC_WEAK_FUNC(sub_83191C48);
PPC_FUNC_IMPL(__imp__sub_83191C48) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2048
	cr6.compare<int32_t>(ctx.r4.s32, 2048, xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// blt cr6,0x83191c68
	if (cr6.lt) goto loc_83191C68;
	// li r30,2048
	r30.s64 = 2048;
loc_83191C68:
	// lis r11,-31935
	r11.s64 = -2092892160;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-10056
	r31.s64 = r11.s64 + -10056;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83191cb0
	if (!cr6.gt) goto loc_83191CB0;
loc_83191C88:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8318e190
	sub_8318E190(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83191cbc
	if (!cr6.eq) goto loc_83191CBC;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x83191c88
	if (cr6.gt) goto loc_83191C88;
loc_83191CB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83191CBC:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-14752
	r11.s64 = r11.s64 + -14752;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// stb r11,40(r29)
	PPC_STORE_U8(r29.u32 + 40, r11.u8);
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// lbz r10,9(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// lbz r8,11(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 11);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83191D08"))) PPC_WEAK_FUNC(sub_83191D08);
PPC_FUNC_IMPL(__imp__sub_83191D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// rlwinm r6,r7,31,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x3;
	// rlwinm r9,r9,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r8,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	// rlwinm r5,r11,28,30,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x3;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// rlwinm r6,r11,29,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// rlwinm r9,r10,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// stb r8,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r8.u8);
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stb r7,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r7.u8);
	// rlwinm r7,r11,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r5,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, ctx.r5.u8);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// stb r9,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r9.u8);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// stb r7,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r7.u8);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r11,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83191D80"))) PPC_WEAK_FUNC(sub_83191D80);
PPC_FUNC_IMPL(__imp__sub_83191D80) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x83191eb0
	if (!cr6.gt) goto loc_83191EB0;
loc_83191DA0:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8319b168
	sub_8319B168(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83191e2c
	if (cr6.eq) goto loc_83191E2C;
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// lbz r10,7(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r7,5(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// lbz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// subf r30,r11,r30
	r30.s64 = r30.s64 - r11.s64;
	// lbz r4,9(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// rlwinm r11,r10,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r9,10(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// lbz r3,11(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83191e18
	if (cr6.eq) goto loc_83191E18;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x83191e18
	if (cr6.lt) goto loc_83191E18;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x83191e18
	if (cr6.gt) goto loc_83191E18;
	// rlwinm r11,r9,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83191e38
	if (!cr6.eq) goto loc_83191E38;
loc_83191E18:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x83191da0
	if (cr6.gt) goto loc_83191DA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83191E2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83191E38:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// lwz r7,28(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r8,r8,4,20,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFF0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r7,r11,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwimi r6,r11,8,20,23
	ctx.r6.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF0FF);
	// or r11,r7,r8
	r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r8,r6,20
	ctx.r8.u64 = ctx.r6.u32 & 0xFFF;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// stw r8,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r8.u32);
	// bne cr6,0x83191e7c
	if (!cr6.eq) goto loc_83191E7C;
	// rlwimi r4,r5,8,16,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 8) & 0xFF00) | (ctx.r4.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r11,r9,26,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// rlwinm r8,r4,2,14,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// mulli r11,r11,50
	r11.s64 = r11.s64 * 50;
	// stw r11,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r11.u32);
loc_83191E7C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// rlwinm r8,r10,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// rlwinm r9,r9,5,22,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x3E0;
	// addi r11,r11,-13576
	r11.s64 = r11.s64 + -13576;
	// rlwinm r7,r3,29,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1F;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r10,r10,-15588
	ctx.r10.s64 = ctx.r10.s64 + -15588;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// stw r11,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r11.u32);
	// stw r9,36(r29)
	PPC_STORE_U32(r29.u32 + 36, ctx.r9.u32);
loc_83191EB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83191EC0"))) PPC_WEAK_FUNC(sub_83191EC0);
PPC_FUNC_IMPL(__imp__sub_83191EC0) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bl 0x83191b80
	sub_83191B80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83191f00
	if (!cr6.eq) goto loc_83191F00;
loc_83191EF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83191F00:
	// subf r11,r30,r28
	r11.s64 = r28.s64 - r30.s64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// add r27,r11,r29
	r27.u64 = r11.u64 + r29.u64;
	// addi r3,r30,1
	ctx.r3.s64 = r30.s64 + 1;
	// addi r4,r27,-1
	ctx.r4.s64 = r27.s64 + -1;
	// bl 0x83191b80
	sub_83191B80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83191ef4
	if (cr6.eq) goto loc_83191EF4;
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x83191b80
	sub_83191B80(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83191ef4
	if (cr6.eq) goto loc_83191EF4;
	// subf r29,r30,r31
	r29.s64 = r31.s64 - r30.s64;
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// beq cr6,0x83191f60
	if (cr6.eq) goto loc_83191F60;
loc_83191F54:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83191F60:
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r10,r11,r29
	ctx.r10.s32 = r11.s32 / r29.s32;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x83191f54
	if (!cr0.eq) goto loc_83191F54;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83191ab0
	sub_83191AB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83191F90"))) PPC_WEAK_FUNC(sub_83191F90);
PPC_FUNC_IMPL(__imp__sub_83191F90) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r28,16(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// bl 0x831979f8
	sub_831979F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83191fec
	if (!cr6.eq) goto loc_83191FEC;
loc_83191FBC:
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// subf r31,r28,r31
	r31.s64 = r31.s64 - r28.s64;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// bge cr6,0x83192064
	if (!cr6.lt) goto loc_83192064;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x83192064
	if (!cr6.gt) goto loc_83192064;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x831979f8
	sub_831979F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83191fbc
	if (cr6.eq) goto loc_83191FBC;
loc_83191FEC:
	// lis r11,-31935
	r11.s64 = -2092892160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r29,r11,-12256
	r29.s64 = r11.s64 + -12256;
	// li r11,0
	r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x83191b20
	sub_83191B20(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83192064
	if (cr6.eq) goto loc_83192064;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83192028
	if (!cr6.gt) goto loc_83192028;
	// stw r11,28(r27)
	PPC_STORE_U32(r27.u32 + 28, r11.u32);
loc_83192028:
	// lwz r11,100(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83192038
	if (!cr6.gt) goto loc_83192038;
	// stw r11,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r11.u32);
loc_83192038:
	// lwz r11,104(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83192048
	if (!cr6.gt) goto loc_83192048;
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
loc_83192048:
	// lwz r10,108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83192064
	if (!cr6.gt) goto loc_83192064;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// stw r10,32(r27)
	PPC_STORE_U32(r27.u32 + 32, ctx.r10.u32);
	// addi r11,r11,-15588
	r11.s64 = r11.s64 + -15588;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_83192064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83192070"))) PPC_WEAK_FUNC(sub_83192070);
PPC_FUNC_IMPL(__imp__sub_83192070) {
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
	// bl 0x83191c48
	sub_83191C48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x831920a0
	if (cr6.eq) goto loc_831920A0;
loc_83192094:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831920A0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-2
	ctx.r4.s64 = r30.s64 + -2;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x83191c48
	sub_83191C48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192094
	if (!cr6.eq) goto loc_83192094;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x83191c48
	sub_83191C48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192094
	if (!cr6.eq) goto loc_83192094;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,-3
	ctx.r4.s64 = r30.s64 + -3;
	// addi r3,r31,3
	ctx.r3.s64 = r31.s64 + 3;
	// bl 0x83191c48
	sub_83191C48(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831920F8"))) PPC_WEAK_FUNC(sub_831920F8);
PPC_FUNC_IMPL(__imp__sub_831920F8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x83192168
	if (cr6.lt) goto loc_83192168;
loc_83192114:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x83192158
	if (!cr6.eq) goto loc_83192158;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,248
	cr6.compare<uint32_t>(r11.u32, 248, xer);
	// bne cr6,0x83192158
	if (!cr6.eq) goto loc_83192158;
	// bl 0x83191d08
	sub_83191D08(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83192158
	if (cr6.eq) goto loc_83192158;
	// lbz r11,2(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x83192158
	if (cr6.eq) goto loc_83192158;
	// lbz r11,3(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x83192180
	if (!cr6.eq) goto loc_83192180;
loc_83192158:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// bge cr6,0x83192114
	if (!cr6.lt) goto loc_83192114;
loc_83192168:
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
loc_83192180:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192198"))) PPC_WEAK_FUNC(sub_83192198);
PPC_FUNC_IMPL(__imp__sub_83192198) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831920f8
	sub_831920F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83192224
	if (cr6.eq) goto loc_83192224;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r7,83(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// addi r11,r11,-13524
	r11.s64 = r11.s64 + -13524;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// addi r9,r11,-16
	ctx.r9.s64 = r11.s64 + -16;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lis r10,-31930
	ctx.r10.s64 = -2092564480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-22000
	ctx.r3.s64 = ctx.r10.s64 + -22000;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r9,40(r31)
	PPC_STORE_U8(r31.u32 + 40, ctx.r9.u8);
	// lwzx r11,r7,r11
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_83192224:
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

__attribute__((alias("__imp__sub_83192240"))) PPC_WEAK_FUNC(sub_83192240);
PPC_FUNC_IMPL(__imp__sub_83192240) {
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
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// add r26,r27,r28
	r26.u64 = r27.u64 + r28.u64;
	// lwz r24,16(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// ble cr6,0x83192300
	if (!cr6.gt) goto loc_83192300;
loc_83192268:
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83191b80
	sub_83191B80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83192300
	if (cr6.eq) goto loc_83192300;
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplwi cr6,r11,192
	cr6.compare<uint32_t>(r11.u32, 192, xer);
	// blt cr6,0x831922e8
	if (cr6.lt) goto loc_831922E8;
	// cmplwi cr6,r11,223
	cr6.compare<uint32_t>(r11.u32, 223, xer);
	// bgt cr6,0x831922e8
	if (cr6.gt) goto loc_831922E8;
	// subf r4,r31,r26
	ctx.r4.s64 = r26.s64 - r31.s64;
	// bl 0x83191bd8
	sub_83191BD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r30,r26
	r11.s64 = r26.s64 - r30.s64;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// mr r29,r11
	r29.u64 = r11.u64;
	// blt cr6,0x831922b8
	if (cr6.lt) goto loc_831922B8;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_831922B8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83192070
	sub_83192070(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192300
	if (!cr6.eq) goto loc_83192300;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83192198
	sub_83192198(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192300
	if (!cr6.eq) goto loc_83192300;
loc_831922E8:
	// subf r11,r27,r31
	r11.s64 = r31.s64 - r27.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r28,r11,r28
	r28.s64 = r28.s64 - r11.s64;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bgt cr6,0x83192268
	if (cr6.gt) goto loc_83192268;
loc_83192300:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83192308"))) PPC_WEAK_FUNC(sub_83192308);
PPC_FUNC_IMPL(__imp__sub_83192308) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83191ec0
	sub_83191EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192338
	if (!cr6.eq) goto loc_83192338;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_83192338:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x8319239c
	if (cr6.eq) goto loc_8319239C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x83192360
	if (cr6.eq) goto loc_83192360;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83192360
	if (!cr6.gt) goto loc_83192360;
	// mulli r11,r11,50
	r11.s64 = r11.s64 * 50;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_83192360:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r11,r11,-16008
	r11.s64 = r11.s64 + -16008;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x83191f90
	sub_83191F90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83192240
	sub_83192240(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83191d80
	sub_83191D80(ctx, base);
loc_8319239C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831923A8"))) PPC_WEAK_FUNC(sub_831923A8);
PPC_FUNC_IMPL(__imp__sub_831923A8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83191a40
	sub_83191A40(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e71e58
	sub_82E71E58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192430
	if (!cr6.eq) goto loc_83192430;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83192308
	sub_83192308(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192430
	if (!cr6.eq) goto loc_83192430;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83191d80
	sub_83191D80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192430
	if (!cr6.eq) goto loc_83192430;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83192070
	sub_83192070(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192430
	if (!cr6.eq) goto loc_83192430;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83192198
	sub_83192198(ctx, base);
loc_83192430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83192438"))) PPC_WEAK_FUNC(sub_83192438);
PPC_FUNC_IMPL(__imp__sub_83192438) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8318fdd8
	sub_8318FDD8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831923a8
	sub_831923A8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83192490
	if (!cr6.eq) goto loc_83192490;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x83192490
	if (!cr6.eq) goto loc_83192490;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x83192494
	if (!cr6.eq) goto loc_83192494;
loc_83192490:
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_83192494:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831924a8
	if (!cr6.eq) goto loc_831924A8;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831924ac
	if (cr6.eq) goto loc_831924AC;
loc_831924A8:
	// stb r10,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r10.u8);
loc_831924AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8318fde8
	sub_8318FDE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831924C0"))) PPC_WEAK_FUNC(sub_831924C0);
PPC_FUNC_IMPL(__imp__sub_831924C0) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31974
	r11.s64 = -2095448064;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,3504
	ctx.r4.s64 = r11.s64 + 3504;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bl 0x83192960
	sub_83192960(ctx, base);
	// lis r11,-31974
	r11.s64 = -2095448064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-864
	ctx.r4.s64 = r11.s64 + -864;
	// bl 0x83192968
	sub_83192968(ctx, base);
	// lis r11,-31974
	r11.s64 = -2095448064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-704
	ctx.r4.s64 = r11.s64 + -704;
	// bl 0x83192970
	sub_83192970(ctx, base);
	// lis r11,-31974
	r11.s64 = -2095448064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,48
	ctx.r4.s64 = r11.s64 + 48;
	// bl 0x83192980
	sub_83192980(ctx, base);
	// lis r11,-31974
	r11.s64 = -2095448064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-312
	ctx.r4.s64 = r11.s64 + -312;
	// bl 0x83192990
	sub_83192990(ctx, base);
	// lis r11,-31974
	r11.s64 = -2095448064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,920
	ctx.r4.s64 = r11.s64 + 920;
	// bl 0x831929a0
	sub_831929A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192e90
	sub_83192E90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83192558"))) PPC_WEAK_FUNC(sub_83192558);
PPC_FUNC_IMPL(__imp__sub_83192558) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r7,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r7.u32);
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// b 0x83193580
	sub_83193580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83192570"))) PPC_WEAK_FUNC(sub_83192570);
PPC_FUNC_IMPL(__imp__sub_83192570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192598"))) PPC_WEAK_FUNC(sub_83192598);
PPC_FUNC_IMPL(__imp__sub_83192598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
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
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// bgt cr6,0x831926dc
	if (cr6.gt) goto loc_831926DC;
	// beq cr6,0x83192730
	if (cr6.eq) goto loc_83192730;
	// addi r11,r11,-17
	r11.s64 = r11.s64 + -17;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bgt cr6,0x8319271c
	if (cr6.gt) goto loc_8319271C;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,9688
	r12.s64 = r12.s64 + 9688;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83192730;
	case 1:
		goto loc_8319271C;
	case 2:
		goto loc_8319271C;
	case 3:
		goto loc_8319271C;
	case 4:
		goto loc_8319271C;
	case 5:
		goto loc_8319271C;
	case 6:
		goto loc_8319271C;
	case 7:
		goto loc_8319271C;
	case 8:
		goto loc_8319271C;
	case 9:
		goto loc_8319271C;
	case 10:
		goto loc_8319271C;
	case 11:
		goto loc_8319271C;
	case 12:
		goto loc_8319271C;
	case 13:
		goto loc_8319271C;
	case 14:
		goto loc_8319271C;
	case 15:
		goto loc_8319271C;
	case 16:
		goto loc_831926F8;
	case 17:
		goto loc_8319271C;
	case 18:
		goto loc_8319271C;
	case 19:
		goto loc_8319271C;
	case 20:
		goto loc_8319271C;
	case 21:
		goto loc_8319271C;
	case 22:
		goto loc_8319271C;
	case 23:
		goto loc_8319271C;
	case 24:
		goto loc_8319271C;
	case 25:
		goto loc_8319271C;
	case 26:
		goto loc_8319271C;
	case 27:
		goto loc_8319271C;
	case 28:
		goto loc_8319271C;
	case 29:
		goto loc_8319271C;
	case 30:
		goto loc_8319271C;
	case 31:
		goto loc_8319271C;
	case 32:
		goto loc_83192730;
	case 33:
		goto loc_8319271C;
	case 34:
		goto loc_8319271C;
	case 35:
		goto loc_8319271C;
	case 36:
		goto loc_8319271C;
	case 37:
		goto loc_8319271C;
	case 38:
		goto loc_8319271C;
	case 39:
		goto loc_8319271C;
	case 40:
		goto loc_8319271C;
	case 41:
		goto loc_8319271C;
	case 42:
		goto loc_8319271C;
	case 43:
		goto loc_8319271C;
	case 44:
		goto loc_8319271C;
	case 45:
		goto loc_8319271C;
	case 46:
		goto loc_8319271C;
	case 47:
		goto loc_8319271C;
	case 48:
		goto loc_83192730;
	case 49:
		goto loc_8319271C;
	case 50:
		goto loc_8319271C;
	case 51:
		goto loc_8319271C;
	case 52:
		goto loc_8319271C;
	case 53:
		goto loc_8319271C;
	case 54:
		goto loc_8319271C;
	case 55:
		goto loc_8319271C;
	case 56:
		goto loc_8319271C;
	case 57:
		goto loc_8319271C;
	case 58:
		goto loc_8319271C;
	case 59:
		goto loc_8319271C;
	case 60:
		goto loc_8319271C;
	case 61:
		goto loc_8319271C;
	case 62:
		goto loc_8319271C;
	case 63:
		goto loc_8319271C;
	case 64:
		goto loc_83192730;
	default:
		__builtin_unreachable();
	}
	// lwz r24,10032(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10032);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,9976(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 9976);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10032(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10032);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10032(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10032);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10012(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10012);
	// lwz r24,10032(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10032);
loc_831926DC:
	// cmpwi cr6,r11,257
	cr6.compare<int32_t>(r11.s32, 257, xer);
	// bgt cr6,0x8319270c
	if (cr6.gt) goto loc_8319270C;
	// beq cr6,0x831926f8
	if (cr6.eq) goto loc_831926F8;
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(r11.s32, 113, xer);
	// beq cr6,0x83192730
	if (cr6.eq) goto loc_83192730;
	// cmpwi cr6,r11,241
	cr6.compare<int32_t>(r11.s32, 241, xer);
	// b 0x83192718
	goto loc_83192718;
loc_831926F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8319270C:
	// cmpwi cr6,r11,273
	cr6.compare<int32_t>(r11.s32, 273, xer);
	// beq cr6,0x83192730
	if (cr6.eq) goto loc_83192730;
	// cmpwi cr6,r11,4097
	cr6.compare<int32_t>(r11.s32, 4097, xer);
loc_83192718:
	// beq cr6,0x83192730
	if (cr6.eq) goto loc_83192730;
loc_8319271C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-13232
	ctx.r5.s64 = r11.s64 + -13232;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83193230
	sub_83193230(ctx, base);
loc_83192730:
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

__attribute__((alias("__imp__sub_83192748"))) PPC_WEAK_FUNC(sub_83192748);
PPC_FUNC_IMPL(__imp__sub_83192748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(r11.s32, 81, xer);
	// bne cr6,0x8319275c
	if (!cr6.eq) goto loc_8319275C;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8319275C:
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x83192774
	if (cr6.eq) goto loc_83192774;
	// lwz r11,148(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// li r3,4
	ctx.r3.s64 = 4;
	// cmpwi cr6,r11,81
	cr6.compare<int32_t>(r11.s32, 81, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_83192774:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192780"))) PPC_WEAK_FUNC(sub_83192780);
PPC_FUNC_IMPL(__imp__sub_83192780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bne cr6,0x831927b8
	if (!cr6.eq) goto loc_831927B8;
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
loc_831927B8:
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bne cr6,0x8319284c
	if (!cr6.eq) goto loc_8319284C;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bgt cr6,0x8319284c
	if (cr6.gt) goto loc_8319284C;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,10212
	r12.s64 = r12.s64 + 10212;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83192848;
	case 1:
		goto loc_83192838;
	case 2:
		goto loc_8319284C;
	case 3:
		goto loc_83192848;
	case 4:
		goto loc_83192848;
	case 5:
		goto loc_8319284C;
	case 6:
		goto loc_8319284C;
	case 7:
		goto loc_8319284C;
	case 8:
		goto loc_8319284C;
	case 9:
		goto loc_8319284C;
	case 10:
		goto loc_8319284C;
	case 11:
		goto loc_8319284C;
	case 12:
		goto loc_8319284C;
	case 13:
		goto loc_8319284C;
	case 14:
		goto loc_8319284C;
	case 15:
		goto loc_8319284C;
	case 16:
		goto loc_8319284C;
	case 17:
		goto loc_8319284C;
	case 18:
		goto loc_8319284C;
	case 19:
		goto loc_8319284C;
	case 20:
		goto loc_83192848;
	default:
		__builtin_unreachable();
	}
	// lwz r24,10312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10312);
	// lwz r24,10296(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10296);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10312);
	// lwz r24,10312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10312);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10316(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10316);
	// lwz r24,10312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 10312);
loc_83192838:
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831a0fd8
	sub_831A0FD8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8319284c
	if (cr6.eq) goto loc_8319284C;
loc_83192848:
	// li r31,0
	r31.s64 = 0;
loc_8319284C:
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

__attribute__((alias("__imp__sub_83192868"))) PPC_WEAK_FUNC(sub_83192868);
PPC_FUNC_IMPL(__imp__sub_83192868) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x83194178
	sub_83194178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83192878"))) PPC_WEAK_FUNC(sub_83192878);
PPC_FUNC_IMPL(__imp__sub_83192878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83192888:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x83192888
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83192888;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// subfic r9,r3,-16
	xer.ca = ctx.r3.u32 <= 4294967280;
	ctx.r9.s64 = -16 - ctx.r3.s64;
	// li r10,220
	ctx.r10.s64 = 220;
	// lfs f13,-22120(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13184);
	f0.f64 = double(temp.f32);
loc_831928B0:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f12,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f12.u64);
	// lbz r8,-1(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + -1);
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x831928b0
	if (!cr6.eq) goto loc_831928B0;
	// addi r11,r3,236
	r11.s64 = ctx.r3.s64 + 236;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r10,20
	ctx.r10.s64 = 20;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_831928FC:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x831928fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831928FC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192910"))) PPC_WEAK_FUNC(sub_83192910);
PPC_FUNC_IMPL(__imp__sub_83192910) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x831a0f20
	sub_831A0F20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83192920"))) PPC_WEAK_FUNC(sub_83192920);
PPC_FUNC_IMPL(__imp__sub_83192920) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x831a0f78
	sub_831A0F78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83192930"))) PPC_WEAK_FUNC(sub_83192930);
PPC_FUNC_IMPL(__imp__sub_83192930) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r4,76(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x831a0fa8
	sub_831A0FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83192940"))) PPC_WEAK_FUNC(sub_83192940);
PPC_FUNC_IMPL(__imp__sub_83192940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83192958"))) PPC_WEAK_FUNC(sub_83192958);
PPC_FUNC_IMPL(__imp__sub_83192958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192960"))) PPC_WEAK_FUNC(sub_83192960);
PPC_FUNC_IMPL(__imp__sub_83192960) {
	PPC_FUNC_PROLOGUE();
	// stw r4,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192968"))) PPC_WEAK_FUNC(sub_83192968);
PPC_FUNC_IMPL(__imp__sub_83192968) {
	PPC_FUNC_PROLOGUE();
	// stw r4,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192970"))) PPC_WEAK_FUNC(sub_83192970);
PPC_FUNC_IMPL(__imp__sub_83192970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192980"))) PPC_WEAK_FUNC(sub_83192980);
PPC_FUNC_IMPL(__imp__sub_83192980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192990"))) PPC_WEAK_FUNC(sub_83192990);
PPC_FUNC_IMPL(__imp__sub_83192990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r4,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831929A0"))) PPC_WEAK_FUNC(sub_831929A0);
PPC_FUNC_IMPL(__imp__sub_831929A0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831929A8"))) PPC_WEAK_FUNC(sub_831929A8);
PPC_FUNC_IMPL(__imp__sub_831929A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83192a4c
	if (cr6.eq) goto loc_83192A4C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x83192a4c
	if (cr6.eq) goto loc_83192A4C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x831929d0
	if (cr6.eq) goto loc_831929D0;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r5,r11,-13180
	ctx.r5.s64 = r11.s64 + -13180;
	// b 0x83193230
	sub_83193230(ctx, base);
	return;
loc_831929D0:
	// li r11,3
	r11.s64 = 3;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, r11.u32);
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, r11.u32);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, r11.u32);
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, r11.u32);
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, r11.u32);
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, r11.u32);
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r11.u32);
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, r11.u32);
	// blr 
	return;
loc_83192A4C:
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83192A78"))) PPC_WEAK_FUNC(sub_83192A78);
PPC_FUNC_IMPL(__imp__sub_83192A78) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x831929a8
	sub_831929A8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83192b38
	if (!cr6.gt) goto loc_83192B38;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x83192b4c
	if (!cr6.gt) goto loc_83192B4C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x83192b38
	if (!cr6.eq) goto loc_83192B38;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r10.u32);
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bne cr6,0x83192b30
	if (!cr6.eq) goto loc_83192B30;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r5,r11,-13052
	ctx.r5.s64 = r11.s64 + -13052;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// b 0x83192b40
	goto loc_83192B40;
loc_83192B30:
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// b 0x83192b4c
	goto loc_83192B4C;
loc_83192B38:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r5,r11,-13120
	ctx.r5.s64 = r11.s64 + -13120;
loc_83192B40:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83193230
	sub_83193230(ctx, base);
loc_83192B4C:
	// bl 0x83193278
	sub_83193278(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83192b60
	if (!cr6.eq) goto loc_83192B60;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// b 0x83192b64
	goto loc_83192B64;
loc_83192B60:
	// li r11,0
	r11.s64 = 0;
loc_83192B64:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83192b88
	if (cr6.eq) goto loc_83192B88;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83192B88:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83192B90"))) PPC_WEAK_FUNC(sub_83192B90);
PPC_FUNC_IMPL(__imp__sub_83192B90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r7,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r31,r11,r6
	r31.u64 = r11.u64 + ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x83192598
	sub_83192598(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83192bd0
	if (!cr6.eq) goto loc_83192BD0;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
loc_83192BD0:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83192c04
	if (!cr6.eq) goto loc_83192C04;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,68(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// addi r5,r11,-12988
	ctx.r5.s64 = r11.s64 + -12988;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83193230
	sub_83193230(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192C04:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83192C10"))) PPC_WEAK_FUNC(sub_83192C10);
PPC_FUNC_IMPL(__imp__sub_83192C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x83192878
	sub_83192878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83192C18"))) PPC_WEAK_FUNC(sub_83192C18);
PPC_FUNC_IMPL(__imp__sub_83192C18) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83192C40:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x83192c40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83192C40;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831929a8
	sub_831929A8(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x83192c6c
	if (!cr6.eq) goto loc_83192C6C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// b 0x83192c70
	goto loc_83192C70;
loc_83192C6C:
	// li r11,0
	r11.s64 = 0;
loc_83192C70:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83193550
	sub_83193550(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83192c94
	if (!cr6.eq) goto loc_83192C94;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83192570
	sub_83192570(ctx, base);
loc_83192C94:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83192cb4
	if (cr6.eq) goto loc_83192CB4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83192CB4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83192CC0"))) PPC_WEAK_FUNC(sub_83192CC0);
PPC_FUNC_IMPL(__imp__sub_83192CC0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x83192c18
	sub_83192C18(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192a78
	sub_83192A78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83192CF8"))) PPC_WEAK_FUNC(sub_83192CF8);
PPC_FUNC_IMPL(__imp__sub_83192CF8) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x83192558
	sub_83192558(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192b90
	sub_83192B90(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83192D50"))) PPC_WEAK_FUNC(sub_83192D50);
PPC_FUNC_IMPL(__imp__sub_83192D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x83192780
	sub_83192780(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83192e80
	if (!cr6.eq) goto loc_83192E80;
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bgt cr6,0x83192e6c
	if (cr6.gt) goto loc_83192E6C;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,11680
	r12.s64 = r12.s64 + 11680;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83192E58;
	case 1:
		goto loc_83192E08;
	case 2:
		goto loc_83192E6C;
	case 3:
		goto loc_83192E1C;
	case 4:
		goto loc_83192E30;
	case 5:
		goto loc_83192E6C;
	case 6:
		goto loc_83192E6C;
	case 7:
		goto loc_83192E6C;
	case 8:
		goto loc_83192E6C;
	case 9:
		goto loc_83192E6C;
	case 10:
		goto loc_83192DF4;
	case 11:
		goto loc_83192E6C;
	case 12:
		goto loc_83192DF4;
	case 13:
		goto loc_83192E6C;
	case 14:
		goto loc_83192E6C;
	case 15:
		goto loc_83192E6C;
	case 16:
		goto loc_83192E6C;
	case 17:
		goto loc_83192E6C;
	case 18:
		goto loc_83192E6C;
	case 19:
		goto loc_83192E6C;
	case 20:
		goto loc_83192E44;
	default:
		__builtin_unreachable();
	}
	// lwz r24,11864(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11864);
	// lwz r24,11784(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11784);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11804(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11804);
	// lwz r24,11824(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11824);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11764(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11764);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11764(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11764);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11884(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11884);
	// lwz r24,11844(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 11844);
loc_83192DF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192868
	sub_83192868(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192E08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192910
	sub_83192910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192E1C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192920
	sub_83192920(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192E30:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192930
	sub_83192930(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192E44:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192940
	sub_83192940(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192E58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192c10
	sub_83192C10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192E6C:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-12924
	ctx.r5.s64 = r11.s64 + -12924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83193230
	sub_83193230(ctx, base);
loc_83192E80:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83192E88"))) PPC_WEAK_FUNC(sub_83192E88);
PPC_FUNC_IMPL(__imp__sub_83192E88) {
	PPC_FUNC_PROLOGUE();
	// b 0x83192d50
	sub_83192D50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83192E90"))) PPC_WEAK_FUNC(sub_83192E90);
PPC_FUNC_IMPL(__imp__sub_83192E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83192ec8
	if (!cr6.eq) goto loc_83192EC8;
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-12812
	ctx.r4.s64 = r11.s64 + -12812;
	// bl 0x831a1040
	sub_831A1040(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_83192EC8:
	// cmpwi cr6,r3,81
	cr6.compare<int32_t>(ctx.r3.s32, 81, xer);
	// bgt cr6,0x83193000
	if (cr6.gt) goto loc_83193000;
	// beq cr6,0x8319303c
	if (cr6.eq) goto loc_8319303C;
	// addi r11,r3,-17
	r11.s64 = ctx.r3.s64 + -17;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bgt cr6,0x83193018
	if (cr6.gt) goto loc_83193018;
	// lis r12,-31975
	r12.s64 = -2095513600;
	// addi r12,r12,12024
	r12.s64 = r12.s64 + 12024;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83192FBC;
	case 1:
		goto loc_83193018;
	case 2:
		goto loc_83193018;
	case 3:
		goto loc_83193018;
	case 4:
		goto loc_83193018;
	case 5:
		goto loc_83193018;
	case 6:
		goto loc_83193018;
	case 7:
		goto loc_83193018;
	case 8:
		goto loc_83193018;
	case 9:
		goto loc_83193018;
	case 10:
		goto loc_83193018;
	case 11:
		goto loc_83193018;
	case 12:
		goto loc_83193018;
	case 13:
		goto loc_83193018;
	case 14:
		goto loc_83193018;
	case 15:
		goto loc_83193018;
	case 16:
		goto loc_83192FD0;
	case 17:
		goto loc_83193018;
	case 18:
		goto loc_83193018;
	case 19:
		goto loc_83193018;
	case 20:
		goto loc_83193018;
	case 21:
		goto loc_83193018;
	case 22:
		goto loc_83193018;
	case 23:
		goto loc_83193018;
	case 24:
		goto loc_83193018;
	case 25:
		goto loc_83193018;
	case 26:
		goto loc_83193018;
	case 27:
		goto loc_83193018;
	case 28:
		goto loc_83193018;
	case 29:
		goto loc_83193018;
	case 30:
		goto loc_83193018;
	case 31:
		goto loc_83193018;
	case 32:
		goto loc_83192FF8;
	case 33:
		goto loc_83193018;
	case 34:
		goto loc_83193018;
	case 35:
		goto loc_83193018;
	case 36:
		goto loc_83193018;
	case 37:
		goto loc_83193018;
	case 38:
		goto loc_83193018;
	case 39:
		goto loc_83193018;
	case 40:
		goto loc_83193018;
	case 41:
		goto loc_83193018;
	case 42:
		goto loc_83193018;
	case 43:
		goto loc_83193018;
	case 44:
		goto loc_83193018;
	case 45:
		goto loc_83193018;
	case 46:
		goto loc_83193018;
	case 47:
		goto loc_83193018;
	case 48:
		goto loc_8319303C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,12220(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12220);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12240(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12240);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12280(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12280);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12312(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12312);
	// lwz r24,12348(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 12348);
loc_83192FBC:
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83193034
	if (cr6.eq) goto loc_83193034;
loc_83192FC8:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8319305c
	goto loc_8319305C;
loc_83192FD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192e88
	sub_83192E88(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192cc0
	sub_83192CC0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83192FF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x8319304c
	goto loc_8319304C;
loc_83193000:
	// cmpwi cr6,r3,97
	cr6.compare<int32_t>(ctx.r3.s32, 97, xer);
	// beq cr6,0x8319303c
	if (cr6.eq) goto loc_8319303C;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x83192fc8
	if (cr6.eq) goto loc_83192FC8;
	// cmpwi cr6,r3,4097
	cr6.compare<int32_t>(ctx.r3.s32, 4097, xer);
	// beq cr6,0x83193034
	if (cr6.eq) goto loc_83193034;
loc_83193018:
	// lis r11,-32230
	r11.s64 = -2112225280;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-12872
	ctx.r5.s64 = r11.s64 + -12872;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83193230
	sub_83193230(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83193034:
	// li r5,21
	ctx.r5.s64 = 21;
	// b 0x8319304c
	goto loc_8319304C;
loc_8319303C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192748
	sub_83192748(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8319304C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192e88
	sub_83192E88(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_8319305C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83192c18
	sub_83192C18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83193078"))) PPC_WEAK_FUNC(sub_83193078);
PPC_FUNC_IMPL(__imp__sub_83193078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32230
	r11.s64 = -2112225280;
	// addi r3,r11,-12804
	ctx.r3.s64 = r11.s64 + -12804;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193088"))) PPC_WEAK_FUNC(sub_83193088);
PPC_FUNC_IMPL(__imp__sub_83193088) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831930c4
	if (!cr6.gt) goto loc_831930C4;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// bl 0x831a1068
	sub_831A1068(ctx, base);
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lwz r11,-8004(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -8004);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,-8004(r31)
	PPC_STORE_U32(r31.u32 + -8004, r11.u32);
loc_831930C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831930D8"))) PPC_WEAK_FUNC(sub_831930D8);
PPC_FUNC_IMPL(__imp__sub_831930D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r11,r11,-23296
	r11.s64 = r11.s64 + -23296;
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831930F0"))) PPC_WEAK_FUNC(sub_831930F0);
PPC_FUNC_IMPL(__imp__sub_831930F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31930
	r11.s64 = -2092564480;
	// addi r10,r11,-23296
	ctx.r10.s64 = r11.s64 + -23296;
	// li r11,0
	r11.s64 = 0;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x83193128
	if (!cr6.gt) goto loc_83193128;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
loc_8319310C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8319310c
	if (cr6.lt) goto loc_8319310C;
loc_83193128:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83193130"))) PPC_WEAK_FUNC(sub_83193130);
PPC_FUNC_IMPL(__imp__sub_83193130) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,156
	ctx.r5.s64 = 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r30,31
	ctx.r10.s64 = r30.s64 + 31;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r11,r10,1024
	r11.s64 = ctx.r10.s64 + 1024;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// addi r10,r11,1024
	ctx.r10.s64 = r11.s64 + 1024;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// addi r11,r10,1024
	r11.s64 = ctx.r10.s64 + 1024;
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831931B8"))) PPC_WEAK_FUNC(sub_831931B8);
PPC_FUNC_IMPL(__imp__sub_831931B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,8223
	cr6.compare<int32_t>(ctx.r3.s32, 8223, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831931D0"))) PPC_WEAK_FUNC(sub_831931D0);
PPC_FUNC_IMPL(__imp__sub_831931D0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83193218
	if (cr6.eq) goto loc_83193218;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,48(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x83193898
	sub_83193898(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831a0ef8
	sub_831A0EF8(ctx, base);
	// lis r11,-31930
	r11.s64 = -2092564480;
	// lwz r10,-23296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -23296);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,-23296(r11)
	PPC_STORE_U32(r11.u32 + -23296, ctx.r10.u32);
loc_83193218:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

