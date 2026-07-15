#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EB8D88"))) PPC_WEAK_FUNC(sub_82EB8D88);
PPC_FUNC_IMPL(__imp__sub_82EB8D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r3,r11,r4
	ctx.r3.u64 = r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8D98"))) PPC_WEAK_FUNC(sub_82EB8D98);
PPC_FUNC_IMPL(__imp__sub_82EB8D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8DA8"))) PPC_WEAK_FUNC(sub_82EB8DA8);
PPC_FUNC_IMPL(__imp__sub_82EB8DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8DC0"))) PPC_WEAK_FUNC(sub_82EB8DC0);
PPC_FUNC_IMPL(__imp__sub_82EB8DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8DD0"))) PPC_WEAK_FUNC(sub_82EB8DD0);
PPC_FUNC_IMPL(__imp__sub_82EB8DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8DE8"))) PPC_WEAK_FUNC(sub_82EB8DE8);
PPC_FUNC_IMPL(__imp__sub_82EB8DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8DF8"))) PPC_WEAK_FUNC(sub_82EB8DF8);
PPC_FUNC_IMPL(__imp__sub_82EB8DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8E10"))) PPC_WEAK_FUNC(sub_82EB8E10);
PPC_FUNC_IMPL(__imp__sub_82EB8E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8E20"))) PPC_WEAK_FUNC(sub_82EB8E20);
PPC_FUNC_IMPL(__imp__sub_82EB8E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8E28"))) PPC_WEAK_FUNC(sub_82EB8E28);
PPC_FUNC_IMPL(__imp__sub_82EB8E28) {
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
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82eb01e8
	sub_82EB01E8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb8e74
	if (cr6.eq) goto loc_82EB8E74;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82EB8E74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB8E80"))) PPC_WEAK_FUNC(sub_82EB8E80);
PPC_FUNC_IMPL(__imp__sub_82EB8E80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8E90"))) PPC_WEAK_FUNC(sub_82EB8E90);
PPC_FUNC_IMPL(__imp__sub_82EB8E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8EA8"))) PPC_WEAK_FUNC(sub_82EB8EA8);
PPC_FUNC_IMPL(__imp__sub_82EB8EA8) {
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
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82EB8EF8"))) PPC_WEAK_FUNC(sub_82EB8EF8);
PPC_FUNC_IMPL(__imp__sub_82EB8EF8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eb8f3c
	if (!cr6.eq) goto loc_82EB8F3C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EB8F3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8F70"))) PPC_WEAK_FUNC(sub_82EB8F70);
PPC_FUNC_IMPL(__imp__sub_82EB8F70) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eb8fb8
	if (!cr6.eq) goto loc_82EB8FB8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EB8FB8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB8FF0"))) PPC_WEAK_FUNC(sub_82EB8FF0);
PPC_FUNC_IMPL(__imp__sub_82EB8FF0) {
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
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// ble cr6,0x82eb90bc
	if (!cr6.gt) goto loc_82EB90BC;
	// addic. r30,r31,3
	xer.ca = r31.u32 > 4294967292;
	r30.s64 = r31.s64 + 3;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82eb904c
	if (!cr0.gt) goto loc_82EB904C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// blt cr6,0x82eb9040
	if (cr6.lt) goto loc_82EB9040;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82EB9040:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB904C:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r28,r11,r31
	PPC_STORE_U8(r11.u32 + r31.u32, r28.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// beq cr6,0x82eb9088
	if (cr6.eq) goto loc_82EB9088;
	// li r10,47
	ctx.r10.s64 = 47;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82EB9088:
	// lis r10,-31949
	ctx.r10.s64 = -2093809664;
	// li r9,42
	ctx.r9.s64 = 42;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stb r28,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r28.u8);
	// lwz r8,-13036(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13036);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82eb90bc
	if (cr6.eq) goto loc_82EB90BC;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EB90BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831cd6e8
	sub_831CD6E8(ctx, base);
	// rlwinm r11,r3,28,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb9108
	if (!cr6.eq) goto loc_82EB9108;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb90fc
	if (!cr6.eq) goto loc_82EB90FC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB90FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831b0b74
	return;
loc_82EB9108:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831cdc58
	sub_831CDC58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82eb9190
	if (cr6.eq) goto loc_82EB9190;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r31,r10,-15352
	r31.s64 = ctx.r10.s64 + -15352;
	// addi r30,r11,-552
	r30.s64 = r11.s64 + -552;
loc_82EB9130:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb917c
	if (cr6.eq) goto loc_82EB917C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb917c
	if (cr6.eq) goto loc_82EB917C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r10,r11,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eb9178
	if (cr6.eq) goto loc_82EB9178;
	// bl 0x82eb8ef8
	sub_82EB8EF8(ctx, base);
	// b 0x82eb917c
	goto loc_82EB917C;
loc_82EB9178:
	// bl 0x82eb8f70
	sub_82EB8F70(ctx, base);
loc_82EB917C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831cdc00
	sub_831CDC00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eb9130
	if (!cr6.eq) goto loc_82EB9130;
loc_82EB9190:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bd4418
	sub_82BD4418(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb91c4
	if (!cr6.eq) goto loc_82EB91C4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB91C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB91D0"))) PPC_WEAK_FUNC(sub_82EB91D0);
PPC_FUNC_IMPL(__imp__sub_82EB91D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB91D8"))) PPC_WEAK_FUNC(sub_82EB91D8);
PPC_FUNC_IMPL(__imp__sub_82EB91D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB91F8"))) PPC_WEAK_FUNC(sub_82EB91F8);
PPC_FUNC_IMPL(__imp__sub_82EB91F8) {
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
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eb9224
	if (cr6.eq) goto loc_82EB9224;
	// bl 0x82df7df8
	sub_82DF7DF8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82EB9224:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9238"))) PPC_WEAK_FUNC(sub_82EB9238);
PPC_FUNC_IMPL(__imp__sub_82EB9238) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7de0
	sub_82DF7DE0(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// subf r8,r3,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r3.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9298"))) PPC_WEAK_FUNC(sub_82EB9298);
PPC_FUNC_IMPL(__imp__sub_82EB9298) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eb92e4
	if (cr6.eq) goto loc_82EB92E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82df7ea0
	sub_82DF7EA0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eb92d0
	if (!cr6.gt) goto loc_82EB92D0;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eb92e8
	if (!cr6.eq) goto loc_82EB92E8;
loc_82EB92D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB92E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB92E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9300"))) PPC_WEAK_FUNC(sub_82EB9300);
PPC_FUNC_IMPL(__imp__sub_82EB9300) {
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
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eb934c
	if (cr6.eq) goto loc_82EB934C;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82df7eb8
	sub_82DF7EB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eb9338
	if (!cr6.gt) goto loc_82EB9338;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eb9350
	if (!cr6.eq) goto loc_82EB9350;
loc_82EB9338:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB934C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EB9350:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9368"))) PPC_WEAK_FUNC(sub_82EB9368);
PPC_FUNC_IMPL(__imp__sub_82EB9368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,48
	cr6.compare<int32_t>(ctx.r4.s32, 48, xer);
	// blt cr6,0x82eb937c
	if (cr6.lt) goto loc_82EB937C;
	// cmpwi cr6,r4,57
	cr6.compare<int32_t>(ctx.r4.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82eb9380
	if (!cr6.gt) goto loc_82EB9380;
loc_82EB937C:
	// li r11,0
	r11.s64 = 0;
loc_82EB9380:
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9388"))) PPC_WEAK_FUNC(sub_82EB9388);
PPC_FUNC_IMPL(__imp__sub_82EB9388) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9390"))) PPC_WEAK_FUNC(sub_82EB9390);
PPC_FUNC_IMPL(__imp__sub_82EB9390) {
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
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31943
	r31.s64 = -2093416448;
	// lbz r11,31260(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 31260);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eb9454
	if (!cr6.eq) goto loc_82EB9454;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,13
	ctx.r9.s64 = 13;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stb r11,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, r11.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bl 0x831e06a8
	sub_831E06A8(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// li r3,514
	ctx.r3.s64 = 514;
	// bl 0x82df7dc8
	sub_82DF7DC8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eb944c
	if (!cr6.eq) goto loc_82EB944C;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,7840
	ctx.r4.s64 = r11.s64 + 7840;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r5,12824
	ctx.r5.s64 = 840433664;
	// li r8,72
	ctx.r8.s64 = 72;
	// addi r7,r9,7800
	ctx.r7.s64 = ctx.r9.s64 + 7800;
	// lwz r3,30588(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30588);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// ori r5,r5,9720
	ctx.r5.u64 = ctx.r5.u64 | 9720;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82EB944C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,31260(r31)
	PPC_STORE_U8(r31.u32 + 31260, r11.u8);
loc_82EB9454:
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9468"))) PPC_WEAK_FUNC(sub_82EB9468);
PPC_FUNC_IMPL(__imp__sub_82EB9468) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,7884
	ctx.r10.s64 = r11.s64 + 7884;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eb94a0
	if (cr6.eq) goto loc_82EB94A0;
	// bl 0x82df7df8
	sub_82DF7DF8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82EB94A0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB94C8"))) PPC_WEAK_FUNC(sub_82EB94C8);
PPC_FUNC_IMPL(__imp__sub_82EB94C8) {
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2a68
	sub_82EB2A68(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// sth r29,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r29.u16);
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x82eb9518
	if (cr6.lt) goto loc_82EB9518;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82eb951c
	if (!cr6.gt) goto loc_82EB951C;
loc_82EB9518:
	// li r11,0
	r11.s64 = 0;
loc_82EB951C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eb9538
	if (cr6.eq) goto loc_82EB9538;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82df7ed0
	sub_82DF7ED0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x82eb9590
	goto loc_82EB9590;
loc_82EB9538:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,7928
	ctx.r4.s64 = r11.s64 + 7928;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r8,195
	ctx.r8.s64 = 195;
	// addi r7,r9,7800
	ctx.r7.s64 = ctx.r9.s64 + 7800;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,30588(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30588);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82EB9590:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eb95cc
	if (!cr6.eq) goto loc_82EB95CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7de0
	sub_82DF7DE0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eb95f4
	if (cr6.eq) goto loc_82EB95F4;
loc_82EB95CC:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82df7e40
	sub_82DF7E40(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eb9600
	if (!cr6.eq) goto loc_82EB9600;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB95F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b7c
	return;
loc_82EB9600:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB9610"))) PPC_WEAK_FUNC(sub_82EB9610);
PPC_FUNC_IMPL(__imp__sub_82EB9610) {
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
	// bl 0x82eb61d8
	sub_82EB61D8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// addi r11,r11,7884
	r11.s64 = r11.s64 + 7884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x82eb9670
	if (!cr6.eq) goto loc_82EB9670;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7de0
	sub_82DF7DE0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82EB9670:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9688"))) PPC_WEAK_FUNC(sub_82EB9688);
PPC_FUNC_IMPL(__imp__sub_82EB9688) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82df7de0
	sub_82DF7DE0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x82eb9728
	if (cr6.eq) goto loc_82EB9728;
	// li r11,2
	r11.s64 = 2;
	// sth r26,162(r1)
	PPC_STORE_U16(ctx.r1.u32 + 162, r26.u16);
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, r11.u16);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r29.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,4
	ctx.r5.s64 = 4;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x82df7e08
	sub_82DF7E08(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82df7e28
	sub_82DF7E28(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eb9734
	if (!cr6.eq) goto loc_82EB9734;
loc_82EB9714:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EB9728:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831b0b70
	return;
loc_82EB9734:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82df7e58
	sub_82DF7E58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eb9714
	if (cr6.eq) goto loc_82EB9714;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,20
	r27.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stb r29,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r29.u8);
loc_82EB9770:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831e06b8
	sub_831E06B8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb9770
	if (cr6.eq) goto loc_82EB9770;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82eb97bc
	if (!cr6.eq) goto loc_82EB97BC;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
loc_82EB978C:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb97ec
	if (cr6.eq) goto loc_82EB97EC;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lbz r8,103(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 103);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 102);
	// addi r4,r10,7996
	ctx.r4.s64 = ctx.r10.s64 + 7996;
	// lbz r6,101(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// lbz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb9844
	goto loc_82EB9844;
loc_82EB97BC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb978c
	if (cr6.eq) goto loc_82EB978C;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lbz r8,99(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 99);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r7,98(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// addi r4,r10,7996
	ctx.r4.s64 = ctx.r10.s64 + 7996;
	// lbz r6,97(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// b 0x82eb9844
	goto loc_82EB9844;
loc_82EB97EC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r11,16256
	r30.s64 = r11.s64 + 16256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82eb9830
	if (!cr6.lt) goto loc_82EB9830;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eb9820
	if (cr6.lt) goto loc_82EB9820;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EB9820:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EB9830:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
loc_82EB9844:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r4,r11,7976
	ctx.r4.s64 = r11.s64 + 7976;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r31,r10,7968
	r31.s64 = ctx.r10.s64 + 7968;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82eae240
	sub_82EAE240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82eadc38
	sub_82EADC38(ctx, base);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// li r8,364
	ctx.r8.s64 = 364;
	// addi r7,r7,7800
	ctx.r7.s64 = ctx.r7.s64 + 7800;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r3,30588(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30588);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eb98e4
	if (!cr6.eq) goto loc_82EB98E4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB98E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EB98F0"))) PPC_WEAK_FUNC(sub_82EB98F0);
PPC_FUNC_IMPL(__imp__sub_82EB98F0) {
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
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82eb9a40
	if (cr6.eq) goto loc_82EB9A40;
	// li r31,1
	r31.s64 = 1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r11.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r31.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82df7e80
	sub_82DF7E80(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eb9a40
	if (!cr6.gt) goto loc_82EB9A40;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82df7ed8
	sub_82DF7ED8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb9a40
	if (cr6.eq) goto loc_82EB9A40;
	// li r11,16
	r11.s64 = 16;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82df7e68
	sub_82DF7E68(ctx, base);
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,8008
	ctx.r4.s64 = ctx.r10.s64 + 8008;
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r6,130(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 130);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eae240
	sub_82EAE240(ctx, base);
	// lis r5,-31943
	ctx.r5.s64 = -2093416448;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// li r8,404
	ctx.r8.s64 = 404;
	// addi r7,r4,7800
	ctx.r7.s64 = ctx.r4.s64 + 7800;
	// addi r6,r1,688
	ctx.r6.s64 = ctx.r1.s64 + 688;
	// lwz r3,30588(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 30588);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// bne cr6,0x82eb9a4c
	if (!cr6.eq) goto loc_82EB9A4C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eb9a40
	if (!cr6.eq) goto loc_82EB9A40;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB9A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831b0b74
	return;
loc_82EB9A4C:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82df7e08
	sub_82DF7E08(ctx, base);
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,36
	r11.s64 = 36;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
	// bl 0x82eb61d8
	sub_82EB61D8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r9,r10,7884
	ctx.r9.s64 = ctx.r10.s64 + 7884;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82eb9abc
	if (!cr6.eq) goto loc_82EB9ABC;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB9ABC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EB9AC8"))) PPC_WEAK_FUNC(sub_82EB9AC8);
PPC_FUNC_IMPL(__imp__sub_82EB9AC8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,7884
	ctx.r10.s64 = r11.s64 + 7884;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82eb9b08
	if (cr6.eq) goto loc_82EB9B08;
	// bl 0x82df7df8
	sub_82DF7DF8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82EB9B08:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82eb9b44
	if (cr6.eq) goto loc_82EB9B44;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB9B44:
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

__attribute__((alias("__imp__sub_82EB9B60"))) PPC_WEAK_FUNC(sub_82EB9B60);
PPC_FUNC_IMPL(__imp__sub_82EB9B60) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eb9bac
	if (cr6.eq) goto loc_82EB9BAC;
loc_82EB9B88:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82eb9b88
	if (!cr6.eq) goto loc_82EB9B88;
loc_82EB9BAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9BC8"))) PPC_WEAK_FUNC(sub_82EB9BC8);
PPC_FUNC_IMPL(__imp__sub_82EB9BC8) {
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r31,-8448(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -8448);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31932
	ctx.r9.s64 = -2092695552;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-8444(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8444);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-31943
	ctx.r6.s64 = -2093416448;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,31252(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 31252);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB9C50"))) PPC_WEAK_FUNC(sub_82EB9C50);
PPC_FUNC_IMPL(__imp__sub_82EB9C50) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,31252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 31252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb9cc0
	if (cr6.eq) goto loc_82EB9CC0;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r11,-8448(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8448);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb9cc0
	if (cr6.eq) goto loc_82EB9CC0;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r11,-8444(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eb9cc0
	if (cr6.eq) goto loc_82EB9CC0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82eb9cd8
	sub_82EB9CD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EB9CC0:
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

__attribute__((alias("__imp__sub_82EB9CD8"))) PPC_WEAK_FUNC(sub_82EB9CD8);
PPC_FUNC_IMPL(__imp__sub_82EB9CD8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// addi r9,r11,8068
	ctx.r9.s64 = r11.s64 + 8068;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// lwz r3,-8448(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8448);
	// addi r4,r7,31268
	ctx.r4.s64 = ctx.r7.s64 + 31268;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,-31932
	ctx.r4.s64 = -2092695552;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r30,r3,-18112
	r30.s64 = ctx.r3.s64 + -18112;
	// lwz r3,-8444(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + -8444);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82eb9b60
	sub_82EB9B60(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,-16600
	ctx.r5.s64 = ctx.r10.s64 + -16600;
	// lwz r3,31252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 31252);
	// bl 0x82eb84e0
	sub_82EB84E0(ctx, base);
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

__attribute__((alias("__imp__sub_82EB9D70"))) PPC_WEAK_FUNC(sub_82EB9D70);
PPC_FUNC_IMPL(__imp__sub_82EB9D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r3,-8444(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9D80"))) PPC_WEAK_FUNC(sub_82EB9D80);
PPC_FUNC_IMPL(__imp__sub_82EB9D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r3,-8448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -8448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9D90"))) PPC_WEAK_FUNC(sub_82EB9D90);
PPC_FUNC_IMPL(__imp__sub_82EB9D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,31252(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 31252);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9DA0"))) PPC_WEAK_FUNC(sub_82EB9DA0);
PPC_FUNC_IMPL(__imp__sub_82EB9DA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82eb9de8
	if (cr6.eq) goto loc_82EB9DE8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EB9DE8:
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

__attribute__((alias("__imp__sub_82EB9E00"))) PPC_WEAK_FUNC(sub_82EB9E00);
PPC_FUNC_IMPL(__imp__sub_82EB9E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9E08"))) PPC_WEAK_FUNC(sub_82EB9E08);
PPC_FUNC_IMPL(__imp__sub_82EB9E08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9E10"))) PPC_WEAK_FUNC(sub_82EB9E10);
PPC_FUNC_IMPL(__imp__sub_82EB9E10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9E18"))) PPC_WEAK_FUNC(sub_82EB9E18);
PPC_FUNC_IMPL(__imp__sub_82EB9E18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9E20"))) PPC_WEAK_FUNC(sub_82EB9E20);
PPC_FUNC_IMPL(__imp__sub_82EB9E20) {
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
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
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

__attribute__((alias("__imp__sub_82EB9E48"))) PPC_WEAK_FUNC(sub_82EB9E48);
PPC_FUNC_IMPL(__imp__sub_82EB9E48) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,30300
	ctx.r3.s64 = r11.s64 + 30300;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb9ef0
	if (cr6.eq) goto loc_82EB9EF0;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r3,r11,30252
	ctx.r3.s64 = r11.s64 + 30252;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb9ef0
	if (cr6.eq) goto loc_82EB9EF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eb9ef0
	if (!cr6.eq) goto loc_82EB9EF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
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
loc_82EB9EF0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EB9F00"))) PPC_WEAK_FUNC(sub_82EB9F00);
PPC_FUNC_IMPL(__imp__sub_82EB9F00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82EB9F14:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb9f14
	if (!cr6.eq) goto loc_82EB9F14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9F30"))) PPC_WEAK_FUNC(sub_82EB9F30);
PPC_FUNC_IMPL(__imp__sub_82EB9F30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82EB9F44:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb9f44
	if (!cr6.eq) goto loc_82EB9F44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB9F60"))) PPC_WEAK_FUNC(sub_82EB9F60);
PPC_FUNC_IMPL(__imp__sub_82EB9F60) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addic. r31,r11,-1
	xer.ca = r11.u32 > 0;
	r31.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82eb9fb8
	if (cr0.lt) goto loc_82EB9FB8;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EB9F84:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eb9fc4
	if (cr6.eq) goto loc_82EB9FC4;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x82eb9f84
	if (!cr0.lt) goto loc_82EB9F84;
loc_82EB9FB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EB9FC4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EB9FD8"))) PPC_WEAK_FUNC(sub_82EB9FD8);
PPC_FUNC_IMPL(__imp__sub_82EB9FD8) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,9180
	ctx.r8.s64 = ctx.r9.s64 + 9180;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// sth r7,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r7.u16);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// addi r5,r6,9228
	ctx.r5.s64 = ctx.r6.s64 + 9228;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82eba048
	if (cr6.eq) goto loc_82EBA048;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ebb620
	sub_82EBB620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82EBA048:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA060"))) PPC_WEAK_FUNC(sub_82EBA060);
PPC_FUNC_IMPL(__imp__sub_82EBA060) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83205020
	sub_83205020(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eba18c
	if (!cr6.eq) goto loc_82EBA18C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82eba0d8
	if (!cr6.eq) goto loc_82EBA0D8;
loc_82EBA0CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82EBA0D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eba128
	if (cr6.eq) goto loc_82EBA128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82eba060
	sub_82EBA060(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82eba0cc
	if (cr6.eq) goto loc_82EBA0CC;
loc_82EBA128:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eba18c
	if (!cr6.gt) goto loc_82EBA18C;
loc_82EBA13C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb01d0
	sub_82EB01D0(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eba178
	if (cr6.eq) goto loc_82EBA178;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x82eba060
	sub_82EBA060(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82eba0cc
	if (cr6.eq) goto loc_82EBA0CC;
loc_82EBA178:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x82eba13c
	if (cr6.lt) goto loc_82EBA13C;
loc_82EBA18C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EBA198"))) PPC_WEAK_FUNC(sub_82EBA198);
PPC_FUNC_IMPL(__imp__sub_82EBA198) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r11,8240
	r11.s64 = r11.s64 + 8240;
	// addi r9,r10,9276
	ctx.r9.s64 = ctx.r10.s64 + 9276;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r8,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eba1f0
	if (cr6.eq) goto loc_82EBA1F0;
loc_82EBA1DC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eba1dc
	if (!cr6.eq) goto loc_82EBA1DC;
loc_82EBA1F0:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eba214
	if (cr6.eq) goto loc_82EBA214;
loc_82EBA200:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82eba200
	if (!cr6.eq) goto loc_82EBA200;
loc_82EBA214:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// oris r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 2147483648;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
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

__attribute__((alias("__imp__sub_82EBA258"))) PPC_WEAK_FUNC(sub_82EBA258);
PPC_FUNC_IMPL(__imp__sub_82EBA258) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r31,r29,20
	r31.s64 = r29.s64 + 20;
	// addi r10,r11,9276
	ctx.r10.s64 = r11.s64 + 9276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eba310
	if (cr6.eq) goto loc_82EBA310;
loc_82EBA2A0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eba2e4
	if (cr6.eq) goto loc_82EBA2E4;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82eba2e4
	if (!cr6.eq) goto loc_82EBA2E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBA2E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83204e88
	sub_83204E88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82eba2a0
	if (!cr6.eq) goto loc_82EBA2A0;
loc_82EBA310:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x832052c8
	sub_832052C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba34c
	if (!cr6.eq) goto loc_82EBA34C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA34C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EBA360"))) PPC_WEAK_FUNC(sub_82EBA360);
PPC_FUNC_IMPL(__imp__sub_82EBA360) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eba39c
	if (!cr6.eq) goto loc_82EBA39C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBA39C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA3D0"))) PPC_WEAK_FUNC(sub_82EBA3D0);
PPC_FUNC_IMPL(__imp__sub_82EBA3D0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eba810
	if (cr6.eq) goto loc_82EBA810;
	// lwz r31,12(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// li r22,0
	r22.s64 = 0;
	// lis r20,-32768
	r20.s64 = -2147483648;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r22.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r20.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r22.u32);
	// ble cr6,0x82eba450
	if (!cr6.gt) goto loc_82EBA450;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82EBA43C:
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82eba43c
	if (!cr0.eq) goto loc_82EBA43C;
loc_82EBA450:
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// mr r31,r22
	r31.u64 = r22.u64;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r20.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r20.u32);
	// ble cr6,0x82eba6b4
	if (!cr6.gt) goto loc_82EBA6B4;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82EBA480:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eba4f8
	if (!cr6.eq) goto loc_82EBA4F8;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eba744
	if (cr6.eq) goto loc_82EBA744;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eba4d8
	if (!cr6.eq) goto loc_82EBA4D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBA4D8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x82eba538
	goto loc_82EBA538;
loc_82EBA4F8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eba518
	if (!cr6.eq) goto loc_82EBA518;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBA518:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
loc_82EBA538:
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82eba480
	if (cr6.lt) goto loc_82EBA480;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eba6b4
	if (cr6.eq) goto loc_82EBA6B4;
loc_82EBA554:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// addic. r24,r11,-1
	xer.ca = r11.u32 > 0;
	r24.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r20.u32);
	// blt 0x82eba654
	if (cr0.lt) goto loc_82EBA654;
	// rlwinm r27,r24,2,0,29
	r27.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EBA570:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r28,r27,r11
	r28.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// ble cr6,0x82eba648
	if (!cr6.gt) goto loc_82EBA648;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_82EBA58C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwzx r31,r29,r11
	r31.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eba634
	if (!cr6.eq) goto loc_82EBA634;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stwx r31,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r31.u32);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eba81c
	if (cr6.eq) goto loc_82EBA81C;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eba5fc
	if (!cr6.eq) goto loc_82EBA5FC;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBA5FC:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r28.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r4,r27,r10
	PPC_STORE_U32(r27.u32 + ctx.r10.u32, ctx.r4.u32);
loc_82EBA634:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r10
	cr6.compare<int32_t>(r26.s32, ctx.r10.s32, xer);
	// blt cr6,0x82eba58c
	if (cr6.lt) goto loc_82EBA58C;
loc_82EBA648:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// bge 0x82eba570
	if (!cr0.lt) goto loc_82EBA570;
loc_82EBA654:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bne cr6,0x82eba6ac
	if (!cr6.eq) goto loc_82EBA6AC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EBA6AC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba554
	if (!cr6.eq) goto loc_82EBA554;
loc_82EBA6B4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba6e0
	if (!cr6.eq) goto loc_82EBA6E0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA6E0:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba70c
	if (!cr6.eq) goto loc_82EBA70C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA70C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba738
	if (!cr6.eq) goto loc_82EBA738;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA738:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b58
	return;
loc_82EBA744:
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r30,8(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82eba76c
	if (!cr6.eq) goto loc_82EBA76C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBA76C:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r6,r10,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r23)
	PPC_STORE_U32(r23.u32 + 4, ctx.r7.u32);
	// bne cr6,0x82eba7b8
	if (!cr6.eq) goto loc_82EBA7B8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA7B8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba7e4
	if (!cr6.eq) goto loc_82EBA7E4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA7E4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba810
	if (!cr6.eq) goto loc_82EBA810;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA810:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b58
	return;
loc_82EBA81C:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82eba880
	if (cr6.eq) goto loc_82EBA880;
loc_82EBA828:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r30,8(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82eba850
	if (!cr6.eq) goto loc_82EBA850;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBA850:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,4(r23)
	PPC_STORE_U32(r23.u32 + 4, ctx.r6.u32);
	// lwzx r11,r31,r7
	r11.u64 = PPC_LOAD_U32(r31.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82eba828
	if (!cr6.eq) goto loc_82EBA828;
loc_82EBA880:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba8ac
	if (!cr6.eq) goto loc_82EBA8AC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA8AC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba8d8
	if (!cr6.eq) goto loc_82EBA8D8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA8D8:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba904
	if (!cr6.eq) goto loc_82EBA904;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBA904:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eba810
	if (!cr6.eq) goto loc_82EBA810;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82EBA940"))) PPC_WEAK_FUNC(sub_82EBA940);
PPC_FUNC_IMPL(__imp__sub_82EBA940) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,36
	ctx.r4.s64 = 36;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,36
	ctx.r9.s64 = 36;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82eba198
	sub_82EBA198(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBA980"))) PPC_WEAK_FUNC(sub_82EBA980);
PPC_FUNC_IMPL(__imp__sub_82EBA980) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82eba9ac
	if (cr6.eq) goto loc_82EBA9AC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82eba9b8
	goto loc_82EBA9B8;
loc_82EBA9AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82EBA9B8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r9,-25016
	ctx.r6.s64 = ctx.r9.s64 + -25016;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eba060
	sub_82EBA060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83205378
	sub_83205378(ctx, base);
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

__attribute__((alias("__imp__sub_82EBAA18"))) PPC_WEAK_FUNC(sub_82EBAA18);
PPC_FUNC_IMPL(__imp__sub_82EBAA18) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r26,r30,20
	r26.s64 = r30.s64 + 20;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x832050f0
	sub_832050F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebaae8
	if (cr6.eq) goto loc_82EBAAE8;
	// bl 0x82ebb7c8
	sub_82EBB7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83205020
	sub_83205020(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ebaab8
	if (!cr6.eq) goto loc_82EBAAB8;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r3,31264(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 31264);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ebaaa4
	if (cr6.eq) goto loc_82EBAAA4;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EBAAA4:
	// bl 0x82ebb7c8
	sub_82EBB7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
loc_82EBAAB8:
	// li r31,0
	r31.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82ebb7c8
	sub_82EBB7C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ebaaf4
	if (!cr6.eq) goto loc_82EBAAF4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ebb0e0
	sub_82EBB0E0(ctx, base);
loc_82EBAAE8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
loc_82EBAAF4:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// bl 0x82ebb7c8
	sub_82EBB7C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82eba3d0
	sub_82EBA3D0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ebab60
	if (!cr6.eq) goto loc_82EBAB60;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebab54
	if (!cr6.eq) goto loc_82EBAB54;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBAB54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
loc_82EBAB60:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// addi r25,r11,17620
	r25.s64 = r11.s64 + 17620;
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ebab90
	if (cr6.eq) goto loc_82EBAB90;
loc_82EBAB7C:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ebab7c
	if (!cr6.eq) goto loc_82EBAB7C;
loc_82EBAB90:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ebabb4
	if (cr6.eq) goto loc_82EBABB4;
loc_82EBABA0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ebaba0
	if (!cr6.eq) goto loc_82EBABA0;
loc_82EBABB4:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// or r24,r8,r29
	r24.u64 = ctx.r8.u64 | r29.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// addic. r27,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r27.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// blt 0x82ebacf8
	if (cr0.lt) goto loc_82EBACF8;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,76
	r28.s64 = 76;
loc_82EBABD8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ebacd0
	if (!cr6.eq) goto loc_82EBACD0;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82eb9f60
	sub_82EB9F60(ctx, base);
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + ctx.r7.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82ec5d18
	sub_82EC5D18(ctx, base);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r7,36(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
loc_82EBACD0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebacf8
	if (cr6.eq) goto loc_82EBACF8;
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// bge 0x82ebabd8
	if (!cr0.lt) goto loc_82EBABD8;
loc_82EBACF8:
	// rlwinm r11,r24,0,0,0
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ebad20
	if (!cr6.eq) goto loc_82EBAD20;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBAD20:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebad4c
	if (!cr6.eq) goto loc_82EBAD4C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBAD4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EBAD58"))) PPC_WEAK_FUNC(sub_82EBAD58);
PPC_FUNC_IMPL(__imp__sub_82EBAD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ebaa18
	sub_82EBAA18(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82eb9fd8
	sub_82EB9FD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EBADC8"))) PPC_WEAK_FUNC(sub_82EBADC8);
PPC_FUNC_IMPL(__imp__sub_82EBADC8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82eba3d0
	sub_82EBA3D0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r29,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r29.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ebaa18
	sub_82EBAA18(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ebaa18
	sub_82EBAA18(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r31,1
	r31.s64 = 1;
	// addi r25,r11,9152
	r25.s64 = r11.s64 + 9152;
	// sth r31,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, r31.u16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r29,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r29.u8);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ebb2e8
	sub_82EBB2E8(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// sth r31,182(r1)
	PPC_STORE_U16(ctx.r1.u32 + 182, r31.u16);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r5,r6,9180
	ctx.r5.s64 = ctx.r6.s64 + 9180;
	// stb r29,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r29.u8);
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// addi r3,r4,9228
	ctx.r3.s64 = ctx.r4.s64 + 9228;
	// mr r31,r27
	r31.u64 = r27.u64;
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ebaef4
	if (cr6.eq) goto loc_82EBAEF4;
loc_82EBAEC8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ebaedc
	if (cr6.eq) goto loc_82EBAEDC;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ebb620
	sub_82EBB620(ctx, base);
loc_82EBAEDC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ebb388
	sub_82EBB388(ctx, base);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ebaec8
	if (!cr6.eq) goto loc_82EBAEC8;
loc_82EBAEF4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ebaff0
	if (cr6.eq) goto loc_82EBAFF0;
loc_82EBAF30:
	// lwz r30,4(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ebafe4
	if (cr6.eq) goto loc_82EBAFE4;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebafe4
	if (cr6.eq) goto loc_82EBAFE4;
loc_82EBAF4C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82ebaf7c
	if (!cr6.eq) goto loc_82EBAF7C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82eb0848
	sub_82EB0848(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_82EBAF7C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82ebafd0
	if (!cr6.eq) goto loc_82EBAFD0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebafc0
	if (cr6.eq) goto loc_82EBAFC0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ebafc4
	goto loc_82EBAFC4;
loc_82EBAFC0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82EBAFC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82eb0848
	sub_82EB0848(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_82EBAFD0:
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ebaf4c
	if (!cr6.eq) goto loc_82EBAF4C;
loc_82EBAFE4:
	// lwz r26,12(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82ebaf30
	if (!cr6.eq) goto loc_82EBAF30;
loc_82EBAFF0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ebb018
	if (cr6.eq) goto loc_82EBB018;
loc_82EBB008:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ebb008
	if (!cr6.eq) goto loc_82EBB008;
loc_82EBB018:
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// addi r31,r11,-22012
	r31.s64 = r11.s64 + -22012;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb080
	if (cr6.eq) goto loc_82EBB080;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ebb080
	if (cr6.eq) goto loc_82EBB080;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r10,r11,6
	ctx.r10.s64 = r11.s64 + 6;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r8.u16);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ebb080
	if (!cr6.eq) goto loc_82EBB080;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBB080:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebb0c8
	if (!cr6.eq) goto loc_82EBB0C8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBB0C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EBB0D8"))) PPC_WEAK_FUNC(sub_82EBB0D8);
PPC_FUNC_IMPL(__imp__sub_82EBB0D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ebaa18
	sub_82EBAA18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB0E0"))) PPC_WEAK_FUNC(sub_82EBB0E0);
PPC_FUNC_IMPL(__imp__sub_82EBB0E0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x832050f0
	sub_832050F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ebb120
	if (!cr6.eq) goto loc_82EBB120;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
loc_82EBB120:
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
}

__attribute__((alias("__imp__sub_82EBB138"))) PPC_WEAK_FUNC(sub_82EBB138);
PPC_FUNC_IMPL(__imp__sub_82EBB138) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ebb164
	if (cr6.eq) goto loc_82EBB164;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82ebb170
	goto loc_82EBB170;
loc_82EBB164:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82EBB170:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB198"))) PPC_WEAK_FUNC(sub_82EBB198);
PPC_FUNC_IMPL(__imp__sub_82EBB198) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,9152
	ctx.r10.s64 = r11.s64 + 9152;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebb1fc
	if (cr6.eq) goto loc_82EBB1FC;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb1fc
	if (cr6.eq) goto loc_82EBB1FC;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ebb1fc
	if (!cr6.eq) goto loc_82EBB1FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBB1FC:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB228"))) PPC_WEAK_FUNC(sub_82EBB228);
PPC_FUNC_IMPL(__imp__sub_82EBB228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb248
	if (cr6.eq) goto loc_82EBB248;
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
loc_82EBB248:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB250"))) PPC_WEAK_FUNC(sub_82EBB250);
PPC_FUNC_IMPL(__imp__sub_82EBB250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
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

__attribute__((alias("__imp__sub_82EBB270"))) PPC_WEAK_FUNC(sub_82EBB270);
PPC_FUNC_IMPL(__imp__sub_82EBB270) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB278"))) PPC_WEAK_FUNC(sub_82EBB278);
PPC_FUNC_IMPL(__imp__sub_82EBB278) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb2d0
	if (cr6.eq) goto loc_82EBB2D0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
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
loc_82EBB2D0:
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

__attribute__((alias("__imp__sub_82EBB2E8"))) PPC_WEAK_FUNC(sub_82EBB2E8);
PPC_FUNC_IMPL(__imp__sub_82EBB2E8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ebb324
	if (cr6.eq) goto loc_82EBB324;
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb324
	if (cr6.eq) goto loc_82EBB324;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
loc_82EBB324:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebb368
	if (cr6.eq) goto loc_82EBB368;
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb368
	if (cr6.eq) goto loc_82EBB368;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ebb368
	if (!cr6.eq) goto loc_82EBB368;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBB368:
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

__attribute__((alias("__imp__sub_82EBB388"))) PPC_WEAK_FUNC(sub_82EBB388);
PPC_FUNC_IMPL(__imp__sub_82EBB388) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ebb3d8
	if (cr6.eq) goto loc_82EBB3D8;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb3d8
	if (cr6.eq) goto loc_82EBB3D8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
loc_82EBB3BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ebb3bc
	if (!cr6.eq) goto loc_82EBB3BC;
loc_82EBB3D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB3F0"))) PPC_WEAK_FUNC(sub_82EBB3F0);
PPC_FUNC_IMPL(__imp__sub_82EBB3F0) {
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
	// bl 0x82ebb198
	sub_82EBB198(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb438
	if (cr6.eq) goto loc_82EBB438;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBB438:
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

__attribute__((alias("__imp__sub_82EBB458"))) PPC_WEAK_FUNC(sub_82EBB458);
PPC_FUNC_IMPL(__imp__sub_82EBB458) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ebb4a8
	if (cr6.eq) goto loc_82EBB4A8;
loc_82EBB480:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ebb480
	if (!cr6.eq) goto loc_82EBB480;
loc_82EBB4A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB4C0"))) PPC_WEAK_FUNC(sub_82EBB4C0);
PPC_FUNC_IMPL(__imp__sub_82EBB4C0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x832053a8
	sub_832053A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBB4D0"))) PPC_WEAK_FUNC(sub_82EBB4D0);
PPC_FUNC_IMPL(__imp__sub_82EBB4D0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb560
	if (cr6.eq) goto loc_82EBB560;
loc_82EBB50C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e88
	sub_83204E88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ebb50c
	if (!cr6.eq) goto loc_82EBB50C;
loc_82EBB560:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EBB568"))) PPC_WEAK_FUNC(sub_82EBB568);
PPC_FUNC_IMPL(__imp__sub_82EBB568) {
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
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb618
	if (cr6.eq) goto loc_82EBB618;
loc_82EBB5A4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ebb5d4
	if (!cr6.eq) goto loc_82EBB5D4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBB5D4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r28.u32);
	// bl 0x83204e88
	sub_83204E88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ebb5a4
	if (!cr6.eq) goto loc_82EBB5A4;
loc_82EBB618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EBB620"))) PPC_WEAK_FUNC(sub_82EBB620);
PPC_FUNC_IMPL(__imp__sub_82EBB620) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82ebb6a4
	if (!cr6.gt) goto loc_82EBB6A4;
loc_82EBB670:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ebb670
	if (cr6.lt) goto loc_82EBB670;
loc_82EBB6A4:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebb6d0
	if (!cr6.eq) goto loc_82EBB6D0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBB6D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EBB6D8"))) PPC_WEAK_FUNC(sub_82EBB6D8);
PPC_FUNC_IMPL(__imp__sub_82EBB6D8) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-22012
	ctx.r9.s64 = r11.s64 + -22012;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ebb730
	if (cr6.eq) goto loc_82EBB730;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBB730:
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

__attribute__((alias("__imp__sub_82EBB750"))) PPC_WEAK_FUNC(sub_82EBB750);
PPC_FUNC_IMPL(__imp__sub_82EBB750) {
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
	// bl 0x82eba258
	sub_82EBA258(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb798
	if (cr6.eq) goto loc_82EBB798;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBB798:
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

__attribute__((alias("__imp__sub_82EBB7B8"))) PPC_WEAK_FUNC(sub_82EBB7B8);
PPC_FUNC_IMPL(__imp__sub_82EBB7B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB7C0"))) PPC_WEAK_FUNC(sub_82EBB7C0);
PPC_FUNC_IMPL(__imp__sub_82EBB7C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB7C8"))) PPC_WEAK_FUNC(sub_82EBB7C8);
PPC_FUNC_IMPL(__imp__sub_82EBB7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,10932
	ctx.r3.s64 = r11.s64 + 10932;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB7D8"))) PPC_WEAK_FUNC(sub_82EBB7D8);
PPC_FUNC_IMPL(__imp__sub_82EBB7D8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb8cc0
	sub_82EB8CC0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb874
	if (cr6.eq) goto loc_82EBB874;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb8cc0
	sub_82EB8CC0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebb874
	if (cr6.eq) goto loc_82EBB874;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb8e20
	sub_82EB8E20(ctx, base);
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb8cd8
	sub_82EB8CD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb8cd8
	sub_82EB8CD8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
loc_82EBB874:
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

__attribute__((alias("__imp__sub_82EBB890"))) PPC_WEAK_FUNC(sub_82EBB890);
PPC_FUNC_IMPL(__imp__sub_82EBB890) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82ebb8e8
	if (!cr6.gt) goto loc_82EBB8E8;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
loc_82EBB8B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebb8dc
	if (cr6.eq) goto loc_82EBB8DC;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82EBB8DC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82ebb8b0
	if (!cr0.eq) goto loc_82EBB8B0;
loc_82EBB8E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EBB8F0"))) PPC_WEAK_FUNC(sub_82EBB8F0);
PPC_FUNC_IMPL(__imp__sub_82EBB8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82EBB904:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ebb904
	if (!cr6.eq) goto loc_82EBB904;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBB920"))) PPC_WEAK_FUNC(sub_82EBB920);
PPC_FUNC_IMPL(__imp__sub_82EBB920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb5978
	sub_82EB5978(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebb9c8
	if (!cr6.gt) goto loc_82EBB9C8;
loc_82EBB970:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82eb01e8
	sub_82EB01E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ebb9b4
	if (!cr6.eq) goto loc_82EBB9B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,18(r29)
	ctx.r4.u64 = PPC_LOAD_U16(r29.u32 + 18);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb5840
	sub_82EB5840(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0458
	sub_82EB0458(ctx, base);
loc_82EBB9B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ebb970
	if (cr6.lt) goto loc_82EBB970;
loc_82EBB9C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb5b88
	sub_82EB5B88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EBB9D8"))) PPC_WEAK_FUNC(sub_82EBB9D8);
PPC_FUNC_IMPL(__imp__sub_82EBB9D8) {
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
	// bl 0x83205910
	sub_83205910(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ec6060
	sub_82EC6060(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ebba34
	if (cr6.eq) goto loc_82EBBA34;
loc_82EBBA14:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ec66c8
	sub_82EC66C8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ebba14
	if (!cr6.eq) goto loc_82EBBA14;
loc_82EBBA34:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82EBBA58"))) PPC_WEAK_FUNC(sub_82EBBA58);
PPC_FUNC_IMPL(__imp__sub_82EBBA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// bgt cr6,0x82ebbf20
	if (cr6.gt) goto loc_82EBBF20;
loc_82EBBA80:
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,-17768
	r12.s64 = r12.s64 + -17768;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82EBBB38;
	case 1:
		goto loc_82EBBC14;
	case 2:
		goto loc_82EBBC3C;
	case 3:
		goto loc_82EBBC64;
	case 4:
		goto loc_82EBBC88;
	case 5:
		goto loc_82EBBCB0;
	case 6:
		goto loc_82EBBCD4;
	case 7:
		goto loc_82EBBCF8;
	case 8:
		goto loc_82EBBD1C;
	case 9:
		goto loc_82EBBD40;
	case 10:
		goto loc_82EBBD64;
	case 11:
		goto loc_82EBBD90;
	case 12:
		goto loc_82EBBD90;
	case 13:
		goto loc_82EBBDE0;
	case 14:
		goto loc_82EBBDE0;
	case 15:
		goto loc_82EBBDE0;
	case 16:
		goto loc_82EBBE78;
	case 17:
		goto loc_82EBBE78;
	case 18:
		goto loc_82EBBF20;
	case 19:
		goto loc_82EBBF20;
	case 20:
		goto loc_82EBBF20;
	case 21:
		goto loc_82EBBF20;
	case 22:
		goto loc_82EBBF20;
	case 23:
		goto loc_82EBBB14;
	case 24:
		goto loc_82EBBF20;
	case 25:
		goto loc_82EBBF20;
	case 26:
		goto loc_82EBBF20;
	case 27:
		goto loc_82EBBF20;
	case 28:
		goto loc_82EBBF20;
	case 29:
		goto loc_82EBBCF8;
	case 30:
		goto loc_82EBBB14;
	default:
		__builtin_unreachable();
	}
	// lwz r23,-17608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17608);
	// lwz r23,-17388(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17388);
	// lwz r23,-17348(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17348);
	// lwz r23,-17308(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17308);
	// lwz r23,-17272(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17272);
	// lwz r23,-17232(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17232);
	// lwz r23,-17196(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17196);
	// lwz r23,-17160(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17160);
	// lwz r23,-17124(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17124);
	// lwz r23,-17088(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17088);
	// lwz r23,-17052(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17052);
	// lwz r23,-17008(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17008);
	// lwz r23,-17008(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17008);
	// lwz r23,-16928(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16928);
	// lwz r23,-16928(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16928);
	// lwz r23,-16928(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16928);
	// lwz r23,-16776(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16776);
	// lwz r23,-16776(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16776);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-17644(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17644);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-16608(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -16608);
	// lwz r23,-17160(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17160);
	// lwz r23,-17644(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -17644);
loc_82EBBB14:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// ble cr6,0x82ebba80
	if (!cr6.gt) goto loc_82EBBA80;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBB38:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebbb50
	if (cr6.eq) goto loc_82EBBB50;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r29,r11,-21676
	r29.s64 = r11.s64 + -21676;
	// b 0x82ebbb58
	goto loc_82EBBB58;
loc_82EBBB50:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r29,r11,-21684
	r29.s64 = r11.s64 + -21684;
loc_82EBBB58:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebbbc4
	if (cr6.eq) goto loc_82EBBBC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebbba0
	if (!cr6.lt) goto loc_82EBBBA0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebbb90
	if (cr6.lt) goto loc_82EBBB90;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBBB90:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBBBA0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBBC4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82ebbbf0
	if (!cr6.lt) goto loc_82EBBBF0;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bgt cr6,0x82ebbbe4
	if (cr6.gt) goto loc_82EBBBE4;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82EBBBE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBBBF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBC14:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,11128
	ctx.r4.s64 = ctx.r10.s64 + 11128;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBC3C:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,4092
	ctx.r4.s64 = ctx.r10.s64 + 4092;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBC64:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-8840
	ctx.r4.s64 = ctx.r10.s64 + -8840;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBC88:
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,4092
	ctx.r4.s64 = ctx.r10.s64 + 4092;
	// extsh r5,r11
	ctx.r5.s64 = r11.s16;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBCB0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-8840
	ctx.r4.s64 = ctx.r10.s64 + -8840;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBCD4:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,4092
	ctx.r4.s64 = ctx.r10.s64 + 4092;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBCF8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-8840
	ctx.r4.s64 = ctx.r10.s64 + -8840;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBD1C:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,4096
	ctx.r4.s64 = ctx.r10.s64 + 4096;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBD40:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,4104
	ctx.r4.s64 = ctx.r10.s64 + 4104;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBD64:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,11124
	ctx.r4.s64 = r11.s64 + 11124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBD90:
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r10,11100
	ctx.r4.s64 = ctx.r10.s64 + 11100;
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBDE0:
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r10,11036
	ctx.r4.s64 = ctx.r10.s64 + 11036;
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f6,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f6.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f5,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f5.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfd f12,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// stfd f11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_82EBBE78:
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r10,10952
	ctx.r4.s64 = ctx.r10.s64 + 10952;
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// stfd f6,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.f6.u64);
	// stfd f5,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f5.u64);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// lfs f0,60(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 60);
	f0.f64 = double(temp.f32);
	// lfs f31,56(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 56);
	f31.f64 = double(temp.f32);
	// lfs f30,52(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 52);
	f30.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// stfd f31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, f31.u64);
	// stfd f30,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f30.u64);
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f12,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// ld r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 72);
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
loc_82EBBF20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EBBF30"))) PPC_WEAK_FUNC(sub_82EBBF30);
PPC_FUNC_IMPL(__imp__sub_82EBBF30) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82ebbf78
	if (!cr6.lt) goto loc_82EBBF78;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bgt cr6,0x82ebbf6c
	if (cr6.gt) goto loc_82EBBF6C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82EBBF6C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBBF78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
	// blt cr6,0x82ebbf98
	if (cr6.lt) goto loc_82EBBF98;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(r28.s32, 18, xer);
	// ble cr6,0x82ebbfa0
	if (!cr6.gt) goto loc_82EBBFA0;
loc_82EBBF98:
	// cmpwi cr6,r28,30
	cr6.compare<int32_t>(r28.s32, 30, xer);
	// bne cr6,0x82ebc02c
	if (!cr6.eq) goto loc_82EBC02C;
loc_82EBBFA0:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x82ebbfb8
	if (cr6.eq) goto loc_82EBBFB8;
	// cmpwi cr6,r28,12
	cr6.compare<int32_t>(r28.s32, 12, xer);
	// blt cr6,0x82ebc010
	if (cr6.lt) goto loc_82EBC010;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(r28.s32, 18, xer);
	// bgt cr6,0x82ebc010
	if (cr6.gt) goto loc_82EBC010;
loc_82EBBFB8:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r11,-1784
	r29.s64 = r11.s64 + -1784;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebbffc
	if (!cr6.lt) goto loc_82EBBFFC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebbfec
	if (cr6.lt) goto loc_82EBBFEC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBBFEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBBFFC:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
loc_82EBC010:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb62f8
	sub_82EB62F8(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2f08
	sub_82EB2F08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82EBC02C:
	// cmpwi cr6,r28,24
	cr6.compare<int32_t>(r28.s32, 24, xer);
	// beq cr6,0x82ebc03c
	if (cr6.eq) goto loc_82EBC03C;
	// cmpwi cr6,r28,31
	cr6.compare<int32_t>(r28.s32, 31, xer);
	// bne cr6,0x82ebc0ec
	if (!cr6.eq) goto loc_82EBC0EC;
loc_82EBC03C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb62f8
	sub_82EB62F8(ctx, base);
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ebc0b4
	if (cr6.eq) goto loc_82EBC0B4;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebc0b4
	if (cr6.eq) goto loc_82EBC0B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebc098
	if (!cr6.lt) goto loc_82EBC098;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebc088
	if (cr6.lt) goto loc_82EBC088;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBC088:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBC098:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_82EBC0B4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82ebc0e0
	if (!cr6.lt) goto loc_82EBC0E0;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// bgt cr6,0x82ebc0d4
	if (cr6.gt) goto loc_82EBC0D4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82EBC0D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBC0E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
loc_82EBC0EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EBC0F8"))) PPC_WEAK_FUNC(sub_82EBC0F8);
PPC_FUNC_IMPL(__imp__sub_82EBC0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82ebc290
	if (!cr6.gt) goto loc_82EBC290;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_82EBC11C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebc27c
	if (!cr6.gt) goto loc_82EBC27C;
loc_82EBC130:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb8bd8
	sub_82EB8BD8(ctx, base);
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// addi r11,r11,-22
	r11.s64 = r11.s64 + -22;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x82ebc268
	if (cr6.gt) goto loc_82EBC268;
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,-16008
	r12.s64 = r12.s64 + -16008;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82EBC1D0;
	case 1:
		goto loc_82EBC268;
	case 2:
		goto loc_82EBC268;
	case 3:
		goto loc_82EBC220;
	case 4:
		goto loc_82EBC1D0;
	case 5:
		goto loc_82EBC268;
	case 6:
		goto loc_82EBC194;
	default:
		__builtin_unreachable();
	}
	// lwz r23,-15920(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -15920);
	// lwz r23,-15768(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -15768);
	// lwz r23,-15768(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -15768);
	// lwz r23,-15840(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -15840);
	// lwz r23,-15920(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -15920);
	// lwz r23,-15768(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -15768);
	// lwz r23,-15980(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + -15980);
loc_82EBC194:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebc1b4
	if (cr6.eq) goto loc_82EBC1B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82ebc1b8
	goto loc_82EBC1B8;
loc_82EBC1B4:
	// li r31,1
	r31.s64 = 1;
loc_82EBC1B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb8cd8
	sub_82EB8CD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82ebb890
	sub_82EBB890(ctx, base);
	// b 0x82ebc268
	goto loc_82EBC268;
loc_82EBC1D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb8de8
	sub_82EB8DE8(ctx, base);
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(r11.u32, 28, xer);
	// bne cr6,0x82ebc200
	if (!cr6.eq) goto loc_82EBC200;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82ebb890
	sub_82EBB890(ctx, base);
	// b 0x82ebc268
	goto loc_82EBC268;
loc_82EBC200:
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bne cr6,0x82ebc268
	if (!cr6.eq) goto loc_82EBC268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82ebc260
	goto loc_82EBC260;
loc_82EBC220:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebc240
	if (cr6.eq) goto loc_82EBC240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82ebc244
	goto loc_82EBC244;
loc_82EBC240:
	// li r30,1
	r30.s64 = 1;
loc_82EBC244:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb8cd8
	sub_82EB8CD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82EBC260:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82ebc0f8
	sub_82EBC0F8(ctx, base);
loc_82EBC268:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ebc130
	if (cr6.lt) goto loc_82EBC130;
loc_82EBC27C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// add r26,r3,r26
	r26.u64 = ctx.r3.u64 + r26.u64;
	// bne 0x82ebc11c
	if (!cr0.eq) goto loc_82EBC11C;
loc_82EBC290:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EBC298"))) PPC_WEAK_FUNC(sub_82EBC298);
PPC_FUNC_IMPL(__imp__sub_82EBC298) {
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
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,20
	r25.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r10,10300
	r27.s64 = ctx.r10.s64 + 10300;
	// addi r4,r27,-76
	ctx.r4.s64 = r27.s64 + -76;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebc354
	if (!cr6.gt) goto loc_82EBC354;
loc_82EBC318:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r27,-16
	ctx.r4.s64 = r27.s64 + -16;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebc318
	if (cr6.lt) goto loc_82EBC318;
loc_82EBC354:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2f08
	sub_82EB2F08(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc384
	if (!cr6.eq) goto loc_82EBC384;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC384:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EBC390"))) PPC_WEAK_FUNC(sub_82EBC390);
PPC_FUNC_IMPL(__imp__sub_82EBC390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r25,r11,10216
	r25.s64 = r11.s64 + 10216;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addi r3,r25,-496
	ctx.r3.s64 = r25.s64 + -496;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebc3ec
	if (!cr6.lt) goto loc_82EBC3EC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebc3dc
	if (cr6.lt) goto loc_82EBC3DC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBC3DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBC3EC:
	// stw r31,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r31.u32);
	// addi r4,r25,-496
	ctx.r4.s64 = r25.s64 + -496;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// mr r19,r26
	r19.u64 = r26.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// mr r24,r26
	r24.u64 = r26.u64;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebc508
	if (!cr6.gt) goto loc_82EBC508;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_82EBC468:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r27,r11
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// bl 0x82eb01d0
	sub_82EB01D0(ctx, base);
	// lwzx r11,r28,r29
	r11.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// lbz r4,13(r22)
	ctx.r4.u64 = PPC_LOAD_U8(r22.u32 + 13);
	// lbz r3,12(r22)
	ctx.r3.u64 = PPC_LOAD_U8(r22.u32 + 12);
	// bl 0x82ebbf30
	sub_82EBBF30(ctx, base);
	// addi r4,r25,-120
	ctx.r4.s64 = r25.s64 + -120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc4f4
	if (!cr6.eq) goto loc_82EBC4F4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC4F4:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x82ebc468
	if (cr6.lt) goto loc_82EBC468;
loc_82EBC508:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r27,144(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r25,-472
	ctx.r4.s64 = r25.s64 + -472;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r26,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r26.u8);
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebc6e0
	if (!cr6.gt) goto loc_82EBC6E0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r22,r26
	r22.u64 = r26.u64;
	// addi r20,r11,11136
	r20.s64 = r11.s64 + 11136;
	// addi r24,r10,10828
	r24.s64 = ctx.r10.s64 + 10828;
loc_82EBC5B0:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmpw cr6,r19,r11
	cr6.compare<int32_t>(r19.s32, r11.s32, xer);
	// bge cr6,0x82ebc6c0
	if (!cr6.lt) goto loc_82EBC6C0;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r10,r22,r11
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + r11.u32);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x82ebc6c0
	if (!cr6.eq) goto loc_82EBC6C0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb01d0
	sub_82EB01D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r18,0(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r25,-36
	ctx.r4.s64 = r25.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb3358
	sub_82EB3358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc63c
	if (!cr6.eq) goto loc_82EBC63C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC63C:
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r18,r1,192
	r18.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb02b0
	sub_82EB02B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// bl 0x82eb0548
	sub_82EB0548(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lbz r5,13(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// lbz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// bl 0x82ebba58
	sub_82EBBA58(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eb3358
	sub_82EB3358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc6b4
	if (!cr6.eq) goto loc_82EBC6B4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC6B4:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// b 0x82ebc6cc
	goto loc_82EBC6CC;
loc_82EBC6C0:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb2f08
	sub_82EB2F08(ctx, base);
loc_82EBC6CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ebc5b0
	if (cr6.lt) goto loc_82EBC5B0;
loc_82EBC6E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r25,-104
	ctx.r4.s64 = r25.s64 + -104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82eb2f08
	sub_82EB2F08(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc754
	if (!cr6.eq) goto loc_82EBC754;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC754:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc778
	if (!cr6.eq) goto loc_82EBC778;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC778:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc79c
	if (!cr6.eq) goto loc_82EBC79C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC79C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebc7c0
	if (!cr6.eq) goto loc_82EBC7C0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBC7C0:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82EBC7C8"))) PPC_WEAK_FUNC(sub_82EBC7C8);
PPC_FUNC_IMPL(__imp__sub_82EBC7C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// li r27,0
	r27.s64 = 0;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r27,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r27.u8);
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r27,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r27.u8);
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r27.u8);
	// stw r26,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r26.u32);
	// stw r25,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r25.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// addi r4,r9,20432
	ctx.r4.s64 = ctx.r9.s64 + 20432;
	// addi r3,r8,30156
	ctx.r3.s64 = ctx.r8.s64 + 30156;
	// bl 0x82eb0060
	sub_82EB0060(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EBC878"))) PPC_WEAK_FUNC(sub_82EBC878);
PPC_FUNC_IMPL(__imp__sub_82EBC878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// addi r31,r23,40
	r31.s64 = r23.s64 + 40;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83205020
	sub_83205020(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ebd384
	if (!cr6.eq) goto loc_82EBD384;
	// lwz r22,0(r13)
	r22.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r21,20
	r21.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// bl 0x82eb0848
	sub_82EB0848(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r20,r11,10696
	r20.s64 = r11.s64 + 10696;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r20,-1016
	ctx.r4.s64 = r20.s64 + -1016;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r23,8
	ctx.r3.s64 = r23.s64 + 8;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ebc98c
	if (!cr6.gt) goto loc_82EBC98C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82EBC968:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(r27.u32, ctx.r7.u32, xer);
	// beq cr6,0x82ebc988
	if (cr6.eq) goto loc_82EBC988;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ebc968
	if (cr6.lt) goto loc_82EBC968;
	// b 0x82ebc98c
	goto loc_82EBC98C;
loc_82EBC988:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_82EBC98C:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebd360
	if (cr6.eq) goto loc_82EBD360;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebc9bc
	if (cr6.eq) goto loc_82EBC9BC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ebc878
	sub_82EBC878(ctx, base);
loc_82EBC9BC:
	// lis r24,-32768
	r24.s64 = -2147483648;
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r28.u32);
	// stw r28,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r28.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r24.u32);
	// addi r26,r11,11336
	r26.s64 = r11.s64 + 11336;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,272(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebca10
	if (!cr6.lt) goto loc_82EBCA10;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebca00
	if (cr6.lt) goto loc_82EBCA00;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCA00:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCA10:
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r28.u32);
	// stw r28,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r24,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r24.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,288(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebca6c
	if (!cr6.lt) goto loc_82EBCA6C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebca5c
	if (cr6.lt) goto loc_82EBCA5C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCA5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCA6C:
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r24.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebcac8
	if (!cr6.lt) goto loc_82EBCAC8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebcab8
	if (cr6.lt) goto loc_82EBCAB8;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCAB8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCAC8:
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r28.u32);
	// stw r28,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r24.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebcb24
	if (!cr6.lt) goto loc_82EBCB24;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebcb14
	if (cr6.lt) goto loc_82EBCB14;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCB14:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCB24:
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r28.u32);
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r28.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r24,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r24.u32);
	// addi r29,r11,14952
	r29.s64 = r11.s64 + 14952;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,256(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebcb88
	if (!cr6.lt) goto loc_82EBCB88;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebcb78
	if (cr6.lt) goto loc_82EBCB78;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCB78:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCB88:
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r31.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r28.u32);
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r24,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r24.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebcbe4
	if (!cr6.lt) goto loc_82EBCBE4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebcbd4
	if (cr6.lt) goto loc_82EBCBD4;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCBD4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCBE4:
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r30.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r30,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r30.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r30.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r28.u8);
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r25,r11,11324
	r25.s64 = r11.s64 + 11324;
	// beq cr6,0x82ebccb0
	if (cr6.eq) goto loc_82EBCCB0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
loc_82EBCCB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaffc8
	sub_82EAFFC8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb0128
	sub_82EB0128(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebce04
	if (!cr6.gt) goto loc_82EBCE04;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11276
	ctx.r4.s64 = r11.s64 + 11276;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r20,-388
	ctx.r4.s64 = r20.s64 + -388;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// bl 0x82eb0128
	sub_82EB0128(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebcdf8
	if (!cr6.gt) goto loc_82EBCDF8;
loc_82EBCD1C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb0530
	sub_82EB0530(ctx, base);
	// lwz r11,32(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// lwz r19,36(r23)
	r19.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83205020
	sub_83205020(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ebcde4
	if (!cr6.eq) goto loc_82EBCDE4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,36(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// addi r5,r1,312
	ctx.r5.s64 = ctx.r1.s64 + 312;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ebc298
	sub_82EBC298(ctx, base);
	// addi r4,r20,-336
	ctx.r4.s64 = r20.s64 + -336;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r20,-280
	ctx.r4.s64 = r20.s64 + -280;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
loc_82EBCDE4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82eb0128
	sub_82EB0128(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ebcd1c
	if (cr6.lt) goto loc_82EBCD1C;
loc_82EBCDF8:
	// addi r4,r20,-292
	ctx.r4.s64 = r20.s64 + -292;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82eb2f08
	sub_82EB2F08(ctx, base);
loc_82EBCE04:
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebd168
	if (!cr6.gt) goto loc_82EBD168;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// stw r28,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r28.u32);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11220
	ctx.r4.s64 = r11.s64 + 11220;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,11160
	ctx.r4.s64 = ctx.r10.s64 + 11160;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r20,-148
	ctx.r4.s64 = r20.s64 + -148;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebd0f4
	if (!cr6.gt) goto loc_82EBD0F4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r29,r11,11152
	r29.s64 = r11.s64 + 11152;
loc_82EBCEC0:
	// stw r28,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r28.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r24.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebcf08
	if (!cr6.lt) goto loc_82EBCF08;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebcef8
	if (cr6.lt) goto loc_82EBCEF8;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCEF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCF08:
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r28.u32);
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r24.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,208(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebcf64
	if (!cr6.lt) goto loc_82EBCF64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebcf54
	if (cr6.lt) goto loc_82EBCF54;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBCF54:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBCF64:
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb01d0
	sub_82EB01D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r19,r1,352
	r19.s64 = ctx.r1.s64 + 352;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb02b0
	sub_82EB02B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x82eb0548
	sub_82EB0548(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ebcfec
	if (!cr6.eq) goto loc_82EBCFEC;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ebcfd0
	if (!cr6.eq) goto loc_82EBCFD0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBCFD0:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
loc_82EBCFEC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebd018
	if (cr6.eq) goto loc_82EBD018;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82ebc878
	sub_82EBC878(ctx, base);
loc_82EBD018:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ebd040
	if (cr6.eq) goto loc_82EBD040;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,32(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
loc_82EBD040:
	// addi r5,r1,344
	ctx.r5.s64 = ctx.r1.s64 + 344;
	// lbz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82eb7a88
	sub_82EB7A88(ctx, base);
	// addi r5,r1,340
	ctx.r5.s64 = ctx.r1.s64 + 340;
	// lbz r4,13(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82eb7a88
	sub_82EB7A88(ctx, base);
	// lhz r11,16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 16);
	// addi r4,r20,-88
	ctx.r4.s64 = r20.s64 + -88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,344(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r6,232(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r11,208(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd0bc
	if (!cr6.eq) goto loc_82EBD0BC;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD0BC:
	// lwz r11,240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd0e0
	if (!cr6.eq) goto loc_82EBD0E0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD0E0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ebcec0
	if (cr6.lt) goto loc_82EBCEC0;
loc_82EBD0F4:
	// addi r4,r20,-8
	ctx.r4.s64 = r20.s64 + -8;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb2f08
	sub_82EB2F08(ctx, base);
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebd144
	if (!cr6.gt) goto loc_82EBD144;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,11140
	ctx.r4.s64 = r11.s64 + 11140;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ebc390
	sub_82EBC390(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
loc_82EBD144:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd168
	if (!cr6.eq) goto loc_82EBD168;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD168:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r31,184(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r30,280(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r29,264(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r28,168(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r26,248(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r25,216(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82eb0128
	sub_82EB0128(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaffc8
	sub_82EAFFC8(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r23,20
	ctx.r3.s64 = r23.s64 + 20;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd21c
	if (!cr6.eq) goto loc_82EBD21C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD21C:
	// lwz r11,336(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd240
	if (!cr6.eq) goto loc_82EBD240;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD240:
	// lwz r11,304(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd264
	if (!cr6.eq) goto loc_82EBD264;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD264:
	// lwz r11,320(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd288
	if (!cr6.eq) goto loc_82EBD288;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,312(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD288:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd2ac
	if (!cr6.eq) goto loc_82EBD2AC;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD2AC:
	// lwz r11,256(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd2d0
	if (!cr6.eq) goto loc_82EBD2D0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD2D0:
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd2f4
	if (!cr6.eq) goto loc_82EBD2F4;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD2F4:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd318
	if (!cr6.eq) goto loc_82EBD318;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD318:
	// lwz r11,288(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd33c
	if (!cr6.eq) goto loc_82EBD33C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD33C:
	// lwz r11,272(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd360
	if (!cr6.eq) goto loc_82EBD360;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD360:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd384
	if (!cr6.eq) goto loc_82EBD384;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r21,r22
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + r22.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD384:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82EBD390"))) PPC_WEAK_FUNC(sub_82EBD390);
PPC_FUNC_IMPL(__imp__sub_82EBD390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// bl 0x82eae0a8
	sub_82EAE0A8(ctx, base);
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r22.u32);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r22.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r22,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r22.u32);
	// stw r22,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r22.u32);
	// stw r22,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r22.u32);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r22.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r22.u32);
	// stw r22,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r22.u32);
	// stw r22,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r22.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebd4c8
	if (!cr6.gt) goto loc_82EBD4C8;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// mr r28,r22
	r28.u64 = r22.u64;
	// addi r26,r11,-10620
	r26.s64 = r11.s64 + -10620;
loc_82EBD42C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwzx r9,r28,r10
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	// rlwinm r27,r9,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// bl 0x82ec6070
	sub_82EC6070(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ec6070
	sub_82EC6070(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ec6b20
	sub_82EC6B20(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ec8540
	sub_82EC8540(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ec6ba0
	sub_82EC6BA0(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ebd42c
	if (cr6.lt) goto loc_82EBD42C;
loc_82EBD4C8:
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82ebd638
	if (cr6.eq) goto loc_82EBD638;
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r22
	r11.u64 = r22.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ebd560
	if (!cr6.gt) goto loc_82EBD560;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82EBD530:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + r31.u64;
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82ebd530
	if (cr6.lt) goto loc_82EBD530;
loc_82EBD560:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebd5a0
	if (!cr6.gt) goto loc_82EBD5A0;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82EBD574:
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r6,r9,r31
	ctx.r6.u64 = ctx.r9.u64 + r31.u64;
	// stwx r6,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + r31.u32, ctx.r6.u32);
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmpw cr6,r10,r5
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, xer);
	// blt cr6,0x82ebd574
	if (cr6.lt) goto loc_82EBD574;
loc_82EBD5A0:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebd5f0
	if (!cr6.gt) goto loc_82EBD5F0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82EBD5B4:
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ebd5b4
	if (cr6.lt) goto loc_82EBD5B4;
loc_82EBD5F0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ec67a0
	sub_82EC67A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd62c
	if (!cr6.eq) goto loc_82EBD62C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD62C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b5c
	return;
loc_82EBD638:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ec67a0
	sub_82EC67A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd67c
	if (!cr6.eq) goto loc_82EBD67C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBD67C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EBD688"))) PPC_WEAK_FUNC(sub_82EBD688);
PPC_FUNC_IMPL(__imp__sub_82EBD688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r18,r11,9152
	r18.s64 = r11.s64 + 9152;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// sth r9,198(r1)
	PPC_STORE_U16(ctx.r1.u32 + 198, ctx.r9.u16);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r18.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ebb2e8
	sub_82EBB2E8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ebb388
	sub_82EBB388(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ebd714
	if (cr6.eq) goto loc_82EBD714;
loc_82EBD6FC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82ebb388
	sub_82EBB388(ctx, base);
	// lwz r29,12(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ebd6fc
	if (!cr6.eq) goto loc_82EBD6FC;
loc_82EBD714:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ebf448
	sub_82EBF448(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r20,r30
	r20.u64 = r30.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r19,r29
	r19.u64 = r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r20.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r19.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// ble cr6,0x82ebd798
	if (!cr6.gt) goto loc_82EBD798;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r19,r11
	r19.u64 = r11.u64;
	// stw r20,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r20.u32);
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r19.u32);
loc_82EBD798:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ebd7d4
	if (!cr6.gt) goto loc_82EBD7D4;
	// mr r11,r20
	r11.u64 = r20.u64;
	// subf r9,r20,r9
	ctx.r9.s64 = ctx.r9.s64 - r20.s64;
loc_82EBD7B4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82ebd7b4
	if (!cr0.eq) goto loc_82EBD7B4;
loc_82EBD7D4:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r21,r30
	r21.u64 = r30.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// ble cr6,0x82ebda4c
	if (!cr6.gt) goto loc_82EBDA4C;
	// mr r22,r30
	r22.u64 = r30.u64;
loc_82EBD7F4:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r24,r10,r22
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// rlwinm r31,r24,3,0,28
	r31.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebd864
	if (cr6.eq) goto loc_82EBD864;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ebd868
	goto loc_82EBD868;
loc_82EBD864:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82EBD868:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ebd8d4
	if (cr6.eq) goto loc_82EBD8D4;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r6,r8,2
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x82ebd8b4
	if (!cr6.eq) goto loc_82EBD8B4;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBD8B4:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r24.u32);
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// b 0x82ebda38
	goto loc_82EBDA38;
loc_82EBD8D4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebd998
	if (!cr6.eq) goto loc_82EBD998;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ebd93c
	if (cr6.eq) goto loc_82EBD93C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ebd91c
	if (!cr6.eq) goto loc_82EBD91C;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBD91C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r24.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// b 0x82ebd998
	goto loc_82EBD998;
loc_82EBD93C:
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ebd998
	if (cr6.eq) goto loc_82EBD998;
	// add r11,r31,r20
	r11.u64 = r31.u64 + r20.u64;
	// lwzx r3,r31,r20
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r20.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ebb920
	sub_82EBB920(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r20.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r28,0(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r20.u32);
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBD998:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ebd9e4
	if (cr6.eq) goto loc_82EBD9E4;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ebd9c8
	if (!cr6.eq) goto loc_82EBD9C8;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBD9C8:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r24.u32);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_82EBD9E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebda38
	if (cr6.eq) goto loc_82EBDA38;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r20.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r29,0(r23)
	r29.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r20.u32);
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBDA38:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// blt cr6,0x82ebd7f4
	if (cr6.lt) goto loc_82EBD7F4;
loc_82EBDA4C:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82ebd390
	sub_82EBD390(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebdab0
	if (!cr6.gt) goto loc_82EBDAB0;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82EBDA74:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ebc0f8
	sub_82EBC0F8(ctx, base);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ebda74
	if (cr6.lt) goto loc_82EBDA74;
loc_82EBDAB0:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebdadc
	if (!cr6.eq) goto loc_82EBDADC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBDADC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r22,r30
	r22.u64 = r30.u64;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r21,r11,1
	r21.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ebdb00
	if (cr6.eq) goto loc_82EBDB00;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r25,0(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82ebdb04
	goto loc_82EBDB04;
loc_82EBDB00:
	// mr r25,r21
	r25.u64 = r21.u64;
loc_82EBDB04:
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebdc0c
	if (!cr6.gt) goto loc_82EBDC0C;
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82EBDB18:
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(r27.s32, r25.s32, xer);
	// bge cr6,0x82ebdbd0
	if (!cr6.lt) goto loc_82EBDBD0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ebdbf8
	if (cr6.eq) goto loc_82EBDBF8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebdb90
	if (cr6.eq) goto loc_82EBDB90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ebdb94
	goto loc_82EBDB94;
loc_82EBDB90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82EBDB94:
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ebdbf8
	goto loc_82EBDBF8;
loc_82EBDBD0:
	// bne cr6,0x82ebdbf8
	if (!cr6.eq) goto loc_82EBDBF8;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// bge cr6,0x82ebdbf4
	if (!cr6.lt) goto loc_82EBDBF4;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwzx r25,r24,r11
	r25.u64 = PPC_LOAD_U32(r24.u32 + r11.u32);
	// b 0x82ebdbf8
	goto loc_82EBDBF8;
loc_82EBDBF4:
	// mr r25,r21
	r25.u64 = r21.u64;
loc_82EBDBF8:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82ebdb18
	if (cr6.lt) goto loc_82EBDB18;
loc_82EBDC0C:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebdc8c
	if (!cr6.gt) goto loc_82EBDC8C;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82EBDC20:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r9,r28,r11
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r20
	r31.u64 = r11.u64 + r20.u64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebdc78
	if (cr6.eq) goto loc_82EBDC78;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebdc78
	if (cr6.eq) goto loc_82EBDC78;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBDC78:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82ebdc20
	if (cr6.lt) goto loc_82EBDC20;
loc_82EBDC8C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebdce4
	if (!cr6.gt) goto loc_82EBDCE4;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82EBDC9C:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r4,r10,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r20.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r6
	cr6.compare<int32_t>(r30.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ebdc9c
	if (cr6.lt) goto loc_82EBDC9C;
loc_82EBDCE4:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82ebdd58
	if (cr0.lt) goto loc_82EBDD58;
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EBDCF4:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r31,r9,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r20.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + r11.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + r11.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stwx r5,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r5.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// bge 0x82ebdcf4
	if (!cr0.lt) goto loc_82EBDCF4;
loc_82EBDD58:
	// rlwinm r11,r19,0,0,0
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ebdd80
	if (!cr6.eq) goto loc_82EBDD80;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r19,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBDD80:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebddac
	if (!cr6.eq) goto loc_82EBDDAC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBDDAC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebddd8
	if (!cr6.eq) goto loc_82EBDDD8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBDDD8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebde0c
	if (!cr6.eq) goto loc_82EBDE0C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBDE0C:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r18.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebde5c
	if (cr6.eq) goto loc_82EBDE5C;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ebde5c
	if (cr6.eq) goto loc_82EBDE5C;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r10,r11,6
	ctx.r10.s64 = r11.s64 + 6;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r8.u16);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ebde5c
	if (!cr6.eq) goto loc_82EBDE5C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBDE5C:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82EBDE70"))) PPC_WEAK_FUNC(sub_82EBDE70);
PPC_FUNC_IMPL(__imp__sub_82EBDE70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ebde9c
	if (!cr6.eq) goto loc_82EBDE9C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r7,r11,10932
	ctx.r7.s64 = r11.s64 + 10932;
loc_82EBDE9C:
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eba3d0
	sub_82EBA3D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ebdf74
	if (!cr6.eq) goto loc_82EBDF74;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r26,r30
	r26.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebdf3c
	if (!cr6.gt) goto loc_82EBDF3C;
loc_82EBDED8:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebdf00
	if (cr6.eq) goto loc_82EBDF00;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ebdf28
	goto loc_82EBDF28;
loc_82EBDF00:
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ebb0d8
	sub_82EBB0D8(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82ebd688
	sub_82EBD688(ctx, base);
loc_82EBDF28:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82ebded8
	if (cr6.lt) goto loc_82EBDED8;
loc_82EBDF3C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebdf68
	if (!cr6.eq) goto loc_82EBDF68;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBDF68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_82EBDF74:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebdfa0
	if (!cr6.eq) goto loc_82EBDFA0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBDFA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EBDFB0"))) PPC_WEAK_FUNC(sub_82EBDFB0);
PPC_FUNC_IMPL(__imp__sub_82EBDFB0) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,10932
	r30.s64 = r11.s64 + 10932;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebe060
	if (cr6.eq) goto loc_82EBE060;
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ebe06c
	if (cr6.eq) goto loc_82EBE06C;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82ebde70
	sub_82EBDE70(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ebe06c
	if (!cr6.eq) goto loc_82EBE06C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EBE060:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82EBE06C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EBE078"))) PPC_WEAK_FUNC(sub_82EBE078);
PPC_FUNC_IMPL(__imp__sub_82EBE078) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82ebe6bc
	if (cr6.eq) goto loc_82EBE6BC;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82ebe6bc
	if (cr6.eq) goto loc_82EBE6BC;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// addi r22,r11,20380
	r22.s64 = r11.s64 + 20380;
	// addi r25,r10,9288
	r25.s64 = ctx.r10.s64 + 9288;
	// beq cr6,0x82ebe0d8
	if (cr6.eq) goto loc_82EBE0D8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
loc_82EBE0D8:
	// addi r4,r25,48
	ctx.r4.s64 = r25.s64 + 48;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// addi r28,r11,-23007
	r28.s64 = r11.s64 + -23007;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebe13c
	if (!cr6.lt) goto loc_82EBE13C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebe12c
	if (cr6.lt) goto loc_82EBE12C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBE12C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE13C:
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// addi r29,r11,-552
	r29.s64 = r11.s64 + -552;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebe1a0
	if (!cr6.lt) goto loc_82EBE1A0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebe190
	if (cr6.lt) goto loc_82EBE190;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBE190:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE1A0:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebe1fc
	if (!cr6.lt) goto loc_82EBE1FC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebe1ec
	if (cr6.lt) goto loc_82EBE1EC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBE1EC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE1FC:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r31.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r27.u32);
	// addi r29,r11,-8152
	r29.s64 = r11.s64 + -8152;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebe260
	if (!cr6.lt) goto loc_82EBE260;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebe250
	if (cr6.lt) goto loc_82EBE250;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBE250:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE260:
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebe2bc
	if (!cr6.lt) goto loc_82EBE2BC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebe2ac
	if (cr6.lt) goto loc_82EBE2AC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBE2AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE2BC:
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// addi r29,r11,23840
	r29.s64 = r11.s64 + 23840;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebe320
	if (!cr6.lt) goto loc_82EBE320;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebe310
	if (cr6.lt) goto loc_82EBE310;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBE310:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE320:
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r27.u32);
	// addi r29,r11,10932
	r29.s64 = r11.s64 + 10932;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r3,1
	r30.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// bge cr6,0x82ebe384
	if (!cr6.lt) goto loc_82EBE384;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ebe374
	if (cr6.lt) goto loc_82EBE374;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBE374:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE384:
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r30,r1,120
	r30.s64 = ctx.r1.s64 + 120;
	// addi r29,r1,104
	r29.s64 = ctx.r1.s64 + 104;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// addi r27,r1,184
	r27.s64 = ctx.r1.s64 + 184;
	// bl 0x82eb3638
	sub_82EB3638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82eb3638
	sub_82EB3638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82eb3638
	sub_82EB3638(ctx, base);
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe41c
	if (!cr6.eq) goto loc_82EBE41C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE41C:
	// lwz r11,248(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe448
	if (!cr6.eq) goto loc_82EBE448;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE448:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe474
	if (!cr6.eq) goto loc_82EBE474;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE474:
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe4a0
	if (!cr6.eq) goto loc_82EBE4A0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE4A0:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe4cc
	if (!cr6.eq) goto loc_82EBE4CC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE4CC:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe4f8
	if (!cr6.eq) goto loc_82EBE4F8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE4F8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe524
	if (!cr6.eq) goto loc_82EBE524;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE524:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe550
	if (!cr6.eq) goto loc_82EBE550;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE550:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe57c
	if (!cr6.eq) goto loc_82EBE57C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE57C:
	// addi r4,r25,204
	ctx.r4.s64 = r25.s64 + 204;
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// addi r4,r25,240
	ctx.r4.s64 = r25.s64 + 240;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82EBE5C0:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ebe648
	if (cr6.eq) goto loc_82EBE648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83205020
	sub_83205020(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ebe640
	if (!cr6.eq) goto loc_82EBE640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb0848
	sub_82EB0848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r25,392
	ctx.r4.s64 = r25.s64 + 392;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
loc_82EBE640:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x82ebe5c0
	goto loc_82EBE5C0;
loc_82EBE648:
	// addi r4,r25,356
	ctx.r4.s64 = r25.s64 + 356;
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82ebe67c
	if (cr6.eq) goto loc_82EBE67C;
	// addi r4,r25,28
	ctx.r4.s64 = r25.s64 + 28;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
loc_82EBE67C:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lwz r11,208(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebe6b0
	if (!cr6.eq) goto loc_82EBE6B0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBE6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831b0b5c
	return;
loc_82EBE6BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EBE6C8"))) PPC_WEAK_FUNC(sub_82EBE6C8);
PPC_FUNC_IMPL(__imp__sub_82EBE6C8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ebf354
	if (cr6.eq) goto loc_82EBF354;
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x82ebf354
	if (cr6.eq) goto loc_82EBF354;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ebe724
	if (cr6.eq) goto loc_82EBE724;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,11364
	ctx.r4.s64 = r11.s64 + 11364;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r4,r10,11360
	ctx.r4.s64 = ctx.r10.s64 + 11360;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
loc_82EBE724:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r20,r11,9644
	r20.s64 = r11.s64 + 9644;
	// addi r4,r20,-308
	ctx.r4.s64 = r20.s64 + -308;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r18,0(r13)
	r18.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r17,20
	r17.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r16,1
	r16.s64 = 1;
	// li r23,0
	r23.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r16.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// stw r23,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r23.u32);
	// addi r22,r10,-23007
	r22.s64 = ctx.r10.s64 + -23007;
	// stw r23,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r23.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r29.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebe7c0
	if (!cr6.lt) goto loc_82EBE7C0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebe7b0
	if (cr6.lt) goto loc_82EBE7B0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBE7B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE7C0:
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r23.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r29.u32);
	// addi r30,r11,-552
	r30.s64 = r11.s64 + -552;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebe824
	if (!cr6.lt) goto loc_82EBE824;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebe814
	if (cr6.lt) goto loc_82EBE814;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBE814:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE824:
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r23.u32);
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r23.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r29.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebe880
	if (!cr6.lt) goto loc_82EBE880;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebe870
	if (cr6.lt) goto loc_82EBE870;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBE870:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE880:
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r23,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r23.u32);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r23.u32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r29.u32);
	// addi r30,r11,-8152
	r30.s64 = r11.s64 + -8152;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebe8e4
	if (!cr6.lt) goto loc_82EBE8E4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebe8d4
	if (cr6.lt) goto loc_82EBE8D4;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBE8D4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE8E4:
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,216(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r23,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r23.u32);
	// stw r23,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r23.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r29.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,256(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebe940
	if (!cr6.lt) goto loc_82EBE940;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebe930
	if (cr6.lt) goto loc_82EBE930;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBE930:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE940:
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r31.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r23.u32);
	// stw r23,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r23.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r29.u32);
	// addi r30,r11,23840
	r30.s64 = r11.s64 + 23840;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebe9a4
	if (!cr6.lt) goto loc_82EBE9A4;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebe994
	if (cr6.lt) goto loc_82EBE994;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBE994:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBE9A4:
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,184(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r23.u32);
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r23.u32);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r29.u32);
	// addi r30,r11,10932
	r30.s64 = r11.s64 + 10932;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// lwz r11,208(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ebea08
	if (!cr6.lt) goto loc_82EBEA08;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ebe9f8
	if (cr6.lt) goto loc_82EBE9F8;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EBE9F8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBEA08:
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,248
	ctx.r6.s64 = ctx.r1.s64 + 248;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r31,r1,232
	r31.s64 = ctx.r1.s64 + 232;
	// addi r30,r1,152
	r30.s64 = ctx.r1.s64 + 152;
	// addi r27,r1,168
	r27.s64 = ctx.r1.s64 + 168;
	// addi r26,r1,216
	r26.s64 = ctx.r1.s64 + 216;
	// bl 0x82eb3638
	sub_82EB3638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82eb3638
	sub_82EB3638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82eb3638
	sub_82EB3638(ctx, base);
	// lwz r11,408(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebea98
	if (!cr6.eq) goto loc_82EBEA98;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEA98:
	// lwz r11,368(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebeabc
	if (!cr6.eq) goto loc_82EBEABC;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,360(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEABC:
	// lwz r11,208(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebeae0
	if (!cr6.eq) goto loc_82EBEAE0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEAE0:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebeb04
	if (!cr6.eq) goto loc_82EBEB04;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEB04:
	// lwz r11,256(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebeb28
	if (!cr6.eq) goto loc_82EBEB28;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEB28:
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebeb4c
	if (!cr6.eq) goto loc_82EBEB4C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEB4C:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebeb70
	if (!cr6.eq) goto loc_82EBEB70;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEB70:
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebeb94
	if (!cr6.eq) goto loc_82EBEB94;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEB94:
	// lwz r11,240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebebb8
	if (!cr6.eq) goto loc_82EBEBB8;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBEBB8:
	// addi r4,r20,-152
	ctx.r4.s64 = r20.s64 + -152;
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// addi r4,r20,-116
	ctx.r4.s64 = r20.s64 + -116;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r21,r11,20380
	r21.s64 = r11.s64 + 20380;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ebec14
	if (cr6.eq) goto loc_82EBEC14;
loc_82EBEC00:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ebec00
	if (!cr6.eq) goto loc_82EBEC00;
loc_82EBEC14:
	// or r10,r11,r29
	ctx.r10.u64 = r11.u64 | r29.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r23,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r23.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r3.u32);
	// stw r16,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r16.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r16,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r16.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r3.u32);
	// stw r16,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r16.u32);
	// mr r26,r23
	r26.u64 = r23.u64;
	// stw r16,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r16.u32);
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82ebed70
	if (!cr6.gt) goto loc_82EBED70;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r27,r23
	r27.u64 = r23.u64;
	// addi r28,r11,28188
	r28.s64 = r11.s64 + 28188;
loc_82EBEC9C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r23
	r29.u64 = r23.u64;
	// lwzx r30,r27,r11
	r30.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0128
	sub_82EB0128(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebed5c
	if (!cr6.gt) goto loc_82EBED5C;
loc_82EBECB8:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0530
	sub_82EB0530(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// ble cr6,0x82ebece8
	if (!cr6.gt) goto loc_82EBECE8;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82EBECE8:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ebed48
	if (!cr6.eq) goto loc_82EBED48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r25,0(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// lwz r3,280(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// addi r4,r20,864
	ctx.r4.s64 = r20.s64 + 864;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
loc_82EBED48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82eb0128
	sub_82EB0128(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ebecb8
	if (cr6.lt) goto loc_82EBECB8;
loc_82EBED5C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82ebec9c
	if (cr6.lt) goto loc_82EBEC9C;
loc_82EBED70:
	// lwz r11,288(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebed94
	if (!cr6.eq) goto loc_82EBED94;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,280(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBED94:
	// li r5,23
	ctx.r5.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r26,r23
	r26.u64 = r23.u64;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// stw r16,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r16.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r16,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r16.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r3.u32);
	// stw r16,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r16.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r16,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r16.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// stw r16,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r16.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// stw r16,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r16.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// stb r23,0(r19)
	PPC_STORE_U8(r19.u32 + 0, r23.u8);
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// mr r29,r23
	r29.u64 = r23.u64;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// mr r24,r23
	r24.u64 = r23.u64;
	// stb r23,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r23.u8);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebefc0
	if (!cr6.gt) goto loc_82EBEFC0;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_82EBEE48:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwzx r27,r25,r11
	r27.u64 = PPC_LOAD_U32(r25.u32 + r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ebef74
	if (!cr6.gt) goto loc_82EBEF74;
loc_82EBEE64:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb01d0
	sub_82EB01D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ebef60
	if (cr6.eq) goto loc_82EBEF60;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// ble cr6,0x82ebee9c
	if (!cr6.gt) goto loc_82EBEE9C;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82EBEE9C:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ebef60
	if (!cr6.eq) goto loc_82EBEF60;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x82ebef00
	if (!cr6.eq) goto loc_82EBEF00;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r20,664
	ctx.r4.s64 = r20.s64 + 664;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r26,r16
	r26.u64 = r16.u64;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
loc_82EBEF00:
	// addi r5,r1,328
	ctx.r5.s64 = ctx.r1.s64 + 328;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ebc298
	sub_82EBC298(ctx, base);
	// addi r4,r20,716
	ctx.r4.s64 = r20.s64 + 716;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r4,r20,772
	ctx.r4.s64 = r20.s64 + 772;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
loc_82EBEF60:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ebee64
	if (cr6.lt) goto loc_82EBEE64;
loc_82EBEF74:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x82ebee48
	if (cr6.lt) goto loc_82EBEE48;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x82ebefc0
	if (cr6.eq) goto loc_82EBEFC0;
	// addi r4,r20,760
	ctx.r4.s64 = r20.s64 + 760;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82eb2f08
	sub_82EB2F08(ctx, base);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
loc_82EBEFC0:
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82ebc7c8
	sub_82EBC7C8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebf00c
	if (!cr6.gt) goto loc_82EBF00C;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82EBEFE8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82ebc878
	sub_82EBC878(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ebefe8
	if (cr6.lt) goto loc_82EBEFE8;
loc_82EBF00C:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r11,300(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82ebf048
	if (!cr0.gt) goto loc_82EBF048;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
loc_82EBF048:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r4,436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bge cr6,0x82ebf084
	if (!cr6.lt) goto loc_82EBF084;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bgt cr6,0x82ebf074
	if (cr6.gt) goto loc_82EBF074;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82EBF074:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EBF084:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r30,r23
	r30.u64 = r23.u64;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r16.u32);
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ebf0e8
	if (!cr6.gt) goto loc_82EBF0E8;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r31,r23
	r31.u64 = r23.u64;
	// addi r29,r11,11344
	r29.s64 = r11.s64 + 11344;
loc_82EBF0AC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82eb2c88
	sub_82EB2C88(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eb2e88
	sub_82EB2E88(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ebf0ac
	if (cr6.lt) goto loc_82EBF0AC;
loc_82EBF0E8:
	// addi r4,r20,1148
	ctx.r4.s64 = r20.s64 + 1148;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x82eade40
	sub_82EADE40(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82ebf140
	if (cr6.lt) goto loc_82EBF140;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82EBF124:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82ebf140
	if (!cr6.eq) goto loc_82EBF140;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ebf124
	if (!cr6.gt) goto loc_82EBF124;
loc_82EBF140:
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// ble cr6,0x82ebf150
	if (!cr6.gt) goto loc_82EBF150;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82EBF150:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ebf1b4
	if (cr6.eq) goto loc_82EBF1B4;
	// add r11,r9,r31
	r11.u64 = ctx.r9.u64 + r31.u64;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82ebf1ac
	if (cr6.gt) goto loc_82EBF1AC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EBF190:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82ebf1ac
	if (!cr6.eq) goto loc_82EBF1AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ebf190
	if (!cr6.gt) goto loc_82EBF190;
loc_82EBF1AC:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82ebf140
	goto loc_82EBF140;
loc_82EBF1B4:
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lwz r11,444(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf1e0
	if (!cr6.eq) goto loc_82EBF1E0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF1E0:
	// lwz r11,432(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf204
	if (!cr6.eq) goto loc_82EBF204;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF204:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf228
	if (!cr6.eq) goto loc_82EBF228;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF228:
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// lwz r11,320(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf260
	if (!cr6.eq) goto loc_82EBF260;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,312(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF260:
	// lwz r11,272(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf284
	if (!cr6.eq) goto loc_82EBF284;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF284:
	// lwz r11,336(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf2a8
	if (!cr6.eq) goto loc_82EBF2A8;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF2A8:
	// lwz r11,304(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf2cc
	if (!cr6.eq) goto loc_82EBF2CC;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF2CC:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf300
	if (!cr6.eq) goto loc_82EBF300;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF300:
	// lwz r11,352(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf324
	if (!cr6.eq) goto loc_82EBF324;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF324:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf348
	if (!cr6.eq) goto loc_82EBF348;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF348:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831b0b40
	return;
loc_82EBF354:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82EBF360"))) PPC_WEAK_FUNC(sub_82EBF360);
PPC_FUNC_IMPL(__imp__sub_82EBF360) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ebf3c0
	if (cr6.eq) goto loc_82EBF3C0;
loc_82EBF394:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ebf394
	if (!cr6.eq) goto loc_82EBF394;
loc_82EBF3C0:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebf41c
	if (!cr6.gt) goto loc_82EBF41C;
loc_82EBF3D0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r31,r11,r30
	r31.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ebf408
	if (cr6.eq) goto loc_82EBF408;
loc_82EBF3E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ebf430
	if (!cr6.eq) goto loc_82EBF430;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ebf3e4
	if (!cr6.eq) goto loc_82EBF3E4;
loc_82EBF408:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ebf3d0
	if (cr6.lt) goto loc_82EBF3D0;
loc_82EBF41C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
loc_82EBF430:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EBF448"))) PPC_WEAK_FUNC(sub_82EBF448);
PPC_FUNC_IMPL(__imp__sub_82EBF448) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq cr6,0x82ebf4bc
	if (cr6.eq) goto loc_82EBF4BC;
loc_82EBF490:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebf4b0
	if (cr6.eq) goto loc_82EBF4B0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f63278
	sub_82F63278(ctx, base);
loc_82EBF4B0:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ebf490
	if (!cr6.eq) goto loc_82EBF490;
loc_82EBF4BC:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebf588
	if (!cr6.gt) goto loc_82EBF588;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82EBF4D0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x832050f0
	sub_832050F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ebf504
	if (!cr6.eq) goto loc_82EBF504;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82ebf530
	goto loc_82EBF530;
loc_82EBF504:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ebf360
	sub_82EBF360(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
loc_82EBF530:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ebf574
	if (cr6.eq) goto loc_82EBF574;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ebf558
	if (!cr6.eq) goto loc_82EBF558;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBF558:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r27.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r8.u32);
loc_82EBF574:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82ebf4d0
	if (cr6.lt) goto loc_82EBF4D0;
loc_82EBF588:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ebf5b4
	if (!cr6.eq) goto loc_82EBF5B4;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EBF5B4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EBF5C0"))) PPC_WEAK_FUNC(sub_82EBF5C0);
PPC_FUNC_IMPL(__imp__sub_82EBF5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF5D8"))) PPC_WEAK_FUNC(sub_82EBF5D8);
PPC_FUNC_IMPL(__imp__sub_82EBF5D8) {
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
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// beq cr6,0x82ebf610
	if (cr6.eq) goto loc_82EBF610;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ebf614
	goto loc_82EBF614;
loc_82EBF610:
	// li r11,0
	r11.s64 = 0;
loc_82EBF614:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_82EBF630"))) PPC_WEAK_FUNC(sub_82EBF630);
PPC_FUNC_IMPL(__imp__sub_82EBF630) {
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
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebf670
	if (cr6.eq) goto loc_82EBF670;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ebf674
	goto loc_82EBF674;
loc_82EBF670:
	// li r11,0
	r11.s64 = 0;
loc_82EBF674:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_82EBF690"))) PPC_WEAK_FUNC(sub_82EBF690);
PPC_FUNC_IMPL(__imp__sub_82EBF690) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EBF6AC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ebf6dc
	if (cr6.eq) goto loc_82EBF6DC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ebf6dc
	if (!cr6.lt) goto loc_82EBF6DC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x82ebf6ac
	if (!cr6.eq) goto loc_82EBF6AC;
loc_82EBF6DC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ebf738
	if (!cr6.lt) goto loc_82EBF738;
	// rlwinm r30,r11,4,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82EBF6F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ebf710
	if (cr6.eq) goto loc_82EBF710;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ebf714
	goto loc_82EBF714;
loc_82EBF710:
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82EBF714:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebf744
	if (cr6.eq) goto loc_82EBF744;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82ebf6f0
	if (cr6.lt) goto loc_82EBF6F0;
loc_82EBF738:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EBF744:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EBF760"))) PPC_WEAK_FUNC(sub_82EBF760);
PPC_FUNC_IMPL(__imp__sub_82EBF760) {
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
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EBF77C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ebf7ac
	if (cr6.eq) goto loc_82EBF7AC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ebf7ac
	if (!cr6.lt) goto loc_82EBF7AC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x82ebf77c
	if (!cr6.eq) goto loc_82EBF77C;
loc_82EBF7AC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ebf7ec
	if (!cr6.lt) goto loc_82EBF7EC;
	// rlwinm r30,r11,4,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82EBF7C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebf7f8
	if (cr6.eq) goto loc_82EBF7F8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82ebf7c0
	if (cr6.lt) goto loc_82EBF7C0;
loc_82EBF7EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EBF7F8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EBF810"))) PPC_WEAK_FUNC(sub_82EBF810);
PPC_FUNC_IMPL(__imp__sub_82EBF810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r3,44
	r11.s64 = ctx.r3.s64 + 44;
loc_82EBF820:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bne 0x82ebf820
	if (!cr0.eq) goto loc_82EBF820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF840"))) PPC_WEAK_FUNC(sub_82EBF840);
PPC_FUNC_IMPL(__imp__sub_82EBF840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82ebf850
	if (!cr6.eq) goto loc_82EBF850;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EBF850:
	// srawi r11,r4,2
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	r11.s64 = ctx.r4.s32 >> 2;
	// twllei r5,0
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// divw r9,r11,r5
	ctx.r9.s32 = r11.s32 / ctx.r5.s32;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 1);
	// mullw r8,r9,r5
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// subf r7,r8,r11
	ctx.r7.s64 = r11.s64 - ctx.r8.s64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// andc r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// twlgei r4,-1
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82ebf8a8
	if (!cr6.lt) goto loc_82EBF8A8;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82EBF894:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82ebf894
	if (cr6.lt) goto loc_82EBF894;
loc_82EBF8A8:
	// add r3,r11,r5
	ctx.r3.u64 = r11.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF8B0"))) PPC_WEAK_FUNC(sub_82EBF8B0);
PPC_FUNC_IMPL(__imp__sub_82EBF8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ebf8dc
	if (!cr6.eq) goto loc_82EBF8DC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,11440
	ctx.r3.s64 = r11.s64 + 11440;
	// blr 
	return;
loc_82EBF8DC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82ebf8f0
	if (!cr6.eq) goto loc_82EBF8F0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,11428
	ctx.r3.s64 = r11.s64 + 11428;
	// blr 
	return;
loc_82EBF8F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBF8F8"))) PPC_WEAK_FUNC(sub_82EBF8F8);
PPC_FUNC_IMPL(__imp__sub_82EBF8F8) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-11252
	r30.s64 = r11.s64 + -11252;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,-11252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -11252);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebf960
	if (cr6.eq) goto loc_82EBF960;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EBF924:
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebf96c
	if (cr6.eq) goto loc_82EBF96C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ebf924
	if (!cr6.eq) goto loc_82EBF924;
loc_82EBF960:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EBF96C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EBF978"))) PPC_WEAK_FUNC(sub_82EBF978);
PPC_FUNC_IMPL(__imp__sub_82EBF978) {
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
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,3604
	ctx.r4.s64 = r11.s64 + 3604;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebf9f0
	if (cr6.eq) goto loc_82EBF9F0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3236
	ctx.r4.s64 = r11.s64 + 3236;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebf9f0
	if (cr6.eq) goto loc_82EBF9F0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3380
	ctx.r4.s64 = r11.s64 + 3380;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebf9f0
	if (cr6.eq) goto loc_82EBF9F0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3364
	ctx.r4.s64 = r11.s64 + 3364;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82ebf9f4
	if (!cr6.eq) goto loc_82EBF9F4;
loc_82EBF9F0:
	// li r11,0
	r11.s64 = 0;
loc_82EBF9F4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFA10"))) PPC_WEAK_FUNC(sub_82EBFA10);
PPC_FUNC_IMPL(__imp__sub_82EBFA10) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFA18"))) PPC_WEAK_FUNC(sub_82EBFA18);
PPC_FUNC_IMPL(__imp__sub_82EBFA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFA20"))) PPC_WEAK_FUNC(sub_82EBFA20);
PPC_FUNC_IMPL(__imp__sub_82EBFA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFA30"))) PPC_WEAK_FUNC(sub_82EBFA30);
PPC_FUNC_IMPL(__imp__sub_82EBFA30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFA48"))) PPC_WEAK_FUNC(sub_82EBFA48);
PPC_FUNC_IMPL(__imp__sub_82EBFA48) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ebfaa4
	if (!cr6.gt) goto loc_82EBFAA4;
	// li r31,0
	r31.s64 = 0;
loc_82EBFA74:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebfab0
	if (cr6.eq) goto loc_82EBFAB0;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ebfa74
	if (cr6.lt) goto loc_82EBFA74;
loc_82EBFAA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EBFAB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EBFAC0"))) PPC_WEAK_FUNC(sub_82EBFAC0);
PPC_FUNC_IMPL(__imp__sub_82EBFAC0) {
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
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82ebfb04
	if (cr6.lt) goto loc_82EBFB04;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ebfb04
	if (cr6.lt) goto loc_82EBFB04;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x82ebfb34
	goto loc_82EBFB34;
loc_82EBFB04:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11500
	ctx.r4.s64 = r11.s64 + 11500;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EBFB34:
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

__attribute__((alias("__imp__sub_82EBFB50"))) PPC_WEAK_FUNC(sub_82EBFB50);
PPC_FUNC_IMPL(__imp__sub_82EBFB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82ebfb7c
	if (cr6.lt) goto loc_82EBFB7C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ebfb7c
	if (cr6.lt) goto loc_82EBFB7C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82EBFB7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFB88"))) PPC_WEAK_FUNC(sub_82EBFB88);
PPC_FUNC_IMPL(__imp__sub_82EBFB88) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ebfcb0
	if (!cr6.gt) goto loc_82EBFCB0;
	// li r26,0
	r26.s64 = 0;
loc_82EBFBB0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r30,r26,r11
	r30.u64 = r26.u64 + r11.u64;
	// lwzx r5,r26,r11
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,0(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ebfc5c
	if (cr6.eq) goto loc_82EBFC5C;
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82ec8dc0
	sub_82EC8DC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82eb0388
	sub_82EB0388(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebfc50
	if (cr6.eq) goto loc_82EBFC50;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r4,12(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82ec8dc0
	sub_82EC8DC0(ctx, base);
loc_82EBFC50:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// b 0x82ebfca4
	goto loc_82EBFCA4;
loc_82EBFC5C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x82ebfca4
	if (!cr6.lt) goto loc_82EBFCA4;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82EBFC78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ebfc78
	if (cr6.lt) goto loc_82EBFC78;
loc_82EBFCA4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82ebfbb0
	if (cr6.lt) goto loc_82EBFBB0;
loc_82EBFCB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EBFCC0"))) PPC_WEAK_FUNC(sub_82EBFCC0);
PPC_FUNC_IMPL(__imp__sub_82EBFCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82EBFCD4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ebfcf4
	if (cr6.eq) goto loc_82EBFCF4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ebfcd4
	if (cr6.lt) goto loc_82EBFCD4;
	// blr 
	return;
loc_82EBFCF4:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// lwz r6,0(r13)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lwzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwzx r3,r7,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// b 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EBFD28"))) PPC_WEAK_FUNC(sub_82EBFD28);
PPC_FUNC_IMPL(__imp__sub_82EBFD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ebfd48
	if (cr6.eq) goto loc_82EBFD48;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// add r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 + r11.u64;
	// blr 
	return;
loc_82EBFD48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFD50"))) PPC_WEAK_FUNC(sub_82EBFD50);
PPC_FUNC_IMPL(__imp__sub_82EBFD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ebfd6c
	if (cr6.eq) goto loc_82EBFD6C;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// b 0x82eb4028
	sub_82EB4028(ctx, base);
	return;
loc_82EBFD6C:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82ebfd98
	if (cr6.lt) goto loc_82EBFD98;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ebfd98
	if (cr6.lt) goto loc_82EBFD98;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82EBFD98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EBFDA0"))) PPC_WEAK_FUNC(sub_82EBFDA0);
PPC_FUNC_IMPL(__imp__sub_82EBFDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bge cr6,0x82ebfef8
	if (!cr6.lt) goto loc_82EBFEF8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r30,r10,11540
	r30.s64 = ctx.r10.s64 + 11540;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ebfef8
	if (cr6.eq) goto loc_82EBFEF8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r10,11524
	ctx.r4.s64 = ctx.r10.s64 + 11524;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82ec002c
	if (cr6.lt) goto loc_82EC002C;
	// rlwinm r11,r3,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec002c
	if (cr6.eq) goto loc_82EC002C;
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ec002c
	if (cr6.eq) goto loc_82EC002C;
	// srawi r8,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r8.s64 = r11.s32 >> 2;
	// lwzx r11,r9,r10
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// li r26,0
	r26.s64 = 0;
	// addze. r24,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r24.s64 = temp.s64;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// ble 0x82ec002c
	if (!cr0.gt) goto loc_82EC002C;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82EBFE5C:
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82ec002c
	if (cr6.eq) goto loc_82EC002C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ebfee0
	if (cr6.eq) goto loc_82EBFEE0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ebfeb4
	if (!cr6.eq) goto loc_82EBFEB4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBFEB4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
loc_82EBFEE0:
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// blt cr6,0x82ebfe5c
	if (cr6.lt) goto loc_82EBFE5C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b54
	return;
loc_82EBFEF8:
	// lwz r11,28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// li r19,0
	r19.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec002c
	if (!cr6.gt) goto loc_82EC002C;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r22,0
	r22.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// addi r20,r11,3604
	r20.s64 = r11.s64 + 3604;
loc_82EBFF1C:
	// lwz r10,36(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 36);
	// lwzx r11,r10,r22
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0010
	if (cr6.eq) goto loc_82EC0010;
	// lwz r11,32(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 32);
	// li r23,0
	r23.s64 = 0;
	// lwzx r24,r10,r22
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + r22.u32);
	// add r26,r11,r21
	r26.u64 = r11.u64 + r21.u64;
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// lwz r9,36(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec0010
	if (!cr0.gt) goto loc_82EC0010;
	// addi r27,r10,8
	r27.s64 = ctx.r10.s64 + 8;
loc_82EBFF5C:
	// lwz r28,-8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + -8);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82ebffec
	if (cr6.eq) goto loc_82EBFFEC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r30,-4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + -4);
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ebffec
	if (!cr6.eq) goto loc_82EBFFEC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ebffc0
	if (!cr6.eq) goto loc_82EBFFC0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EBFFC0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
loc_82EBFFEC:
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// addi r23,r23,3
	r23.s64 = r23.s64 + 3;
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r23,r7
	cr6.compare<int32_t>(r23.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ebff5c
	if (cr6.lt) goto loc_82EBFF5C;
loc_82EC0010:
	// lwz r11,28(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r21,r21,48
	r21.s64 = r21.s64 + 48;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r19,r10
	cr6.compare<int32_t>(r19.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ebff1c
	if (cr6.lt) goto loc_82EBFF1C;
loc_82EC002C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82EC0038"))) PPC_WEAK_FUNC(sub_82EC0038);
PPC_FUNC_IMPL(__imp__sub_82EC0038) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec008c
	if (cr6.eq) goto loc_82EC008C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ec0090
	goto loc_82EC0090;
loc_82EC008C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82EC0090:
	// stw r3,112(r29)
	PPC_STORE_U32(r29.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ec00c4
	if (!cr6.eq) goto loc_82EC00C4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
loc_82EC00C4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,64
	cr6.compare<uint32_t>(ctx.r3.u32, 64, xer);
	// bne cr6,0x82ec015c
	if (!cr6.eq) goto loc_82EC015C;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb2a68
	sub_82EB2A68(ctx, base);
	// lis r11,22496
	r11.s64 = 1474297856;
	// lis r10,4288
	ctx.r10.s64 = 281018368;
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r28.u8);
	// ori r11,r11,57431
	r11.u64 = r11.u64 | 57431;
	// ori r10,r10,49168
	ctx.r10.u64 = ctx.r10.u64 | 49168;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x82ec015c
	if (!cr6.eq) goto loc_82EC015C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82ec015c
	if (!cr6.eq) goto loc_82EC015C;
	// stw r31,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82ebf8b0
	sub_82EBF8B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b78
	return;
loc_82EC015C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC0170"))) PPC_WEAK_FUNC(sub_82EC0170);
PPC_FUNC_IMPL(__imp__sub_82EC0170) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ec01c8
	if (!cr6.eq) goto loc_82EC01C8;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r4,r8,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
loc_82EC01C8:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r30,r8,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bne cr6,0x82ec02c0
	if (!cr6.eq) goto loc_82EC02C0;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r30,r29,36
	r30.s64 = r29.s64 + 36;
	// stw r31,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r31.u32);
	// lwz r28,40(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// ble cr6,0x82ec0274
	if (!cr6.gt) goto loc_82EC0274;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ec024c
	if (!cr6.lt) goto loc_82EC024C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec023c
	if (cr6.lt) goto loc_82EC023C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EC023C:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC024C:
	// cmpw cr6,r28,r31
	cr6.compare<int32_t>(r28.s32, r31.s32, xer);
	// bge cr6,0x82ec0274
	if (!cr6.lt) goto loc_82EC0274;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r28,r31
	r11.s64 = r31.s64 - r28.s64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EC0260:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82ec0260
	if (!cr0.eq) goto loc_82EC0260;
loc_82EC0274:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bge cr6,0x82ec02b4
	if (!cr6.lt) goto loc_82EC02B4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec02b4
	if (!cr6.gt) goto loc_82EC02B4;
	// addi r11,r11,44
	r11.s64 = r11.s64 + 44;
loc_82EC029C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bne 0x82ec029c
	if (!cr0.eq) goto loc_82EC029C;
loc_82EC02B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EC02C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC02D0"))) PPC_WEAK_FUNC(sub_82EC02D0);
PPC_FUNC_IMPL(__imp__sub_82EC02D0) {
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
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0320
	if (cr6.eq) goto loc_82EC0320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC0320:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb4110
	sub_82EB4110(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC0338"))) PPC_WEAK_FUNC(sub_82EC0338);
PPC_FUNC_IMPL(__imp__sub_82EC0338) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// bl 0x82ec8760
	sub_82EC8760(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec0470
	if (!cr6.eq) goto loc_82EC0470;
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec047c
	if (!cr6.eq) goto loc_82EC047C;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// li r23,0
	r23.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec0470
	if (!cr6.gt) goto loc_82EC0470;
	// li r25,0
	r25.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r21,1
	r21.s64 = 1;
loc_82EC0388:
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// lwzx r11,r10,r25
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0454
	if (cr6.eq) goto loc_82EC0454;
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// li r26,0
	r26.s64 = 0;
	// lwzx r28,r10,r25
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// add r29,r11,r24
	r29.u64 = r11.u64 + r24.u64;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec0454
	if (!cr0.gt) goto loc_82EC0454;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
loc_82EC03C8:
	// lwz r31,-8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82ec0430
	if (cr6.eq) goto loc_82EC0430;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ec0430
	if (cr6.eq) goto loc_82EC0430;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r21,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r21.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC0430:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// addi r26,r26,3
	r26.s64 = r26.s64 + 3;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r26,r7
	cr6.compare<int32_t>(r26.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ec03c8
	if (cr6.lt) goto loc_82EC03C8;
loc_82EC0454:
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,48
	r24.s64 = r24.s64 + 48;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(r23.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec0388
	if (cr6.lt) goto loc_82EC0388;
loc_82EC0470:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
loc_82EC047C:
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r29,r11,40
	r29.s64 = r11.s64 + 40;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82ec04b0
	if (cr6.lt) goto loc_82EC04B0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_82EC0494:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82ec04b0
	if (!cr6.eq) goto loc_82EC04B0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec0494
	if (!cr6.gt) goto loc_82EC0494;
loc_82EC04B0:
	// li r21,1
	r21.s64 = 1;
loc_82EC04B4:
	// cmpw cr6,r30,r9
	cr6.compare<int32_t>(r30.s32, ctx.r9.s32, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// ble cr6,0x82ec04c4
	if (!cr6.gt) goto loc_82EC04C4;
	// li r11,0
	r11.s64 = 0;
loc_82EC04C4:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec0470
	if (cr6.eq) goto loc_82EC0470;
	// add r11,r9,r30
	r11.u64 = ctx.r9.u64 + r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r5,r6,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ec0524
	if (cr6.eq) goto loc_82EC0524;
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r21,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r21.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC0524:
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82ec055c
	if (cr6.gt) goto loc_82EC055C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82EC0540:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82ec055c
	if (!cr6.eq) goto loc_82EC055C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec0540
	if (!cr6.gt) goto loc_82EC0540;
loc_82EC055C:
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x82ec04b4
	goto loc_82EC04B4;
}

__attribute__((alias("__imp__sub_82EC0568"))) PPC_WEAK_FUNC(sub_82EC0568);
PPC_FUNC_IMPL(__imp__sub_82EC0568) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec05a8
	if (!cr6.eq) goto loc_82EC05A8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC05A8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r25,r27,12
	r25.s64 = r27.s64 + 12;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82ec06cc
	if (!cr6.gt) goto loc_82EC06CC;
	// li r26,0
	r26.s64 = 0;
loc_82EC05F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r30,r26,r11
	r30.u64 = r26.u64 + r11.u64;
	// lwzx r11,r26,r11
	r11.u64 = PPC_LOAD_U32(r26.u32 + r11.u32);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ec0678
	if (cr6.eq) goto loc_82EC0678;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec0628
	if (!cr6.gt) goto loc_82EC0628;
	// li r11,0
	r11.s64 = 0;
loc_82EC0628:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec0678
	if (!cr6.eq) goto loc_82EC0678;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// lwz r5,28(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82ec8dc0
	sub_82EC8DC0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// b 0x82ec06c0
	goto loc_82EC06C0;
loc_82EC0678:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x82ec06c0
	if (!cr6.lt) goto loc_82EC06C0;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82EC0694:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ec0694
	if (cr6.lt) goto loc_82EC0694;
loc_82EC06C0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ec05f0
	if (cr6.lt) goto loc_82EC05F0;
loc_82EC06CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EC06D8"))) PPC_WEAK_FUNC(sub_82EC06D8);
PPC_FUNC_IMPL(__imp__sub_82EC06D8) {
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
	// bl 0x82ec8e18
	sub_82EC8E18(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r9,11564
	ctx.r6.s64 = ctx.r9.s64 + 11564;
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// ori r4,r7,16
	ctx.r4.u64 = ctx.r7.u64 | 16;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r4,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r4.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// li r4,76
	ctx.r4.s64 = 76;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r9,76
	ctx.r9.s64 = 76;
	// sth r9,4(r30)
	PPC_STORE_U16(r30.u32 + 4, ctx.r9.u16);
	// bl 0x82ec8890
	sub_82EC8890(ctx, base);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r8,11380
	ctx.r7.s64 = ctx.r8.s64 + 11380;
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC0798"))) PPC_WEAK_FUNC(sub_82EC0798);
PPC_FUNC_IMPL(__imp__sub_82EC0798) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,11564
	ctx.r10.s64 = r11.s64 + 11564;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec07d8
	if (cr6.eq) goto loc_82EC07D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC07D8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec07ec
	if (cr6.eq) goto loc_82EC07EC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ec2578
	sub_82EC2578(ctx, base);
loc_82EC07EC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0828
	if (cr6.eq) goto loc_82EC0828;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ec0828
	if (!cr6.eq) goto loc_82EC0828;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC0828:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec0854
	if (!cr6.eq) goto loc_82EC0854;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC0854:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec0880
	if (!cr6.eq) goto loc_82EC0880;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC0880:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec8e68
	sub_82EC8E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC08A0"))) PPC_WEAK_FUNC(sub_82EC08A0);
PPC_FUNC_IMPL(__imp__sub_82EC08A0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec0998
	if (!cr6.eq) goto loc_82EC0998;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82ebfda0
	sub_82EBFDA0(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r31,124
	r30.s64 = r31.s64 + 124;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r28,128(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// add r29,r9,r28
	r29.u64 = ctx.r9.u64 + r28.u64;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bge cr6,0x82ec0918
	if (!cr6.lt) goto loc_82EC0918;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82ec0908
	if (cr6.lt) goto loc_82EC0908;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82EC0908:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC0918:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r25
	r11.u64 = r25.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82ec0960
	if (!cr6.gt) goto loc_82EC0960;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_82EC093C:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ec093c
	if (cr6.lt) goto loc_82EC093C;
loc_82EC0960:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec0998
	if (!cr6.eq) goto loc_82EC0998;
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r11,r11,1,1,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,20
	ctx.r8.s64 = 20;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC0998:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,31484(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31484);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ebb0d8
	sub_82EBB0D8(ctx, base);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ec0b30
	if (cr6.eq) goto loc_82EC0B30;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82ec9408
	sub_82EC9408(ctx, base);
	// lwz r8,128(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82ec0a80
	if (!cr6.gt) goto loc_82EC0A80;
	// addi r26,r31,8
	r26.s64 = r31.s64 + 8;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82EC0A14:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r24,r30,r11
	r24.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bl 0x82ec8dc0
	sub_82EC8DC0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r7,28(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r6
	cr6.compare<int32_t>(r29.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ec0a14
	if (cr6.lt) goto loc_82EC0A14;
loc_82EC0A80:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r6,r9,30156
	ctx.r6.s64 = ctx.r9.s64 + 30156;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r4,r8,30252
	ctx.r4.s64 = ctx.r8.s64 + 30252;
	// addi r3,r7,30204
	ctx.r3.s64 = ctx.r7.s64 + 30204;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r31,r11,30300
	r31.s64 = r11.s64 + 30300;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// bne cr6,0x82ec0adc
	if (!cr6.eq) goto loc_82EC0ADC;
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// addi r9,r10,-8344
	ctx.r9.s64 = ctx.r10.s64 + -8344;
	// addi r31,r11,-8440
	r31.s64 = r11.s64 + -8440;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82EC0ADC:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec0b24
	if (cr6.eq) goto loc_82EC0B24;
loc_82EC0AE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r9,r10
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ec0ae8
	if (!cr6.eq) goto loc_82EC0AE8;
loc_82EC0B24:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_82EC0B30:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0b4c
	if (cr6.eq) goto loc_82EC0B4C;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// sth r10,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r10.u16);
loc_82EC0B4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EC0B58"))) PPC_WEAK_FUNC(sub_82EC0B58);
PPC_FUNC_IMPL(__imp__sub_82EC0B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec0e8c
	if (!cr6.eq) goto loc_82EC0E8C;
	// bl 0x82ec08a0
	sub_82EC08A0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r22,-1
	r22.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82ebf8f8
	sub_82EBF8F8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec0bc4
	if (cr6.eq) goto loc_82EC0BC4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,11624
	ctx.r4.s64 = ctx.r10.s64 + 11624;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_82EC0BC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r19,0
	r19.s64 = 0;
	// mr r20,r19
	r20.u64 = r19.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec0cd8
	if (!cr6.gt) goto loc_82EC0CD8;
	// mr r24,r19
	r24.u64 = r19.u64;
	// mr r23,r19
	r23.u64 = r19.u64;
loc_82EC0BEC:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwzx r11,r24,r10
	r11.u64 = PPC_LOAD_U32(r24.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0cbc
	if (cr6.eq) goto loc_82EC0CBC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r29,r19
	r29.u64 = r19.u64;
	// lwzx r26,r24,r10
	r26.u64 = PPC_LOAD_U32(r24.u32 + ctx.r10.u32);
	// add r27,r11,r23
	r27.u64 = r11.u64 + r23.u64;
	// lwz r11,32(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// lwz r9,36(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec0cbc
	if (!cr0.gt) goto loc_82EC0CBC;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
loc_82EC0C2C:
	// lwz r25,-8(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// beq cr6,0x82ec0c98
	if (cr6.eq) goto loc_82EC0C98;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpw cr6,r22,r29
	cr6.compare<int32_t>(r22.s32, r29.s32, xer);
	// beq cr6,0x82ec0c98
	if (cr6.eq) goto loc_82EC0C98;
	// bl 0x82ebf978
	sub_82EBF978(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0c98
	if (cr6.eq) goto loc_82EC0C98;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r25,r26
	ctx.r4.u64 = r25.u64 + r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC0C98:
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// addi r29,r29,3
	r29.s64 = r29.s64 + 3;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r29,r7
	cr6.compare<int32_t>(r29.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ec0c2c
	if (cr6.lt) goto loc_82EC0C2C;
loc_82EC0CBC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r23,r23,48
	r23.s64 = r23.s64 + 48;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r20,r10
	cr6.compare<int32_t>(r20.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec0bec
	if (cr6.lt) goto loc_82EC0BEC;
loc_82EC0CD8:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0d08
	if (cr6.eq) goto loc_82EC0D08;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// b 0x82ec0d18
	goto loc_82EC0D18;
loc_82EC0D08:
	// li r5,23
	ctx.r5.s64 = 23;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EC0D18:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0d34
	if (cr6.eq) goto loc_82EC0D34;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// stw r19,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r19.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x82ec0d38
	goto loc_82EC0D38;
loc_82EC0D34:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82EC0D38:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r7,116(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r6,11516
	ctx.r4.s64 = ctx.r6.s64 + 11516;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,12(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// clrlwi r11,r9,1
	r11.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r8,2
	ctx.r10.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82ec0dc8
	if (!cr6.lt) goto loc_82EC0DC8;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ec0dbc
	if (!cr6.lt) goto loc_82EC0DBC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EC0DBC:
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC0DC8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82ec0e00
	if (cr6.lt) goto loc_82EC0E00;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ec0e00
	if (cr6.lt) goto loc_82EC0E00;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ec0e04
	goto loc_82EC0E04;
loc_82EC0E00:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_82EC0E04:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// bl 0x82ebfac0
	sub_82EBFAC0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82ec99c0
	sub_82EC99C0(ctx, base);
	// lhz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U16(r21.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec0e70
	if (cr6.eq) goto loc_82EC0E70;
	// lhz r11,6(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r21)
	PPC_STORE_U16(r21.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ec0e70
	if (!cr6.eq) goto loc_82EC0E70;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC0E70:
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,11408
	ctx.r10.s64 = r11.s64 + 11408;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
loc_82EC0E8C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82EC0E98"))) PPC_WEAK_FUNC(sub_82EC0E98);
PPC_FUNC_IMPL(__imp__sub_82EC0E98) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82ec9120
	sub_82EC9120(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec0ec8
	if (cr6.eq) goto loc_82EC0EC8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec0338
	sub_82EC0338(ctx, base);
loc_82EC0EC8:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec0ef0
	if (cr6.eq) goto loc_82EC0EF0;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82ec10e0
	goto loc_82EC10E0;
loc_82EC0EF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82ebb7c8
	sub_82EBB7C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec1098
	if (!cr6.eq) goto loc_82EC1098;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,31484(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 31484);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ebb0d8
	sub_82EBB0D8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ec1098
	if (cr6.eq) goto loc_82EC1098;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec08a0
	sub_82EC08A0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,128(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ec1010
	if (!cr6.gt) goto loc_82EC1010;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// li r28,0
	r28.s64 = 0;
	// addi r24,r11,30300
	r24.s64 = r11.s64 + 30300;
loc_82EC0F90:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwzx r29,r11,r28
	r29.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec0ffc
	if (cr6.eq) goto loc_82EC0FFC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC0FFC:
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x82ec0f90
	if (cr6.lt) goto loc_82EC0F90;
loc_82EC1010:
	// lhz r11,4(r23)
	r11.u64 = PPC_LOAD_U16(r23.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec104c
	if (cr6.eq) goto loc_82EC104C;
	// lhz r11,6(r23)
	r11.u64 = PPC_LOAD_U16(r23.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r23)
	PPC_STORE_U16(r23.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ec104c
	if (!cr6.eq) goto loc_82EC104C;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC104C:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec108c
	if (cr6.eq) goto loc_82EC108C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC108C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// b 0x82ec10e0
	goto loc_82EC10E0;
loc_82EC1098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ebfac0
	sub_82EBFAC0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82ec10dc
	if (cr6.lt) goto loc_82EC10DC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ec10dc
	if (cr6.lt) goto loc_82EC10DC;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82ec10e0
	goto loc_82EC10E0;
loc_82EC10DC:
	// li r30,0
	r30.s64 = 0;
loc_82EC10E0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82ec1108
	if (cr6.eq) goto loc_82EC1108;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec1108
	if (cr6.eq) goto loc_82EC1108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82ec110c
	if (!cr6.eq) goto loc_82EC110C;
loc_82EC1108:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82EC110C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EC1118"))) PPC_WEAK_FUNC(sub_82EC1118);
PPC_FUNC_IMPL(__imp__sub_82EC1118) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r11,r24,1,0,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// add r11,r24,r11
	r11.u64 = r24.u64 + r11.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// lwz r31,44(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// bne cr6,0x82ec117c
	if (!cr6.eq) goto loc_82EC117C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
loc_82EC117C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// bne cr6,0x82ec1378
	if (!cr6.eq) goto loc_82EC1378;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,28(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// add r11,r10,r28
	r11.u64 = ctx.r10.u64 + r28.u64;
	// srawi r7,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec1200
	if (!cr0.gt) goto loc_82EC1200;
loc_82EC11C4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82ec11dc
	if (cr6.eq) goto loc_82EC11DC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_82EC11DC:
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// lwz r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// blt cr6,0x82ec11c4
	if (cr6.lt) goto loc_82EC11C4;
loc_82EC1200:
	// lis r25,-32768
	r25.s64 = -2147483648;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ec9b48
	sub_82EC9B48(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r31
	r29.u64 = r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec1260
	if (!cr6.gt) goto loc_82EC1260;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82EC1234:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82ec8d00
	sub_82EC8D00(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82ec1234
	if (cr6.lt) goto loc_82EC1234;
loc_82EC1260:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec128c
	if (!cr6.eq) goto loc_82EC128C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC128C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ec9c38
	sub_82EC9C38(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec12e4
	if (!cr6.gt) goto loc_82EC12E4;
loc_82EC12B8:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82ec8d60
	sub_82EC8D60(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ec12b8
	if (cr6.lt) goto loc_82EC12B8;
loc_82EC12E4:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec1310
	if (!cr6.eq) goto loc_82EC1310;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC1310:
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmpw cr6,r24,r4
	cr6.compare<int32_t>(r24.s32, ctx.r4.s32, xer);
	// lwz r5,36(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// bne cr6,0x82ec136c
	if (!cr6.eq) goto loc_82EC136C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ec136c
	if (cr6.lt) goto loc_82EC136C;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bge cr6,0x82ec136c
	if (!cr6.lt) goto loc_82EC136C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lwz r9,28(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// subf r8,r28,r3
	ctx.r8.s64 = ctx.r3.s64 - r28.s64;
	// stw r8,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r8.u32);
loc_82EC136C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
loc_82EC1378:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EC1388"))) PPC_WEAK_FUNC(sub_82EC1388);
PPC_FUNC_IMPL(__imp__sub_82EC1388) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r6,40(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec1400
	if (!cr6.eq) goto loc_82EC1400;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec1118
	sub_82EC1118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EC1400:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC1410"))) PPC_WEAK_FUNC(sub_82EC1410);
PPC_FUNC_IMPL(__imp__sub_82EC1410) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r23,r4,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,0
	r24.s64 = 0;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,36(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + r11.u64;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r25,r23,r9
	r25.u64 = PPC_LOAD_U32(r23.u32 + ctx.r9.u32);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ec9c38
	sub_82EC9C38(ctx, base);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82ec14a0
	if (!cr6.gt) goto loc_82EC14A0;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82EC1478:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ec8820
	sub_82EC8820(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec1478
	if (cr6.lt) goto loc_82EC1478;
loc_82EC14A0:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec14cc
	if (!cr6.eq) goto loc_82EC14CC;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC14CC:
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ec9b48
	sub_82EC9B48(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec1524
	if (!cr6.gt) goto loc_82EC1524;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82EC14FC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,24(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ec87c0
	sub_82EC87C0(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec14fc
	if (cr6.lt) goto loc_82EC14FC;
loc_82EC1524:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec1550
	if (!cr6.eq) goto loc_82EC1550;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC1550:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// add r28,r11,r25
	r28.u64 = r11.u64 + r25.u64;
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ec156c
	if (!cr0.eq) goto loc_82EC156C;
	// mr r11,r24
	r11.u64 = r24.u64;
	// b 0x82ec15c8
	goto loc_82EC15C8;
loc_82EC156C:
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// ori r9,r10,21846
	ctx.r9.u64 = ctx.r10.u64 | 21846;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mulhw r10,r8,r9
	ctx.r10.s64 = (int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bge cr6,0x82ec15c4
	if (!cr6.lt) goto loc_82EC15C4;
loc_82EC15B0:
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82ec15b0
	if (cr6.lt) goto loc_82EC15B0;
loc_82EC15C4:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
loc_82EC15C8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec1648
	if (!cr6.gt) goto loc_82EC1648;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// addi r26,r11,1
	r26.s64 = r11.s64 + 1;
loc_82EC15E0:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec1630
	if (cr6.eq) goto loc_82EC1630;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC1630:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb4110
	sub_82EB4110(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// bne 0x82ec15e0
	if (!cr0.eq) goto loc_82EC15E0;
loc_82EC1648:
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mr r11,r24
	r11.u64 = r24.u64;
	// lwz r9,36(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwzx r4,r23,r9
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82ec16c8
	if (!cr6.gt) goto loc_82EC16C8;
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
loc_82EC1668:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ec1698
	if (cr6.eq) goto loc_82EC1698;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ec1668
	if (cr6.lt) goto loc_82EC1668;
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r24,r23,r11
	PPC_STORE_U32(r23.u32 + r11.u32, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
loc_82EC1698:
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,28(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// lwz r5,0(r13)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwzx r11,r3,r7
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, r11.u32);
	// lwzx r3,r6,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
loc_82EC16C8:
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r24,r23,r11
	PPC_STORE_U32(r23.u32 + r11.u32, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EC16E0"))) PPC_WEAK_FUNC(sub_82EC16E0);
PPC_FUNC_IMPL(__imp__sub_82EC16E0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec1a54
	if (!cr6.eq) goto loc_82EC1A54;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,56
	ctx.r9.s64 = 56;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82ec26b0
	sub_82EC26B0(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// li r24,0
	r24.s64 = 0;
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r22,r5,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// ble cr6,0x82ec18dc
	if (!cr6.gt) goto loc_82EC18DC;
	// li r25,0
	r25.s64 = 0;
	// li r23,0
	r23.s64 = 0;
loc_82EC1754:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwzx r11,r25,r10
	r11.u64 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec18c0
	if (cr6.eq) goto loc_82EC18C0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// extsb r9,r22
	ctx.r9.s64 = r22.s8;
	// lwzx r27,r25,r10
	r27.u64 = PPC_LOAD_U32(r25.u32 + ctx.r10.u32);
	// add r29,r11,r23
	r29.u64 = r11.u64 + r23.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ec180c
	if (!cr6.eq) goto loc_82EC180C;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// li r26,0
	r26.s64 = 0;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec180c
	if (!cr0.gt) goto loc_82EC180C;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
loc_82EC17A0:
	// lwz r28,-8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x82ec17e8
	if (cr6.eq) goto loc_82EC17E8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r28,r27
	ctx.r5.u64 = r28.u64 + r27.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC17E8:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r26,r26,3
	r26.s64 = r26.s64 + 3;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r26,r7
	cr6.compare<int32_t>(r26.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ec17a0
	if (cr6.lt) goto loc_82EC17A0;
loc_82EC180C:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec18c0
	if (!cr0.gt) goto loc_82EC18C0;
	// addi r30,r10,8
	r30.s64 = ctx.r10.s64 + 8;
loc_82EC1830:
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82ec189c
	if (cr6.eq) goto loc_82EC189C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r27,-4(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r26,0(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,28(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC189C:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// addi r28,r28,3
	r28.s64 = r28.s64 + 3;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r28,r7
	cr6.compare<int32_t>(r28.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ec1830
	if (cr6.lt) goto loc_82EC1830;
loc_82EC18C0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,48
	r23.s64 = r23.s64 + 48;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(r24.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec1754
	if (cr6.lt) goto loc_82EC1754;
loc_82EC18DC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82ec1914
	if (cr6.lt) goto loc_82EC1914;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ec1914
	if (cr6.lt) goto loc_82EC1914;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ec1918
	goto loc_82EC1918;
loc_82EC1914:
	// li r29,0
	r29.s64 = 0;
loc_82EC1918:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ebfac0
	sub_82EBFAC0(ctx, base);
	// lwz r30,120(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// addi r29,r30,52
	r29.s64 = r30.s64 + 52;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// extsb r8,r22
	ctx.r8.s64 = r22.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ec1a54
	if (cr6.eq) goto loc_82EC1A54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec08a0
	sub_82EC08A0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// addi r8,r31,8
	ctx.r8.s64 = r31.s64 + 8;
	// addi r5,r6,11420
	ctx.r5.s64 = ctx.r6.s64 + 11420;
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// lwz r4,32(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lwz r5,36(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// blt cr6,0x82ec19ec
	if (cr6.lt) goto loc_82EC19EC;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ec19ec
	if (cr6.lt) goto loc_82EC19EC;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ec19f0
	goto loc_82EC19F0;
loc_82EC19EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82EC19F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// bl 0x82ec99c0
	sub_82EC99C0(ctx, base);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ec1a54
	if (cr6.eq) goto loc_82EC1A54;
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r30)
	PPC_STORE_U16(r30.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ec1a54
	if (!cr6.eq) goto loc_82EC1A54;
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
loc_82EC1A54:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EC1A60"))) PPC_WEAK_FUNC(sub_82EC1A60);
PPC_FUNC_IMPL(__imp__sub_82EC1A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r19,0
	r19.s64 = 0;
	// mr r23,r19
	r23.u64 = r19.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec1b3c
	if (!cr6.gt) goto loc_82EC1B3C;
	// mr r25,r19
	r25.u64 = r19.u64;
	// mr r24,r19
	r24.u64 = r19.u64;
loc_82EC1A90:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwzx r11,r10,r25
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec1b20
	if (cr6.eq) goto loc_82EC1B20;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r26,r19
	r26.u64 = r19.u64;
	// lwzx r28,r10,r25
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// add r29,r11,r24
	r29.u64 = r11.u64 + r24.u64;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec1b20
	if (!cr0.gt) goto loc_82EC1B20;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
loc_82EC1AD0:
	// lwz r27,-8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82ec1afc
	if (cr6.eq) goto loc_82EC1AFC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stwx r3,r27,r28
	PPC_STORE_U32(r27.u32 + r28.u32, ctx.r3.u32);
loc_82EC1AFC:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r26,r26,3
	r26.s64 = r26.s64 + 3;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r26,r7
	cr6.compare<int32_t>(r26.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ec1ad0
	if (cr6.lt) goto loc_82EC1AD0;
loc_82EC1B20:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,48
	r24.s64 = r24.s64 + 48;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(r23.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec1a90
	if (cr6.lt) goto loc_82EC1A90;
loc_82EC1B3C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bge cr6,0x82ec2070
	if (!cr6.lt) goto loc_82EC2070;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ebfda0
	sub_82EBFDA0(ctx, base);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82ec2038
	if (!cr6.gt) goto loc_82EC2038;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// ble cr6,0x82ec1b98
	if (!cr6.gt) goto loc_82EC1B98;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC1B98:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82ec1be0
	if (!cr6.gt) goto loc_82EC1BE0;
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// addi r8,r8,-8440
	ctx.r8.s64 = ctx.r8.s64 + -8440;
loc_82EC1BB8:
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x82ec1bb8
	if (cr6.lt) goto loc_82EC1BB8;
loc_82EC1BE0:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r19.u32);
	// addi r8,r10,11680
	ctx.r8.s64 = ctx.r10.s64 + 11680;
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r19.u32);
	// sth r9,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, ctx.r9.u16);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r19.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// stw r29,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r29.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lis r31,-31943
	r31.s64 = -2093416448;
	// li r27,-1
	r27.s64 = -1;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r27.u32);
	// addi r29,r11,31504
	r29.s64 = r11.s64 + 31504;
	// lwz r10,31528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 31528);
	// clrlwi r7,r10,31
	ctx.r7.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ec1c6c
	if (!cr6.eq) goto loc_82EC1C6C;
	// ori r11,r10,1
	r11.u64 = ctx.r10.u64 | 1;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r11,31528(r31)
	PPC_STORE_U32(r31.u32 + 31528, r11.u32);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// addi r6,r10,11716
	ctx.r6.s64 = ctx.r10.s64 + 11716;
	// addi r4,r9,-10980
	ctx.r4.s64 = ctx.r9.s64 + -10980;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x82ec49f0
	sub_82EC49F0(ctx, base);
	// lis r8,-31963
	ctx.r8.s64 = -2094727168;
	// addi r3,r8,-21952
	ctx.r3.s64 = ctx.r8.s64 + -21952;
	// bl 0x831b0e98
	sub_831B0E98(ctx, base);
	// lwz r10,31528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 31528);
loc_82EC1C6C:
	// lis r11,3833
	r11.s64 = 251199488;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r9,-31949
	ctx.r9.s64 = -2093809664;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r19.u32);
	// ori r11,r11,1398
	r11.u64 = r11.u64 | 1398;
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r19.u32);
	// addi r9,r9,-11020
	ctx.r9.s64 = ctx.r9.s64 + -11020;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bge cr6,0x82ec1cb8
	if (!cr6.lt) goto loc_82EC1CB8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_82EC1CB8:
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r5,r11,31488
	ctx.r5.s64 = r11.s64 + 31488;
	// bne cr6,0x82ec1cec
	if (!cr6.eq) goto loc_82EC1CEC;
	// ori r11,r10,2
	r11.u64 = ctx.r10.u64 | 2;
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stw r29,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r29.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// stw r11,31528(r31)
	PPC_STORE_U32(r31.u32 + 31528, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
loc_82EC1CEC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ebd688
	sub_82EBD688(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r18,0(r13)
	r18.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r17,20
	r17.s64 = 20;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r28,r10,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r4,r28,48
	ctx.r4.s64 = r28.s64 + 48;
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ec1d54
	if (!cr6.eq) goto loc_82EC1D54;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC1D54:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// addi r4,r7,11624
	ctx.r4.s64 = ctx.r7.s64 + 11624;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// add r31,r28,r11
	r31.u64 = r28.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2920
	sub_82EB2920(ctx, base);
	// stb r19,19(r31)
	PPC_STORE_U8(r31.u32 + 19, r19.u8);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// addi r25,r30,36
	r25.s64 = r30.s64 + 36;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r4,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r4.u32);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// clrlwi r6,r7,2
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// bne cr6,0x82ec1e0c
	if (!cr6.eq) goto loc_82EC1E0C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC1E0C:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r7.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
	// clrlwi r11,r6,2
	r11.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// lwz r31,128(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// add r28,r10,r31
	r28.u64 = ctx.r10.u64 + r31.u64;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82ec1e74
	if (!cr6.lt) goto loc_82EC1E74;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ec1e64
	if (cr6.lt) goto loc_82EC1E64;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82EC1E64:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC1E74:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r19
	r31.u64 = r19.u64;
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ec1ed8
	if (!cr6.gt) goto loc_82EC1ED8;
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82EC1E9C:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(r31.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ec1e9c
	if (cr6.lt) goto loc_82EC1E9C;
loc_82EC1ED8:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r21,r19
	r21.u64 = r19.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec1fd4
	if (!cr6.gt) goto loc_82EC1FD4;
	// mr r23,r19
	r23.u64 = r19.u64;
	// mr r24,r19
	r24.u64 = r19.u64;
	// li r22,-1
	r22.s64 = -1;
loc_82EC1EF8:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r26,r19
	r26.u64 = r19.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// add r29,r24,r11
	r29.u64 = r24.u64 + r11.u64;
	// lwzx r28,r10,r23
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble 0x82ec1fb8
	if (!cr0.gt) goto loc_82EC1FB8;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
loc_82EC1F2C:
	// lwz r27,-8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82ec1f94
	if (cr6.eq) goto loc_82EC1F94;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ec1f94
	if (cr6.eq) goto loc_82EC1F94;
	// stw r20,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r20.u32);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// stwx r5,r27,r28
	PPC_STORE_U32(r27.u32 + r28.u32, ctx.r5.u32);
loc_82EC1F94:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r26,r26,3
	r26.s64 = r26.s64 + 3;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpw cr6,r26,r7
	cr6.compare<int32_t>(r26.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ec1f2c
	if (cr6.lt) goto loc_82EC1F2C;
loc_82EC1FB8:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r24,r24,48
	r24.s64 = r24.s64 + 48;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r21,r10
	cr6.compare<int32_t>(r21.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec1ef8
	if (cr6.lt) goto loc_82EC1EF8;
loc_82EC1FD4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec2008
	if (!cr6.eq) goto loc_82EC2008;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2008:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// addi r8,r10,-22012
	ctx.r8.s64 = ctx.r10.s64 + -22012;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// bne cr6,0x82ec2038
	if (!cr6.eq) goto loc_82EC2038;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r17,r18
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + r18.u32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2038:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec2070
	if (!cr6.eq) goto loc_82EC2070;
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r11,r11,1,1,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,20
	ctx.r8.s64 = 20;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2070:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82EC2080"))) PPC_WEAK_FUNC(sub_82EC2080);
PPC_FUNC_IMPL(__imp__sub_82EC2080) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82ec0038
	sub_82EC0038(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec211c
	if (!cr6.eq) goto loc_82EC211C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec0170
	sub_82EC0170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec211c
	if (!cr6.eq) goto loc_82EC211C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec2100
	if (!cr6.gt) goto loc_82EC2100;
loc_82EC20D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec1118
	sub_82EC1118(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ec211c
	if (cr6.eq) goto loc_82EC211C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec20d0
	if (cr6.lt) goto loc_82EC20D0;
loc_82EC2100:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec1a60
	sub_82EC1A60(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EC211C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC2128"))) PPC_WEAK_FUNC(sub_82EC2128);
PPC_FUNC_IMPL(__imp__sub_82EC2128) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb2a68
	sub_82EB2A68(ctx, base);
	// lis r11,22496
	r11.s64 = 1474297856;
	// lis r10,4288
	ctx.r10.s64 = 281018368;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// ori r11,r11,57431
	r11.u64 = r11.u64 | 57431;
	// ori r10,r10,49168
	ctx.r10.u64 = ctx.r10.u64 | 49168;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// bne cr6,0x82ec2388
	if (!cr6.eq) goto loc_82EC2388;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82ec2388
	if (!cr6.eq) goto loc_82EC2388;
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// addi r4,r28,40
	ctx.r4.s64 = r28.s64 + 40;
	// lbz r11,40(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 40);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x82ec21c8
	if (!cr6.eq) goto loc_82EC21C8;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ec21b0
	if (!cr6.eq) goto loc_82EC21B0;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,11440
	ctx.r4.s64 = r11.s64 + 11440;
	// b 0x82ec21c8
	goto loc_82EC21C8;
loc_82EC21B0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82ec21c4
	if (!cr6.eq) goto loc_82EC21C4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,11428
	ctx.r4.s64 = r11.s64 + 11428;
	// b 0x82ec21c8
	goto loc_82EC21C8;
loc_82EC21C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82EC21C8:
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
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r28,64
	r11.s64 = r28.s64 + 64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt cr6,0x82ec21f4
	if (cr6.gt) goto loc_82EC21F4;
	// li r11,0
	r11.s64 = 0;
loc_82EC21F4:
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// bge cr6,0x82ec222c
	if (!cr6.lt) goto loc_82EC222C;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec222c
	if (!cr6.gt) goto loc_82EC222C;
	// addi r11,r11,44
	r11.s64 = r11.s64 + 44;
loc_82EC2214:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bne 0x82ec2214
	if (!cr0.eq) goto loc_82EC2214;
loc_82EC222C:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r30,36
	r29.s64 = r30.s64 + 36;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// clrlwi r11,r9,2
	r11.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// lwz r31,20(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ec2268
	if (!cr6.lt) goto loc_82EC2268;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec2258
	if (cr6.lt) goto loc_82EC2258;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EC2258:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC2268:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec231c
	if (!cr6.gt) goto loc_82EC231C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82EC2288:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// srawi r7,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addze. r10,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82ec22f8
	if (!cr0.gt) goto loc_82EC22F8;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82EC22BC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x82ec22d4
	if (cr6.eq) goto loc_82EC22D4;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
loc_82EC22D4:
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// addze r8,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r8.s64 = temp.s64;
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ec22bc
	if (cr6.lt) goto loc_82EC22BC;
loc_82EC22F8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// stwx r9,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, ctx.r9.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ec2288
	if (cr6.lt) goto loc_82EC2288;
loc_82EC231C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r31,32(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82ec2378
	if (cr6.lt) goto loc_82EC2378;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82ec2378
	if (cr6.lt) goto loc_82EC2378;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x82ec2378
	if (!cr6.lt) goto loc_82EC2378;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// subf r5,r6,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r6.s64;
	// stw r5,36(r7)
	PPC_STORE_U32(ctx.r7.u32 + 36, ctx.r5.u32);
loc_82EC2378:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec1a60
	sub_82EC1A60(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
loc_82EC2388:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC2398"))) PPC_WEAK_FUNC(sub_82EC2398);
PPC_FUNC_IMPL(__imp__sub_82EC2398) {
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
	// bl 0x82ec8a10
	sub_82EC8A10(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec23e0
	if (cr6.eq) goto loc_82EC23E0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC23E0:
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

__attribute__((alias("__imp__sub_82EC2400"))) PPC_WEAK_FUNC(sub_82EC2400);
PPC_FUNC_IMPL(__imp__sub_82EC2400) {
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
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r30,r31,52
	r30.s64 = r31.s64 + 52;
	// stw r4,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
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

__attribute__((alias("__imp__sub_82EC2460"))) PPC_WEAK_FUNC(sub_82EC2460);
PPC_FUNC_IMPL(__imp__sub_82EC2460) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,11408
	ctx.r9.s64 = r11.s64 + 11408;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82ec24a8
	if (cr6.eq) goto loc_82EC24A8;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82EC24A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC24C0"))) PPC_WEAK_FUNC(sub_82EC24C0);
PPC_FUNC_IMPL(__imp__sub_82EC24C0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,11408
	ctx.r9.s64 = r11.s64 + 11408;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82ec24f4
	if (cr6.eq) goto loc_82EC24F4;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82EC24F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC2508"))) PPC_WEAK_FUNC(sub_82EC2508);
PPC_FUNC_IMPL(__imp__sub_82EC2508) {
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
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r3,28
	r31.s64 = ctx.r3.s64 + 28;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec2544
	if (!cr6.eq) goto loc_82EC2544;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC2544:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC2578"))) PPC_WEAK_FUNC(sub_82EC2578);
PPC_FUNC_IMPL(__imp__sub_82EC2578) {
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
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec25c0
	if (!cr6.eq) goto loc_82EC25C0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC25C0:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec261c
	if (cr6.eq) goto loc_82EC261C;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ec2600
	if (cr6.lt) goto loc_82EC2600;
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82ec261c
	goto loc_82EC261C;
loc_82EC2600:
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// addi r10,r11,72
	ctx.r10.s64 = r11.s64 + 72;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,72(r11)
	PPC_STORE_U32(r11.u32 + 72, r31.u32);
loc_82EC261C:
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

__attribute__((alias("__imp__sub_82EC2638"))) PPC_WEAK_FUNC(sub_82EC2638);
PPC_FUNC_IMPL(__imp__sub_82EC2638) {
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
	// addi r31,r30,20
	r31.s64 = r30.s64 + 20;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec2688
	if (!cr6.eq) goto loc_82EC2688;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2688:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC26B0"))) PPC_WEAK_FUNC(sub_82EC26B0);
PPC_FUNC_IMPL(__imp__sub_82EC26B0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,11640
	ctx.r9.s64 = r11.s64 + 11640;
	// li r30,0
	r30.s64 = 0;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r7,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ec2734
	if (cr6.eq) goto loc_82EC2734;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// sth r9,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r9.u16);
loc_82EC2734:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC2750"))) PPC_WEAK_FUNC(sub_82EC2750);
PPC_FUNC_IMPL(__imp__sub_82EC2750) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC2758"))) PPC_WEAK_FUNC(sub_82EC2758);
PPC_FUNC_IMPL(__imp__sub_82EC2758) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// b 0x82eb46d8
	sub_82EB46D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC2760"))) PPC_WEAK_FUNC(sub_82EC2760);
PPC_FUNC_IMPL(__imp__sub_82EC2760) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ec279c
	if (cr6.eq) goto loc_82EC279C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x82ec27cc
	goto loc_82EC27CC;
loc_82EC279C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// bne cr6,0x82ec27bc
	if (!cr6.eq) goto loc_82EC27BC;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC27BC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82EC27CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC27E8"))) PPC_WEAK_FUNC(sub_82EC27E8);
PPC_FUNC_IMPL(__imp__sub_82EC27E8) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ec2828
	if (!cr6.eq) goto loc_82EC2828;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC2828:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC2860"))) PPC_WEAK_FUNC(sub_82EC2860);
PPC_FUNC_IMPL(__imp__sub_82EC2860) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r31,r11,40
	r31.s64 = r11.s64 + 40;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ec28a0
	if (!cr6.eq) goto loc_82EC28A0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC28A0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC28D8"))) PPC_WEAK_FUNC(sub_82EC28D8);
PPC_FUNC_IMPL(__imp__sub_82EC28D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ec2920
	if (cr6.eq) goto loc_82EC2920;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC2920:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82ec294c
	if (cr6.eq) goto loc_82EC294C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82EC292C:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82ec292c
	if (!cr6.eq) goto loc_82EC292C;
loc_82EC294C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec2994
	if (!cr6.gt) goto loc_82EC2994;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EC2964:
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, xer);
	// bne cr6,0x82ec297c
	if (!cr6.eq) goto loc_82EC297C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_82EC297C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ec2964
	if (cr6.lt) goto loc_82EC2964;
loc_82EC2994:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ec29d8
	if (cr6.eq) goto loc_82EC29D8;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC29D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC29E0"))) PPC_WEAK_FUNC(sub_82EC29E0);
PPC_FUNC_IMPL(__imp__sub_82EC29E0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r28,r30,3,0,28
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82ec2a28
	if (cr6.eq) goto loc_82EC2A28;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// b 0x82ec2ab0
	goto loc_82EC2AB0;
loc_82EC2A28:
	// addi r31,r29,12
	r31.s64 = r29.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r10
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x82ec2a90
	if (cr6.eq) goto loc_82EC2A90;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + r28.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r6,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r6.u32);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, r30.u32);
	// b 0x82ec2ab0
	goto loc_82EC2AB0;
loc_82EC2A90:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,-1
	r30.s64 = -1;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
loc_82EC2AB0:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r8.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC2AD8"))) PPC_WEAK_FUNC(sub_82EC2AD8);
PPC_FUNC_IMPL(__imp__sub_82EC2AD8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,-1
	r30.s64 = -1;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec2b58
	if (cr6.eq) goto loc_82EC2B58;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82ec2b58
	if (cr6.eq) goto loc_82EC2B58;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r3,r28,12
	ctx.r3.s64 = r28.s64 + 12;
loc_82EC2B24:
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x82ec2b48
	if (cr6.eq) goto loc_82EC2B48;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82ec2b24
	if (!cr6.eq) goto loc_82EC2B24;
	// b 0x82ec2b58
	goto loc_82EC2B58;
loc_82EC2B48:
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// beq cr6,0x82ec2bac
	if (cr6.eq) goto loc_82EC2BAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ec29e0
	sub_82EC29E0(ctx, base);
loc_82EC2B58:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ec2ba8
	if (cr6.eq) goto loc_82EC2BA8;
	// addi r31,r28,12
	r31.s64 = r28.s64 + 12;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec2760
	sub_82EC2760(ctx, base);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC2BA8:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_82EC2BAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC2BB8"))) PPC_WEAK_FUNC(sub_82EC2BB8);
PPC_FUNC_IMPL(__imp__sub_82EC2BB8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,11640
	ctx.r10.s64 = r11.s64 + 11640;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec2c18
	if (cr6.eq) goto loc_82EC2C18;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ec2c18
	if (!cr6.eq) goto loc_82EC2C18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC2C18:
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec2c58
	if (!cr6.eq) goto loc_82EC2C58;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2C58:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC2C80"))) PPC_WEAK_FUNC(sub_82EC2C80);
PPC_FUNC_IMPL(__imp__sub_82EC2C80) {
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
	// bl 0x82ec2bb8
	sub_82EC2BB8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec2cc8
	if (cr6.eq) goto loc_82EC2CC8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2CC8:
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

__attribute__((alias("__imp__sub_82EC2CE8"))) PPC_WEAK_FUNC(sub_82EC2CE8);
PPC_FUNC_IMPL(__imp__sub_82EC2CE8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r31,r11,40
	r31.s64 = r11.s64 + 40;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ec2d2c
	if (!cr6.eq) goto loc_82EC2D2C;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC2D2C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r28.u32);
	// stw r27,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r27.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC2D70"))) PPC_WEAK_FUNC(sub_82EC2D70);
PPC_FUNC_IMPL(__imp__sub_82EC2D70) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec2db0
	if (cr6.eq) goto loc_82EC2DB0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC2DB0:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x82ec2ddc
	if (cr6.eq) goto loc_82EC2DDC;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
loc_82EC2DBC:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x82ec2dbc
	if (!cr6.eq) goto loc_82EC2DBC;
loc_82EC2DDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC2DE8"))) PPC_WEAK_FUNC(sub_82EC2DE8);
PPC_FUNC_IMPL(__imp__sub_82EC2DE8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,-1
	r30.s64 = -1;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec2e68
	if (cr6.eq) goto loc_82EC2E68;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,32
	ctx.r3.s64 = r28.s64 + 32;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82ec2e68
	if (cr6.eq) goto loc_82EC2E68;
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
loc_82EC2E34:
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x82ec2e58
	if (cr6.eq) goto loc_82EC2E58;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82ec2e34
	if (!cr6.eq) goto loc_82EC2E34;
	// b 0x82ec2e68
	goto loc_82EC2E68;
loc_82EC2E58:
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// beq cr6,0x82ec2ebc
	if (cr6.eq) goto loc_82EC2EBC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ec29e0
	sub_82EC29E0(ctx, base);
loc_82EC2E68:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ec2eb8
	if (cr6.eq) goto loc_82EC2EB8;
	// addi r31,r28,20
	r31.s64 = r28.s64 + 20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec2760
	sub_82EC2760(ctx, base);
	// lwz r10,20(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC2EB8:
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
loc_82EC2EBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC2EC8"))) PPC_WEAK_FUNC(sub_82EC2EC8);
PPC_FUNC_IMPL(__imp__sub_82EC2EC8) {
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
	// bl 0x82ec2638
	sub_82EC2638(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec2f10
	if (cr6.eq) goto loc_82EC2F10;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2F10:
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

__attribute__((alias("__imp__sub_82EC2F30"))) PPC_WEAK_FUNC(sub_82EC2F30);
PPC_FUNC_IMPL(__imp__sub_82EC2F30) {
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
	// bl 0x82ec0798
	sub_82EC0798(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec2f78
	if (cr6.eq) goto loc_82EC2F78;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,6
	ctx.r6.s64 = 6;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC2F78:
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

__attribute__((alias("__imp__sub_82EC2F98"))) PPC_WEAK_FUNC(sub_82EC2F98);
PPC_FUNC_IMPL(__imp__sub_82EC2F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EC2FB8"))) PPC_WEAK_FUNC(sub_82EC2FB8);
PPC_FUNC_IMPL(__imp__sub_82EC2FB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC2FC0"))) PPC_WEAK_FUNC(sub_82EC2FC0);
PPC_FUNC_IMPL(__imp__sub_82EC2FC0) {
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
	// lis r11,-31949
	r11.s64 = -2093809664;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-10972
	r30.s64 = r11.s64 + -10972;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,-10972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10972);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec3028
	if (cr6.eq) goto loc_82EC3028;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EC2FEC:
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2730
	sub_82EB2730(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec3034
	if (cr6.eq) goto loc_82EC3034;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec2fec
	if (!cr6.eq) goto loc_82EC2FEC;
loc_82EC3028:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EC3034:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC3040"))) PPC_WEAK_FUNC(sub_82EC3040);
PPC_FUNC_IMPL(__imp__sub_82EC3040) {
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
	// beq cr6,0x82ec30bc
	if (cr6.eq) goto loc_82EC30BC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r11,3604
	ctx.r4.s64 = r11.s64 + 3604;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec30bc
	if (cr6.eq) goto loc_82EC30BC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3236
	ctx.r4.s64 = r11.s64 + 3236;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec30bc
	if (cr6.eq) goto loc_82EC30BC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3380
	ctx.r4.s64 = r11.s64 + 3380;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec30bc
	if (cr6.eq) goto loc_82EC30BC;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3364
	ctx.r4.s64 = r11.s64 + 3364;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82ec30c0
	if (!cr6.eq) goto loc_82EC30C0;
loc_82EC30BC:
	// li r11,0
	r11.s64 = 0;
loc_82EC30C0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC30D8"))) PPC_WEAK_FUNC(sub_82EC30D8);
PPC_FUNC_IMPL(__imp__sub_82EC30D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC30E0"))) PPC_WEAK_FUNC(sub_82EC30E0);
PPC_FUNC_IMPL(__imp__sub_82EC30E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC30E8"))) PPC_WEAK_FUNC(sub_82EC30E8);
PPC_FUNC_IMPL(__imp__sub_82EC30E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC30F0"))) PPC_WEAK_FUNC(sub_82EC30F0);
PPC_FUNC_IMPL(__imp__sub_82EC30F0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,11792
	ctx.r4.s64 = r11.s64 + 11792;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec3180
	if (cr6.eq) goto loc_82EC3180;
	// bl 0x82eb2978
	sub_82EB2978(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ec3180
	if (cr6.eq) goto loc_82EC3180;
	// ble cr6,0x82ec3174
	if (!cr6.gt) goto loc_82EC3174;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bgt cr6,0x82ec3174
	if (cr6.gt) goto loc_82EC3174;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,11776
	ctx.r4.s64 = r11.s64 + 11776;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec3188
	if (!cr6.eq) goto loc_82EC3188;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,11428
	ctx.r3.s64 = r11.s64 + 11428;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EC3174:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EC3180:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r11,11440
	ctx.r3.s64 = r11.s64 + 11440;
loc_82EC3188:
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC31A0"))) PPC_WEAK_FUNC(sub_82EC31A0);
PPC_FUNC_IMPL(__imp__sub_82EC31A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EC31B8"))) PPC_WEAK_FUNC(sub_82EC31B8);
PPC_FUNC_IMPL(__imp__sub_82EC31B8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82ec3290
	if (!cr6.eq) goto loc_82EC3290;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83205020
	sub_83205020(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec3290
	if (cr6.eq) goto loc_82EC3290;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83205178
	sub_83205178(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r6,r27,8
	ctx.r6.s64 = r27.s64 + 8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82ec8dc0
	sub_82EC8DC0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ec6060
	sub_82EC6060(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ec66c8
	sub_82EC66C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC3290:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EC32A0"))) PPC_WEAK_FUNC(sub_82EC32A0);
PPC_FUNC_IMPL(__imp__sub_82EC32A0) {
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82ec9120
	sub_82EC9120(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82ec8760
	sub_82EC8760(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec3398
	if (!cr6.eq) goto loc_82EC3398;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ec335c
	if (cr6.eq) goto loc_82EC335C;
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec335c
	if (!cr6.gt) goto loc_82EC335C;
	// li r31,0
	r31.s64 = 0;
	// li r26,1
	r26.s64 = 1;
loc_82EC32EC:
	// lwz r30,56(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ec3348
	if (cr6.eq) goto loc_82EC3348;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ec3348
	if (cr6.eq) goto loc_82EC3348;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r26,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r26.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC3348:
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82ec32ec
	if (cr6.lt) goto loc_82EC32EC;
loc_82EC335C:
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82ec3398
	if (cr6.eq) goto loc_82EC3398;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec3398
	if (cr6.eq) goto loc_82EC3398;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_82EC3398:
	// lwz r11,68(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 68);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EC33A8"))) PPC_WEAK_FUNC(sub_82EC33A8);
PPC_FUNC_IMPL(__imp__sub_82EC33A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// lwz r4,52(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// b 0x82eb4028
	sub_82EB4028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC33C0"))) PPC_WEAK_FUNC(sub_82EC33C0);
PPC_FUNC_IMPL(__imp__sub_82EC33C0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,11828
	ctx.r10.s64 = r11.s64 + 11828;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec3400
	if (cr6.eq) goto loc_82EC3400;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC3400:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec343c
	if (cr6.eq) goto loc_82EC343C;
	// lhz r11,6(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ec343c
	if (!cr6.eq) goto loc_82EC343C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC343C:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec3468
	if (!cr6.eq) goto loc_82EC3468;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC3468:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec349c
	if (!cr6.eq) goto loc_82EC349C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC349C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec8e68
	sub_82EC8E68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC34B8"))) PPC_WEAK_FUNC(sub_82EC34B8);
PPC_FUNC_IMPL(__imp__sub_82EC34B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// bl 0x83205020
	sub_83205020(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec355c
	if (cr6.eq) goto loc_82EC355C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r9,68(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82ec3544
	if (cr6.eq) goto loc_82EC3544;
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
loc_82EC3524:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82ec3524
	if (!cr6.eq) goto loc_82EC3524;
loc_82EC3544:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83205178
	sub_83205178(ctx, base);
loc_82EC355C:
	// lwz r11,28(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec358c
	if (cr6.eq) goto loc_82EC358C;
	// lwz r3,68(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// lwz r10,24(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC358C:
	// lwz r11,40(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 40);
	// li r21,0
	r21.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec3698
	if (!cr6.gt) goto loc_82EC3698;
	// li r22,0
	r22.s64 = 0;
	// li r23,-1
	r23.s64 = -1;
loc_82EC35A4:
	// lwz r11,36(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 36);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// add r30,r22,r11
	r30.u64 = r22.u64 + r11.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x832050f0
	sub_832050F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec35e8
	if (!cr6.eq) goto loc_82EC35E8;
	// lwz r3,68(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ec3684
	goto loc_82EC3684;
loc_82EC35E8:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// lwz r11,68(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 68);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,12
	r31.s64 = r11.s64 + 12;
	// add r27,r10,r25
	r27.u64 = ctx.r10.u64 + r25.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82ec3634
	if (cr6.eq) goto loc_82EC3634;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r11
	r29.u64 = r11.u64;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x82ec3660
	goto loc_82EC3660;
loc_82EC3634:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// bne cr6,0x82ec3654
	if (!cr6.eq) goto loc_82EC3654;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC3654:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82EC3660:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
loc_82EC3684:
	// lwz r11,40(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 40);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,8
	r22.s64 = r22.s64 + 8;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// blt cr6,0x82ec35a4
	if (cr6.lt) goto loc_82EC35A4;
loc_82EC3698:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82EC36A0"))) PPC_WEAK_FUNC(sub_82EC36A0);
PPC_FUNC_IMPL(__imp__sub_82EC36A0) {
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
	// bl 0x82ec8e18
	sub_82EC8E18(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r29,0
	r29.s64 = 0;
	// addi r9,r10,11828
	ctx.r9.s64 = ctx.r10.s64 + 11828;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r28,r30,40
	r28.s64 = r30.s64 + 40;
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r27.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r27,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r27.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// clrlwi r6,r7,2
	ctx.r6.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// bne cr6,0x82ec371c
	if (!cr6.eq) goto loc_82EC371C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC371C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,11500
	ctx.r7.s64 = ctx.r10.s64 + 11500;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,20
	r29.s64 = 20;
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,76
	ctx.r4.s64 = 76;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r10,76
	ctx.r10.s64 = 76;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// bl 0x82ec8890
	sub_82EC8890(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// lwzx r3,r29,r31
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,56
	ctx.r9.s64 = 56;
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82ec26b0
	sub_82EC26B0(ctx, base);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r7,r8,11904
	ctx.r7.s64 = ctx.r8.s64 + 11904;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC37C8"))) PPC_WEAK_FUNC(sub_82EC37C8);
PPC_FUNC_IMPL(__imp__sub_82EC37C8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r15,0(r13)
	r15.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,20
	r11.s64 = 20;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwzx r3,r11,r15
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r15.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r29,1220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1220, r29.u32);
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r15.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r10,r11,16400
	ctx.r10.s64 = r11.s64 + 16400;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ec3824
	if (cr6.gt) goto loc_82EC3824;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ec383c
	goto loc_82EC383C;
loc_82EC3824:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,16400
	ctx.r4.s64 = 16400;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EC383C:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r9,r10,16384
	ctx.r9.u64 = ctx.r10.u64 | 16384;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r24,r25
	r24.u64 = r25.u64;
	// bl 0x83205f00
	sub_83205F00(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82eca8b0
	sub_82ECA8B0(ctx, base);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// li r30,1
	r30.s64 = 1;
	// stw r25,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r25.u32);
	// addi r7,r8,11752
	ctx.r7.s64 = ctx.r8.s64 + 11752;
	// stw r25,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r25.u32);
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r30.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ecc3b0
	sub_82ECC3B0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// addi r4,r5,11812
	ctx.r4.s64 = ctx.r5.s64 + 11812;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r25.u32);
	// stb r25,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r25.u8);
	// stw r4,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r4.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r25.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r25.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// stw r25,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r25.u32);
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r25.u32);
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r31.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r25.u32);
	// sth r30,470(r1)
	PPC_STORE_U16(ctx.r1.u32 + 470, r30.u16);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r25,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r25.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r25,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r25.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r25,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r25.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82ec9408
	sub_82EC9408(ctx, base);
	// lis r8,-31932
	ctx.r8.s64 = -2092695552;
	// addi r31,r8,-8200
	r31.s64 = ctx.r8.s64 + -8200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// lis r7,-31932
	ctx.r7.s64 = -2092695552;
	// addi r31,r7,-8008
	r31.s64 = ctx.r7.s64 + -8008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,12028
	ctx.r4.s64 = ctx.r6.s64 + 12028;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r16,r30
	r16.u64 = r30.u64;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82ec47d8
	sub_82EC47D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec4178
	if (!cr6.eq) goto loc_82EC4178;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// lis r9,-31932
	ctx.r9.s64 = -2092695552;
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// lis r4,-32238
	ctx.r4.s64 = -2112749568;
	// addi r14,r8,30252
	r14.s64 = ctx.r8.s64 + 30252;
	// lis r3,-32238
	ctx.r3.s64 = -2112749568;
	// addi r9,r9,-8152
	ctx.r9.s64 = ctx.r9.s64 + -8152;
	// stw r14,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r14.u32);
	// addi r8,r7,30300
	ctx.r8.s64 = ctx.r7.s64 + 30300;
	// addi r7,r6,12016
	ctx.r7.s64 = ctx.r6.s64 + 12016;
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// lis r30,-32242
	r30.s64 = -2113011712;
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// lis r27,-32238
	r27.s64 = -2112749568;
	// stw r7,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r7.u32);
	// addi r6,r4,11500
	ctx.r6.s64 = ctx.r4.s64 + 11500;
	// addi r4,r3,12004
	ctx.r4.s64 = ctx.r3.s64 + 12004;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r6,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r6.u32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r4,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r4.u32);
	// lis r5,-32238
	ctx.r5.s64 = -2112749568;
	// lis r31,-32238
	r31.s64 = -2112749568;
	// lis r29,-32249
	r29.s64 = -2113470464;
	// lis r28,-32240
	r28.s64 = -2112880640;
	// addi r3,r30,11732
	ctx.r3.s64 = r30.s64 + 11732;
	// addi r9,r27,11888
	ctx.r9.s64 = r27.s64 + 11888;
	// lis r17,-31943
	r17.s64 = -2093416448;
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// addi r20,r11,11964
	r20.s64 = r11.s64 + 11964;
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// addi r19,r10,11940
	r19.s64 = ctx.r10.s64 + 11940;
	// addi r18,r5,11624
	r18.s64 = ctx.r5.s64 + 11624;
	// addi r22,r31,3604
	r22.s64 = r31.s64 + 3604;
	// addi r23,r29,20608
	r23.s64 = r29.s64 + 20608;
	// addi r21,r28,-2088
	r21.s64 = r28.s64 + -2088;
loc_82EC3A40:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ec4018
	if (!cr6.eq) goto loc_82EC4018;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec3e00
	if (!cr6.eq) goto loc_82EC3E00;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ec31b8
	sub_82EC31B8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x832050f0
	sub_832050F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec3ae8
	if (!cr6.eq) goto loc_82EC3AE8;
	// lwz r27,304(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// b 0x82ec3b08
	goto loc_82EC3B08;
loc_82EC3AE8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r27,r30
	r27.u64 = r30.u64;
loc_82EC3B08:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ec3b74
	if (cr6.eq) goto loc_82EC3B74;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,28
	r31.s64 = r11.s64 + 28;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ec3b58
	if (!cr6.eq) goto loc_82EC3B58;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC3B58:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
loc_82EC3B74:
	// lwz r10,384(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ec3ba8
	if (cr6.eq) goto loc_82EC3BA8;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ec3b98
	if (!cr6.eq) goto loc_82EC3B98;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// b 0x82ec3ba4
	goto loc_82EC3BA4;
loc_82EC3B98:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82ec3ba8
	if (!cr6.eq) goto loc_82EC3BA8;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
loc_82EC3BA4:
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
loc_82EC3BA8:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82eca448
	sub_82ECA448(ctx, base);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ece418
	sub_82ECE418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec42fc
	if (!cr6.eq) goto loc_82EC42FC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec3c70
	if (!cr6.eq) goto loc_82EC3C70;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ec6720
	sub_82EC6720(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r1,152
	r31.s64 = ctx.r1.s64 + 152;
	// addi r15,r1,288
	r15.s64 = ctx.r1.s64 + 288;
	// addi r14,r1,400
	r14.s64 = ctx.r1.s64 + 400;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x82ec31b8
	sub_82EC31B8(ctx, base);
	// lwz r15,116(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec3c70
	if (cr6.eq) goto loc_82EC3C70;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r25.u32);
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r25.u32);
	// b 0x82ec3ce4
	goto loc_82EC3CE4;
loc_82EC3C70:
	// li r11,20
	r11.s64 = 20;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwzx r3,r11,r15
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r15.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ec6720
	sub_82EC6720(ctx, base);
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// addi r30,r11,28
	r30.s64 = r11.s64 + 28;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ec3cc8
	if (!cr6.eq) goto loc_82EC3CC8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC3CC8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
loc_82EC3CE4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ec3cfc
	if (cr6.eq) goto loc_82EC3CFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ec8d00
	sub_82EC8D00(ctx, base);
loc_82EC3CFC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ec34b8
	sub_82EC34B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec3d5c
	if (!cr6.eq) goto loc_82EC3D5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// b 0x82ec3de8
	goto loc_82EC3DE8;
loc_82EC3D5C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// bl 0x82ec3040
	sub_82EC3040(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec3de8
	if (cr6.eq) goto loc_82EC3DE8;
	// lwz r11,64(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 64);
	// addi r30,r26,56
	r30.s64 = r26.s64 + 56;
	// lwz r10,60(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 60);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec3d98
	if (!cr6.eq) goto loc_82EC3D98;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC3D98:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// bne cr6,0x82ec3de8
	if (!cr6.eq) goto loc_82EC3DE8;
	// lwz r11,68(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ec3de8
	if (!cr6.eq) goto loc_82EC3DE8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,68(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// bl 0x82ec2400
	sub_82EC2400(ctx, base);
loc_82EC3DE8:
	// lwz r14,236(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r25.u32);
	// stw r25,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r25.u32);
	// stw r25,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r25.u32);
	// b 0x82ec413c
	goto loc_82EC413C;
loc_82EC3E00:
	// lwz r4,312(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec3f24
	if (!cr6.eq) goto loc_82EC3F24;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r5,336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82ec2fc0
	sub_82EC2FC0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec3e80
	if (cr6.eq) goto loc_82EC3E80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r10,392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r11.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r7.u32);
loc_82EC3E80:
	// addi r29,r26,40
	r29.s64 = r26.s64 + 40;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x832050f0
	sub_832050F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec3ea4
	if (!cr6.eq) goto loc_82EC3EA4;
	// lwz r24,240(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// b 0x82ec413c
	goto loc_82EC413C;
loc_82EC3EA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r24,32(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// lwz r10,32(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// addi r31,r26,28
	r31.s64 = r26.s64 + 28;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec3ee4
	if (!cr6.eq) goto loc_82EC3EE4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC3EE4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// b 0x82ec413c
	goto loc_82EC413C;
loc_82EC3F24:
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec43a8
	if (!cr6.eq) goto loc_82EC43A8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec30f0
	sub_82EC30F0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,20
	r11.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r11,r15
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r15.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r16,144(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r16,5
	cr6.compare<int32_t>(r16.s32, 5, xer);
	// blt cr6,0x82ec3fb0
	if (cr6.lt) goto loc_82EC3FB0;
	// lwz r31,228(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// b 0x82ec3fc8
	goto loc_82EC3FC8;
loc_82EC3FB0:
	// cmpwi cr6,r16,2
	cr6.compare<int32_t>(r16.s32, 2, xer);
	// blt cr6,0x82ec3fd4
	if (cr6.lt) goto loc_82EC3FD4;
	// lwz r31,308(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82EC3FC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,412
	ctx.r3.s64 = ctx.r1.s64 + 412;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
loc_82EC3FD4:
	// lwz r11,1220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec413c
	if (!cr6.eq) goto loc_82EC413C;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r31,31484(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 31484);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ebb0d8
	sub_82EBB0D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82ec92f0
	sub_82EC92F0(ctx, base);
	// b 0x82ec413c
	goto loc_82EC413C;
loc_82EC4018:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82ec4140
	if (cr6.eq) goto loc_82EC4140;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82ec40ec
	if (!cr6.eq) goto loc_82EC40EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eca6e0
	sub_82ECA6E0(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x82ec413c
	if (!cr0.gt) goto loc_82EC413C;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82ec9260
	sub_82EC9260(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ec4538
	sub_82EC4538(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ec67a0
	sub_82EC67A0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ecbed8
	sub_82ECBED8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82eca920
	sub_82ECA920(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83205f40
	sub_83205F40(ctx, base);
	// li r31,20
	r31.s64 = 20;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ec40bc
	if (!cr6.eq) goto loc_82EC40BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC40BC:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec439c
	if (!cr6.eq) goto loc_82EC439C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831b0b40
	return;
loc_82EC40EC:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r3,30588(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 30588);
	// lis r5,24308
	ctx.r5.s64 = 1593049088;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r8,610
	ctx.r8.s64 = 610;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,58787
	ctx.r5.u64 = ctx.r5.u64 | 58787;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82EC413C:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82EC4140:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec4160
	if (cr6.eq) goto loc_82EC4160;
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
loc_82EC4160:
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82ec47d8
	sub_82EC47D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec3a40
	if (cr6.eq) goto loc_82EC3A40;
loc_82EC4178:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4250
	if (cr6.eq) goto loc_82EC4250;
loc_82EC41A0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83204e48
	sub_83204E48(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// beq cr6,0x82ec4224
	if (cr6.eq) goto loc_82EC4224;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bne cr6,0x82ec4224
	if (!cr6.eq) goto loc_82EC4224;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ec2508
	sub_82EC2508(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ec4224
	if (cr6.eq) goto loc_82EC4224;
	// lwz r11,68(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
loc_82EC41F8:
	// rlwinm r31,r3,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,24(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82ec8d60
	sub_82EC8D60(ctx, base);
	// lwz r11,68(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 68);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// add r10,r31,r11
	ctx.r10.u64 = r31.u64 + r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ec41f8
	if (!cr6.eq) goto loc_82EC41F8;
loc_82EC4224:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83204e88
	sub_83204E88(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec41a0
	if (!cr6.eq) goto loc_82EC41A0;
loc_82EC4250:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82ec9260
	sub_82EC9260(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ec4538
	sub_82EC4538(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ec67a0
	sub_82EC67A0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ecbed8
	sub_82ECBED8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82eca920
	sub_82ECA920(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83205f40
	sub_83205F40(ctx, base);
	// li r31,20
	r31.s64 = 20;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ec42cc
	if (!cr6.eq) goto loc_82EC42CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC42CC:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec42f0
	if (!cr6.eq) goto loc_82EC42F0;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC42F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831b0b40
	return;
loc_82EC42FC:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82ec9260
	sub_82EC9260(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ec4538
	sub_82EC4538(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ec67a0
	sub_82EC67A0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ecbed8
	sub_82ECBED8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82eca920
	sub_82ECA920(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83205f40
	sub_83205F40(ctx, base);
	// li r31,20
	r31.s64 = 20;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ec4378
	if (!cr6.eq) goto loc_82EC4378;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC4378:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec439c
	if (!cr6.eq) goto loc_82EC439C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC439C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831b0b40
	return;
loc_82EC43A8:
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82ec9260
	sub_82EC9260(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ec4538
	sub_82EC4538(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ec67a0
	sub_82EC67A0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ecbed8
	sub_82ECBED8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82eca920
	sub_82ECA920(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x83205f40
	sub_83205F40(ctx, base);
	// li r31,20
	r31.s64 = 20;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ec4424
	if (!cr6.eq) goto loc_82EC4424;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC4424:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec439c
	if (!cr6.eq) goto loc_82EC439C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r31,r15
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r15.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82EC4458"))) PPC_WEAK_FUNC(sub_82EC4458);
PPC_FUNC_IMPL(__imp__sub_82EC4458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4488
	if (cr6.eq) goto loc_82EC4488;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82ec4478
	if (!cr6.eq) goto loc_82EC4478;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82ec4484
	goto loc_82EC4484;
loc_82EC4478:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x82ec4488
	if (!cr6.eq) goto loc_82EC4488;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82EC4484:
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
loc_82EC4488:
	// b 0x82eca448
	sub_82ECA448(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC4490"))) PPC_WEAK_FUNC(sub_82EC4490);
PPC_FUNC_IMPL(__imp__sub_82EC4490) {
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
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// bl 0x82eca4b8
	sub_82ECA4B8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC44D8"))) PPC_WEAK_FUNC(sub_82EC44D8);
PPC_FUNC_IMPL(__imp__sub_82EC44D8) {
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
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83205a48
	sub_83205A48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec451c
	if (cr6.eq) goto loc_82EC451C;
loc_82EC4504:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83205b98
	sub_83205B98(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec4504
	if (!cr6.eq) goto loc_82EC4504;
loc_82EC451C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC4538"))) PPC_WEAK_FUNC(sub_82EC4538);
PPC_FUNC_IMPL(__imp__sub_82EC4538) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r30,r27,8
	r30.s64 = r27.s64 + 8;
	// addi r10,r11,11812
	ctx.r10.s64 = r11.s64 + 11812;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec45cc
	if (cr6.eq) goto loc_82EC45CC;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
loc_82EC4588:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e48
	sub_83204E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e88
	sub_83204E88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec4588
	if (!cr6.eq) goto loc_82EC4588;
loc_82EC45CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC45E8"))) PPC_WEAK_FUNC(sub_82EC45E8);
PPC_FUNC_IMPL(__imp__sub_82EC45E8) {
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
	// bl 0x82ec4538
	sub_82EC4538(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4630
	if (cr6.eq) goto loc_82EC4630;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,5
	ctx.r6.s64 = 5;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC4630:
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

__attribute__((alias("__imp__sub_82EC4650"))) PPC_WEAK_FUNC(sub_82EC4650);
PPC_FUNC_IMPL(__imp__sub_82EC4650) {
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
	// bl 0x82eca920
	sub_82ECA920(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4698
	if (cr6.eq) goto loc_82EC4698;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,6
	ctx.r6.s64 = 6;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC4698:
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

__attribute__((alias("__imp__sub_82EC46B8"))) PPC_WEAK_FUNC(sub_82EC46B8);
PPC_FUNC_IMPL(__imp__sub_82EC46B8) {
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
	// lis r11,-32020
	r11.s64 = -2098462720;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,12184
	ctx.r10.s64 = r11.s64 + 12184;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x832059d0
	sub_832059D0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82ec4754
	if (!cr6.eq) goto loc_82EC4754;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ec44d8
	sub_82EC44D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832059e8
	sub_832059E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_82EC4754:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ec44d8
	sub_82EC44D8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x832059e8
	sub_832059E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC4770"))) PPC_WEAK_FUNC(sub_82EC4770);
PPC_FUNC_IMPL(__imp__sub_82EC4770) {
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
	// bl 0x82ec33c0
	sub_82EC33C0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec47b8
	if (cr6.eq) goto loc_82EC47B8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,6
	ctx.r6.s64 = 6;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC47B8:
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

__attribute__((alias("__imp__sub_82EC47D8"))) PPC_WEAK_FUNC(sub_82EC47D8);
PPC_FUNC_IMPL(__imp__sub_82EC47D8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82ecaf90
	sub_82ECAF90(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x82ec4960
	if (!cr6.eq) goto loc_82EC4960;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec4960
	if (!cr6.eq) goto loc_82EC4960;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ec4940
	if (!cr6.eq) goto loc_82EC4940;
	// lis r11,-32240
	r11.s64 = -2112880640;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2088
	ctx.r4.s64 = r11.s64 + -2088;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82ec48c4
	if (cr6.gt) goto loc_82EC48C4;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r29,r11,11888
	r29.s64 = r11.s64 + 11888;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec4870
	if (!cr6.eq) goto loc_82EC4870;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ec3040
	sub_82EC3040(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec48c4
	if (cr6.eq) goto loc_82EC48C4;
loc_82EC4870:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec4960
	if (cr6.eq) goto loc_82EC4960;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec4960
	if (!cr6.eq) goto loc_82EC4960;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ec3040
	sub_82EC3040(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4960
	if (cr6.eq) goto loc_82EC4960;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec46b8
	sub_82EC46B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_82EC48C4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r4,r10,11880
	ctx.r4.s64 = ctx.r10.s64 + 11880;
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec4960
	if (!cr6.eq) goto loc_82EC4960;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,20608
	ctx.r4.s64 = r11.s64 + 20608;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eca218
	sub_82ECA218(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,1560
	ctx.r3.s64 = ctx.r10.s64 + 1560;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec4960
	if (!cr6.eq) goto loc_82EC4960;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec46b8
	sub_82EC46B8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_82EC4940:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82ec4960
	if (!cr6.eq) goto loc_82EC4960;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4960
	if (cr6.eq) goto loc_82EC4960;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_82EC4960:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EC4970"))) PPC_WEAK_FUNC(sub_82EC4970);
PPC_FUNC_IMPL(__imp__sub_82EC4970) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC4978"))) PPC_WEAK_FUNC(sub_82EC4978);
PPC_FUNC_IMPL(__imp__sub_82EC4978) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec49ac
	if (!cr6.eq) goto loc_82EC49AC;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82ebb9d8
	sub_82EBB9D8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82EC49AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC49C0"))) PPC_WEAK_FUNC(sub_82EC49C0);
PPC_FUNC_IMPL(__imp__sub_82EC49C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// addi r9,r11,12040
	ctx.r9.s64 = r11.s64 + 12040;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC49F0"))) PPC_WEAK_FUNC(sub_82EC49F0);
PPC_FUNC_IMPL(__imp__sub_82EC49F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// addi r9,r10,12040
	ctx.r9.s64 = ctx.r10.s64 + 12040;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC4A18"))) PPC_WEAK_FUNC(sub_82EC4A18);
PPC_FUNC_IMPL(__imp__sub_82EC4A18) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec4a4c
	if (!cr6.eq) goto loc_82EC4A4C;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82ebb9d8
	sub_82EBB9D8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82EC4A4C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ec4a9c
	if (cr6.eq) goto loc_82EC4A9C;
	// li r11,0
	r11.s64 = 0;
loc_82EC4A64:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb2700
	sub_82EB2700(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec4aa8
	if (cr6.eq) goto loc_82EC4AA8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ec4a64
	if (!cr6.eq) goto loc_82EC4A64;
loc_82EC4A9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EC4AA8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC4AC0"))) PPC_WEAK_FUNC(sub_82EC4AC0);
PPC_FUNC_IMPL(__imp__sub_82EC4AC0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec4af4
	if (!cr6.eq) goto loc_82EC4AF4;
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82ebb9d8
	sub_82EBB9D8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r11.u32);
loc_82EC4AF4:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ec4b64
	if (cr6.eq) goto loc_82EC4B64;
	// li r30,0
	r30.s64 = 0;
loc_82EC4B0C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec4b2c
	if (!cr6.eq) goto loc_82EC4B2C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC4B2C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r30.u32);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + r30.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ec4b0c
	if (!cr6.eq) goto loc_82EC4B0C;
loc_82EC4B64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC4B70"))) PPC_WEAK_FUNC(sub_82EC4B70);
PPC_FUNC_IMPL(__imp__sub_82EC4B70) {
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
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x82ec9390
	sub_82EC9390(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC4BB8"))) PPC_WEAK_FUNC(sub_82EC4BB8);
PPC_FUNC_IMPL(__imp__sub_82EC4BB8) {
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
	// bl 0x82ec6060
	sub_82EC6060(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4c50
	if (cr6.eq) goto loc_82EC4C50;
loc_82EC4C08:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82ec66c8
	sub_82EC66C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e88
	sub_83204E88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec4c08
	if (!cr6.eq) goto loc_82EC4C08;
loc_82EC4C50:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
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

__attribute__((alias("__imp__sub_82EC4C70"))) PPC_WEAK_FUNC(sub_82EC4C70);
PPC_FUNC_IMPL(__imp__sub_82EC4C70) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ec4c98
	if (!cr6.eq) goto loc_82EC4C98;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
loc_82EC4C98:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,20
	r25.s64 = 20;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82ec4d70
	if (!cr6.gt) goto loc_82EC4D70;
	// addi r31,r23,8
	r31.s64 = r23.s64 + 8;
	// subf r27,r23,r29
	r27.s64 = r29.s64 - r23.s64;
	// mr r22,r30
	r22.u64 = r30.u64;
	// li r24,0
	r24.s64 = 0;
loc_82EC4CE4:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// stw r3,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, ctx.r3.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r24,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r24.u32);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// stw r3,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, ctx.r3.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r4,r29,r27
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + r27.u32);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ec4d64
	if (!cr6.gt) goto loc_82EC4D64;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82EC4D34:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ec4d34
	if (cr6.lt) goto loc_82EC4D34;
loc_82EC4D64:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// bne 0x82ec4ce4
	if (!cr0.eq) goto loc_82EC4CE4;
loc_82EC4D70:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EC4D80"))) PPC_WEAK_FUNC(sub_82EC4D80);
PPC_FUNC_IMPL(__imp__sub_82EC4D80) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ec4da8
	if (!cr6.eq) goto loc_82EC4DA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82EC4DA8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// addic. r31,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r31.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82ec4dfc
	if (cr0.lt) goto loc_82EC4DFC;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
loc_82EC4DC4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82ec4de0
	if (!cr6.eq) goto loc_82EC4DE0;
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// bge 0x82ec4dc4
	if (!cr0.lt) goto loc_82EC4DC4;
	// b 0x82ec4dfc
	goto loc_82EC4DFC;
loc_82EC4DE0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb01d0
	sub_82EB01D0(ctx, base);
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// add r29,r3,r10
	r29.u64 = ctx.r3.u64 + ctx.r10.u64;
loc_82EC4DFC:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC4E30"))) PPC_WEAK_FUNC(sub_82EC4E30);
PPC_FUNC_IMPL(__imp__sub_82EC4E30) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82ec4eb4
	if (!cr6.gt) goto loc_82EC4EB4;
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// addi r31,r24,8
	r31.s64 = r24.s64 + 8;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
loc_82EC4E58:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r25,-4(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec4e90
	if (!cr6.gt) goto loc_82EC4E90;
	// addi r29,r25,4
	r29.s64 = r25.s64 + 4;
loc_82EC4E70:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ec4e70
	if (cr6.lt) goto loc_82EC4E70;
loc_82EC4E90:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// lwzx r3,r28,r27
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// bne 0x82ec4e58
	if (!cr0.eq) goto loc_82EC4E58;
loc_82EC4EB4:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EC4ED0"))) PPC_WEAK_FUNC(sub_82EC4ED0);
PPC_FUNC_IMPL(__imp__sub_82EC4ED0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// b 0x832053a8
	sub_832053A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EC4EE0"))) PPC_WEAK_FUNC(sub_82EC4EE0);
PPC_FUNC_IMPL(__imp__sub_82EC4EE0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ec4f48
	if (cr6.eq) goto loc_82EC4F48;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ec4f48
	if (cr6.eq) goto loc_82EC4F48;
	// addi r28,r3,44
	r28.s64 = ctx.r3.s64 + 44;
	// mr r31,r29
	r31.u64 = r29.u64;
	// addi r27,r3,60
	r27.s64 = ctx.r3.s64 + 60;
loc_82EC4F14:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ec4f14
	if (!cr6.eq) goto loc_82EC4F14;
loc_82EC4F48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC4F50"))) PPC_WEAK_FUNC(sub_82EC4F50);
PPC_FUNC_IMPL(__imp__sub_82EC4F50) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec4ff0
	if (cr6.eq) goto loc_82EC4FF0;
	// addi r29,r28,44
	r29.s64 = r28.s64 + 44;
	// addi r28,r28,60
	r28.s64 = r28.s64 + 60;
loc_82EC4F94:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83204e48
	sub_83204E48(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83204e68
	sub_83204E68(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec4f94
	if (!cr6.eq) goto loc_82EC4F94;
loc_82EC4FF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC4FF8"))) PPC_WEAK_FUNC(sub_82EC4FF8);
PPC_FUNC_IMPL(__imp__sub_82EC4FF8) {
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
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ec5048
	if (cr6.eq) goto loc_82EC5048;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EC5028:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ec5028
	if (!cr6.eq) goto loc_82EC5028;
loc_82EC5048:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec5f18
	sub_82EC5F18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC5060"))) PPC_WEAK_FUNC(sub_82EC5060);
PPC_FUNC_IMPL(__imp__sub_82EC5060) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82ec50a4
	if (cr6.lt) goto loc_82EC50A4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82EC5088:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82ec50a4
	if (!cr6.eq) goto loc_82EC50A4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec5088
	if (!cr6.gt) goto loc_82EC5088;
loc_82EC50A4:
	// li r26,-1
	r26.s64 = -1;
loc_82EC50A8:
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec50b8
	if (!cr6.gt) goto loc_82EC50B8;
	// li r11,0
	r11.s64 = 0;
loc_82EC50B8:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec5168
	if (cr6.eq) goto loc_82EC5168;
	// add r11,r9,r29
	r11.u64 = ctx.r9.u64 + r29.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r28,12
	ctx.r3.s64 = r28.s64 + 12;
	// lwzx r30,r9,r10
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r31,r7,r10
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ec511c
	if (cr6.eq) goto loc_82EC511C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_82EC50FC:
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ec50fc
	if (!cr6.eq) goto loc_82EC50FC;
loc_82EC511C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ec5f18
	sub_82EC5F18(ctx, base);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82ec5160
	if (cr6.gt) goto loc_82EC5160;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EC5144:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82ec5160
	if (!cr6.eq) goto loc_82EC5160;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec5144
	if (!cr6.gt) goto loc_82EC5144;
loc_82EC5160:
	// mr r29,r11
	r29.u64 = r11.u64;
	// b 0x82ec50a8
	goto loc_82EC50A8;
loc_82EC5168:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC5170"))) PPC_WEAK_FUNC(sub_82EC5170);
PPC_FUNC_IMPL(__imp__sub_82EC5170) {
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
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec51b8
	if (!cr6.eq) goto loc_82EC51B8;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC51B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC51D0"))) PPC_WEAK_FUNC(sub_82EC51D0);
PPC_FUNC_IMPL(__imp__sub_82EC51D0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,-1
	r27.s64 = -1;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec5250
	if (cr6.eq) goto loc_82EC5250;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82ec5250
	if (cr6.eq) goto loc_82EC5250;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82EC5218:
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// beq cr6,0x82ec523c
	if (cr6.eq) goto loc_82EC523C;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82ec5218
	if (!cr6.eq) goto loc_82EC5218;
	// b 0x82ec5250
	goto loc_82EC5250;
loc_82EC523C:
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// beq cr6,0x82ec52a0
	if (cr6.eq) goto loc_82EC52A0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec29e0
	sub_82EC29E0(ctx, base);
loc_82EC5250:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ec529c
	if (cr6.eq) goto loc_82EC529C;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec2760
	sub_82EC2760(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r3,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC529C:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82EC52A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC52A8"))) PPC_WEAK_FUNC(sub_82EC52A8);
PPC_FUNC_IMPL(__imp__sub_82EC52A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r3,r11,1
	ctx.r3.u64 = r11.u32 & 0x7FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC52B8"))) PPC_WEAK_FUNC(sub_82EC52B8);
PPC_FUNC_IMPL(__imp__sub_82EC52B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC52D0"))) PPC_WEAK_FUNC(sub_82EC52D0);
PPC_FUNC_IMPL(__imp__sub_82EC52D0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ec5310
	if (!cr6.eq) goto loc_82EC5310;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
loc_82EC5310:
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + r11.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82ec54a0
	if (!cr6.gt) goto loc_82EC54A0;
	// addi r31,r23,8
	r31.s64 = r23.s64 + 8;
	// mr r25,r30
	r25.u64 = r30.u64;
	// li r28,0
	r28.s64 = 0;
loc_82EC5360:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// addi r5,r31,-4
	ctx.r5.s64 = r31.s64 + -4;
	// stw r3,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, ctx.r3.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ec538c
	if (cr6.eq) goto loc_82EC538C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ec51d0
	sub_82EC51D0(ctx, base);
	// b 0x82ec5494
	goto loc_82EC5494;
loc_82EC538C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec5494
	if (cr6.eq) goto loc_82EC5494;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82ec53e4
	if (!cr6.gt) goto loc_82EC53E4;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82EC53A8:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ec53c4
	if (cr6.eq) goto loc_82EC53C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x82ec53a8
	if (cr6.lt) goto loc_82EC53A8;
	// b 0x82ec53e4
	goto loc_82EC53E4;
loc_82EC53C4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC53E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec5404
	if (!cr6.gt) goto loc_82EC5404;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82EC5404:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec5494
	if (!cr6.eq) goto loc_82EC5494;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec5434
	if (!cr6.gt) goto loc_82EC5434;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82EC5434:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec5460
	if (cr6.eq) goto loc_82EC5460;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb4090
	sub_82EB4090(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec5490
	if (!cr6.eq) goto loc_82EC5490;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ec5490
	goto loc_82EC5490;
loc_82EC5460:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ec4c70
	sub_82EC4C70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC5490:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82EC5494:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// bne 0x82ec5360
	if (!cr0.eq) goto loc_82EC5360;
loc_82EC54A0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EC54B8"))) PPC_WEAK_FUNC(sub_82EC54B8);
PPC_FUNC_IMPL(__imp__sub_82EC54B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ec550c
	if (!cr6.lt) goto loc_82EC550C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec54fc
	if (cr6.lt) goto loc_82EC54FC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EC54FC:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC550C:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// lwz r8,0(r13)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,48
	ctx.r4.s64 = 48;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82ea8c60
	sub_82EA8C60(ctx, base);
	// addi r26,r28,4
	r26.s64 = r28.s64 + 4;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ec554c
	if (cr6.eq) goto loc_82EC554C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
loc_82EC554C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r31,r11,30300
	r31.s64 = r11.s64 + 30300;
	// beq cr6,0x82ec55ac
	if (cr6.eq) goto loc_82EC55AC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82eb8e80
	sub_82EB8E80(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r5,r11,3476
	ctx.r5.s64 = r11.s64 + 3476;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eb8ce0
	sub_82EB8CE0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82ec51d0
	sub_82EC51D0(ctx, base);
loc_82EC55AC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eb8e80
	sub_82EB8E80(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ec55cc
	if (cr6.eq) goto loc_82EC55CC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82ec55d4
	goto loc_82EC55D4;
loc_82EC55CC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
loc_82EC55D4:
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,3420
	ctx.r5.s64 = r11.s64 + 3420;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82eb8de8
	sub_82EB8DE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82ec4c70
	sub_82EC4C70(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r10,3404
	ctx.r5.s64 = ctx.r10.s64 + 3404;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82eb8de8
	sub_82EB8DE8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82ec52d0
	sub_82EC52D0(ctx, base);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r5,r9,3392
	ctx.r5.s64 = ctx.r9.s64 + 3392;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82eb8ce8
	sub_82EB8CE8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x82ec4d80
	sub_82EC4D80(ctx, base);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec5740
	if (cr6.eq) goto loc_82EC5740;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,1692
	ctx.r5.s64 = r11.s64 + 1692;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r10,3436
	ctx.r5.s64 = ctx.r10.s64 + 3436;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eb8d38
	sub_82EB8D38(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82eb8d28
	sub_82EB8D28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r24,0(r22)
	r24.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r22,0(r9)
	r22.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// bl 0x82eb04d8
	sub_82EB04D8(ctx, base);
loc_82EC5740:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EC5750"))) PPC_WEAK_FUNC(sub_82EC5750);
PPC_FUNC_IMPL(__imp__sub_82EC5750) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82ec5808
	if (!cr6.gt) goto loc_82EC5808;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,20
	r27.s64 = 20;
	// addi r30,r25,8
	r30.s64 = r25.s64 + 8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_82EC5780:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec57f0
	if (cr6.eq) goto loc_82EC57F0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec57ac
	if (!cr6.gt) goto loc_82EC57AC;
	// li r11,0
	r11.s64 = 0;
loc_82EC57AC:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec57f0
	if (cr6.eq) goto loc_82EC57F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb4028
	sub_82EB4028(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec57f0
	if (cr6.eq) goto loc_82EC57F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82ec4e30
	sub_82EC4E30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC57F0:
	// lwz r4,-8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// bne 0x82ec5780
	if (!cr0.eq) goto loc_82EC5780;
loc_82EC5808:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EC5828"))) PPC_WEAK_FUNC(sub_82EC5828);
PPC_FUNC_IMPL(__imp__sub_82EC5828) {
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
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r11,30300
	ctx.r5.s64 = r11.s64 + 30300;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82eb8e80
	sub_82EB8E80(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,3420
	ctx.r5.s64 = ctx.r10.s64 + 3420;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eb8de8
	sub_82EB8DE8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82ec4e30
	sub_82EC4E30(ctx, base);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,3404
	ctx.r5.s64 = ctx.r8.s64 + 3404;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb8de8
	sub_82EB8DE8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x82ec5750
	sub_82EC5750(ctx, base);
	// lis r6,-32238
	ctx.r6.s64 = -2112749568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,3392
	ctx.r5.s64 = ctx.r6.s64 + 3392;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82eb8ce8
	sub_82EB8CE8(ctx, base);
	// lwz r31,0(r13)
	r31.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,20
	r30.s64 = 20;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,20608
	ctx.r5.s64 = ctx.r5.s64 + 20608;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb8bf0
	sub_82EB8BF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82eb8cf8
	sub_82EB8CF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC5938"))) PPC_WEAK_FUNC(sub_82EC5938);
PPC_FUNC_IMPL(__imp__sub_82EC5938) {
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
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC5988"))) PPC_WEAK_FUNC(sub_82EC5988);
PPC_FUNC_IMPL(__imp__sub_82EC5988) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec59e8
	if (!cr6.gt) goto loc_82EC59E8;
	// li r30,0
	r30.s64 = 0;
loc_82EC59AC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ec5828
	sub_82EC5828(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82ec59ac
	if (cr6.lt) goto loc_82EC59AC;
loc_82EC59E8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec5a14
	if (!cr6.eq) goto loc_82EC5A14;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC5A14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC5A20"))) PPC_WEAK_FUNC(sub_82EC5A20);
PPC_FUNC_IMPL(__imp__sub_82EC5A20) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ec54b8
	sub_82EC54B8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r8,r9,1
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82ec5be8
	if (!cr6.gt) goto loc_82EC5BE8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r11,r24
	r11.u64 = r24.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82ec5b00
	if (cr6.lt) goto loc_82EC5B00;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82EC5AE4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82ec5b00
	if (!cr6.eq) goto loc_82EC5B00;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec5ae4
	if (!cr6.gt) goto loc_82EC5AE4;
loc_82EC5B00:
	// mr r29,r11
	r29.u64 = r11.u64;
	// li r11,1
	r11.s64 = 1;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec5b14
	if (!cr6.gt) goto loc_82EC5B14;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82EC5B14:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec5bd4
	if (cr6.eq) goto loc_82EC5BD4;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r8
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec5b88
	if (!cr6.eq) goto loc_82EC5B88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec5b98
	if (cr6.eq) goto loc_82EC5B98;
loc_82EC5B88:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
loc_82EC5B98:
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82ec5b00
	if (cr6.gt) goto loc_82EC5B00;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EC5BB4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82ec5b00
	if (!cr6.eq) goto loc_82EC5B00;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec5bb4
	if (!cr6.gt) goto loc_82EC5BB4;
	// b 0x82ec5b00
	goto loc_82EC5B00;
loc_82EC5BD4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ec5060
	sub_82EC5060(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
loc_82EC5BE8:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r10,r11,1
	ctx.r10.u64 = r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec5cd4
	if (!cr6.gt) goto loc_82EC5CD4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82ec5c34
	if (cr6.lt) goto loc_82EC5C34;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82EC5C18:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82ec5c34
	if (!cr6.eq) goto loc_82EC5C34;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec5c18
	if (!cr6.gt) goto loc_82EC5C18;
loc_82EC5C34:
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec5c44
	if (!cr6.gt) goto loc_82EC5C44;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82EC5C44:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec5cc0
	if (cr6.eq) goto loc_82EC5CC0;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r30,r11,r8
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ec5a20
	sub_82EC5A20(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82ec5cb8
	if (cr6.gt) goto loc_82EC5CB8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82EC5C9C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// bne cr6,0x82ec5cb8
	if (!cr6.eq) goto loc_82EC5CB8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x82ec5c9c
	if (!cr6.gt) goto loc_82EC5C9C;
loc_82EC5CB8:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82ec5c34
	goto loc_82EC5C34;
loc_82EC5CC0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ec5060
	sub_82EC5060(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
loc_82EC5CD4:
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec5d08
	if (!cr6.eq) goto loc_82EC5D08;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC5D08:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EC5D18"))) PPC_WEAK_FUNC(sub_82EC5D18);
PPC_FUNC_IMPL(__imp__sub_82EC5D18) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82ec9408
	sub_82EC9408(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,12068
	ctx.r9.s64 = ctx.r10.s64 + 12068;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// addi r27,r28,44
	r27.s64 = r28.s64 + 44;
	// stw r30,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r30.u32);
	// stw r30,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r8,40(r28)
	PPC_STORE_U32(r28.u32 + 40, ctx.r8.u32);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r30,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r30.u8);
	// addi r26,r28,60
	r26.s64 = r28.s64 + 60;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ec5dd0
	if (cr6.eq) goto loc_82EC5DD0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ec5dd0
	if (cr6.eq) goto loc_82EC5DD0;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82EC5D9C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ec5d9c
	if (!cr6.eq) goto loc_82EC5D9C;
loc_82EC5DD0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC5DE0"))) PPC_WEAK_FUNC(sub_82EC5DE0);
PPC_FUNC_IMPL(__imp__sub_82EC5DE0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// addi r10,r11,12068
	ctx.r10.s64 = r11.s64 + 12068;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82ec5988
	sub_82EC5988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec9260
	sub_82EC9260(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC5E38"))) PPC_WEAK_FUNC(sub_82EC5E38);
PPC_FUNC_IMPL(__imp__sub_82EC5E38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ec5efc
	if (!cr6.eq) goto loc_82EC5EFC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec5efc
	if (cr6.eq) goto loc_82EC5EFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x832053a8
	sub_832053A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec9390
	sub_82EC9390(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec5ef8
	if (cr6.eq) goto loc_82EC5EF8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r31,60
	ctx.r6.s64 = r31.s64 + 60;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82ec5a20
	sub_82EC5A20(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ec4bb8
	sub_82EC4BB8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83205378
	sub_83205378(ctx, base);
loc_82EC5EF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82EC5EFC:
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

__attribute__((alias("__imp__sub_82EC5F18"))) PPC_WEAK_FUNC(sub_82EC5F18);
PPC_FUNC_IMPL(__imp__sub_82EC5F18) {
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
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r10
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82eb4110
	sub_82EB4110(ctx, base);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82ec5fb8
	if (cr6.eq) goto loc_82EC5FB8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// beq cr6,0x82ec5fa4
	if (cr6.eq) goto loc_82EC5FA4;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82EC5F88:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + r11.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// bne cr6,0x82ec5f88
	if (!cr6.eq) goto loc_82EC5F88;
loc_82EC5FA4:
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_82EC5FB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC5FD0"))) PPC_WEAK_FUNC(sub_82EC5FD0);
PPC_FUNC_IMPL(__imp__sub_82EC5FD0) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// addi r10,r11,12068
	ctx.r10.s64 = r11.s64 + 12068;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82ec5988
	sub_82EC5988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec9260
	sub_82EC9260(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec6040
	if (cr6.eq) goto loc_82EC6040;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,21
	ctx.r6.s64 = 21;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC6040:
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

__attribute__((alias("__imp__sub_82EC6060"))) PPC_WEAK_FUNC(sub_82EC6060);
PPC_FUNC_IMPL(__imp__sub_82EC6060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lwz r11,-10620(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10620);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC6070"))) PPC_WEAK_FUNC(sub_82EC6070);
PPC_FUNC_IMPL(__imp__sub_82EC6070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r10,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lbz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r9,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r8,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC6098"))) PPC_WEAK_FUNC(sub_82EC6098);
PPC_FUNC_IMPL(__imp__sub_82EC6098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// bgt cr6,0x82ec6208
	if (cr6.gt) goto loc_82EC6208;
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,24792
	r12.s64 = r12.s64 + 24792;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82EC6154;
	case 1:
		goto loc_82EC6154;
	case 2:
		goto loc_82EC6154;
	case 3:
		goto loc_82EC6154;
	case 4:
		goto loc_82EC6154;
	case 5:
		goto loc_82EC6154;
	case 6:
		goto loc_82EC6154;
	case 7:
		goto loc_82EC6154;
	case 8:
		goto loc_82EC6154;
	case 9:
		goto loc_82EC6154;
	case 10:
		goto loc_82EC6154;
	case 11:
		goto loc_82EC6154;
	case 12:
		goto loc_82EC6154;
	case 13:
		goto loc_82EC6154;
	case 14:
		goto loc_82EC6154;
	case 15:
		goto loc_82EC6154;
	case 16:
		goto loc_82EC6154;
	case 17:
		goto loc_82EC6154;
	case 18:
		goto loc_82EC61E4;
	case 19:
		goto loc_82EC6164;
	case 20:
		goto loc_82EC6164;
	case 21:
		goto loc_82EC61A0;
	case 22:
		goto loc_82EC6264;
	case 23:
		goto loc_82EC6154;
	case 24:
		goto loc_82EC61B4;
	case 25:
		goto loc_82EC61A4;
	case 26:
		goto loc_82EC61F8;
	case 27:
		goto loc_82EC6194;
	case 28:
		goto loc_82EC6164;
	case 29:
		goto loc_82EC6164;
	case 30:
		goto loc_82EC6154;
	default:
		__builtin_unreachable();
	}
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,25060(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25060);
	// lwz r23,24932(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24932);
	// lwz r23,24932(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24932);
	// lwz r23,24992(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24992);
	// lwz r23,25188(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25188);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
	// lwz r23,25012(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25012);
	// lwz r23,24996(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24996);
	// lwz r23,25080(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25080);
	// lwz r23,24980(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24980);
	// lwz r23,24932(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24932);
	// lwz r23,24932(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24932);
	// lwz r23,24916(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 24916);
loc_82EC6154:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC6164:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r31,0(r4)
	r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec6188
	if (cr6.eq) goto loc_82EC6188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// mullw r31,r3,r31
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC6188:
	// li r3,1
	ctx.r3.s64 = 1;
	// mullw r31,r3,r31
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC6194:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rotlwi r31,r11,1
	r31.u64 = __builtin_rotateleft32(r11.u32, 1);
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC61A0:
	// li r31,4
	r31.s64 = 4;
loc_82EC61A4:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC61B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec6188
	if (cr6.eq) goto loc_82EC6188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// mullw r31,r3,r31
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC61E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r5,13(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// bl 0x82ec6098
	sub_82EC6098(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC61F8:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82ec6264
	goto loc_82EC6264;
loc_82EC6208:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12232
	ctx.r4.s64 = r11.s64 + 12232;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r5,20641
	ctx.r5.s64 = 1352728576;
	// li r8,194
	ctx.r8.s64 = 194;
	// addi r7,r9,12200
	ctx.r7.s64 = ctx.r9.s64 + 12200;
	// lwz r3,30588(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30588);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,35672
	ctx.r5.u64 = ctx.r5.u64 | 35672;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82EC6264:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC6280"))) PPC_WEAK_FUNC(sub_82EC6280);
PPC_FUNC_IMPL(__imp__sub_82EC6280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,31
	cr6.compare<uint32_t>(ctx.r4.u32, 31, xer);
	// bgt cr6,0x82ec63bc
	if (cr6.gt) goto loc_82EC63BC;
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,25272
	r12.s64 = r12.s64 + 25272;
	// rlwinm r0,r4,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_82EC6338;
	case 1:
		goto loc_82EC6338;
	case 2:
		goto loc_82EC6338;
	case 3:
		goto loc_82EC6338;
	case 4:
		goto loc_82EC6338;
	case 5:
		goto loc_82EC6338;
	case 6:
		goto loc_82EC6338;
	case 7:
		goto loc_82EC6338;
	case 8:
		goto loc_82EC6338;
	case 9:
		goto loc_82EC6338;
	case 10:
		goto loc_82EC6338;
	case 11:
		goto loc_82EC6338;
	case 12:
		goto loc_82EC6338;
	case 13:
		goto loc_82EC6338;
	case 14:
		goto loc_82EC6338;
	case 15:
		goto loc_82EC6338;
	case 16:
		goto loc_82EC6338;
	case 17:
		goto loc_82EC6338;
	case 18:
		goto loc_82EC6338;
	case 19:
		goto loc_82EC634C;
	case 20:
		goto loc_82EC6344;
	case 21:
		goto loc_82EC6344;
	case 22:
		goto loc_82EC6344;
	case 23:
		goto loc_82EC63BC;
	case 24:
		goto loc_82EC6338;
	case 25:
		goto loc_82EC6360;
	case 26:
		goto loc_82EC6344;
	case 27:
		goto loc_82EC6344;
	case 28:
		goto loc_82EC6344;
	case 29:
		goto loc_82EC6344;
	case 30:
		goto loc_82EC6344;
	case 31:
		goto loc_82EC6338;
	default:
		__builtin_unreachable();
	}
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25420(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25420);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25532(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25532);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
	// lwz r23,25440(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25440);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25412(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25412);
	// lwz r23,25400(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 25400);
loc_82EC6338:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82eb64e0
	sub_82EB64E0(ctx, base);
	// b 0x82ec63bc
	goto loc_82EC63BC;
loc_82EC6344:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82ec63bc
	goto loc_82EC63BC;
loc_82EC634C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r4,13(r27)
	ctx.r4.u64 = PPC_LOAD_U8(r27.u32 + 13);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ec6280
	sub_82EC6280(ctx, base);
	// b 0x82ec63bc
	goto loc_82EC63BC;
loc_82EC6360:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec63b8
	if (!cr6.gt) goto loc_82EC63B8;
loc_82EC6380:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// bl 0x82ec6280
	sub_82EC6280(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// ble cr6,0x82ec63a4
	if (!cr6.gt) goto loc_82EC63A4;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82EC63A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ec6380
	if (cr6.lt) goto loc_82EC6380;
loc_82EC63B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82EC63BC:
	// lhz r11,16(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 16);
	// rlwinm r11,r11,0,23,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x180;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec63e8
	if (cr6.eq) goto loc_82EC63E8;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// li r11,16
	r11.s64 = 16;
	// beq cr6,0x82ec63dc
	if (cr6.eq) goto loc_82EC63DC;
	// li r11,8
	r11.s64 = 8;
loc_82EC63DC:
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// ble cr6,0x82ec63e8
	if (!cr6.gt) goto loc_82EC63E8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82EC63E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC63F0"))) PPC_WEAK_FUNC(sub_82EC63F0);
PPC_FUNC_IMPL(__imp__sub_82EC63F0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb3ef8
	sub_82EB3EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// mr r28,r22
	r28.u64 = r22.u64;
	// ble cr6,0x82ec64a0
	if (!cr6.gt) goto loc_82EC64A0;
loc_82EC6434:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb01c0
	sub_82EB01C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec6494
	if (cr6.eq) goto loc_82EC6494;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec6474
	if (!cr6.gt) goto loc_82EC6474;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82EC6474:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec6494
	if (!cr6.eq) goto loc_82EC6494;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82ec63f0
	sub_82EC63F0(ctx, base);
loc_82EC6494:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r27
	cr6.compare<int32_t>(r28.s32, r27.s32, xer);
	// blt cr6,0x82ec6434
	if (cr6.lt) goto loc_82EC6434;
loc_82EC64A0:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// beq cr6,0x82ec64e4
	if (cr6.eq) goto loc_82EC64E4;
loc_82EC64B8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82f63278
	sub_82F63278(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaff20
	sub_82EAFF20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ec64b8
	if (!cr6.eq) goto loc_82EC64B8;
loc_82EC64E4:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r22
	r31.u64 = r22.u64;
	// lbz r27,0(r25)
	r27.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec6694
	if (!cr6.gt) goto loc_82EC6694;
	// mr r24,r22
	r24.u64 = r22.u64;
loc_82EC6504:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r22
	r30.u64 = r22.u64;
	// lwzx r26,r24,r11
	r26.u64 = PPC_LOAD_U32(r24.u32 + r11.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eaffc8
	sub_82EAFFC8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec6570
	if (!cr6.gt) goto loc_82EC6570;
loc_82EC6520:
	// rotlwi r11,r31,1
	r11.u64 = __builtin_rotateleft32(r31.u32, 1);
	// divw r10,r31,r27
	ctx.r10.s32 = r31.s32 / r27.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r8,r10,r27
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// andc r7,r27,r9
	ctx.r7.u64 = r27.u64 & ~ctx.r9.u64;
	// twllei r27,0
	// subf. r11,r8,r31
	r11.s64 = r31.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// twlgei r7,-1
	// beq 0x82ec654c
	if (cr0.eq) goto loc_82EC654C;
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
loc_82EC654C:
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// ble cr6,0x82ec655c
	if (!cr6.gt) goto loc_82EC655C;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82EC655C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x82eaffc8
	sub_82EAFFC8(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ec6520
	if (cr6.lt) goto loc_82EC6520;
loc_82EC6570:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec6628
	if (!cr6.gt) goto loc_82EC6628;
loc_82EC6584:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb01d0
	sub_82EB01D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82ec65b4
	if (!cr6.eq) goto loc_82EC65B4;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x82ec65b4
	if (cr6.eq) goto loc_82EC65B4;
	// lbz r11,3(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec65b4
	if (!cr6.eq) goto loc_82EC65B4;
	// li r31,1
	r31.s64 = 1;
loc_82EC65B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// lbz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// bl 0x82ec6280
	sub_82EC6280(ctx, base);
	// cmpw cr6,r3,r28
	cr6.compare<int32_t>(ctx.r3.s32, r28.s32, xer);
	// ble cr6,0x82ec65d0
	if (!cr6.gt) goto loc_82EC65D0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82EC65D0:
	// rotlwi r11,r31,1
	r11.u64 = __builtin_rotateleft32(r31.u32, 1);
	// divw r10,r31,r3
	ctx.r10.s32 = r31.s32 / ctx.r3.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// andc r7,r3,r9
	ctx.r7.u64 = ctx.r3.u64 & ~ctx.r9.u64;
	// twllei r3,0
	// subf. r11,r8,r31
	r11.s64 = r31.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// twlgei r7,-1
	// beq 0x82ec65fc
	if (cr0.eq) goto loc_82EC65FC;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
loc_82EC65FC:
	// sth r31,18(r30)
	PPC_STORE_U16(r30.u32 + 18, r31.u16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// bl 0x82ec6098
	sub_82EC6098(ctx, base);
	// add r31,r3,r31
	r31.u64 = ctx.r3.u64 + r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bl 0x82eb01c8
	sub_82EB01C8(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ec6584
	if (cr6.lt) goto loc_82EC6584;
loc_82EC6628:
	// rotlwi r11,r31,1
	r11.u64 = __builtin_rotateleft32(r31.u32, 1);
	// divw r10,r31,r28
	ctx.r10.s32 = r31.s32 / r28.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r8,r10,r28
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// andc r7,r28,r9
	ctx.r7.u64 = r28.u64 & ~ctx.r9.u64;
	// twllei r28,0
	// subf. r11,r8,r31
	r11.s64 = r31.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// twlgei r7,-1
	// beq 0x82ec6658
	if (cr0.eq) goto loc_82EC6658;
	// subf r11,r11,r28
	r11.s64 = r28.s64 - r11.s64;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
loc_82EC6658:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne cr6,0x82ec6668
	if (!cr6.eq) goto loc_82EC6668;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82EC6668:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb0380
	sub_82EB0380(ctx, base);
	// lbz r11,2(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec6680
	if (!cr6.eq) goto loc_82EC6680;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82EC6680:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x82ec6504
	if (cr6.lt) goto loc_82EC6504;
loc_82EC6694:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec66c0
	if (!cr6.eq) goto loc_82EC66C0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC66C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82EC66C8"))) PPC_WEAK_FUNC(sub_82EC66C8);
PPC_FUNC_IMPL(__imp__sub_82EC66C8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82eb3fd0
	sub_82EB3FD0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec66fc
	if (!cr6.gt) goto loc_82EC66FC;
	// li r11,0
	r11.s64 = 0;
loc_82EC66FC:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec6718
	if (!cr6.eq) goto loc_82EC6718;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec63f0
	sub_82EC63F0(ctx, base);
loc_82EC6718:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC6720"))) PPC_WEAK_FUNC(sub_82EC6720);
PPC_FUNC_IMPL(__imp__sub_82EC6720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ec6760
	if (!cr6.gt) goto loc_82EC6760;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EC6734:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stwx r8,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r8.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ec6734
	if (cr6.lt) goto loc_82EC6734;
loc_82EC6760:
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	r11.s64 = 0;
loc_82EC6774:
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stwx r7,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r7.u32);
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x82ec6774
	if (cr6.lt) goto loc_82EC6774;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC67A0"))) PPC_WEAK_FUNC(sub_82EC67A0);
PPC_FUNC_IMPL(__imp__sub_82EC67A0) {
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
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec67d4
	if (cr6.eq) goto loc_82EC67D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC67D4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec6800
	if (!cr6.eq) goto loc_82EC6800;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC6800:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec682c
	if (!cr6.eq) goto loc_82EC682C;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC682C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec6864
	if (!cr6.eq) goto loc_82EC6864;
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// rlwinm r11,r11,1,1,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r8,20
	ctx.r8.s64 = 20;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// li r6,23
	ctx.r6.s64 = 23;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC6864:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec6890
	if (!cr6.eq) goto loc_82EC6890;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC6890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC68A8"))) PPC_WEAK_FUNC(sub_82EC68A8);
PPC_FUNC_IMPL(__imp__sub_82EC68A8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec68f4
	if (!cr6.eq) goto loc_82EC68F4;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// li r9,24
	ctx.r9.s64 = 24;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82ec6990
	sub_82EC6990(ctx, base);
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_82EC68F4:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x832050f0
	sub_832050F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec691c
	if (!cr6.eq) goto loc_82EC691C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82ec693c
	goto loc_82EC693C;
loc_82EC691C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83204ee8
	sub_83204EE8(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EC693C:
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// addi r31,r29,36
	r31.s64 = r29.s64 + 36;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ec6968
	if (!cr6.eq) goto loc_82EC6968;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC6968:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC6990"))) PPC_WEAK_FUNC(sub_82EC6990);
PPC_FUNC_IMPL(__imp__sub_82EC6990) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,12300
	ctx.r8.s64 = ctx.r10.s64 + 12300;
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// sth r7,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r7.u16);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x83205310
	sub_83205310(ctx, base);
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

__attribute__((alias("__imp__sub_82EC69E8"))) PPC_WEAK_FUNC(sub_82EC69E8);
PPC_FUNC_IMPL(__imp__sub_82EC69E8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r30,r27,8
	r30.s64 = r27.s64 + 8;
	// addi r10,r11,12300
	ctx.r10.s64 = r11.s64 + 12300;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x83204e10
	sub_83204E10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec6a7c
	if (cr6.eq) goto loc_82EC6A7C;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
loc_82EC6A38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e48
	sub_83204E48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83204e88
	sub_83204E88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83204ec8
	sub_83204EC8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec6a38
	if (!cr6.eq) goto loc_82EC6A38;
loc_82EC6A7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83205378
	sub_83205378(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC6A98"))) PPC_WEAK_FUNC(sub_82EC6A98);
PPC_FUNC_IMPL(__imp__sub_82EC6A98) {
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
	// bl 0x82ec69e8
	sub_82EC69E8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec6ae0
	if (cr6.eq) goto loc_82EC6AE0;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r6,5
	ctx.r6.s64 = 5;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC6AE0:
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

__attribute__((alias("__imp__sub_82EC6B00"))) PPC_WEAK_FUNC(sub_82EC6B00);
PPC_FUNC_IMPL(__imp__sub_82EC6B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// blt cr6,0x82ec6b14
	if (cr6.lt) goto loc_82EC6B14;
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82ec6b18
	if (cr6.lt) goto loc_82EC6B18;
loc_82EC6B14:
	// li r11,0
	r11.s64 = 0;
loc_82EC6B18:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC6B20"))) PPC_WEAK_FUNC(sub_82EC6B20);
PPC_FUNC_IMPL(__imp__sub_82EC6B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,12316
	ctx.r9.s64 = r11.s64 + 12316;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r11,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, r11.u8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// stb r10,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// lbz r9,3(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// stb r9,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r9.u8);
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stb r8,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r8.u8);
	// lbz r7,1(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
	// stb r7,13(r3)
	PPC_STORE_U8(ctx.r3.u32 + 13, ctx.r7.u8);
	// lbz r10,2(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 2);
	// stb r10,14(r3)
	PPC_STORE_U8(ctx.r3.u32 + 14, ctx.r10.u8);
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lbz r8,3(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r8,15(r3)
	PPC_STORE_U8(ctx.r3.u32 + 15, ctx.r8.u8);
	// xori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 ^ 1;
	// stb r5,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC6BA0"))) PPC_WEAK_FUNC(sub_82EC6BA0);
PPC_FUNC_IMPL(__imp__sub_82EC6BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC6BB0"))) PPC_WEAK_FUNC(sub_82EC6BB0);
PPC_FUNC_IMPL(__imp__sub_82EC6BB0) {
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
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ec6bec
	if (cr6.eq) goto loc_82EC6BEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6330
	sub_82EB6330(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EC6BEC:
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

__attribute__((alias("__imp__sub_82EC6C08"))) PPC_WEAK_FUNC(sub_82EC6C08);
PPC_FUNC_IMPL(__imp__sub_82EC6C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,29
	cr6.compare<uint32_t>(r11.u32, 29, xer);
	// bgt cr6,0x82ec6cd8
	if (cr6.gt) goto loc_82EC6CD8;
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,27708
	r12.s64 = r12.s64 + 27708;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82EC6CC0;
	case 1:
		goto loc_82EC6CC0;
	case 2:
		goto loc_82EC6CC0;
	case 3:
		goto loc_82EC6CC0;
	case 4:
		goto loc_82EC6CC0;
	case 5:
		goto loc_82EC6CC0;
	case 6:
		goto loc_82EC6CC0;
	case 7:
		goto loc_82EC6CC0;
	case 8:
		goto loc_82EC6CC0;
	case 9:
		goto loc_82EC6CC0;
	case 10:
		goto loc_82EC6CC0;
	case 11:
		goto loc_82EC6CB4;
	case 12:
		goto loc_82EC6CB4;
	case 13:
		goto loc_82EC6CB4;
	case 14:
		goto loc_82EC6CB4;
	case 15:
		goto loc_82EC6CB4;
	case 16:
		goto loc_82EC6CB4;
	case 17:
		goto loc_82EC6CB4;
	case 18:
		goto loc_82EC6CD8;
	case 19:
		goto loc_82EC6CD8;
	case 20:
		goto loc_82EC6CD8;
	case 21:
		goto loc_82EC6CD8;
	case 22:
		goto loc_82EC6CD8;
	case 23:
		goto loc_82EC6CD8;
	case 24:
		goto loc_82EC6CD8;
	case 25:
		goto loc_82EC6CD8;
	case 26:
		goto loc_82EC6CD8;
	case 27:
		goto loc_82EC6CD8;
	case 28:
		goto loc_82EC6CD8;
	case 29:
		goto loc_82EC6CD8;
	default:
		__builtin_unreachable();
	}
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27840(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27840);
	// lwz r23,27828(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27828);
	// lwz r23,27828(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27828);
	// lwz r23,27828(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27828);
	// lwz r23,27828(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27828);
	// lwz r23,27828(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27828);
	// lwz r23,27828(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27828);
	// lwz r23,27828(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27828);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
	// lwz r23,27864(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 27864);
loc_82EC6CB4:
	// rlwinm r11,r5,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// mullw r6,r11,r6
	ctx.r6.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
loc_82EC6CC0:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82EC6CD8:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12364
	ctx.r4.s64 = r11.s64 + 12364;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r5,29822
	ctx.r5.s64 = 1954414592;
	// li r8,251
	ctx.r8.s64 = 251;
	// addi r7,r9,12336
	ctx.r7.s64 = ctx.r9.s64 + 12336;
	// lwz r3,30588(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30588);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,7683
	ctx.r5.u64 = ctx.r5.u64 | 7683;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC6D48"))) PPC_WEAK_FUNC(sub_82EC6D48);
PPC_FUNC_IMPL(__imp__sub_82EC6D48) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82eb0458
	sub_82EB0458(ctx, base);
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(r11.u32, 25, xer);
	// bne cr6,0x82ec6dfc
	if (!cr6.eq) goto loc_82EC6DFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec6dfc
	if (cr6.eq) goto loc_82EC6DFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec6dfc
	if (!cr6.gt) goto loc_82EC6DFC;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82EC6DA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec6df4
	if (!cr6.gt) goto loc_82EC6DF4;
loc_82EC6DB4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec6d48
	sub_82EC6D48(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec6de0
	if (!cr6.eq) goto loc_82EC6DE0;
	// li r28,0
	r28.s64 = 0;
loc_82EC6DE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ec6db4
	if (cr6.lt) goto loc_82EC6DB4;
loc_82EC6DF4:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bne 0x82ec6da0
	if (!cr0.eq) goto loc_82EC6DA0;
loc_82EC6DFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EC6E08"))) PPC_WEAK_FUNC(sub_82EC6E08);
PPC_FUNC_IMPL(__imp__sub_82EC6E08) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ec6e64
	if (!cr6.eq) goto loc_82EC6E64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC6E64:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// bl 0x82eb2950
	sub_82EB2950(ctx, base);
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC6EA8"))) PPC_WEAK_FUNC(sub_82EC6EA8);
PPC_FUNC_IMPL(__imp__sub_82EC6EA8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,20
	r27.s64 = 20;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// rlwinm r4,r9,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82ec6f14
	if (cr6.gt) goto loc_82EC6F14;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ec6f28
	goto loc_82EC6F28;
loc_82EC6F14:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EC6F28:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// or r10,r31,r30
	ctx.r10.u64 = r31.u64 | r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ble cr6,0x82ec6f94
	if (!cr6.gt) goto loc_82EC6F94;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ec6f74
	if (!cr6.lt) goto loc_82EC6F74;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec6f64
	if (cr6.lt) goto loc_82EC6F64;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EC6F64:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC6F74:
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// bge cr6,0x82ec6f94
	if (!cr6.lt) goto loc_82EC6F94;
loc_82EC6F80:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r28,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r28.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x82ec6f80
	if (cr6.lt) goto loc_82EC6F80;
loc_82EC6F94:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// and r11,r11,r25
	r11.u64 = r11.u64 & r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec6fc4
	if (cr6.eq) goto loc_82EC6FC4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r5,r11,r31
	ctx.r5.s64 = r31.s64 - r11.s64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC6FC4:
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ec6fec
	if (!cr6.eq) goto loc_82EC6FEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC6FEC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec7010
	if (!cr6.eq) goto loc_82EC7010;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r27,r26
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + r26.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC7010:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EC7018"))) PPC_WEAK_FUNC(sub_82EC7018);
PPC_FUNC_IMPL(__imp__sub_82EC7018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// lbz r11,12(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// bgt cr6,0x82ec7190
	if (cr6.gt) goto loc_82EC7190;
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,28768
	r12.s64 = r12.s64 + 28768;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82EC70DC;
	case 1:
		goto loc_82EC70DC;
	case 2:
		goto loc_82EC70DC;
	case 3:
		goto loc_82EC70DC;
	case 4:
		goto loc_82EC70DC;
	case 5:
		goto loc_82EC70DC;
	case 6:
		goto loc_82EC70DC;
	case 7:
		goto loc_82EC70DC;
	case 8:
		goto loc_82EC70DC;
	case 9:
		goto loc_82EC70DC;
	case 10:
		goto loc_82EC70DC;
	case 11:
		goto loc_82EC70DC;
	case 12:
		goto loc_82EC70DC;
	case 13:
		goto loc_82EC70DC;
	case 14:
		goto loc_82EC70DC;
	case 15:
		goto loc_82EC70DC;
	case 16:
		goto loc_82EC70DC;
	case 17:
		goto loc_82EC70DC;
	case 18:
		goto loc_82EC7190;
	case 19:
		goto loc_82EC70EC;
	case 20:
		goto loc_82EC70EC;
	case 21:
		goto loc_82EC7100;
	case 22:
		goto loc_82EC7100;
	case 23:
		goto loc_82EC70DC;
	case 24:
		goto loc_82EC7158;
	case 25:
		goto loc_82EC7100;
	case 26:
		goto loc_82EC7100;
	case 27:
		goto loc_82EC7178;
	case 28:
		goto loc_82EC7190;
	case 29:
		goto loc_82EC70EC;
	case 30:
		goto loc_82EC70DC;
	default:
		__builtin_unreachable();
	}
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,29072(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 29072);
	// lwz r23,28908(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28908);
	// lwz r23,28908(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28908);
	// lwz r23,28928(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28928);
	// lwz r23,28928(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28928);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
	// lwz r23,29016(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 29016);
	// lwz r23,28928(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28928);
	// lwz r23,28928(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28928);
	// lwz r23,29048(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 29048);
	// lwz r23,29072(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 29072);
	// lwz r23,28908(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28908);
	// lwz r23,28892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 28892);
loc_82EC70DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82ec71ec
	goto loc_82EC71EC;
loc_82EC70EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// lbz r11,12(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// mullw r31,r3,r11
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(r11.s32);
	// b 0x82ec71ec
	goto loc_82EC71EC;
loc_82EC7100:
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(r11.u32, 27, xer);
	// bne cr6,0x82ec710c
	if (!cr6.eq) goto loc_82EC710C;
	// lbz r31,12(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 12);
loc_82EC710C:
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// add r11,r10,r31
	r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// bne cr6,0x82ec71ec
	if (!cr6.eq) goto loc_82EC71EC;
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r27.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb7750
	sub_82EB7750(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831b0b70
	return;
loc_82EC7158:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6318
	sub_82EB6318(ctx, base);
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mullw r31,r31,r3
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// b 0x82ec71ec
	goto loc_82EC71EC;
loc_82EC7178:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// lbz r11,12(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r11.s32);
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82ec71ec
	goto loc_82EC71EC;
loc_82EC7190:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,12428
	ctx.r4.s64 = r11.s64 + 12428;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r5,24308
	ctx.r5.s64 = 1593049088;
	// li r8,169
	ctx.r8.s64 = 169;
	// addi r7,r9,12336
	ctx.r7.s64 = ctx.r9.s64 + 12336;
	// lwz r3,30588(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30588);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// ori r5,r5,58788
	ctx.r5.u64 = ctx.r5.u64 | 58788;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82EC71EC:
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,20
	r28.s64 = 20;
	// lis r30,-32768
	r30.s64 = -2147483648;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82ec722c
	if (cr6.gt) goto loc_82EC722C;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82ec7240
	goto loc_82EC7240;
loc_82EC722C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EC7240:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// or r11,r31,r30
	r11.u64 = r31.u64 | r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// ble cr6,0x82ec72ac
	if (!cr6.gt) goto loc_82EC72AC;
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82ec728c
	if (!cr6.lt) goto loc_82EC728C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec727c
	if (cr6.lt) goto loc_82EC727C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82EC727C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaeb08
	sub_82EAEB08(ctx, base);
loc_82EC728C:
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// bge cr6,0x82ec72ac
	if (!cr6.lt) goto loc_82EC72AC;
loc_82EC7298:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stbx r27,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r27.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// blt cr6,0x82ec7298
	if (cr6.lt) goto loc_82EC7298;
loc_82EC72AC:
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82ec72e8
	if (!cr6.eq) goto loc_82EC72E8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC72E8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec730c
	if (!cr6.eq) goto loc_82EC730C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwzx r3,r28,r29
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC730C:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC7318"))) PPC_WEAK_FUNC(sub_82EC7318);
PPC_FUNC_IMPL(__imp__sub_82EC7318) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(r26.u32, 4, xer);
	// bne cr6,0x82ec7354
	if (!cr6.eq) goto loc_82EC7354;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
loc_82EC7354:
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,20
	r29.s64 = 20;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// rlwinm r4,r11,3,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF0;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// lwz r31,32(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r31,r4
	r11.u64 = r31.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ec7384
	if (cr6.gt) goto loc_82EC7384;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// b 0x82ec7398
	goto loc_82EC7398;
loc_82EC7384:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82EC7398:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82ec73c4
	if (!cr6.gt) goto loc_82EC73C4;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EC73AC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// std r8,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82ec73ac
	if (!cr0.eq) goto loc_82EC73AC;
loc_82EC73C4:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ec7400
	if (!cr6.eq) goto loc_82EC7400;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC7400:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EC7408"))) PPC_WEAK_FUNC(sub_82EC7408);
PPC_FUNC_IMPL(__imp__sub_82EC7408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// stw r4,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r4.u32);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r5,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r5.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// li r21,0
	r21.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r17,r21
	r17.u64 = r21.u64;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec7b1c
	if (!cr6.gt) goto loc_82EC7B1C;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r10,12464
	ctx.r10.s64 = ctx.r10.s64 + 12464;
	// lis r16,-32768
	r16.s64 = -2147483648;
	// addi r14,r11,12336
	r14.s64 = r11.s64 + 12336;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_82EC7478:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// add r4,r11,r15
	ctx.r4.u64 = r11.u64 + r15.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 16);
	// rlwinm r7,r8,0,21,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ec74e8
	if (cr6.eq) goto loc_82EC74E8;
	// lwz r11,16(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ec74dc
	if (cr6.eq) goto loc_82EC74DC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82ec7018
	sub_82EC7018(ctx, base);
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC74DC:
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ec7af4
	if (!cr6.eq) goto loc_82EC7AF4;
loc_82EC74E8:
	// lwz r3,884(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82eb01e8
	sub_82EB01E8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82ec7af4
	if (cr6.eq) goto loc_82EC7AF4;
	// lbz r11,12(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ec7af4
	if (!cr6.eq) goto loc_82EC7AF4;
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// lbz r10,13(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 13);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ec7528
	if (cr6.eq) goto loc_82EC7528;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// bne cr6,0x82ec7af4
	if (!cr6.eq) goto loc_82EC7AF4;
loc_82EC7528:
	// lhz r10,18(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 18);
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// lwz r7,876(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// add r27,r10,r7
	r27.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bgt cr6,0x82ec7a9c
	if (cr6.gt) goto loc_82EC7A9C;
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,30040
	r12.s64 = r12.s64 + 30040;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82EC75D4;
	case 1:
		goto loc_82EC75D4;
	case 2:
		goto loc_82EC75D4;
	case 3:
		goto loc_82EC75D4;
	case 4:
		goto loc_82EC75D4;
	case 5:
		goto loc_82EC75D4;
	case 6:
		goto loc_82EC75D4;
	case 7:
		goto loc_82EC75D4;
	case 8:
		goto loc_82EC75D4;
	case 9:
		goto loc_82EC75D4;
	case 10:
		goto loc_82EC75D4;
	case 11:
		goto loc_82EC75D4;
	case 12:
		goto loc_82EC75D4;
	case 13:
		goto loc_82EC75D4;
	case 14:
		goto loc_82EC75D4;
	case 15:
		goto loc_82EC75D4;
	case 16:
		goto loc_82EC75D4;
	case 17:
		goto loc_82EC75D4;
	case 18:
		goto loc_82EC7B08;
	case 19:
		goto loc_82EC7774;
	case 20:
		goto loc_82EC7774;
	case 21:
		goto loc_82EC77A8;
	case 22:
		goto loc_82EC77A8;
	case 23:
		goto loc_82EC7668;
	case 24:
		goto loc_82EC7820;
	case 25:
		goto loc_82EC77A8;
	case 26:
		goto loc_82EC77A8;
	case 27:
		goto loc_82EC78AC;
	case 28:
		goto loc_82EC7774;
	case 29:
		goto loc_82EC7630;
	case 30:
		goto loc_82EC78FC;
	default:
		__builtin_unreachable();
	}
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,30164(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30164);
	// lwz r23,31496(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 31496);
	// lwz r23,30580(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30580);
	// lwz r23,30580(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30580);
	// lwz r23,30632(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30632);
	// lwz r23,30632(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30632);
	// lwz r23,30312(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30312);
	// lwz r23,30752(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30752);
	// lwz r23,30632(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30632);
	// lwz r23,30632(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30632);
	// lwz r23,30892(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30892);
	// lwz r23,30580(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30580);
	// lwz r23,30256(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30256);
	// lwz r23,30972(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 30972);
loc_82EC75D4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// blt cr6,0x82ec75f8
	if (cr6.lt) goto loc_82EC75F8;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82EC75F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// rotlwi r11,r3,1
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r5,r3,r30
	ctx.r5.s32 = ctx.r3.s32 / r30.s32;
	// lbz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// andc r10,r30,r11
	ctx.r10.u64 = r30.u64 & ~r11.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// twllei r30,0
	// twlgei r10,-1
	// bl 0x82ec6c08
	sub_82EC6C08(ctx, base);
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC7630:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// blt cr6,0x82ec7654
	if (cr6.lt) goto loc_82EC7654;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82EC7654:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lbz r4,12(r20)
	ctx.r4.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82ec7318
	sub_82EC7318(ctx, base);
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC7668:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// mr r29,r30
	r29.u64 = r30.u64;
	// blt cr6,0x82ec768c
	if (cr6.lt) goto loc_82EC768C;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82EC768C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb6328
	sub_82EB6328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6328
	sub_82EB6328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ec7b08
	if (cr6.eq) goto loc_82EC7B08;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82ec7b08
	if (cr6.eq) goto loc_82EC7B08;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// rotlwi r11,r3,1
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// mr r31,r27
	r31.u64 = r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// divw r28,r3,r30
	r28.s32 = ctx.r3.s32 / r30.s32;
	// andc r10,r30,r11
	ctx.r10.u64 = r30.u64 & ~r11.u64;
	// twllei r30,0
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// twlgei r10,-1
	// ble cr6,0x82ec7b08
	if (!cr6.gt) goto loc_82EC7B08;
loc_82EC76E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb6628
	sub_82EB6628(ctx, base);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb7a88
	sub_82EB7A88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec7718
	if (!cr6.eq) goto loc_82EC7718;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82eb7ae0
	sub_82EB7AE0(ctx, base);
loc_82EC7718:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// beq cr6,0x82ec7754
	if (cr6.eq) goto loc_82EC7754;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x82ec7740
	if (cr6.eq) goto loc_82EC7740;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// bne cr6,0x82ec7764
	if (!cr6.eq) goto loc_82EC7764;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82eb7720
	sub_82EB7720(ctx, base);
	// b 0x82ec7764
	goto loc_82EC7764;
loc_82EC7740:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// extsh r4,r11
	ctx.r4.s64 = r11.s16;
	// bl 0x82eb76c0
	sub_82EB76C0(ctx, base);
	// b 0x82ec7764
	goto loc_82EC7764;
loc_82EC7754:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// extsb r4,r11
	ctx.r4.s64 = r11.s8;
	// bl 0x82eb7148
	sub_82EB7148(ctx, base);
loc_82EC7764:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// bne 0x82ec76e0
	if (!cr0.eq) goto loc_82EC76E0;
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC7774:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// std r21,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r21.u64);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec7b08
	if (!cr6.gt) goto loc_82EC7B08;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82EC778C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lbz r5,12(r20)
	ctx.r5.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82ec778c
	if (!cr0.eq) goto loc_82EC778C;
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC77A8:
	// cmplwi cr6,r9,27
	cr6.compare<uint32_t>(ctx.r9.u32, 27, xer);
	// bne cr6,0x82ec77d0
	if (!cr6.eq) goto loc_82EC77D0;
	// std r21,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r21.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lbz r5,12(r20)
	ctx.r5.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x82ec77e0
	goto loc_82EC77E0;
loc_82EC77D0:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mr r30,r21
	r30.u64 = r21.u64;
	// beq cr6,0x82ec77e0
	if (cr6.eq) goto loc_82EC77E0;
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
loc_82EC77E0:
	// std r21,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, r21.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lbz r5,12(r20)
	ctx.r5.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7720
	sub_82EB7720(ctx, base);
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// bne cr6,0x82ec7b08
	if (!cr6.eq) goto loc_82EC7B08;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// oris r4,r30,49152
	ctx.r4.u64 = r30.u64 | 3221225472;
	// bl 0x82eb7720
	sub_82EB7720(ctx, base);
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC7820:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec7b08
	if (cr6.eq) goto loc_82EC7B08;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ec7b08
	if (cr6.eq) goto loc_82EC7B08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// blt cr6,0x82ec786c
	if (cr6.lt) goto loc_82EC786C;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82EC786C:
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82ec7b08
	if (!cr6.gt) goto loc_82EC7B08;
loc_82EC7878:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82ec7408
	sub_82EC7408(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x82ec7878
	if (cr6.lt) goto loc_82EC7878;
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC78AC:
	// std r21,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, r21.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r21,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, r21.u64);
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// bge cr6,0x82ec78d4
	if (!cr6.lt) goto loc_82EC78D4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82EC78D4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82ec7b08
	if (!cr6.gt) goto loc_82EC7B08;
loc_82EC78DC:
	// li r6,2
	ctx.r6.s64 = 2;
	// lbz r5,12(r20)
	ctx.r5.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82ec78dc
	if (!cr0.eq) goto loc_82EC78DC;
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC78FC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// mr r29,r30
	r29.u64 = r30.u64;
	// blt cr6,0x82ec7920
	if (cr6.lt) goto loc_82EC7920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82EC7920:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb6328
	sub_82EB6328(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb6328
	sub_82EB6328(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb6360
	sub_82EB6360(ctx, base);
	// rotlwi r11,r3,1
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// divw r23,r3,r30
	r23.s32 = ctx.r3.s32 / r30.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// twllei r30,0
	// andc r10,r30,r11
	ctx.r10.u64 = r30.u64 & ~r11.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// twlgei r10,-1
	// ble cr6,0x82ec7b08
	if (!cr6.gt) goto loc_82EC7B08;
loc_82EC7960:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82eb6628
	sub_82EB6628(ctx, base);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82eb7c30
	sub_82EB7C30(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec79f4
	if (!cr6.gt) goto loc_82EC79F4;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82EC79A8:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82eb7ae0
	sub_82EB7AE0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ec79d0
	if (!cr6.eq) goto loc_82EC79D0;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// or r31,r11,r31
	r31.u64 = r11.u64 | r31.u64;
	// b 0x82ec79e0
	goto loc_82EC79E0;
loc_82EC79D0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82EC79E0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ec79a8
	if (cr6.lt) goto loc_82EC79A8;
loc_82EC79F4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82ec7a1c
	if (cr6.eq) goto loc_82EC7A1C;
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb7c30
	sub_82EB7C30(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// or r31,r11,r31
	r31.u64 = r11.u64 | r31.u64;
loc_82EC7A1C:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// beq cr6,0x82ec7a54
	if (cr6.eq) goto loc_82EC7A54;
	// cmpwi cr6,r23,2
	cr6.compare<int32_t>(r23.s32, 2, xer);
	// beq cr6,0x82ec7a44
	if (cr6.eq) goto loc_82EC7A44;
	// cmpwi cr6,r23,4
	cr6.compare<int32_t>(r23.s32, 4, xer);
	// bne cr6,0x82ec7a60
	if (!cr6.eq) goto loc_82EC7A60;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7720
	sub_82EB7720(ctx, base);
	// b 0x82ec7a60
	goto loc_82EC7A60;
loc_82EC7A44:
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb76c0
	sub_82EB76C0(ctx, base);
	// b 0x82ec7a60
	goto loc_82EC7A60;
loc_82EC7A54:
	// extsb r4,r31
	ctx.r4.s64 = r31.s8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7148
	sub_82EB7148(ctx, base);
loc_82EC7A60:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r27,r27,r23
	r27.u64 = r27.u64 + r23.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec7a90
	if (!cr6.eq) goto loc_82EC7A90;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC7A90:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82ec7960
	if (!cr0.eq) goto loc_82EC7960;
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC7A9C:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lis r5,25630
	ctx.r5.s64 = 1679687680;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// li r8,528
	ctx.r8.s64 = 528;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r3,30588(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 30588);
	// ori r5,r5,15875
	ctx.r5.u64 = ctx.r5.u64 | 15875;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
	// b 0x82ec7b08
	goto loc_82EC7B08;
loc_82EC7AF4:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82ec6d48
	sub_82EC6D48(ctx, base);
loc_82EC7B08:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpw cr6,r17,r3
	cr6.compare<int32_t>(r17.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ec7478
	if (cr6.lt) goto loc_82EC7478;
loc_82EC7B1C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// add r4,r3,r15
	ctx.r4.u64 = ctx.r3.u64 + r15.u64;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82EC7B58"))) PPC_WEAK_FUNC(sub_82EC7B58);
PPC_FUNC_IMPL(__imp__sub_82EC7B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stw r4,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r4.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r5,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r5.u32);
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82ec7ba4
	if (!cr6.eq) goto loc_82EC7BA4;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82eaff18
	sub_82EAFF18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec86f0
	sub_82EC86F0(ctx, base);
loc_82EC7BA4:
	// li r19,0
	r19.s64 = 0;
	// addi r20,r31,1
	r20.s64 = r31.s64 + 1;
	// mr r31,r19
	r31.u64 = r19.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82ec8538
	if (!cr6.gt) goto loc_82EC8538;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r7,25630
	ctx.r7.s64 = 1679687680;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// addi r6,r11,12464
	ctx.r6.s64 = r11.s64 + 12464;
	// addi r5,r9,12516
	ctx.r5.s64 = ctx.r9.s64 + 12516;
	// lis r16,-31943
	r16.s64 = -2093416448;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// ori r15,r7,15877
	r15.u64 = ctx.r7.u64 | 15877;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r17,r10,12336
	r17.s64 = ctx.r10.s64 + 12336;
	// addi r18,r8,30300
	r18.s64 = ctx.r8.s64 + 30300;
loc_82EC7BF8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82eb0158
	sub_82EB0158(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,868(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82eb01e8
	sub_82EB01E8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ec8520
	if (cr6.eq) goto loc_82EC8520;
	// lhz r11,18(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 18);
	// lbz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// lbz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 12);
	// lwz r8,860(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// add r29,r11,r8
	r29.u64 = r11.u64 + ctx.r8.u64;
	// bne cr6,0x82ec8520
	if (!cr6.eq) goto loc_82EC8520;
	// lbz r11,13(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 13);
	// lbz r9,13(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ec8520
	if (!cr6.eq) goto loc_82EC8520;
	// lwz r11,16(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// rlwinm r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ec7c6c
	if (cr6.eq) goto loc_82EC7C6C;
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// rlwinm r8,r11,0,21,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ec8520
	if (!cr6.eq) goto loc_82EC8520;
loc_82EC7C6C:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// bgt cr6,0x82ec84c0
	if (cr6.gt) goto loc_82EC84C0;
	// lis r12,-32020
	r12.s64 = -2098462720;
	// addi r12,r12,31888
	r12.s64 = r12.s64 + 31888;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82EC850C;
	case 1:
		goto loc_82EC850C;
	case 2:
		goto loc_82EC850C;
	case 3:
		goto loc_82EC850C;
	case 4:
		goto loc_82EC850C;
	case 5:
		goto loc_82EC850C;
	case 6:
		goto loc_82EC850C;
	case 7:
		goto loc_82EC850C;
	case 8:
		goto loc_82EC850C;
	case 9:
		goto loc_82EC850C;
	case 10:
		goto loc_82EC850C;
	case 11:
		goto loc_82EC850C;
	case 12:
		goto loc_82EC850C;
	case 13:
		goto loc_82EC850C;
	case 14:
		goto loc_82EC850C;
	case 15:
		goto loc_82EC850C;
	case 16:
		goto loc_82EC850C;
	case 17:
		goto loc_82EC850C;
	case 18:
		goto loc_82EC8474;
	case 19:
		goto loc_82EC7D30;
	case 20:
		goto loc_82EC850C;
	case 21:
		goto loc_82EC7DD4;
	case 22:
		goto loc_82EC7DD4;
	case 23:
		goto loc_82EC850C;
	case 24:
		goto loc_82EC830C;
	case 25:
		goto loc_82EC7DD4;
	case 26:
		goto loc_82EC8204;
	case 27:
		goto loc_82EC83BC;
	case 28:
		goto loc_82EC7D0C;
	case 29:
		goto loc_82EC850C;
	case 30:
		goto loc_82EC850C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31628(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31628);
	// lwz r23,32048(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 32048);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,32212(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 32212);
	// lwz r23,32212(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 32212);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31988(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31988);
	// lwz r23,32212(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 32212);
	// lwz r23,-32252(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -32252);
	// lwz r23,-31812(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31812);
	// lwz r23,32012(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + 32012);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
	// lwz r23,-31476(r12)
	r23.u64 = PPC_LOAD_U32(r12.u32 + -31476);
loc_82EC7D0C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// bl 0x82ec6e08
	sub_82EC6E08(ctx, base);
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC7D30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// blt cr6,0x82ec7d54
	if (cr6.lt) goto loc_82EC7D54;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82EC7D54:
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
loc_82EC7D60:
	// lbz r11,8(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 8);
	// mullw r10,r11,r27
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// lwzx r28,r10,r29
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ec7dc4
	if (cr6.eq) goto loc_82EC7DC4;
	// lbz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// lbz r9,13(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bne cr6,0x82ec7da8
	if (!cr6.eq) goto loc_82EC7DA8;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ec6e08
	sub_82EC6E08(ctx, base);
	// b 0x82ec7dc4
	goto loc_82EC7DC4;
loc_82EC7DA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8678
	sub_82EC8678(ctx, base);
loc_82EC7DC4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// blt cr6,0x82ec7d60
	if (cr6.lt) goto loc_82EC7D60;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC7DD4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// cmplwi cr6,r9,20
	cr6.compare<uint32_t>(ctx.r9.u32, 20, xer);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bne cr6,0x82ec7eb4
	if (!cr6.eq) goto loc_82EC7EB4;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r31,18(r30)
	r31.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8608
	sub_82EC8608(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r30,r19
	r30.u64 = r19.u64;
	// std r19,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r19.u64);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
	// mr r31,r19
	r31.u64 = r19.u64;
loc_82EC7E34:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ec7e8c
	if (cr6.eq) goto loc_82EC7E8C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwzx r28,r10,r31
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82ec8678
	sub_82EC8678(ctx, base);
loc_82EC7E8C:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lbz r5,12(r24)
	ctx.r5.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ec7e34
	if (cr6.lt) goto loc_82EC7E34;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC7EB4:
	// cmplwi cr6,r9,29
	cr6.compare<uint32_t>(ctx.r9.u32, 29, xer);
	// bne cr6,0x82ec7f8c
	if (!cr6.eq) goto loc_82EC7F8C;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r31,18(r30)
	r31.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8608
	sub_82EC8608(ctx, base);
	// std r19,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r19.u64);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82ec7f34
	if (!cr6.gt) goto loc_82EC7F34;
loc_82EC7F14:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r5,12(r24)
	ctx.r5.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7398
	sub_82EB7398(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec7f14
	if (cr6.lt) goto loc_82EC7F14;
loc_82EC7F34:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
	// mr r31,r19
	r31.u64 = r19.u64;
loc_82EC7F48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ec7f74
	if (cr6.eq) goto loc_82EC7F74;
	// lbz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mullw r11,r10,r30
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x82ec6e08
	sub_82EC6E08(ctx, base);
loc_82EC7F74:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ec7f48
	if (cr6.lt) goto loc_82EC7F48;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC7F8C:
	// cmplwi cr6,r9,25
	cr6.compare<uint32_t>(ctx.r9.u32, 25, xer);
	// bne cr6,0x82ec8094
	if (!cr6.eq) goto loc_82EC8094;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8608
	sub_82EC8608(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r19
	r31.u64 = r19.u64;
	// lwz r27,0(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec8030
	if (!cr6.gt) goto loc_82EC8030;
loc_82EC7FFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82ec7408
	sub_82EC7408(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec7ffc
	if (cr6.lt) goto loc_82EC7FFC;
loc_82EC8030:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
loc_82EC8040:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r26,r11,r25
	r26.u64 = r11.u64 + r25.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// bl 0x82ec7b58
	sub_82EC7B58(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec8040
	if (cr6.lt) goto loc_82EC8040;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC8094:
	// cmplwi cr6,r9,28
	cr6.compare<uint32_t>(ctx.r9.u32, 28, xer);
	// bne cr6,0x82ec818c
	if (!cr6.eq) goto loc_82EC818C;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8608
	sub_82EC8608(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ec8104
	if (!cr6.gt) goto loc_82EC8104;
loc_82EC80D8:
	// std r19,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, r19.u64);
	// li r6,2
	ctx.r6.s64 = 2;
	// std r19,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, r19.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lbz r5,12(r24)
	ctx.r5.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// bl 0x82eb71e0
	sub_82EB71E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82ec80d8
	if (cr6.lt) goto loc_82EC80D8;
loc_82EC8104:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_82EC8118:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lbz r10,12(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ec8148
	if (cr6.eq) goto loc_82EC8148;
	// add r4,r31,r27
	ctx.r4.u64 = r31.u64 + r27.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8678
	sub_82EC8678(ctx, base);
loc_82EC8148:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ec8174
	if (cr6.eq) goto loc_82EC8174;
	// lbz r11,12(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// bl 0x82ec8678
	sub_82EC8678(ctx, base);
loc_82EC8174:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82ec8118
	if (cr6.lt) goto loc_82EC8118;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC818C:
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r31,18(r30)
	r31.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8608
	sub_82EC8608(ctx, base);
	// lbz r31,13(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplwi cr6,r31,30
	cr6.compare<uint32_t>(r31.u32, 30, xer);
	// bne cr6,0x82ec81d8
	if (!cr6.eq) goto loc_82EC81D8;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lbz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// bl 0x82ec7318
	sub_82EC7318(ctx, base);
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC81D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r29,4(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82eb65d8
	sub_82EB65D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82ec6c08
	sub_82EC6C08(ctx, base);
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC8204:
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ec8678
	sub_82EC8678(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,12(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// lhz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// bl 0x82ec8608
	sub_82EC8608(ctx, base);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r28,4(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// ble cr6,0x82ec82a8
	if (!cr6.gt) goto loc_82EC82A8;
loc_82EC8274:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r30
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82ec7408
	sub_82EC7408(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ec8274
	if (cr6.lt) goto loc_82EC8274;
loc_82EC82A8:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r30,r19
	r30.u64 = r19.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
loc_82EC82B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r30
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r26,r11,r27
	r26.u64 = r11.u64 + r27.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r30
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// bl 0x82ec7b58
	sub_82EC7B58(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82ec82b8
	if (cr6.lt) goto loc_82EC82B8;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC830C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb6320
	sub_82EB6320(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ec850c
	if (cr6.eq) goto loc_82EC850C;
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r25,r11,r21
	r25.u64 = r11.u64 + r21.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// mr r26,r31
	r26.u64 = r31.u64;
	// blt cr6,0x82ec8360
	if (cr6.lt) goto loc_82EC8360;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82EC8360:
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
loc_82EC836C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// bl 0x82eb0378
	sub_82EB0378(ctx, base);
	// mullw r11,r3,r31
	r11.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// add r8,r11,r25
	ctx.r8.u64 = r11.u64 + r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// bl 0x82ec7b58
	sub_82EC7B58(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r26
	cr6.compare<int32_t>(r31.s32, r26.s32, xer);
	// blt cr6,0x82ec836c
	if (cr6.lt) goto loc_82EC836C;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC83BC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ec6bb0
	sub_82EC6BB0(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// mr r26,r31
	r26.u64 = r31.u64;
	// blt cr6,0x82ec83e0
	if (cr6.lt) goto loc_82EC83E0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82EC83E0:
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82ec850c
	if (!cr6.gt) goto loc_82EC850C;
	// li r27,1
	r27.s64 = 1;
loc_82EC83F0:
	// lbz r11,8(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 8);
	// mullw r10,r28,r11
	ctx.r10.s64 = int64_t(r28.s32) * int64_t(r11.s32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r8,r27,r11
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// lwzx r5,r9,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// lwzx r31,r8,r29
	r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + r29.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ec8434
	if (cr6.eq) goto loc_82EC8434;
	// lbz r11,12(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lhz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mullw r9,r11,r28
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// rlwinm r11,r9,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// bl 0x82ec8678
	sub_82EC8678(ctx, base);
loc_82EC8434:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ec8460
	if (cr6.eq) goto loc_82EC8460;
	// lbz r11,12(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// lhz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// add r4,r11,r21
	ctx.r4.u64 = r11.u64 + r21.u64;
	// bl 0x82ec8678
	sub_82EC8678(ctx, base);
loc_82EC8460:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// cmpw cr6,r28,r26
	cr6.compare<int32_t>(r28.s32, r26.s32, xer);
	// blt cr6,0x82ec83f0
	if (cr6.lt) goto loc_82EC83F0;
	// b 0x82ec850c
	goto loc_82EC850C;
loc_82EC8474:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r3,30588(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 30588);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r8,869
	ctx.r8.s64 = 869;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82ec8508
	goto loc_82EC8508;
loc_82EC84C0:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82eae638
	sub_82EAE638(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lwz r3,30588(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 30588);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r8,874
	ctx.r8.s64 = 874;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_82EC8508:
	// bl 0x82eae128
	sub_82EAE128(ctx, base);
loc_82EC850C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82eb7408
	sub_82EB7408(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ec6ea8
	sub_82EC6EA8(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EC8520:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x82eb0130
	sub_82EB0130(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// blt cr6,0x82ec7bf8
	if (cr6.lt) goto loc_82EC7BF8;
loc_82EC8538:
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82EC8540"))) PPC_WEAK_FUNC(sub_82EC8540);
PPC_FUNC_IMPL(__imp__sub_82EC8540) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lbz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82eb74a0
	sub_82EB74A0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x82ec7408
	sub_82EC7408(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82ec6ea8
	sub_82EC6EA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ec7b58
	sub_82EC7B58(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ec6ea8
	sub_82EC6EA8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eb73c8
	sub_82EB73C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r31,r8,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82eb7640
	sub_82EB7640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EC8600"))) PPC_WEAK_FUNC(sub_82EC8600);
PPC_FUNC_IMPL(__imp__sub_82EC8600) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC8608"))) PPC_WEAK_FUNC(sub_82EC8608);
PPC_FUNC_IMPL(__imp__sub_82EC8608) {
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
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec8640
	if (!cr6.eq) goto loc_82EC8640;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC8640:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82EC8678"))) PPC_WEAK_FUNC(sub_82EC8678);
PPC_FUNC_IMPL(__imp__sub_82EC8678) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec86b4
	if (!cr6.eq) goto loc_82EC86B4;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC86B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// stw r29,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r29.u32);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r28.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EC86F0"))) PPC_WEAK_FUNC(sub_82EC86F0);
PPC_FUNC_IMPL(__imp__sub_82EC86F0) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r31,r3,24
	r31.s64 = ctx.r3.s64 + 24;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ec872c
	if (!cr6.eq) goto loc_82EC872C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaeb90
	sub_82EAEB90(ctx, base);
loc_82EC872C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r9,r8,r10
	PPC_STORE_U64(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82EC8760"))) PPC_WEAK_FUNC(sub_82EC8760);
PPC_FUNC_IMPL(__imp__sub_82EC8760) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC8768"))) PPC_WEAK_FUNC(sub_82EC8768);
PPC_FUNC_IMPL(__imp__sub_82EC8768) {
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
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb2ab0
	sub_82EB2AB0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC87C0"))) PPC_WEAK_FUNC(sub_82EC87C0);
PPC_FUNC_IMPL(__imp__sub_82EC87C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addic. r7,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r7.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
loc_82EC87D0:
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bne cr6,0x82ec8810
	if (!cr6.eq) goto loc_82EC8810;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
loc_82EC8810:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x82ec87d0
	if (!cr0.lt) goto loc_82EC87D0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC8820"))) PPC_WEAK_FUNC(sub_82EC8820);
PPC_FUNC_IMPL(__imp__sub_82EC8820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82EC883C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ec8858
	if (cr6.eq) goto loc_82EC8858;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// bge 0x82ec883c
	if (!cr0.lt) goto loc_82EC883C;
	// blr 
	return;
loc_82EC8858:
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r8,-1
	r11.s64 = ctx.r8.s64 + -1;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC8890"))) PPC_WEAK_FUNC(sub_82EC8890);
PPC_FUNC_IMPL(__imp__sub_82EC8890) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,12548
	ctx.r9.s64 = r11.s64 + 12548;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x82eb3e40
	sub_82EB3E40(ctx, base);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EC8920"))) PPC_WEAK_FUNC(sub_82EC8920);
PPC_FUNC_IMPL(__imp__sub_82EC8920) {
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
	// li r31,0
	r31.s64 = 0;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82ec8964
	if (cr6.lt) goto loc_82EC8964;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82EC8948:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82ec8964
	if (!cr6.eq) goto loc_82EC8964;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// ble cr6,0x82ec8948
	if (!cr6.gt) goto loc_82EC8948;
loc_82EC8964:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x82ec8978
	if (!cr6.gt) goto loc_82EC8978;
	// li r11,0
	r11.s64 = 0;
loc_82EC8978:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ec89fc
	if (cr6.eq) goto loc_82EC89FC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ec89bc
	if (cr6.eq) goto loc_82EC89BC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EC89BC:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x82ec89f4
	if (cr6.gt) goto loc_82EC89F4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82EC89D8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82ec89f4
	if (!cr6.eq) goto loc_82EC89F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// ble cr6,0x82ec89d8
	if (!cr6.gt) goto loc_82EC89D8;
loc_82EC89F4:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82ec8964
	goto loc_82EC8964;
loc_82EC89FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eb3ce8
	sub_82EB3CE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EC8A10"))) PPC_WEAK_FUNC(sub_82EC8A10);
PPC_FUNC_IMPL(__imp__sub_82EC8A10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r10,r11,12548
	ctx.r10.s64 = r11.s64 + 12548;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ec8920
	sub_82EC8920(ctx, base);
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,20
	r26.s64 = 20;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwzx r28,r26,r27
	r28.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// ble cr6,0x82ec8a74
	if (!cr6.gt) goto loc_82EC8A74;
	// li r29,0
	r29.s64 = 0;
loc_82EC8A50:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x82ec8a50
	if (cr6.lt) goto loc_82EC8A50;
loc_82EC8A74:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ec8ab8
	if (!cr6.gt) goto loc_82EC8AB8;
	// li r30,0
	r30.s64 = 0;
loc_82EC8A88:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82ec8a88
	if (cr6.lt) goto loc_82EC8A88;
loc_82EC8AB8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8cb8
	sub_82EA8CB8(ctx, base);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec8ae8
	if (!cr6.eq) goto loc_82EC8AE8;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC8AE8:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec8b0c
	if (!cr6.eq) goto loc_82EC8B0C;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC8B0C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec8b3c
	if (!cr6.eq) goto loc_82EC8B3C;
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r11,r11,1,1,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFFFFFE;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// li r6,23
	ctx.r6.s64 = 23;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC8B3C:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ec8b60
	if (!cr6.eq) goto loc_82EC8B60;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r26,r27
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC8B60:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82eb3ec0
	sub_82EB3EC0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-22012
	ctx.r10.s64 = r11.s64 + -22012;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EC8B80"))) PPC_WEAK_FUNC(sub_82EC8B80);
PPC_FUNC_IMPL(__imp__sub_82EC8B80) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r28,64
	r30.s64 = r28.s64 + 64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,68(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 68);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ec8c0c
	if (!cr6.lt) goto loc_82EC8C0C;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec8bd8
	if (!cr6.eq) goto loc_82EC8BD8;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC8BD8:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,23
	ctx.r5.s64 = 23;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// rlwinm r7,r8,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
loc_82EC8C0C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x82ec8c48
	if (!cr6.gt) goto loc_82EC8C48;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82EC8C28:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82ec8c28
	if (!cr0.eq) goto loc_82EC8C28;
loc_82EC8C48:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r31,r28,52
	r31.s64 = r28.s64 + 52;
	// lwz r9,56(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ec8cbc
	if (!cr6.lt) goto loc_82EC8CBC;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ec8c88
	if (!cr6.eq) goto loc_82EC8C88;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EC8C88:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,23
	ctx.r5.s64 = 23;
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// rlwinm r7,r8,0,1,1
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r5,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r5.u32);
loc_82EC8CBC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ble cr6,0x82ec8cf8
	if (!cr6.gt) goto loc_82EC8CF8;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82EC8CD8:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82ec8cd8
	if (!cr0.eq) goto loc_82EC8CD8;
loc_82EC8CF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

