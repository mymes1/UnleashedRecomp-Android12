#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FF5658"))) PPC_WEAK_FUNC(sub_82FF5658);
PPC_FUNC_IMPL(__imp__sub_82FF5658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-4584
	r11.s64 = r11.s64 + -4584;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5668"))) PPC_WEAK_FUNC(sub_82FF5668);
PPC_FUNC_IMPL(__imp__sub_82FF5668) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82ff56b8
	if (cr6.lt) goto loc_82FF56B8;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,67
	ctx.r5.s64 = 67;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd8ca0
	sub_82FD8CA0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8684
	ctx.r4.s64 = r11.s64 + -8684;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF56B8:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff56e8
	if (cr0.eq) goto loc_82FF56E8;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff56e8
	if (cr0.eq) goto loc_82FF56E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF56E8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF5700"))) PPC_WEAK_FUNC(sub_82FF5700);
PPC_FUNC_IMPL(__imp__sub_82FF5700) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff5770
	if (!cr6.gt) goto loc_82FF5770;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82FF5728:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff5754
	if (cr0.eq) goto loc_82FF5754;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r28,r11,r30
	r28.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82ff5754
	if (cr0.eq) goto loc_82FF5754;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5754:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r27,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, r27.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82ff5728
	if (cr6.lt) goto loc_82FF5728;
loc_82FF5770:
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF5780"))) PPC_WEAK_FUNC(sub_82FF5780);
PPC_FUNC_IMPL(__imp__sub_82FF5780) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82ff57cc
	if (cr6.lt) goto loc_82FF57CC;
	// lis r11,-32237
	r11.s64 = -2112684032;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r6,116
	ctx.r6.s64 = 116;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// li r5,144
	ctx.r5.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd8ca0
	sub_82FD8CA0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8684
	ctx.r4.s64 = r11.s64 + -8684;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF57CC:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff57fc
	if (cr0.eq) goto loc_82FF57FC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff57fc
	if (cr0.eq) goto loc_82FF57FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF57FC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82ff5820
	if (!cr6.eq) goto loc_82FF5820;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// b 0x82ff5870
	goto loc_82FF5870;
loc_82FF5820:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82ff5858
	if (!cr6.lt) goto loc_82FF5858;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FF5830:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ff5830
	if (cr6.lt) goto loc_82FF5830;
loc_82FF5858:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
loc_82FF5870:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF5888"))) PPC_WEAK_FUNC(sub_82FF5888);
PPC_FUNC_IMPL(__imp__sub_82FF5888) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff58dc
	if (cr0.eq) goto loc_82FF58DC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beq 0x82ff58dc
	if (cr0.eq) goto loc_82FF58DC;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82ff58dc
	if (cr0.eq) goto loc_82FF58DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF58DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF58F0"))) PPC_WEAK_FUNC(sub_82FF58F0);
PPC_FUNC_IMPL(__imp__sub_82FF58F0) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff5954
	if (cr0.eq) goto loc_82FF5954;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff5954
	if (!cr6.gt) goto loc_82FF5954;
	// li r30,0
	r30.s64 = 0;
loc_82FF5920:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff5940
	if (cr0.eq) goto loc_82FF5940;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5940:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82ff5920
	if (cr6.lt) goto loc_82FF5920;
loc_82FF5954:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF5978"))) PPC_WEAK_FUNC(sub_82FF5978);
PPC_FUNC_IMPL(__imp__sub_82FF5978) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-4584
	r11.s64 = r11.s64 + -4584;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r5,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r5.u8);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r6,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x82ff59ec
	if (cr6.eq) goto loc_82FF59EC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FF59D8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82ff59d8
	if (!cr0.eq) goto loc_82FF59D8;
loc_82FF59EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF59F8"))) PPC_WEAK_FUNC(sub_82FF59F8);
PPC_FUNC_IMPL(__imp__sub_82FF59F8) {
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
	// lis r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	r11.u64 = r11.u64 | 32772;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ff5a58
	if (cr6.lt) goto loc_82FF5A58;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49177
	r11.u64 = r11.u64 | 49177;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff5a48
	if (cr0.eq) goto loc_82FF5A48;
loc_82FF5A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff5a8c
	goto loc_82FF5A8C;
loc_82FF5A48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff5a40
	if (cr0.eq) goto loc_82FF5A40;
loc_82FF5A58:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ff4ef8
	sub_82FF4EF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF5A8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5AA8"))) PPC_WEAK_FUNC(sub_82FF5AA8);
PPC_FUNC_IMPL(__imp__sub_82FF5AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r29,0
	r29.s64 = 0;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r29,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r29.u8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82ff5adc
	if (cr0.eq) goto loc_82FF5ADC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5ADC:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff5afc
	if (cr0.eq) goto loc_82FF5AFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF5AFC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff5b1c
	if (cr0.eq) goto loc_82FF5B1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF5B1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF5B28"))) PPC_WEAK_FUNC(sub_82FF5B28);
PPC_FUNC_IMPL(__imp__sub_82FF5B28) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82ff5b6c
	if (!cr6.gt) goto loc_82FF5B6C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,79
	ctx.r6.s64 = 79;
	// addi r4,r11,-16112
	ctx.r4.s64 = r11.s64 + -16112;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd8ca0
	sub_82FD8CA0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8684
	ctx.r4.s64 = r11.s64 + -8684;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF5B6C:
	// bl 0x8302dd08
	sub_8302DD08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5B80"))) PPC_WEAK_FUNC(sub_82FF5B80);
PPC_FUNC_IMPL(__imp__sub_82FF5B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff5bc4
	if (!cr0.eq) goto loc_82FF5BC4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,80
	ctx.r6.s64 = 80;
	// addi r4,r11,-16112
	ctx.r4.s64 = r11.s64 + -16112;
	// li r5,106
	ctx.r5.s64 = 106;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fdc0b0
	sub_82FDC0B0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8504
	ctx.r4.s64 = r11.s64 + -8504;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF5BC4:
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x830a2bd0
	sub_830A2BD0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5BE8"))) PPC_WEAK_FUNC(sub_82FF5BE8);
PPC_FUNC_IMPL(__imp__sub_82FF5BE8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-4560
	r11.s64 = r11.s64 + -4560;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff5c60
	if (cr0.eq) goto loc_82FF5C60;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff5c60
	if (!cr6.gt) goto loc_82FF5C60;
	// li r29,0
	r29.s64 = 0;
loc_82FF5C2C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r28,r11,r29
	r28.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82ff5c4c
	if (cr0.eq) goto loc_82FF5C4C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5C4C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82ff5c2c
	if (cr6.lt) goto loc_82FF5C2C;
loc_82FF5C60:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-4584
	r11.s64 = r11.s64 + -4584;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF5C8C"))) PPC_WEAK_FUNC(sub_82FF5C8C);
PPC_FUNC_IMPL(__imp__sub_82FF5C8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82ff5658
	sub_82FF5658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5CB8"))) PPC_WEAK_FUNC(sub_82FF5CB8);
PPC_FUNC_IMPL(__imp__sub_82FF5CB8) {
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
	// bl 0x82ff5be8
	sub_82FF5BE8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff5ce8
	if (cr0.eq) goto loc_82FF5CE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5CE8:
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

__attribute__((alias("__imp__sub_82FF5D08"))) PPC_WEAK_FUNC(sub_82FF5D08);
PPC_FUNC_IMPL(__imp__sub_82FF5D08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff5d38
	if (cr0.eq) goto loc_82FF5D38;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r10,49177
	ctx.r10.u64 = ctx.r10.u64 | 49177;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82ff5d3c
	if (!cr0.eq) goto loc_82FF5D3C;
loc_82FF5D38:
	// li r11,0
	r11.s64 = 0;
loc_82FF5D3C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5D48"))) PPC_WEAK_FUNC(sub_82FF5D48);
PPC_FUNC_IMPL(__imp__sub_82FF5D48) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	r11.s64 = 131072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// ori r30,r11,32808
	r30.u64 = r11.u64 | 32808;
	// b 0x82ff5db4
	goto loc_82FF5DB4;
loc_82FF5D68:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff5dcc
	if (!cr0.eq) goto loc_82FF5DCC;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff5d98
	if (cr0.eq) goto loc_82FF5D98;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5D98:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82ff5b80
	sub_82FF5B80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82ff5b80
	sub_82FF5B80(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_82FF5DB4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82ff5d68
	if (!cr6.eq) goto loc_82FF5D68;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_82FF5DCC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r6,69
	ctx.r6.s64 = 69;
	// addi r4,r11,-4480
	ctx.r4.s64 = r11.s64 + -4480;
	// li r5,366
	ctx.r5.s64 = 366;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF5DF8"))) PPC_WEAK_FUNC(sub_82FF5DF8);
PPC_FUNC_IMPL(__imp__sub_82FF5DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff5e0c
	if (!cr0.eq) goto loc_82FF5E0C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF5E0C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5E28"))) PPC_WEAK_FUNC(sub_82FF5E28);
PPC_FUNC_IMPL(__imp__sub_82FF5E28) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r28,8(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82ff5ee4
	if (cr0.eq) goto loc_82FF5EE4;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff5e68
	if (!cr6.eq) goto loc_82FF5E68;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82ff5e6c
	if (cr6.eq) goto loc_82FF5E6C;
loc_82FF5E68:
	// li r11,1
	r11.s64 = 1;
loc_82FF5E6C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff5ee4
	if (!cr0.eq) goto loc_82FF5EE4;
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff5ee4
	if (cr0.eq) goto loc_82FF5EE4;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// b 0x82ff5ec0
	goto loc_82FF5EC0;
loc_82FF5E8C:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff5ea8
	if (!cr6.eq) goto loc_82FF5EA8;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82ff5eac
	if (cr6.eq) goto loc_82FF5EAC;
loc_82FF5EA8:
	// li r11,1
	r11.s64 = 1;
loc_82FF5EAC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff5ed4
	if (!cr0.eq) goto loc_82FF5ED4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ff5ee4
	if (cr6.eq) goto loc_82FF5EE4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82FF5EC0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x82ff5b28
	sub_82FF5B28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82ff5e8c
	if (!cr0.eq) goto loc_82FF5E8C;
loc_82FF5ED4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82ff5b28
	sub_82FF5B28(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82FF5EE4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF5EF8"))) PPC_WEAK_FUNC(sub_82FF5EF8);
PPC_FUNC_IMPL(__imp__sub_82FF5EF8) {
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
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff602c
	if (!cr0.eq) goto loc_82FF602C;
	// lis r11,2
	r11.s64 = 131072;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,32841
	r11.u64 = r11.u64 | 32841;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// lbzx r27,r30,r11
	r27.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// lwzx r28,r30,r10
	r28.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// beq 0x82ff5f54
	if (cr0.eq) goto loc_82FF5F54;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5F54:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82ff5b80
	sub_82FF5B80(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82ff5b80
	sub_82FF5B80(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82ff5f80
	if (cr6.eq) goto loc_82FF5F80;
	// lbz r11,28(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff5f88
	if (!cr0.eq) goto loc_82FF5F88;
loc_82FF5F80:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff5fa0
	if (cr0.eq) goto loc_82FF5FA0;
loc_82FF5F88:
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r4,r11,-7952
	ctx.r4.s64 = r11.s64 + -7952;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF5FA0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r30,r10,32772
	r30.u64 = ctx.r10.u64 | 32772;
	// b 0x82ff6010
	goto loc_82FF6010;
loc_82FF5FAC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff6024
	if (!cr0.eq) goto loc_82FF6024;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff602c
	if (!cr0.eq) goto loc_82FF602C;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff5ff4
	if (cr0.eq) goto loc_82FF5FF4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF5FF4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82ff5b80
	sub_82FF5B80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82ff5b80
	sub_82FF5B80(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
loc_82FF6010:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff5fac
	if (cr0.eq) goto loc_82FF5FAC;
loc_82FF6024:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff6030
	goto loc_82FF6030;
loc_82FF602C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF6030:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF6038"))) PPC_WEAK_FUNC(sub_82FF6038);
PPC_FUNC_IMPL(__imp__sub_82FF6038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6050"))) PPC_WEAK_FUNC(sub_82FF6050);
PPC_FUNC_IMPL(__imp__sub_82FF6050) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ff59f8
	sub_82FF59F8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff609c
	if (!cr0.eq) goto loc_82FF609C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff6090
	if (!cr0.eq) goto loc_82FF6090;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff60a0
	goto loc_82FF60A0;
loc_82FF6090:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ff59f8
	sub_82FF59F8(ctx, base);
loc_82FF609C:
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_82FF60A0:
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

__attribute__((alias("__imp__sub_82FF60B8"))) PPC_WEAK_FUNC(sub_82FF60B8);
PPC_FUNC_IMPL(__imp__sub_82FF60B8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// b 0x82ff60f8
	goto loc_82FF60F8;
loc_82FF60E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff610c
	if (cr0.eq) goto loc_82FF610C;
loc_82FF60F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82ffb610
	sub_82FFB610(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff60e8
	if (cr0.eq) goto loc_82FF60E8;
loc_82FF610C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6128"))) PPC_WEAK_FUNC(sub_82FF6128);
PPC_FUNC_IMPL(__imp__sub_82FF6128) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// b 0x82ff6164
	goto loc_82FF6164;
loc_82FF6154:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff617c
	if (cr0.eq) goto loc_82FF617C;
loc_82FF6164:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ffb6c0
	sub_82FFB6C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6154
	if (cr0.eq) goto loc_82FF6154;
loc_82FF617C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF6188"))) PPC_WEAK_FUNC(sub_82FF6188);
PPC_FUNC_IMPL(__imp__sub_82FF6188) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ff4e28
	sub_82FF4E28(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff61d4
	if (!cr0.eq) goto loc_82FF61D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff61c8
	if (!cr0.eq) goto loc_82FF61C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff61d8
	goto loc_82FF61D8;
loc_82FF61C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ff4e28
	sub_82FF4E28(ctx, base);
loc_82FF61D4:
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_82FF61D8:
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

__attribute__((alias("__imp__sub_82FF61F0"))) PPC_WEAK_FUNC(sub_82FF61F0);
PPC_FUNC_IMPL(__imp__sub_82FF61F0) {
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
	// b 0x82ff6238
	goto loc_82FF6238;
loc_82FF6210:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r10,r10,49177
	ctx.r10.u64 = ctx.r10.u64 | 49177;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff6254
	if (cr0.eq) goto loc_82FF6254;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6254
	if (cr0.eq) goto loc_82FF6254;
loc_82FF6238:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ffb3b8
	sub_82FFB3B8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6210
	if (cr0.eq) goto loc_82FF6210;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff6258
	goto loc_82FF6258;
loc_82FF6254:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF6258:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6270"))) PPC_WEAK_FUNC(sub_82FF6270);
PPC_FUNC_IMPL(__imp__sub_82FF6270) {
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
	// b 0x82ff62b0
	goto loc_82FF62B0;
loc_82FF6288:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r10,r10,49177
	ctx.r10.u64 = ctx.r10.u64 | 49177;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff62c8
	if (cr0.eq) goto loc_82FF62C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff62c8
	if (cr0.eq) goto loc_82FF62C8;
loc_82FF62B0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ffb888
	sub_82FFB888(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6288
	if (cr0.eq) goto loc_82FF6288;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff62cc
	goto loc_82FF62CC;
loc_82FF62C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF62CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF62E0"))) PPC_WEAK_FUNC(sub_82FF62E0);
PPC_FUNC_IMPL(__imp__sub_82FF62E0) {
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
	// b 0x82ff6328
	goto loc_82FF6328;
loc_82FF6300:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r10,r10,49177
	ctx.r10.u64 = ctx.r10.u64 | 49177;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff6344
	if (cr0.eq) goto loc_82FF6344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6344
	if (cr0.eq) goto loc_82FF6344;
loc_82FF6328:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ffb308
	sub_82FFB308(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6300
	if (cr0.eq) goto loc_82FF6300;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff6348
	goto loc_82FF6348;
loc_82FF6344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF6348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6360"))) PPC_WEAK_FUNC(sub_82FF6360);
PPC_FUNC_IMPL(__imp__sub_82FF6360) {
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
	// li r29,0
	r29.s64 = 0;
	// b 0x82ff639c
	goto loc_82FF639C;
loc_82FF637C:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff638c
	if (cr0.eq) goto loc_82FF638C;
	// li r29,1
	r29.s64 = 1;
loc_82FF638C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff5ef8
	sub_82FF5EF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff63b4
	if (cr0.eq) goto loc_82FF63B4;
loc_82FF639C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffb780
	sub_82FFB780(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff637c
	if (cr0.eq) goto loc_82FF637C;
loc_82FF63B4:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff63cc
	if (!cr0.eq) goto loc_82FF63CC;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82ff63d0
	if (cr0.eq) goto loc_82FF63D0;
loc_82FF63CC:
	// li r11,1
	r11.s64 = 1;
loc_82FF63D0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF63E0"))) PPC_WEAK_FUNC(sub_82FF63E0);
PPC_FUNC_IMPL(__imp__sub_82FF63E0) {
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
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6424
	if (cr0.eq) goto loc_82FF6424;
	// clrlwi r30,r30,16
	r30.u64 = r30.u32 & 0xFFFF;
loc_82FF640C:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82ff6424
	if (cr6.eq) goto loc_82FF6424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff640c
	if (!cr0.eq) goto loc_82FF640C;
loc_82FF6424:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6440"))) PPC_WEAK_FUNC(sub_82FF6440);
PPC_FUNC_IMPL(__imp__sub_82FF6440) {
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
	// b 0x82ff6474
	goto loc_82FF6474;
loc_82FF6458:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ff6488
	if (!cr6.eq) goto loc_82FF6488;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
loc_82FF6474:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff6458
	if (!cr0.eq) goto loc_82FF6458;
loc_82FF6488:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF6498"))) PPC_WEAK_FUNC(sub_82FF6498);
PPC_FUNC_IMPL(__imp__sub_82FF6498) {
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
	// b 0x82ff64e8
	goto loc_82FF64E8;
loc_82FF64B0:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// ori r9,r9,32852
	ctx.r9.u64 = ctx.r9.u64 | 32852;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff64fc
	if (!cr0.eq) goto loc_82FF64FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ff64fc
	if (!cr6.eq) goto loc_82FF64FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
loc_82FF64E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff64b0
	if (!cr0.eq) goto loc_82FF64B0;
loc_82FF64FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF6508"))) PPC_WEAK_FUNC(sub_82FF6508);
PPC_FUNC_IMPL(__imp__sub_82FF6508) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff5e28
	sub_82FF5E28(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49172
	r11.u64 = r11.u64 | 49172;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6538"))) PPC_WEAK_FUNC(sub_82FF6538);
PPC_FUNC_IMPL(__imp__sub_82FF6538) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff65b0
	if (cr6.eq) goto loc_82FF65B0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff65b0
	if (cr6.eq) goto loc_82FF65B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff5e28
	sub_82FF5E28(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// ori r10,r10,49180
	ctx.r10.u64 = ctx.r10.u64 | 49180;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r9,49164
	ctx.r9.u64 = ctx.r9.u64 | 49164;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// ori r8,r8,49160
	ctx.r8.u64 = ctx.r8.u64 | 49160;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwzx r11,r3,r10
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwzx r11,r3,r9
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwzx r11,r3,r8
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82ff65cc
	goto loc_82FF65CC;
loc_82FF65B0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_82FF65CC:
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

__attribute__((alias("__imp__sub_82FF65E8"))) PPC_WEAK_FUNC(sub_82FF65E8);
PPC_FUNC_IMPL(__imp__sub_82FF65E8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82ff6664
	if (cr6.eq) goto loc_82FF6664;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff6664
	if (cr0.eq) goto loc_82FF6664;
	// lwz r28,8(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// lwz r27,16(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82ff6664
	if (cr0.eq) goto loc_82FF6664;
loc_82FF6630:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82ff5b28
	sub_82FF5B28(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff6658
	if (cr0.eq) goto loc_82FF6658;
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff66b0
	if (!cr0.eq) goto loc_82FF66B0;
loc_82FF6658:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x82ff6630
	if (cr6.lt) goto loc_82FF6630;
loc_82FF6664:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff66d8
	if (!cr6.eq) goto loc_82FF66D8;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82ff66d0
	if (cr0.eq) goto loc_82FF66D0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5978
	sub_82FF5978(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,-4560
	r11.s64 = r11.s64 + -4560;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82ff66d4
	goto loc_82FF66D4;
loc_82FF66B0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82ff66c8
	if (cr6.eq) goto loc_82FF66C8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF66C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff6758
	goto loc_82FF6758;
loc_82FF66D0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF66D4:
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
loc_82FF66D8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff672c
	if (!cr6.eq) goto loc_82FF672C;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82ff6724
	if (cr0.eq) goto loc_82FF6724;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82ff6728
	goto loc_82FF6728;
loc_82FF6724:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF6728:
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
loc_82FF672C:
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82ff674c
	if (cr0.eq) goto loc_82FF674C;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x83043678
	sub_83043678(ctx, base);
loc_82FF674C:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r25.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
loc_82FF6758:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82FF6760"))) PPC_WEAK_FUNC(sub_82FF6760);
PPC_FUNC_IMPL(__imp__sub_82FF6760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6790"))) PPC_WEAK_FUNC(sub_82FF6790);
PPC_FUNC_IMPL(__imp__sub_82FF6790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF67C0"))) PPC_WEAK_FUNC(sub_82FF67C0);
PPC_FUNC_IMPL(__imp__sub_82FF67C0) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff67f0
	if (!cr6.eq) goto loc_82FF67F0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff67f0
	if (!cr6.eq) goto loc_82FF67F0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
	// b 0x82ff6804
	goto loc_82FF6804;
loc_82FF67F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff5e28
	sub_82FF5E28(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49180
	r11.u64 = r11.u64 | 49180;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
loc_82FF6804:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6818"))) PPC_WEAK_FUNC(sub_82FF6818);
PPC_FUNC_IMPL(__imp__sub_82FF6818) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff6848
	if (!cr6.eq) goto loc_82FF6848;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff6848
	if (!cr6.eq) goto loc_82FF6848;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
	// b 0x82ff685c
	goto loc_82FF685C;
loc_82FF6848:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff5e28
	sub_82FF5E28(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
loc_82FF685C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6870"))) PPC_WEAK_FUNC(sub_82FF6870);
PPC_FUNC_IMPL(__imp__sub_82FF6870) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff689c
	if (!cr6.eq) goto loc_82FF689C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff689c
	if (!cr6.eq) goto loc_82FF689C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff68b0
	goto loc_82FF68B0;
loc_82FF689C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff5e28
	sub_82FF5E28(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49160
	r11.u64 = r11.u64 | 49160;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
loc_82FF68B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF68C0"))) PPC_WEAK_FUNC(sub_82FF68C0);
PPC_FUNC_IMPL(__imp__sub_82FF68C0) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff68ec
	if (!cr6.eq) goto loc_82FF68EC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff68ec
	if (!cr6.eq) goto loc_82FF68EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff6900
	goto loc_82FF6900;
loc_82FF68EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ff5e28
	sub_82FF5E28(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49164
	r11.u64 = r11.u64 | 49164;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
loc_82FF6900:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6918"))) PPC_WEAK_FUNC(sub_82FF6918);
PPC_FUNC_IMPL(__imp__sub_82FF6918) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-5000
	r11.s64 = r11.s64 + -5000;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff6958
	if (cr0.eq) goto loc_82FF6958;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ffa110
	sub_82FFA110(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF6958:
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff6974
	if (cr0.eq) goto loc_82FF6974;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff5be8
	sub_82FF5BE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF6974:
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff6990
	if (cr0.eq) goto loc_82FF6990;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x830ac7b8
	sub_830AC7B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF6990:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5020
	r11.s64 = r11.s64 + -5020;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF69A4"))) PPC_WEAK_FUNC(sub_82FF69A4);
PPC_FUNC_IMPL(__imp__sub_82FF69A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x8306e410
	sub_8306E410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF69D8"))) PPC_WEAK_FUNC(sub_82FF69D8);
PPC_FUNC_IMPL(__imp__sub_82FF69D8) {
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
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// bl 0x82fda7f0
	sub_82FDA7F0(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// li r4,1023
	ctx.r4.s64 = 1023;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// sthx r29,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r29.u16);
	// lwz r28,184(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff6a88
	if (cr0.eq) goto loc_82FF6A88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff6a9c
	if (!cr0.eq) goto loc_82FF6A9C;
loc_82FF6A88:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_82FF6A9C:
	// stw r29,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r29.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff6b14
	if (cr6.eq) goto loc_82FF6B14;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// sthx r29,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r29.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r27,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r27.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r10,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r10.u32);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r10,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r10.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// stw r10,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bne 0x82ff6c84
	if (!cr0.eq) goto loc_82FF6C84;
loc_82FF6B14:
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8301c3d8
	sub_8301C3D8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r6,r31,256
	ctx.r6.s64 = r31.s64 + 256;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,128(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sthx r29,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r29.u16);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8301d860
	sub_8301D860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6be8
	if (cr0.eq) goto loc_82FF6BE8;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff6be8
	if (!cr0.eq) goto loc_82FF6BE8;
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff6bb4
	if (cr0.eq) goto loc_82FF6BB4;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff6bb4
	if (cr0.eq) goto loc_82FF6BB4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-4480
	ctx.r4.s64 = r11.s64 + -4480;
	// li r5,571
	ctx.r5.s64 = 571;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF6BB4:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff6bdc
	if (cr0.eq) goto loc_82FF6BDC;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x82ff6be0
	goto loc_82FF6BE0;
loc_82FF6BDC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82FF6BE0:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// b 0x82ff6c7c
	goto loc_82FF6C7C;
loc_82FF6BE8:
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff6cf8
	if (!cr0.eq) goto loc_82FF6CF8;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r29.u16);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82fe39e0
	sub_82FE39E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff6c5c
	if (cr0.eq) goto loc_82FF6C5C;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,248(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r29,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r29.u16);
	// lwz r5,248(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe0ed0
	sub_82FE0ED0(ctx, base);
	// b 0x82ff6c60
	goto loc_82FF6C60;
loc_82FF6C5C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82FF6C60:
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r4,248(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF6C7C:
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_82FF6C84:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lbz r9,487(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 487);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82ff6d24
	if (!cr0.eq) goto loc_82FF6D24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff6d7c
	goto loc_82FF6D7C;
loc_82FF6CF8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-4480
	ctx.r4.s64 = r11.s64 + -4480;
	// li r5,566
	ctx.r5.s64 = 566;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF6D24:
	// lis r11,2
	r11.s64 = 131072;
	// ori r10,r11,32808
	ctx.r10.u64 = r11.u64 | 32808;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// stwx r11,r28,r10
	PPC_STORE_U32(r28.u32 + ctx.r10.u32, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FF6D7C:
	// addi r1,r31,400
	ctx.r1.s64 = r31.s64 + 400;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82FF6D84"))) PPC_WEAK_FUNC(sub_82FF6D84);
PPC_FUNC_IMPL(__imp__sub_82FF6D84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6DAC"))) PPC_WEAK_FUNC(sub_82FF6DAC);
PPC_FUNC_IMPL(__imp__sub_82FF6DAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6DD4"))) PPC_WEAK_FUNC(sub_82FF6DD4);
PPC_FUNC_IMPL(__imp__sub_82FF6DD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6DFC"))) PPC_WEAK_FUNC(sub_82FF6DFC);
PPC_FUNC_IMPL(__imp__sub_82FF6DFC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6E2C"))) PPC_WEAK_FUNC(sub_82FF6E2C);
PPC_FUNC_IMPL(__imp__sub_82FF6E2C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6E54"))) PPC_WEAK_FUNC(sub_82FF6E54);
PPC_FUNC_IMPL(__imp__sub_82FF6E54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6E84"))) PPC_WEAK_FUNC(sub_82FF6E84);
PPC_FUNC_IMPL(__imp__sub_82FF6E84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83094688
	sub_83094688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF6EB8"))) PPC_WEAK_FUNC(sub_82FF6EB8);
PPC_FUNC_IMPL(__imp__sub_82FF6EB8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// addi r31,r1,-400
	r31.s64 = ctx.r1.s64 + -400;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r30.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// bl 0x82fda7f0
	sub_82FDA7F0(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// li r4,1023
	ctx.r4.s64 = 1023;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r29,152(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff6f68
	if (cr0.eq) goto loc_82FF6F68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff6f7c
	if (!cr0.eq) goto loc_82FF6F7C;
loc_82FF6F68:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
loc_82FF6F7C:
	// lwz r25,484(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// stw r28,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r28.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff6fe8
	if (cr6.eq) goto loc_82FF6FE8;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// sthx r28,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r28.u16);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r26,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r26.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// stw r27,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r27.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r10.u32);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// stw r10,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// bne 0x82ff7170
	if (!cr0.eq) goto loc_82FF7170;
loc_82FF6FE8:
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ff7000
	if (cr6.eq) goto loc_82FF7000;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff7010
	if (!cr0.eq) goto loc_82FF7010;
loc_82FF7000:
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// lwz r29,224(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 224);
loc_82FF7010:
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8301c3d8
	sub_8301C3D8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r6,r31,256
	ctx.r6.s64 = r31.s64 + 256;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x8301d860
	sub_8301D860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff70d4
	if (cr0.eq) goto loc_82FF70D4;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff70d4
	if (!cr0.eq) goto loc_82FF70D4;
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff70a0
	if (cr0.eq) goto loc_82FF70A0;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff70a0
	if (cr0.eq) goto loc_82FF70A0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-4480
	ctx.r4.s64 = r11.s64 + -4480;
	// li r5,685
	ctx.r5.s64 = 685;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF70A0:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff70c8
	if (cr0.eq) goto loc_82FF70C8;
	// addi r4,r31,256
	ctx.r4.s64 = r31.s64 + 256;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// b 0x82ff70cc
	goto loc_82FF70CC;
loc_82FF70C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FF70CC:
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// b 0x82ff7168
	goto loc_82FF7168;
loc_82FF70D4:
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff71e4
	if (!cr0.eq) goto loc_82FF71E4;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82fe39e0
	sub_82FE39E0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff7148
	if (cr0.eq) goto loc_82FF7148;
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r28,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r28.u16);
	// lwz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// bl 0x82fe0ed0
	sub_82FE0ED0(ctx, base);
	// b 0x82ff714c
	goto loc_82FF714C;
loc_82FF7148:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FF714C:
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// lwz r3,204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r4,216(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF7168:
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
loc_82FF7170:
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lbz r9,495(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 495);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff5178
	sub_82FF5178(ctx, base);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82ff7210
	if (!cr0.eq) goto loc_82FF7210;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff7268
	goto loc_82FF7268;
loc_82FF71E4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-4480
	ctx.r4.s64 = r11.s64 + -4480;
	// li r5,680
	ctx.r5.s64 = 680;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// addi r4,r11,-8356
	ctx.r4.s64 = r11.s64 + -8356;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF7210:
	// lis r11,2
	r11.s64 = 131072;
	// ori r10,r11,32808
	ctx.r10.u64 = r11.u64 | 32808;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// stwx r11,r29,r10
	PPC_STORE_U32(r29.u32 + ctx.r10.u32, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82FF7268:
	// addi r1,r31,400
	ctx.r1.s64 = r31.s64 + 400;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82FF7270"))) PPC_WEAK_FUNC(sub_82FF7270);
PPC_FUNC_IMPL(__imp__sub_82FF7270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7298"))) PPC_WEAK_FUNC(sub_82FF7298);
PPC_FUNC_IMPL(__imp__sub_82FF7298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF72C0"))) PPC_WEAK_FUNC(sub_82FF72C0);
PPC_FUNC_IMPL(__imp__sub_82FF72C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF72E8"))) PPC_WEAK_FUNC(sub_82FF72E8);
PPC_FUNC_IMPL(__imp__sub_82FF72E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7318"))) PPC_WEAK_FUNC(sub_82FF7318);
PPC_FUNC_IMPL(__imp__sub_82FF7318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x82fe72f8
	sub_82FE72F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7340"))) PPC_WEAK_FUNC(sub_82FF7340);
PPC_FUNC_IMPL(__imp__sub_82FF7340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7370"))) PPC_WEAK_FUNC(sub_82FF7370);
PPC_FUNC_IMPL(__imp__sub_82FF7370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-400
	r31.s64 = r12.s64 + -400;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83094688
	sub_83094688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7398"))) PPC_WEAK_FUNC(sub_82FF7398);
PPC_FUNC_IMPL(__imp__sub_82FF7398) {
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
	// bl 0x82ff6918
	sub_82FF6918(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff73c8
	if (cr0.eq) goto loc_82FF73C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF73C8:
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

__attribute__((alias("__imp__sub_82FF73E8"))) PPC_WEAK_FUNC(sub_82FF73E8);
PPC_FUNC_IMPL(__imp__sub_82FF73E8) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82ff7414
	if (cr0.eq) goto loc_82FF7414;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82FF7414:
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

__attribute__((alias("__imp__sub_82FF7430"))) PPC_WEAK_FUNC(sub_82FF7430);
PPC_FUNC_IMPL(__imp__sub_82FF7430) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3636
	r11.s64 = r11.s64 + -3636;
	// addi r10,r10,-30128
	ctx.r10.s64 = ctx.r10.s64 + -30128;
	// addi r9,r9,-3652
	ctx.r9.s64 = ctx.r9.s64 + -3652;
	// clrlwi. r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq 0x82ff7474
	if (cr0.eq) goto loc_82FF7474;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF7474:
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

__attribute__((alias("__imp__sub_82FF7490"))) PPC_WEAK_FUNC(sub_82FF7490);
PPC_FUNC_IMPL(__imp__sub_82FF7490) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r3,-15924(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -15924);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ff74c4
	if (cr6.eq) goto loc_82FF74C4;
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
loc_82FF74C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15924(r31)
	PPC_STORE_U32(r31.u32 + -15924, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF74E0"))) PPC_WEAK_FUNC(sub_82FF74E0);
PPC_FUNC_IMPL(__imp__sub_82FF74E0) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r3,-15916(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -15916);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ff7514
	if (cr6.eq) goto loc_82FF7514;
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
loc_82FF7514:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15916(r31)
	PPC_STORE_U32(r31.u32 + -15916, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7530"))) PPC_WEAK_FUNC(sub_82FF7530);
PPC_FUNC_IMPL(__imp__sub_82FF7530) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ff767c
	if (cr6.eq) goto loc_82FF767C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ff7564
	if (cr6.eq) goto loc_82FF7564;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff7568
	if (!cr0.eq) goto loc_82FF7568;
loc_82FF7564:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82FF7568:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r11,-3728
	r31.s64 = r11.s64 + -3728;
	// clrlwi r26,r10,24
	r26.u64 = ctx.r10.u32 & 0xFF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-28364
	ctx.r4.s64 = r11.s64 + -28364;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff75dc
	if (!cr0.eq) goto loc_82FF75DC;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff75dc
	if (cr0.eq) goto loc_82FF75DC;
loc_82FF75D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff7680
	goto loc_82FF7680;
loc_82FF75DC:
	// addi r4,r31,44
	ctx.r4.s64 = r31.s64 + 44;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff7610
	if (!cr0.eq) goto loc_82FF7610;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
loc_82FF7610:
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff7634
	if (!cr0.eq) goto loc_82FF7634;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
loc_82FF7634:
	// addi r4,r31,56
	ctx.r4.s64 = r31.s64 + 56;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff7658
	if (!cr0.eq) goto loc_82FF7658;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
loc_82FF7658:
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff767c
	if (!cr0.eq) goto loc_82FF767C;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff75d4
	if (!cr0.eq) goto loc_82FF75D4;
loc_82FF767C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF7680:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF7690"))) PPC_WEAK_FUNC(sub_82FF7690);
PPC_FUNC_IMPL(__imp__sub_82FF7690) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ff76e4
	if (cr6.eq) goto loc_82FF76E4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff76e4
	if (cr0.eq) goto loc_82FF76E4;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// b 0x82ff76cc
	goto loc_82FF76CC;
loc_82FF76C8:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FF76CC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ff76c8
	if (!cr0.eq) goto loc_82FF76C8;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// b 0x82ff76e8
	goto loc_82FF76E8;
loc_82FF76E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FF76E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe1b18
	sub_82FE1B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff7720
	if (!cr0.eq) goto loc_82FF7720;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r6,-16120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -16120);
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF7720:
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff7750
	if (cr0.eq) goto loc_82FF7750;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff9040
	sub_82FF9040(ctx, base);
	// b 0x82ff7754
	goto loc_82FF7754;
loc_82FF7750:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF7754:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF775C"))) PPC_WEAK_FUNC(sub_82FF775C);
PPC_FUNC_IMPL(__imp__sub_82FF775C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7790"))) PPC_WEAK_FUNC(sub_82FF7790);
PPC_FUNC_IMPL(__imp__sub_82FF7790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff77e4
	if (cr0.eq) goto loc_82FF77E4;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fedf00
	sub_82FEDF00(ctx, base);
	// b 0x82ff77e8
	goto loc_82FF77E8;
loc_82FF77E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF77E8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF77F0"))) PPC_WEAK_FUNC(sub_82FF77F0);
PPC_FUNC_IMPL(__imp__sub_82FF77F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7820"))) PPC_WEAK_FUNC(sub_82FF7820);
PPC_FUNC_IMPL(__imp__sub_82FF7820) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,-16120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -16120);
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF7860"))) PPC_WEAK_FUNC(sub_82FF7860);
PPC_FUNC_IMPL(__imp__sub_82FF7860) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r3,156
	ctx.r3.s64 = 156;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff78a0
	if (cr0.eq) goto loc_82FF78A0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82fea920
	sub_82FEA920(ctx, base);
	// b 0x82ff78a4
	goto loc_82FF78A4;
loc_82FF78A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF78A4:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF78BC"))) PPC_WEAK_FUNC(sub_82FF78BC);
PPC_FUNC_IMPL(__imp__sub_82FF78BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF78F0"))) PPC_WEAK_FUNC(sub_82FF78F0);
PPC_FUNC_IMPL(__imp__sub_82FF78F0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// extsh r11,r4
	r11.s64 = ctx.r4.s16;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// stw r30,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r30.u32);
	// bne cr6,0x82ff7938
	if (!cr6.eq) goto loc_82FF7938;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF7938:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff7964
	if (cr0.eq) goto loc_82FF7964;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83037a70
	sub_83037A70(ctx, base);
	// b 0x82ff7968
	goto loc_82FF7968;
loc_82FF7964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF7968:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// bne cr6,0x82ff7978
	if (!cr6.eq) goto loc_82FF7978;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF7978:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF7980"))) PPC_WEAK_FUNC(sub_82FF7980);
PPC_FUNC_IMPL(__imp__sub_82FF7980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,204(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF79B8"))) PPC_WEAK_FUNC(sub_82FF79B8);
PPC_FUNC_IMPL(__imp__sub_82FF79B8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff79f8
	if (cr0.eq) goto loc_82FF79F8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303a580
	sub_8303A580(ctx, base);
	// b 0x82ff79fc
	goto loc_82FF79FC;
loc_82FF79F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF79FC:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7A14"))) PPC_WEAK_FUNC(sub_82FF7A14);
PPC_FUNC_IMPL(__imp__sub_82FF7A14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7A40"))) PPC_WEAK_FUNC(sub_82FF7A40);
PPC_FUNC_IMPL(__imp__sub_82FF7A40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ff7430
	sub_82FF7430(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF7A48"))) PPC_WEAK_FUNC(sub_82FF7A48);
PPC_FUNC_IMPL(__imp__sub_82FF7A48) {
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
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r31,-15920(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -15920);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ff7a7c
	if (cr6.eq) goto loc_82FF7A7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF7A7C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15920(r30)
	PPC_STORE_U32(r30.u32 + -15920, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7AA8"))) PPC_WEAK_FUNC(sub_82FF7AA8);
PPC_FUNC_IMPL(__imp__sub_82FF7AA8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-15920(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15920);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ff7b34
	if (!cr6.eq) goto loc_82FF7B34;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-16116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -16116);
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-15920(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -15920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff7b28
	if (!cr6.eq) goto loc_82FF7B28;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff7b0c
	if (cr0.eq) goto loc_82FF7B0C;
	// bl 0x82ffd6d0
	sub_82FFD6D0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82ff7b10
	goto loc_82FF7B10;
loc_82FF7B0C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF7B10:
	// lis r11,-32001
	r11.s64 = -2097217536;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r9,-15920(r30)
	PPC_STORE_U32(r30.u32 + -15920, ctx.r9.u32);
	// addi r4,r11,31304
	ctx.r4.s64 = r11.s64 + 31304;
	// addi r3,r10,-15900
	ctx.r3.s64 = ctx.r10.s64 + -15900;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_82FF7B28:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-15920(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15920);
loc_82FF7B34:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7B4C"))) PPC_WEAK_FUNC(sub_82FF7B4C);
PPC_FUNC_IMPL(__imp__sub_82FF7B4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7B74"))) PPC_WEAK_FUNC(sub_82FF7B74);
PPC_FUNC_IMPL(__imp__sub_82FF7B74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7BA8"))) PPC_WEAK_FUNC(sub_82FF7BA8);
PPC_FUNC_IMPL(__imp__sub_82FF7BA8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-15924(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15924);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ff7c30
	if (!cr6.eq) goto loc_82FF7C30;
	// bl 0x82ff7aa8
	sub_82FF7AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-15924(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -15924);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff7c24
	if (!cr6.eq) goto loc_82FF7C24;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-22880
	ctx.r3.s64 = r11.s64 + -22880;
	// bl 0x82fe04b0
	sub_82FE04B0(ctx, base);
	// stw r3,-15924(r30)
	PPC_STORE_U32(r30.u32 + -15924, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff7c10
	if (!cr0.eq) goto loc_82FF7C10;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82ffc9d0
	sub_82FFC9D0(ctx, base);
	// b 0x82ff7c24
	goto loc_82FF7C24;
loc_82FF7C10:
	// lis r11,-32001
	r11.s64 = -2097217536;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r4,r11,29840
	ctx.r4.s64 = r11.s64 + 29840;
	// addi r3,r10,-15888
	ctx.r3.s64 = ctx.r10.s64 + -15888;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_82FF7C24:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-15924(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15924);
loc_82FF7C30:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7C48"))) PPC_WEAK_FUNC(sub_82FF7C48);
PPC_FUNC_IMPL(__imp__sub_82FF7C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7C78"))) PPC_WEAK_FUNC(sub_82FF7C78);
PPC_FUNC_IMPL(__imp__sub_82FF7C78) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-15916(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15916);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ff7d20
	if (!cr6.eq) goto loc_82FF7D20;
	// bl 0x82ff7aa8
	sub_82FF7AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-15916(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -15916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff7d14
	if (!cr6.eq) goto loc_82FF7D14;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff7cf8
	if (cr0.eq) goto loc_82FF7CF8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-30128
	r11.s64 = r11.s64 + -30128;
	// addi r10,r10,-3628
	ctx.r10.s64 = ctx.r10.s64 + -3628;
	// addi r9,r9,-3636
	ctx.r9.s64 = ctx.r9.s64 + -3636;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x82ff7cfc
	goto loc_82FF7CFC;
loc_82FF7CF8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_82FF7CFC:
	// lis r11,-32001
	r11.s64 = -2097217536;
	// stw r8,-15916(r30)
	PPC_STORE_U32(r30.u32 + -15916, ctx.r8.u32);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r4,r11,29920
	ctx.r4.s64 = r11.s64 + 29920;
	// addi r3,r10,-15912
	ctx.r3.s64 = ctx.r10.s64 + -15912;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_82FF7D14:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-15916(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15916);
loc_82FF7D20:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7D38"))) PPC_WEAK_FUNC(sub_82FF7D38);
PPC_FUNC_IMPL(__imp__sub_82FF7D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7D60"))) PPC_WEAK_FUNC(sub_82FF7D60);
PPC_FUNC_IMPL(__imp__sub_82FF7D60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ff7c78
	sub_82FF7C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF7D68"))) PPC_WEAK_FUNC(sub_82FF7D68);
PPC_FUNC_IMPL(__imp__sub_82FF7D68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82ff7ba8
	sub_82FF7BA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,2
	ctx.r4.s64 = r31.s64 + 2;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF7DB0"))) PPC_WEAK_FUNC(sub_82FF7DB0);
PPC_FUNC_IMPL(__imp__sub_82FF7DB0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ff7c78
	sub_82FF7C78(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r5,-16120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -16120);
	// bl 0x8303c918
	sub_8303C918(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_82FF7DE4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82ff7e08
	if (!cr6.eq) goto loc_82FF7E08;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8e0
	sub_8303C8E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff7e64
	if (cr0.eq) goto loc_82FF7E64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82FF7E08:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8303cc60
	sub_8303CC60(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82ff7e30
	if (cr0.eq) goto loc_82FF7E30;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// bl 0x82fd98d0
	sub_82FD98D0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff7e30
	if (cr0.eq) goto loc_82FF7E30;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82FF7E30:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff7e74
	if (cr0.eq) goto loc_82FF7E74;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ff7de4
	if (!cr6.eq) goto loc_82FF7DE4;
	// mr r28,r29
	r28.u64 = r29.u64;
	// b 0x82ff7de4
	goto loc_82FF7DE4;
loc_82FF7E64:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x82ff7e80
	goto loc_82FF7E80;
loc_82FF7E74:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF7E80:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF7E88"))) PPC_WEAK_FUNC(sub_82FF7E88);
PPC_FUNC_IMPL(__imp__sub_82FF7E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8303c8d8
	sub_8303C8D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7EB0"))) PPC_WEAK_FUNC(sub_82FF7EB0);
PPC_FUNC_IMPL(__imp__sub_82FF7EB0) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r11,-15876(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -15876);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff7eec
	if (cr6.eq) goto loc_82FF7EEC;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15876(r31)
	PPC_STORE_U32(r31.u32 + -15876, r11.u32);
loc_82FF7EEC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7F00"))) PPC_WEAK_FUNC(sub_82FF7F00);
PPC_FUNC_IMPL(__imp__sub_82FF7F00) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-15876
	r30.s64 = r11.s64 + -15876;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff7fa0
	if (!cr6.eq) goto loc_82FF7FA0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-3008
	ctx.r3.s64 = r11.s64 + -3008;
	// bl 0x82fe0de8
	sub_82FE0DE8(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-16120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -16120);
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ffcec8
	sub_82FFCEC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff7f8c
	if (cr0.eq) goto loc_82FF7F8C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ff7fa0
	if (cr6.eq) goto loc_82FF7FA0;
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
	// b 0x82ff7fa0
	goto loc_82FF7FA0;
loc_82FF7F8C:
	// lis r11,-32001
	r11.s64 = -2097217536;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r4,r11,32432
	ctx.r4.s64 = r11.s64 + 32432;
	// addi r3,r10,-15872
	ctx.r3.s64 = ctx.r10.s64 + -15872;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_82FF7FA0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF7FC8"))) PPC_WEAK_FUNC(sub_82FF7FC8);
PPC_FUNC_IMPL(__imp__sub_82FF7FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// addi r11,r11,-2992
	r11.s64 = r11.s64 + -2992;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82fe8a18
	sub_82FE8A18(ctx, base);
	// addi r27,r30,12
	r27.s64 = r30.s64 + 12;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83004390
	sub_83004390(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = r29.s64 + 28;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x8303cd30
	sub_8303CD30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lbz r11,64(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 64);
	// stb r26,65(r30)
	PPC_STORE_U8(r30.u32 + 65, r26.u8);
	// stb r11,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r11.u8);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8094
	if (cr0.eq) goto loc_82FF8094;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8094
	if (cr0.eq) goto loc_82FF8094;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83005248
	sub_83005248(ctx, base);
loc_82FF8094:
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r3.u32);
	// lwz r3,44(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82FF80F4"))) PPC_WEAK_FUNC(sub_82FF80F4);
PPC_FUNC_IMPL(__imp__sub_82FF80F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8300e290
	sub_8300E290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF811C"))) PPC_WEAK_FUNC(sub_82FF811C);
PPC_FUNC_IMPL(__imp__sub_82FF811C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82FF8148"))) PPC_WEAK_FUNC(sub_82FF8148);
PPC_FUNC_IMPL(__imp__sub_82FF8148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82fe9600
	sub_82FE9600(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8174"))) PPC_WEAK_FUNC(sub_82FF8174);
PPC_FUNC_IMPL(__imp__sub_82FF8174) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82FF81A8"))) PPC_WEAK_FUNC(sub_82FF81A8);
PPC_FUNC_IMPL(__imp__sub_82FF81A8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-2992
	r11.s64 = r11.s64 + -2992;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x83002188
	sub_83002188(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-17744
	r11.s64 = r11.s64 + -17744;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8214"))) PPC_WEAK_FUNC(sub_82FF8214);
PPC_FUNC_IMPL(__imp__sub_82FF8214) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x8300e290
	sub_8300E290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF823C"))) PPC_WEAK_FUNC(sub_82FF823C);
PPC_FUNC_IMPL(__imp__sub_82FF823C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82FF8268"))) PPC_WEAK_FUNC(sub_82FF8268);
PPC_FUNC_IMPL(__imp__sub_82FF8268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82fe9600
	sub_82FE9600(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF82A0"))) PPC_WEAK_FUNC(sub_82FF82A0);
PPC_FUNC_IMPL(__imp__sub_82FF82A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8310
	if (cr0.eq) goto loc_82FF8310;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,68
	ctx.r4.s64 = 68;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8304
	if (cr0.eq) goto loc_82FF8304;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ff7fc8
	sub_82FF7FC8(ctx, base);
	// b 0x82ff8308
	goto loc_82FF8308;
loc_82FF8304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF8308:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82ff834c
	goto loc_82FF834C;
loc_82FF8310:
	// bl 0x82ff7f00
	sub_82FF7F00(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,68
	ctx.r4.s64 = 68;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8344
	if (cr0.eq) goto loc_82FF8344;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82ff7fc8
	sub_82FF7FC8(ctx, base);
	// b 0x82ff8348
	goto loc_82FF8348;
loc_82FF8344:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF8348:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82FF834C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe7b98
	sub_82FE7B98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF836C"))) PPC_WEAK_FUNC(sub_82FF836C);
PPC_FUNC_IMPL(__imp__sub_82FF836C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82FF839C"))) PPC_WEAK_FUNC(sub_82FF839C);
PPC_FUNC_IMPL(__imp__sub_82FF839C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82FF83D0"))) PPC_WEAK_FUNC(sub_82FF83D0);
PPC_FUNC_IMPL(__imp__sub_82FF83D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8414
	if (cr0.eq) goto loc_82FF8414;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe76c8
	sub_82FE76C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// b 0x82ff84e0
	goto loc_82FF84E0;
loc_82FF8414:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ff84e0
	if (cr6.eq) goto loc_82FF84E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// bl 0x82fe9dc0
	sub_82FE9DC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x82fe76c8
	sub_82FE76C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82e76d50
	sub_82E76D50(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82FF84E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF84E8"))) PPC_WEAK_FUNC(sub_82FF84E8);
PPC_FUNC_IMPL(__imp__sub_82FF84E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF84F0"))) PPC_WEAK_FUNC(sub_82FF84F0);
PPC_FUNC_IMPL(__imp__sub_82FF84F0) {
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
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82fe77b0
	sub_82FE77B0(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff853c
	if (cr6.eq) goto loc_82FF853C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
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
loc_82FF853C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff8564
	if (cr6.eq) goto loc_82FF8564;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r5,1
	ctx.r5.s64 = 1;
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
loc_82FF8564:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8580"))) PPC_WEAK_FUNC(sub_82FF8580);
PPC_FUNC_IMPL(__imp__sub_82FF8580) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ff85cc
	if (cr6.eq) goto loc_82FF85CC;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff85bc
	if (cr0.eq) goto loc_82FF85BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// b 0x82ff85c0
	goto loc_82FF85C0;
loc_82FF85BC:
	// bl 0x82ff7f00
	sub_82FF7F00(ctx, base);
loc_82FF85C0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
loc_82FF85CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF85D8"))) PPC_WEAK_FUNC(sub_82FF85D8);
PPC_FUNC_IMPL(__imp__sub_82FF85D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff860c
	if (cr0.eq) goto loc_82FF860C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// b 0x82ff8610
	goto loc_82FF8610;
loc_82FF860C:
	// bl 0x82ff7f00
	sub_82FF7F00(ctx, base);
loc_82FF8610:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF8628"))) PPC_WEAK_FUNC(sub_82FF8628);
PPC_FUNC_IMPL(__imp__sub_82FF8628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff865c
	if (cr0.eq) goto loc_82FF865C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7648
	sub_82FE7648(ctx, base);
	// b 0x82ff8660
	goto loc_82FF8660;
loc_82FF865C:
	// bl 0x82ff7f00
	sub_82FF7F00(ctx, base);
loc_82FF8660:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF8678"))) PPC_WEAK_FUNC(sub_82FF8678);
PPC_FUNC_IMPL(__imp__sub_82FF8678) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// lhz r10,-18252(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -18252);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ff8758
	if (cr0.eq) goto loc_82FF8758;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lhz r10,-18216(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + -18216);
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff86f8
	if (cr0.eq) goto loc_82FF86F8;
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff8778
	if (!cr0.eq) goto loc_82FF8778;
loc_82FF86E0:
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
loc_82FF86F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8730
	if (cr0.eq) goto loc_82FF8730;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,144(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x82ff8738
	goto loc_82FF8738;
loc_82FF8730:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r6,-16120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -16120);
loc_82FF8738:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF8758:
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff8794
	if (cr0.eq) goto loc_82FF8794;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82fe7b98
	sub_82FE7B98(ctx, base);
loc_82FF8778:
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
	// b 0x82ff86e0
	goto loc_82FF86E0;
loc_82FF8794:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82ff87d8
	if (cr0.eq) goto loc_82FF87D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82fe7b98
	sub_82FE7B98(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82feda10
	sub_82FEDA10(ctx, base);
	// b 0x82ff86e0
	goto loc_82FF86E0;
loc_82FF87D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8810
	if (cr0.eq) goto loc_82FF8810;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,144(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x82ff8818
	goto loc_82FF8818;
loc_82FF8810:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r6,-16120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -16120);
loc_82FF8818:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF8838"))) PPC_WEAK_FUNC(sub_82FF8838);
PPC_FUNC_IMPL(__imp__sub_82FF8838) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x83004cf8
	sub_83004CF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF8840"))) PPC_WEAK_FUNC(sub_82FF8840);
PPC_FUNC_IMPL(__imp__sub_82FF8840) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82fe8c20
	sub_82FE8C20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF8848"))) PPC_WEAK_FUNC(sub_82FF8848);
PPC_FUNC_IMPL(__imp__sub_82FF8848) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff887c
	if (cr0.eq) goto loc_82FF887C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF887C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x82fe7bf8
	sub_82FE7BF8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff8898
	if (!cr0.eq) goto loc_82FF8898;
loc_82FF8890:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff8c34
	goto loc_82FF8C34;
loc_82FF8898:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne 0x82ff88d4
	if (!cr0.eq) goto loc_82FF88D4;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8900
	if (cr0.eq) goto loc_82FF8900;
	// b 0x82ff8890
	goto loc_82FF8890;
loc_82FF88D4:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
loc_82FF8900:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne 0x82ff893c
	if (!cr0.eq) goto loc_82FF893C;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8968
	if (cr0.eq) goto loc_82FF8968;
	// b 0x82ff8890
	goto loc_82FF8890;
loc_82FF893C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
loc_82FF8968:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne 0x82ff89a4
	if (!cr0.eq) goto loc_82FF89A4;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff89d0
	if (cr0.eq) goto loc_82FF89D0;
	// b 0x82ff8890
	goto loc_82FF8890;
loc_82FF89A4:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
loc_82FF89D0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x82ff8af0
	if (cr0.eq) goto loc_82FF8AF0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(r24.u32, ctx.r3.u32, xer);
	// bne cr6,0x82ff8890
	if (!cr6.eq) goto loc_82FF8890;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82ff8afc
	if (cr6.eq) goto loc_82FF8AFC;
loc_82FF8A78:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,0(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// blt cr6,0x82ff8a78
	if (cr6.lt) goto loc_82FF8A78;
	// b 0x82ff8afc
	goto loc_82FF8AFC;
loc_82FF8AF0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff8890
	if (!cr0.eq) goto loc_82FF8890;
loc_82FF8AFC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x82ff8c1c
	if (cr0.eq) goto loc_82FF8C1C;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(r24.u32, ctx.r3.u32, xer);
	// bne cr6,0x82ff8890
	if (!cr6.eq) goto loc_82FF8890;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82ff8c28
	if (cr6.eq) goto loc_82FF8C28;
loc_82FF8BA4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,0(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff8890
	if (cr0.eq) goto loc_82FF8890;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// blt cr6,0x82ff8ba4
	if (cr6.lt) goto loc_82FF8BA4;
	// b 0x82ff8c28
	goto loc_82FF8C28;
loc_82FF8C1C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff8890
	if (!cr0.eq) goto loc_82FF8890;
loc_82FF8C28:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// bl 0x83004458
	sub_83004458(ctx, base);
loc_82FF8C34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82FF8C48"))) PPC_WEAK_FUNC(sub_82FF8C48);
PPC_FUNC_IMPL(__imp__sub_82FF8C48) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r29.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r11,r11,-2992
	r11.s64 = r11.s64 + -2992;
	// li r26,0
	r26.s64 = 0;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x82ff8c90
	if (!cr6.eq) goto loc_82FF8C90;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82FF8C90:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82fe7638
	sub_82FE7638(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x83004348
	sub_83004348(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x8303cd30
	sub_8303CD30(ctx, base);
	// stw r26,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r26.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stb r26,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r26.u8);
	// stb r28,65(r30)
	PPC_STORE_U8(r30.u32 + 65, r28.u8);
	// stw r26,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r26.u32);
	// stw r26,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r26.u32);
	// stw r26,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r26.u32);
	// stw r26,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r26.u32);
	// beq cr6,0x82ff8d7c
	if (cr6.eq) goto loc_82FF8D7C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe9dc0
	sub_82FE9DC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8d14
	if (cr0.eq) goto loc_82FF8D14;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff8d18
	goto loc_82FF8D18;
loc_82FF8D14:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FF8D18:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8d44
	if (cr0.eq) goto loc_82FF8D44;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff8d48
	goto loc_82FF8D48;
loc_82FF8D44:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FF8D48:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8d70
	if (cr0.eq) goto loc_82FF8D70;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// b 0x82ff8d74
	goto loc_82FF8D74;
loc_82FF8D70:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82FF8D74:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// b 0x82ff8e24
	goto loc_82FF8E24;
loc_82FF8D7C:
	// bl 0x82ff7f00
	sub_82FF7F00(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x82fe9dc0
	sub_82FE9DC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8dc0
	if (cr0.eq) goto loc_82FF8DC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff8dc4
	goto loc_82FF8DC4;
loc_82FF8DC0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FF8DC4:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8df0
	if (cr0.eq) goto loc_82FF8DF0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff8df4
	goto loc_82FF8DF4;
loc_82FF8DF0:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FF8DF4:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff8e1c
	if (cr0.eq) goto loc_82FF8E1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// b 0x82ff8e20
	goto loc_82FF8E20;
loc_82FF8E1C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_82FF8E20:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82FF8E24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF8E30"))) PPC_WEAK_FUNC(sub_82FF8E30);
PPC_FUNC_IMPL(__imp__sub_82FF8E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x8300e290
	sub_8300E290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8E58"))) PPC_WEAK_FUNC(sub_82FF8E58);
PPC_FUNC_IMPL(__imp__sub_82FF8E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82FF8E84"))) PPC_WEAK_FUNC(sub_82FF8E84);
PPC_FUNC_IMPL(__imp__sub_82FF8E84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82fe9600
	sub_82FE9600(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF8EB0"))) PPC_WEAK_FUNC(sub_82FF8EB0);
PPC_FUNC_IMPL(__imp__sub_82FF8EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82FF8EDC"))) PPC_WEAK_FUNC(sub_82FF8EDC);
PPC_FUNC_IMPL(__imp__sub_82FF8EDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82FF8F08"))) PPC_WEAK_FUNC(sub_82FF8F08);
PPC_FUNC_IMPL(__imp__sub_82FF8F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82FF8F34"))) PPC_WEAK_FUNC(sub_82FF8F34);
PPC_FUNC_IMPL(__imp__sub_82FF8F34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82FF8F60"))) PPC_WEAK_FUNC(sub_82FF8F60);
PPC_FUNC_IMPL(__imp__sub_82FF8F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82FF8F8C"))) PPC_WEAK_FUNC(sub_82FF8F8C);
PPC_FUNC_IMPL(__imp__sub_82FF8F8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82FF8FB8"))) PPC_WEAK_FUNC(sub_82FF8FB8);
PPC_FUNC_IMPL(__imp__sub_82FF8FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82FF8FE8"))) PPC_WEAK_FUNC(sub_82FF8FE8);
PPC_FUNC_IMPL(__imp__sub_82FF8FE8) {
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
	// bl 0x82ff81a8
	sub_82FF81A8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9018
	if (cr0.eq) goto loc_82FF9018;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82FF9018:
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

__attribute__((alias("__imp__sub_82FF9040"))) PPC_WEAK_FUNC(sub_82FF9040);
PPC_FUNC_IMPL(__imp__sub_82FF9040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-8240
	r31.s64 = ctx.r1.s64 + -8240;
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8240(r1)
	ea = -8240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r30,8260(r31)
	PPC_STORE_U32(r31.u32 + 8260, r30.u32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r28,8268(r31)
	PPC_STORE_U32(r31.u32 + 8268, r28.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r11,r11,-2992
	r11.s64 = r11.s64 + -2992;
	// li r24,0
	r24.s64 = 0;
	// addi r4,r28,12
	ctx.r4.s64 = r28.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x82ff9098
	if (!cr6.eq) goto loc_82FF9098;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_82FF9098:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82fe7638
	sub_82FE7638(ctx, base);
	// addi r23,r30,12
	r23.s64 = r30.s64 + 12;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x83004348
	sub_83004348(ctx, base);
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x8303cd30
	sub_8303CD30(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r24,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r24.u32);
	// stb r24,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r24.u8);
	// stb r27,65(r30)
	PPC_STORE_U8(r30.u32 + 65, r27.u8);
	// stw r24,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r24.u32);
	// stw r24,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r24.u32);
	// stw r24,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r24.u32);
	// stw r24,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r24.u32);
	// stw r24,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r24.u32);
	// stw r24,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r24.u32);
	// bl 0x82fe9be8
	sub_82FE9BE8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// bge 0x82ff9128
	if (!cr0.lt) goto loc_82FF9128;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9100
	if (cr0.eq) goto loc_82FF9100;
	// lwz r6,144(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// b 0x82ff9108
	goto loc_82FF9108;
loc_82FF9100:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r6,-16120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -16120);
loc_82FF9108:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF9128:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82ff92b0
	if (!cr6.gt) goto loc_82FF92B0;
	// cmpwi cr6,r27,3999
	cr6.compare<int32_t>(r27.s32, 3999, xer);
	// lis r22,-31942
	r22.s64 = -2093350912;
	// blt cr6,0x82ff919c
	if (cr6.lt) goto loc_82FF919C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ff9174
	if (cr6.eq) goto loc_82FF9174;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff9174
	if (cr0.eq) goto loc_82FF9174;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// b 0x82ff915c
	goto loc_82FF915C;
loc_82FF9158:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FF915C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ff9158
	if (!cr0.eq) goto loc_82FF9158;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x82ff9178
	goto loc_82FF9178;
loc_82FF9174:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82FF9178:
	// lwz r3,-16120(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -16120);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x82ff91a0
	goto loc_82FF91A0;
loc_82FF919C:
	// addi r25,r31,128
	r25.s64 = r31.s64 + 128;
loc_82FF91A0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fd9ef0
	sub_82FD9EF0(ctx, base);
	// rlwinm r26,r27,1,0,30
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// sthx r24,r26,r25
	PPC_STORE_U16(r26.u32 + r25.u32, r24.u16);
	// beq cr6,0x82ff9224
	if (cr6.eq) goto loc_82FF9224;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff91ec
	if (cr0.eq) goto loc_82FF91EC;
	// add r11,r26,r29
	r11.u64 = r26.u64 + r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff9290
	if (!cr0.eq) goto loc_82FF9290;
loc_82FF91EC:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9200
	if (cr0.eq) goto loc_82FF9200;
	// lwz r6,144(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// b 0x82ff9204
	goto loc_82FF9204;
loc_82FF9200:
	// lwz r6,-16120(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + -16120);
loc_82FF9204:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF9224:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fe1b18
	sub_82FE1B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff931c
	if (cr0.eq) goto loc_82FF931C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ff9270
	if (cr6.eq) goto loc_82FF9270;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff9270
	if (cr0.eq) goto loc_82FF9270;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// b 0x82ff9258
	goto loc_82FF9258;
loc_82FF9254:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FF9258:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ff9254
	if (!cr0.eq) goto loc_82FF9254;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x82ff9274
	goto loc_82FF9274;
loc_82FF9270:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82FF9274:
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// add r11,r26,r29
	r11.u64 = r26.u64 + r29.u64;
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// bl 0x82fe1b18
	sub_82FE1B18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff931c
	if (cr0.eq) goto loc_82FF931C;
loc_82FF9290:
	// cmpwi cr6,r27,3999
	cr6.compare<int32_t>(r27.s32, 3999, xer);
	// blt cr6,0x82ff92b0
	if (cr6.lt) goto loc_82FF92B0;
	// lwz r3,-16120(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + -16120);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF92B0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ff93bc
	if (cr6.eq) goto loc_82FF93BC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x82fe9dc0
	sub_82FE9DC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9354
	if (cr0.eq) goto loc_82FF9354;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff9358
	goto loc_82FF9358;
loc_82FF931C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff9330
	if (cr0.eq) goto loc_82FF9330;
	// lwz r6,144(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// b 0x82ff9334
	goto loc_82FF9334;
loc_82FF9330:
	// lwz r6,-16120(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + -16120);
loc_82FF9334:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF9354:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82FF9358:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9384
	if (cr0.eq) goto loc_82FF9384;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff9388
	goto loc_82FF9388;
loc_82FF9384:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82FF9388:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff93b0
	if (cr0.eq) goto loc_82FF93B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// b 0x82ff93b4
	goto loc_82FF93B4;
loc_82FF93B0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82FF93B4:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
	// b 0x82ff948c
	goto loc_82FF948C;
loc_82FF93BC:
	// bl 0x82ff7f00
	sub_82FF7F00(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x82feaf88
	sub_82FEAF88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// bl 0x82fe9dc0
	sub_82FE9DC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9428
	if (cr0.eq) goto loc_82FF9428;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff942c
	goto loc_82FF942C;
loc_82FF9428:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82FF942C:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9458
	if (cr0.eq) goto loc_82FF9458;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82ff945c
	goto loc_82FF945C;
loc_82FF9458:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82FF945C:
	// li r4,780
	ctx.r4.s64 = 780;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9484
	if (cr0.eq) goto loc_82FF9484;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303cdc0
	sub_8303CDC0(ctx, base);
	// b 0x82ff9488
	goto loc_82FF9488;
loc_82FF9484:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82FF9488:
	// stw r3,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82FF948C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,8240
	ctx.r1.s64 = r31.s64 + 8240;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82FF9498"))) PPC_WEAK_FUNC(sub_82FF9498);
PPC_FUNC_IMPL(__imp__sub_82FF9498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8260);
	// bl 0x8300e290
	sub_8300E290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF94C0"))) PPC_WEAK_FUNC(sub_82FF94C0);
PPC_FUNC_IMPL(__imp__sub_82FF94C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8260);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
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

__attribute__((alias("__imp__sub_82FF94EC"))) PPC_WEAK_FUNC(sub_82FF94EC);
PPC_FUNC_IMPL(__imp__sub_82FF94EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8260);
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x82fe9600
	sub_82FE9600(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF9518"))) PPC_WEAK_FUNC(sub_82FF9518);
PPC_FUNC_IMPL(__imp__sub_82FF9518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8260);
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82FF9544"))) PPC_WEAK_FUNC(sub_82FF9544);
PPC_FUNC_IMPL(__imp__sub_82FF9544) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8268);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82FF9570"))) PPC_WEAK_FUNC(sub_82FF9570);
PPC_FUNC_IMPL(__imp__sub_82FF9570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8268);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82FF959C"))) PPC_WEAK_FUNC(sub_82FF959C);
PPC_FUNC_IMPL(__imp__sub_82FF959C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8268);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_82FF95C8"))) PPC_WEAK_FUNC(sub_82FF95C8);
PPC_FUNC_IMPL(__imp__sub_82FF95C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82FF95F4"))) PPC_WEAK_FUNC(sub_82FF95F4);
PPC_FUNC_IMPL(__imp__sub_82FF95F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82FF9620"))) PPC_WEAK_FUNC(sub_82FF9620);
PPC_FUNC_IMPL(__imp__sub_82FF9620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8240
	r31.s64 = r12.s64 + -8240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82FF9650"))) PPC_WEAK_FUNC(sub_82FF9650);
PPC_FUNC_IMPL(__imp__sub_82FF9650) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1864
	r11.s64 = r11.s64 + -1864;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,997
	cr6.compare<int32_t>(ctx.r4.s32, 997, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-1944
	r11.s64 = r11.s64 + -1944;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// ble cr6,0x82ff96c8
	if (!cr6.gt) goto loc_82FF96C8;
loc_82FF9698:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ff9760
	if (cr6.eq) goto loc_82FF9760;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// blt cr6,0x82ff9698
	if (cr6.lt) goto loc_82FF9698;
loc_82FF96C8:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r8,r31,20
	ctx.r8.s64 = r31.s64 + 20;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82ff9744
	if (!cr6.gt) goto loc_82FF9744;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82FF9728:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ff9728
	if (cr6.lt) goto loc_82FF9728;
loc_82FF9744:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
loc_82FF9760:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r6,376
	ctx.r6.s64 = 376;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r4,r9,-1920
	ctx.r4.s64 = ctx.r9.s64 + -1920;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r7,144(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF9798"))) PPC_WEAK_FUNC(sub_82FF9798);
PPC_FUNC_IMPL(__imp__sub_82FF9798) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ff97c8
	if (cr6.lt) goto loc_82FF97C8;
	// bl 0x82ff99d8
	sub_82FF99D8(ctx, base);
loc_82FF97C8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// b 0x82ff9848
	goto loc_82FF9848;
loc_82FF9814:
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82ff9850
	if (cr6.eq) goto loc_82FF9850;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ff983c
	if (cr6.lt) goto loc_82FF983C;
	// divwu r7,r11,r9
	ctx.r7.u32 = r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
loc_82FF983C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
loc_82FF9848:
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82ff9814
	if (!cr0.eq) goto loc_82FF9814;
loc_82FF9850:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF9870"))) PPC_WEAK_FUNC(sub_82FF9870);
PPC_FUNC_IMPL(__imp__sub_82FF9870) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// b 0x82ff98f4
	goto loc_82FF98F4;
loc_82FF98C8:
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x82ff9904
	if (cr6.eq) goto loc_82FF9904;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ff98f0
	if (cr6.lt) goto loc_82FF98F0;
	// divwu r7,r11,r10
	ctx.r7.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
loc_82FF98F0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FF98F4:
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ff98c8
	if (!cr0.eq) goto loc_82FF98C8;
	// b 0x82ff9910
	goto loc_82FF9910;
loc_82FF9904:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stwx r10,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_82FF9910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF9928"))) PPC_WEAK_FUNC(sub_82FF9928);
PPC_FUNC_IMPL(__imp__sub_82FF9928) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82fd9f48
	sub_82FD9F48(ctx, base);
	// addi r28,r3,1
	r28.s64 = ctx.r3.s64 + 1;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x82ff99b4
	goto loc_82FF99B4;
loc_82FF9964:
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82ff9990
	if (cr6.eq) goto loc_82FF9990;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff99cc
	if (!cr0.eq) goto loc_82FF99CC;
loc_82FF9990:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82ff99b0
	if (cr6.lt) goto loc_82FF99B0;
	// divwu r10,r29,r11
	ctx.r10.u32 = r29.u32 / r11.u32;
	// twllei r11,0
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// subf r29,r11,r29
	r29.s64 = r29.s64 - r11.s64;
loc_82FF99B0:
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FF99B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r30,r10,r11
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82ff9964
	if (!cr0.eq) goto loc_82FF9964;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff99d0
	goto loc_82FF99D0;
loc_82FF99CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82FF99D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF99D8"))) PPC_WEAK_FUNC(sub_82FF99D8);
PPC_FUNC_IMPL(__imp__sub_82FF99D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r30,r11,-1944
	r30.s64 = r11.s64 + -1944;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bne 0x82ff9a50
	if (!cr0.eq) goto loc_82FF9A50;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,376
	ctx.r6.s64 = 376;
	// addi r4,r11,-1920
	ctx.r4.s64 = r11.s64 + -1920;
	// li r5,215
	ctx.r5.s64 = 215;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r7,144(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF9A50:
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82ff9a94
	if (!cr6.gt) goto loc_82FF9A94;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF9A74:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ff9a74
	if (cr6.lt) goto loc_82FF9A74;
loc_82FF9A94:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// beq cr6,0x82ff9af0
	if (cr6.eq) goto loc_82FF9AF0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82FF9AC8:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82ff9ae4
	if (cr0.eq) goto loc_82FF9AE4;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// beq cr6,0x82ff9ae4
	if (cr6.eq) goto loc_82FF9AE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9798
	sub_82FF9798(ctx, base);
loc_82FF9AE4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82ff9ac8
	if (!cr0.eq) goto loc_82FF9AC8;
loc_82FF9AF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF9AF8"))) PPC_WEAK_FUNC(sub_82FF9AF8);
PPC_FUNC_IMPL(__imp__sub_82FF9AF8) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1864
	r11.s64 = r11.s64 + -1864;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x82ff9b2c
	if (cr0.eq) goto loc_82FF9B2C;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82FF9B2C:
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

__attribute__((alias("__imp__sub_82FF9B50"))) PPC_WEAK_FUNC(sub_82FF9B50);
PPC_FUNC_IMPL(__imp__sub_82FF9B50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// stb r29,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r29.u8);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r4,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r4.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9bac
	if (cr0.eq) goto loc_82FF9BAC;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe65d0
	sub_82FE65D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82FF9BAC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF9BBC"))) PPC_WEAK_FUNC(sub_82FF9BBC);
PPC_FUNC_IMPL(__imp__sub_82FF9BBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF9BF0"))) PPC_WEAK_FUNC(sub_82FF9BF0);
PPC_FUNC_IMPL(__imp__sub_82FF9BF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x82fe6788
	sub_82FE6788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF9BF8"))) PPC_WEAK_FUNC(sub_82FF9BF8);
PPC_FUNC_IMPL(__imp__sub_82FF9BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r4,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF9C08"))) PPC_WEAK_FUNC(sub_82FF9C08);
PPC_FUNC_IMPL(__imp__sub_82FF9C08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ff9c54
	if (cr6.eq) goto loc_82FF9C54;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff9c54
	if (cr0.eq) goto loc_82FF9C54;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// b 0x82ff9c3c
	goto loc_82FF9C3C;
loc_82FF9C38:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FF9C3C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ff9c38
	if (!cr0.eq) goto loc_82FF9C38;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srawi r30,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r30.s64 = r11.s32 >> 1;
	// b 0x82ff9c58
	goto loc_82FF9C58;
loc_82FF9C54:
	// li r30,0
	r30.s64 = 0;
loc_82FF9C58:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff9c6c
	if (cr0.eq) goto loc_82FF9C6C;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82ff9cac
	if (!cr6.gt) goto loc_82FF9CAC;
loc_82FF9C6C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_82FF9CAC:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF9CC8"))) PPC_WEAK_FUNC(sub_82FF9CC8);
PPC_FUNC_IMPL(__imp__sub_82FF9CC8) {
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
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9cfc
	if (cr0.eq) goto loc_82FF9CFC;
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
loc_82FF9CFC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
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

__attribute__((alias("__imp__sub_82FF9D30"))) PPC_WEAK_FUNC(sub_82FF9D30);
PPC_FUNC_IMPL(__imp__sub_82FF9D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b1c
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stb r9,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r9.u8);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lbz r9,255(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 255);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// stb r9,28(r30)
	PPC_STORE_U8(r30.u32 + 28, ctx.r9.u8);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9dcc
	if (cr0.eq) goto loc_82FF9DCC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fe7048
	sub_82FE7048(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82FF9DCC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff9dec
	goto loc_82FF9DEC;
	// lwz r30,180(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 180);
loc_82FF9DEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82FF9E00"))) PPC_WEAK_FUNC(sub_82FF9E00);
PPC_FUNC_IMPL(__imp__sub_82FF9E00) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF9E20"))) PPC_WEAK_FUNC(sub_82FF9E20);
PPC_FUNC_IMPL(__imp__sub_82FF9E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32000
	ctx.r3.s64 = -2097152000;
	// addi r3,r3,-25112
	ctx.r3.s64 = ctx.r3.s64 + -25112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82FF9E50"))) PPC_WEAK_FUNC(sub_82FF9E50);
PPC_FUNC_IMPL(__imp__sub_82FF9E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF9E88"))) PPC_WEAK_FUNC(sub_82FF9E88);
PPC_FUNC_IMPL(__imp__sub_82FF9E88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b20
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,231(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 231);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stb r8,0(r30)
	PPC_STORE_U8(r30.u32 + 0, ctx.r8.u8);
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff9f18
	if (cr0.eq) goto loc_82FF9F18;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fe7170
	sub_82FE7170(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82FF9F18:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// bl 0x82ff9c08
	sub_82FF9C08(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff9f38
	goto loc_82FF9F38;
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
loc_82FF9F38:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF9F4C"))) PPC_WEAK_FUNC(sub_82FF9F4C);
PPC_FUNC_IMPL(__imp__sub_82FF9F4C) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF9F6C"))) PPC_WEAK_FUNC(sub_82FF9F6C);
PPC_FUNC_IMPL(__imp__sub_82FF9F6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32000
	ctx.r3.s64 = -2097152000;
	// addi r3,r3,-24780
	ctx.r3.s64 = ctx.r3.s64 + -24780;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF9F9C"))) PPC_WEAK_FUNC(sub_82FF9F9C);
PPC_FUNC_IMPL(__imp__sub_82FF9F9C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF9FD8"))) PPC_WEAK_FUNC(sub_82FF9FD8);
PPC_FUNC_IMPL(__imp__sub_82FF9FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe1350
	sub_82FE1350(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82fe16d8
	sub_82FE16D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FFA020"))) PPC_WEAK_FUNC(sub_82FFA020);
PPC_FUNC_IMPL(__imp__sub_82FFA020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFA048"))) PPC_WEAK_FUNC(sub_82FFA048);
PPC_FUNC_IMPL(__imp__sub_82FFA048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffa084
	if (!cr6.lt) goto loc_82FFA084;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,32852
	ctx.r9.u64 = ctx.r9.u64 | 32852;
	// lwzx r9,r3,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
loc_82FFA068:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r8,r8,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ffa08c
	if (cr0.eq) goto loc_82FFA08C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffa068
	if (cr6.lt) goto loc_82FFA068;
loc_82FFA084:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FFA08C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFA098"))) PPC_WEAK_FUNC(sub_82FFA098);
PPC_FUNC_IMPL(__imp__sub_82FFA098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffa0d4
	if (!cr6.lt) goto loc_82FFA0D4;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,32852
	ctx.r9.u64 = ctx.r9.u64 | 32852;
	// lwzx r9,r3,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
loc_82FFA0B8:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r8,r8,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ffa0dc
	if (!cr0.eq) goto loc_82FFA0DC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffa0b8
	if (cr6.lt) goto loc_82FFA0B8;
loc_82FFA0D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FFA0DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFA0E8"))) PPC_WEAK_FUNC(sub_82FFA0E8);
PPC_FUNC_IMPL(__imp__sub_82FFA0E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ori r10,r10,32860
	ctx.r10.u64 = ctx.r10.u64 | 32860;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffa10c
	if (!cr6.eq) goto loc_82FFA10C;
	// b 0x82fe1eb0
	sub_82FE1EB0(ctx, base);
	return;
loc_82FFA10C:
	// b 0x82fe1eb0
	sub_82FE1EB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFA110"))) PPC_WEAK_FUNC(sub_82FFA110);
PPC_FUNC_IMPL(__imp__sub_82FFA110) {
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
	// lis r11,1
	r11.s64 = 65536;
	// addis r30,r31,3
	r30.s64 = r31.s64 + 196608;
	// ori r11,r11,49172
	r11.u64 = r11.u64 | 49172;
	// addi r30,r30,-32672
	r30.s64 = r30.s64 + -32672;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,1
	r11.s64 = 65536;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,49180
	r11.u64 = r11.u64 | 49180;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,2
	r11.s64 = 131072;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32836
	r11.u64 = r11.u64 | 32836;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffa1b8
	if (cr0.eq) goto loc_82FFA1B8;
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
loc_82FFA1B8:
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32844
	r11.u64 = r11.u64 | 32844;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffa1e0
	if (cr0.eq) goto loc_82FFA1E0;
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
loc_82FFA1E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFA1F8"))) PPC_WEAK_FUNC(sub_82FFA1F8);
PPC_FUNC_IMPL(__imp__sub_82FFA1F8) {
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
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ori r10,r10,32828
	ctx.r10.u64 = ctx.r10.u64 | 32828;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ffa2bc
	if (cr0.eq) goto loc_82FFA2BC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32829
	ctx.r10.u64 = ctx.r10.u64 | 32829;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ffa2bc
	if (cr0.eq) goto loc_82FFA2BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffa258
	if (!cr0.eq) goto loc_82FFA258;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32824
	ctx.r10.u64 = ctx.r10.u64 | 32824;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_82FFA248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82FFA258:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r9,r9,32772
	ctx.r9.u64 = ctx.r9.u64 | 32772;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ffa28c
	if (!cr6.lt) goto loc_82FFA28C;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r10,r10,12290
	ctx.r10.s64 = ctx.r10.s64 + 12290;
	// ori r9,r9,32824
	ctx.r9.u64 = ctx.r9.u64 | 32824;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
loc_82FFA284:
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82ffa248
	goto loc_82FFA248;
loc_82FFA28C:
	// addi r9,r10,12289
	ctx.r9.s64 = ctx.r10.s64 + 12289;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r8,32775
	ctx.r8.u64 = ctx.r8.u64 | 32775;
	// ori r7,r7,32824
	ctx.r7.u64 = ctx.r7.u64 | 32824;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lbzx r8,r10,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// b 0x82ffa284
	goto loc_82FFA284;
loc_82FFA2BC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r6,74
	ctx.r6.s64 = 74;
	// ori r9,r10,32864
	ctx.r9.u64 = ctx.r10.u64 | 32864;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r5,400
	ctx.r5.s64 = 400;
	// addi r4,r10,-1384
	ctx.r4.s64 = ctx.r10.s64 + -1384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FFA2F0"))) PPC_WEAK_FUNC(sub_82FFA2F0);
PPC_FUNC_IMPL(__imp__sub_82FFA2F0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,49176
	r11.u64 = r11.u64 | 49176;
	// lbzx r11,r28,r11
	r11.u64 = PPC_LOAD_U8(r28.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffa5f4
	if (!cr0.eq) goto loc_82FFA5F4;
	// addis r29,r28,3
	r29.s64 = r28.s64 + 196608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r29,r29,-32672
	r29.s64 = r29.s64 + -32672;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82fda390
	sub_82FDA390(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8303e0d0
	sub_8303E0D0(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// ori r25,r11,32844
	r25.u64 = r11.u64 | 32844;
	// lis r11,1
	r11.s64 = 65536;
	// cmpwi cr6,r27,999
	cr6.compare<int32_t>(r27.s32, 999, xer);
	// ori r26,r11,49168
	r26.u64 = r11.u64 | 49168;
	// lis r24,-31942
	r24.s64 = -2093350912;
	// bne cr6,0x82ffa558
	if (!cr6.eq) goto loc_82FFA558;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28688
	ctx.r4.s64 = r11.s64 + -28688;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa4d0
	if (cr0.eq) goto loc_82FFA4D0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28672
	ctx.r4.s64 = r11.s64 + -28672;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa4d0
	if (cr0.eq) goto loc_82FFA4D0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28660
	ctx.r4.s64 = r11.s64 + -28660;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa4d0
	if (cr0.eq) goto loc_82FFA4D0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28644
	ctx.r4.s64 = r11.s64 + -28644;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa4d0
	if (cr0.eq) goto loc_82FFA4D0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28624
	ctx.r4.s64 = r11.s64 + -28624;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa4d0
	if (cr0.eq) goto loc_82FFA4D0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28896
	ctx.r4.s64 = r11.s64 + -28896;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa45c
	if (cr0.eq) goto loc_82FFA45C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28884
	ctx.r4.s64 = r11.s64 + -28884;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa45c
	if (cr0.eq) goto loc_82FFA45C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28872
	ctx.r4.s64 = r11.s64 + -28872;
	// bl 0x82fd9d10
	sub_82FD9D10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffa45c
	if (cr0.eq) goto loc_82FFA45C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addis r31,r28,2
	r31.s64 = r28.s64 + 131072;
	// addi r31,r31,-16364
	r31.s64 = r31.s64 + -16364;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,-16132(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -16132);
	// bl 0x82ffe2b0
	sub_82FFE2B0(ctx, base);
	// stwx r3,r28,r25
	PPC_STORE_U32(r28.u32 + r25.u32, ctx.r3.u32);
	// b 0x82ffa57c
	goto loc_82FFA57C;
loc_82FFA45C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r28,r26
	r11.u64 = PPC_LOAD_U32(r28.u32 + r26.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82ffa488
	if (cr6.eq) goto loc_82FFA488;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffa4fc
	if (!cr6.eq) goto loc_82FFA4FC;
loc_82FFA488:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addis r31,r28,2
	r31.s64 = r28.s64 + 131072;
	// mr r27,r11
	r27.u64 = r11.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// addi r31,r31,-16364
	r31.s64 = r31.s64 + -16364;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne cr6,0x82ffa4c0
	if (!cr6.eq) goto loc_82FFA4C0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-28820
	ctx.r3.s64 = r11.s64 + -28820;
	// b 0x82ffa548
	goto loc_82FFA548;
loc_82FFA4C0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-28860
	ctx.r3.s64 = r11.s64 + -28860;
	// b 0x82ffa548
	goto loc_82FFA548;
loc_82FFA4D0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r28,r26
	r11.u64 = PPC_LOAD_U32(r28.u32 + r26.u32);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82ffa504
	if (cr6.eq) goto loc_82FFA504;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82ffa504
	if (cr6.eq) goto loc_82FFA504;
loc_82FFA4FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffa5f8
	goto loc_82FFA5F8;
loc_82FFA504:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addis r31,r28,2
	r31.s64 = r28.s64 + 131072;
	// mr r27,r11
	r27.u64 = r11.u64;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// addi r31,r31,-16364
	r31.s64 = r31.s64 + -16364;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bne cr6,0x82ffa53c
	if (!cr6.eq) goto loc_82FFA53C;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-28568
	ctx.r3.s64 = r11.s64 + -28568;
	// b 0x82ffa548
	goto loc_82FFA548;
loc_82FFA53C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-28612
	ctx.r3.s64 = r11.s64 + -28612;
loc_82FFA548:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82ffa57c
	goto loc_82FFA57C;
loc_82FFA558:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addis r31,r28,2
	r31.s64 = r28.s64 + 131072;
	// addi r31,r31,-16364
	r31.s64 = r31.s64 + -16364;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82FFA57C:
	// add r30,r28,r25
	r30.u64 = r28.u64 + r25.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffa5f0
	if (!cr6.eq) goto loc_82FFA5F0;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-16132(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -16132);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82ffe108
	sub_82FFE108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne 0x82ffa5f0
	if (!cr0.eq) goto loc_82FFA5F0;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,98
	ctx.r6.s64 = 98;
	// li r5,1099
	ctx.r5.s64 = 1099;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFA5F0:
	// stwx r27,r28,r26
	PPC_STORE_U32(r28.u32 + r26.u32, r27.u32);
loc_82FFA5F4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FFA5F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82FFA600"))) PPC_WEAK_FUNC(sub_82FFA600);
PPC_FUNC_IMPL(__imp__sub_82FFA600) {
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
	// addis r30,r3,2
	r30.s64 = ctx.r3.s64 + 131072;
	// addis r29,r3,3
	r29.s64 = ctx.r3.s64 + 196608;
	// addi r30,r30,-16352
	r30.s64 = r30.s64 + -16352;
	// addi r29,r29,-32732
	r29.s64 = r29.s64 + -32732;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf. r31,r10,r9
	r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,49188
	ctx.r10.u64 = ctx.r10.u64 | 49188;
	// beq 0x82ffa65c
	if (cr0.eq) goto loc_82FFA65C;
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
loc_82FFA63C:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stbx r9,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x82ffa63c
	if (cr6.lt) goto loc_82FFA63C;
loc_82FFA65C:
	// lis r11,2
	r11.s64 = 131072;
	// add r8,r31,r3
	ctx.r8.u64 = r31.u64 + ctx.r3.u64;
	// ori r11,r11,32836
	r11.u64 = r11.u64 | 32836;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// ori r9,r9,49152
	ctx.r9.u64 = ctx.r9.u64 | 49152;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// subf r5,r31,r9
	ctx.r5.s64 = ctx.r9.s64 - r31.s64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FFA6A8"))) PPC_WEAK_FUNC(sub_82FFA6A8);
PPC_FUNC_IMPL(__imp__sub_82FFA6A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addis r29,r31,3
	r29.s64 = r31.s64 + 196608;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r29,r29,-32732
	r29.s64 = r29.s64 + -32732;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffa6e0
	if (!cr0.eq) goto loc_82FFA6E0;
loc_82FFA6D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffa75c
	goto loc_82FFA75C;
loc_82FFA6E0:
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// addi r30,r30,-16352
	r30.s64 = r30.s64 + -16352;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x82ffa70c
	if (!cr6.lt) goto loc_82FFA70C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffa600
	sub_82FFA600(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ffa6d8
	if (cr0.eq) goto loc_82FFA6D8;
loc_82FFA70C:
	// lis r11,2
	r11.s64 = 131072;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// ori r6,r11,32844
	ctx.r6.u64 = r11.u64 | 32844;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// subf r5,r11,r10
	ctx.r5.s64 = ctx.r10.s64 - r11.s64;
	// addis r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 131072;
	// lwzx r3,r31,r6
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + ctx.r6.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r4,-16348
	ctx.r4.s64 = ctx.r4.s64 + -16348;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82FFA75C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FFA768"))) PPC_WEAK_FUNC(sub_82FFA768);
PPC_FUNC_IMPL(__imp__sub_82FFA768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// lwz r24,380(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,49160
	r11.u64 = r11.u64 | 49160;
	// li r26,1
	r26.s64 = 1;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// addis r22,r31,1
	r22.s64 = r31.s64 + 65536;
	// addis r25,r31,2
	r25.s64 = r31.s64 + 131072;
	// stwx r26,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r26.u32);
	// addis r29,r31,2
	r29.s64 = r31.s64 + 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r11,1
	r11.s64 = 65536;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// li r30,0
	r30.s64 = 0;
	// ori r10,r10,49164
	ctx.r10.u64 = ctx.r10.u64 | 49164;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r8,r8,49176
	ctx.r8.u64 = ctx.r8.u64 | 49176;
	// ori r11,r11,49177
	r11.u64 = r11.u64 | 49177;
	// addi r22,r22,-32764
	r22.s64 = r22.s64 + -32764;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r25,r25,-16368
	r25.s64 = r25.s64 + -16368;
	// stwx r26,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r26.u32);
	// addi r29,r29,-16364
	r29.s64 = r29.s64 + -16364;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stbx r26,r31,r8
	PPC_STORE_U8(r31.u32 + ctx.r8.u32, r26.u8);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stbx r30,r31,r11
	PPC_STORE_U8(r31.u32 + r11.u32, r30.u8);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r30.u32);
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,1
	r11.s64 = 65536;
	// ori r10,r10,49184
	ctx.r10.u64 = ctx.r10.u64 | 49184;
	// ori r11,r11,49180
	r11.u64 = r11.u64 | 49180;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r9,r9,32804
	ctx.r9.u64 = ctx.r9.u64 | 32804;
	// stwx r30,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r30.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// ori r8,r8,32808
	ctx.r8.u64 = ctx.r8.u64 | 32808;
	// ori r10,r10,32816
	ctx.r10.u64 = ctx.r10.u64 | 32816;
	// li r11,-1
	r11.s64 = -1;
	// stwx r30,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r30.u32);
	// addis r17,r31,3
	r17.s64 = r31.s64 + 196608;
	// addis r23,r31,3
	r23.s64 = r31.s64 + 196608;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stbx r30,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r30.u8);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwx r11,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r11.u32);
	// lis r11,2
	r11.s64 = 131072;
	// lbz r8,367(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// ori r9,r9,32820
	ctx.r9.u64 = ctx.r9.u64 | 32820;
	// ori r11,r11,32824
	r11.u64 = r11.u64 | 32824;
	// ori r10,r10,32829
	ctx.r10.u64 = ctx.r10.u64 | 32829;
	// addi r17,r17,-32724
	r17.s64 = r17.s64 + -32724;
	// addi r23,r23,-32708
	r23.s64 = r23.s64 + -32708;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stwx r21,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r21.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// stbx r8,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stw r27,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r27.u32);
	// stb r30,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r30.u8);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// addis r27,r31,3
	r27.s64 = r31.s64 + 196608;
	// addis r21,r31,3
	r21.s64 = r31.s64 + 196608;
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r27,r27,-32696
	r27.s64 = r27.s64 + -32696;
	// addi r21,r21,-32692
	r21.s64 = r21.s64 + -32692;
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// ori r10,r10,32836
	ctx.r10.u64 = ctx.r10.u64 | 32836;
	// ori r9,r9,32841
	ctx.r9.u64 = ctx.r9.u64 | 32841;
	// stwx r20,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r20.u32);
	// addis r28,r31,3
	r28.s64 = r31.s64 + 196608;
	// addis r20,r31,3
	r20.s64 = r31.s64 + 196608;
	// lbz r8,359(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// addi r28,r28,-32672
	r28.s64 = r28.s64 + -32672;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// addi r20,r20,-32688
	r20.s64 = r20.s64 + -32688;
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r30.u8);
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// stbx r8,r31,r9
	PPC_STORE_U8(r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stw r24,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r24.u32);
	// stw r18,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r18.u32);
	// bl 0x82fefbb8
	sub_82FEFBB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffa600
	sub_82FFA600(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// bl 0x82fda390
	sub_82FDA390(ctx, base);
	// lis r24,-31942
	r24.s64 = -2093350912;
	// lwz r3,-16132(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -16132);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
	// bl 0x8303e0d0
	sub_8303E0D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r30,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r30.u8);
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// stw r4,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r4.u32);
	// beq cr6,0x82ffa954
	if (cr6.eq) goto loc_82FFA954;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82ffa958
	if (!cr6.eq) goto loc_82FFA958;
loc_82FFA954:
	// stb r26,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r26.u8);
loc_82FFA958:
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r4,999
	cr6.compare<int32_t>(ctx.r4.s32, 999, xer);
	// lwz r3,-16132(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -16132);
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82ffa97c
	if (!cr6.eq) goto loc_82FFA97C;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82ffe2b0
	sub_82FFE2B0(ctx, base);
	// b 0x82ffa980
	goto loc_82FFA980;
loc_82FFA97C:
	// bl 0x82ffe108
	sub_82FFE108(ctx, base);
loc_82FFA980:
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffa9d0
	if (!cr6.eq) goto loc_82FFA9D0;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,98
	ctx.r6.s64 = 98;
	// li r5,267
	ctx.r5.s64 = 267;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFA9D0:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ffaa2c
	if (!cr6.eq) goto loc_82FFAA2C;
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffaa2c
	if (!cr6.eq) goto loc_82FFAA2C;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ori r10,r10,32776
	ctx.r10.u64 = ctx.r10.u64 | 32776;
	// stbx r30,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r30.u8);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,12290
	r11.s64 = r11.s64 + 12290;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r30.u32);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r9.u16);
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_82FFAA2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82FFAA38"))) PPC_WEAK_FUNC(sub_82FFAA38);
PPC_FUNC_IMPL(__imp__sub_82FFAA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x831b0af8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// lwz r23,380(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,49160
	r11.u64 = r11.u64 | 49160;
	// li r26,1
	r26.s64 = 1;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// addis r24,r31,1
	r24.s64 = r31.s64 + 65536;
	// addis r29,r31,2
	r29.s64 = r31.s64 + 131072;
	// stwx r26,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r26.u32);
	// addis r21,r31,2
	r21.s64 = r31.s64 + 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r11,1
	r11.s64 = 65536;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// li r30,0
	r30.s64 = 0;
	// ori r10,r10,49164
	ctx.r10.u64 = ctx.r10.u64 | 49164;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r8,r8,49176
	ctx.r8.u64 = ctx.r8.u64 | 49176;
	// ori r11,r11,49177
	r11.u64 = r11.u64 | 49177;
	// addi r24,r24,-32764
	r24.s64 = r24.s64 + -32764;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r29,r29,-16368
	r29.s64 = r29.s64 + -16368;
	// stwx r26,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r26.u32);
	// addi r21,r21,-16364
	r21.s64 = r21.s64 + -16364;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stbx r26,r31,r8
	PPC_STORE_U8(r31.u32 + ctx.r8.u32, r26.u8);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stbx r30,r31,r11
	PPC_STORE_U8(r31.u32 + r11.u32, r30.u8);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r30.u32);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,1
	r11.s64 = 65536;
	// ori r10,r10,49184
	ctx.r10.u64 = ctx.r10.u64 | 49184;
	// ori r11,r11,49180
	r11.u64 = r11.u64 | 49180;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r9,r9,32804
	ctx.r9.u64 = ctx.r9.u64 | 32804;
	// stwx r30,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r30.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// ori r8,r8,32808
	ctx.r8.u64 = ctx.r8.u64 | 32808;
	// ori r10,r10,32816
	ctx.r10.u64 = ctx.r10.u64 | 32816;
	// li r11,-1
	r11.s64 = -1;
	// stwx r30,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r30.u32);
	// addis r16,r31,3
	r16.s64 = r31.s64 + 196608;
	// addis r22,r31,3
	r22.s64 = r31.s64 + 196608;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stbx r30,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r30.u8);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwx r11,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r11.u32);
	// lis r11,2
	r11.s64 = 131072;
	// lbz r8,367(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 367);
	// ori r9,r9,32820
	ctx.r9.u64 = ctx.r9.u64 | 32820;
	// ori r11,r11,32824
	r11.u64 = r11.u64 | 32824;
	// ori r10,r10,32829
	ctx.r10.u64 = ctx.r10.u64 | 32829;
	// addi r16,r16,-32724
	r16.s64 = r16.s64 + -32724;
	// addi r22,r22,-32708
	r22.s64 = r22.s64 + -32708;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stwx r20,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r20.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// stbx r8,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, ctx.r8.u8);
	// stw r27,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r27.u32);
	// stb r30,0(r22)
	PPC_STORE_U8(r22.u32 + 0, r30.u8);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// addis r27,r31,3
	r27.s64 = r31.s64 + 196608;
	// addis r20,r31,3
	r20.s64 = r31.s64 + 196608;
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r27,r27,-32696
	r27.s64 = r27.s64 + -32696;
	// addi r20,r20,-32692
	r20.s64 = r20.s64 + -32692;
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// ori r10,r10,32836
	ctx.r10.u64 = ctx.r10.u64 | 32836;
	// ori r9,r9,32841
	ctx.r9.u64 = ctx.r9.u64 | 32841;
	// addis r17,r31,3
	r17.s64 = r31.s64 + 196608;
	// lbz r8,359(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// addis r28,r31,3
	r28.s64 = r31.s64 + 196608;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// addi r17,r17,-32688
	r17.s64 = r17.s64 + -32688;
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r28,r28,-32672
	r28.s64 = r28.s64 + -32672;
	// stwx r19,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r30.u8);
	// stbx r8,r31,r9
	PPC_STORE_U8(r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// stw r30,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r30.u32);
	// stw r18,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r18.u32);
	// stw r23,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r23.u32);
	// bl 0x82fefbb8
	sub_82FEFBB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffa600
	sub_82FFA600(ctx, base);
	// lis r19,-31942
	r19.s64 = -2093350912;
	// lwz r3,-16132(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + -16132);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r23,0(r28)
	r23.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r25,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r25.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stb r11,0(r22)
	PPC_STORE_U8(r22.u32 + 0, r11.u8);
	// bl 0x8303e2a0
	sub_8303E2A0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r3,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// stb r30,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r30.u8);
	// cmpwi cr6,r4,6
	cr6.compare<int32_t>(ctx.r4.s32, 6, xer);
	// beq cr6,0x82ffac24
	if (cr6.eq) goto loc_82FFAC24;
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bne cr6,0x82ffac28
	if (!cr6.eq) goto loc_82FFAC28;
loc_82FFAC24:
	// stb r26,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r26.u8);
loc_82FFAC28:
	// li r6,16384
	ctx.r6.s64 = 16384;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-16132(r19)
	ctx.r3.u64 = PPC_LOAD_U32(r19.u32 + -16132);
	// bl 0x82ffe108
	sub_82FFE108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// bne 0x82ffac88
	if (!cr0.eq) goto loc_82FFAC88;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,98
	ctx.r6.s64 = 98;
	// li r5,363
	ctx.r5.s64 = 363;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFAC88:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82fface4
	if (!cr6.eq) goto loc_82FFACE4;
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82fface4
	if (!cr6.eq) goto loc_82FFACE4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ori r10,r10,32776
	ctx.r10.u64 = ctx.r10.u64 | 32776;
	// stbx r30,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r30.u8);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,12290
	r11.s64 = r11.s64 + 12290;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r30.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r9.u16);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_82FFACE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_82FFACF0"))) PPC_WEAK_FUNC(sub_82FFACF0);
PPC_FUNC_IMPL(__imp__sub_82FFACF0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addis r22,r31,2
	r22.s64 = r31.s64 + 131072;
	// addi r22,r22,-16359
	r22.s64 = r22.s64 + -16359;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffad1c
	if (cr0.eq) goto loc_82FFAD1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffb084
	goto loc_82FFB084;
loc_82FFAD1C:
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r26,r26,-32764
	r26.s64 = r26.s64 + -32764;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r27,r11,r10
	r27.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r27,16384
	cr6.compare<uint32_t>(r27.u32, 16384, xer);
	// bne cr6,0x82ffad40
	if (!cr6.eq) goto loc_82FFAD40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ffb084
	goto loc_82FFB084;
loc_82FFAD40:
	// addis r28,r31,3
	r28.s64 = r31.s64 + 196608;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r28,r28,-32692
	r28.s64 = r28.s64 + -32692;
	// ori r24,r10,49168
	r24.u64 = ctx.r10.u64 | 49168;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffae14
	if (!cr6.eq) goto loc_82FFAE14;
	// lwzx r11,r31,r24
	r11.u64 = PPC_LOAD_U32(r31.u32 + r24.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ffad9c
	if (!cr6.eq) goto loc_82FFAD9C;
	// lis r11,2
	r11.s64 = 131072;
	// li r6,75
	ctx.r6.s64 = 75;
	// ori r10,r11,32864
	ctx.r10.u64 = r11.u64 | 32864;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r5,445
	ctx.r5.s64 = 445;
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r7,r31,r10
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFAD9C:
	// addis r30,r31,3
	r30.s64 = r31.s64 + 196608;
	// addis r29,r31,2
	r29.s64 = r31.s64 + 131072;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r30,-32672
	r30.s64 = r30.s64 + -32672;
	// addi r29,r29,-16364
	r29.s64 = r29.s64 + -16364;
	// li r6,16384
	ctx.r6.s64 = 16384;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,-16132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -16132);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82ffe2b0
	sub_82FFE2B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// bne 0x82ffae14
	if (!cr0.eq) goto loc_82FFAE14;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,98
	ctx.r6.s64 = 98;
	// li r5,465
	ctx.r5.s64 = 465;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFAE14:
	// addis r23,r31,3
	r23.s64 = r31.s64 + 196608;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r23,r23,-32707
	r23.s64 = r23.s64 + -32707;
	// ori r7,r10,32776
	ctx.r7.u64 = ctx.r10.u64 | 32776;
	// li r25,0
	r25.s64 = 0;
	// lbz r11,0(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffae70
	if (cr0.eq) goto loc_82FFAE70;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82ffae70
	if (!cr6.gt) goto loc_82FFAE70;
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// add r6,r31,r7
	ctx.r6.u64 = r31.u64 + ctx.r7.u64;
	// addi r10,r10,-32712
	ctx.r10.s64 = ctx.r10.s64 + -32712;
loc_82FFAE50:
	// lbzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ffae50
	if (cr6.lt) goto loc_82FFAE50;
loc_82FFAE70:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ffaecc
	if (cr6.eq) goto loc_82FFAECC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffaecc
	if (!cr6.lt) goto loc_82FFAECC;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r31,r7
	ctx.r8.u64 = r31.u64 + ctx.r7.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_82FFAEA0:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lbzx r6,r8,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stbx r6,r8,r30
	PPC_STORE_U8(ctx.r8.u32 + r30.u32, ctx.r6.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82ffaea0
	if (cr6.lt) goto loc_82FFAEA0;
loc_82FFAECC:
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r6,r27,16384
	xer.ca = r27.u32 <= 16384;
	ctx.r6.s64 = 16384 - r27.s64;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffa6a8
	sub_82FFA6A8(ctx, base);
	// add. r11,r3,r27
	r11.u64 = ctx.r3.u64 + r27.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// li r28,1
	r28.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// bne 0x82ffaf4c
	if (!cr0.eq) goto loc_82FFAF4C;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32848
	r11.u64 = r11.u64 | 32848;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ffaf4c
	if (!cr6.eq) goto loc_82FFAF4C;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32812
	r11.u64 = r11.u64 | 32812;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffaf4c
	if (!cr6.eq) goto loc_82FFAF4C;
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-32720
	r11.s64 = r11.s64 + -32720;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffaf4c
	if (!cr0.eq) goto loc_82FFAF4C;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// sth r10,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r10.u16);
loc_82FFAF4C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffb008
	if (cr6.eq) goto loc_82FFB008;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49164
	r11.u64 = r11.u64 | 49164;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffb008
	if (!cr6.eq) goto loc_82FFB008;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,49160
	r11.u64 = r11.u64 | 49160;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffb008
	if (!cr6.eq) goto loc_82FFB008;
	// lwzx r11,r31,r24
	r11.u64 = PPC_LOAD_U32(r31.u32 + r24.u32);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82ffaf94
	if (cr6.eq) goto loc_82FFAF94;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82ffafb8
	if (!cr6.eq) goto loc_82FFAFB8;
loc_82FFAF94:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ffafb8
	if (!cr6.eq) goto loc_82FFAFB8;
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r11,65279
	cr6.compare<uint32_t>(r11.u32, 65279, xer);
	// beq cr6,0x82ffafb0
	if (cr6.eq) goto loc_82FFAFB0;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bne cr6,0x82ffb008
	if (!cr6.eq) goto loc_82FFB008;
loc_82FFAFB0:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82ffb008
	goto loc_82FFB008;
loc_82FFAFB8:
	// lis r11,2
	r11.s64 = 131072;
	// lis r29,-32235
	r29.s64 = -2112552960;
	// ori r11,r11,32804
	r11.u64 = r11.u64 | 32804;
	// lwz r5,-24628(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + -24628);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x82ffb008
	if (!cr6.gt) goto loc_82FFB008;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// addis r3,r31,2
	ctx.r3.s64 = r31.s64 + 131072;
	// addi r4,r11,-24632
	ctx.r4.s64 = r11.s64 + -24632;
	// addi r3,r3,-16348
	ctx.r3.s64 = ctx.r3.s64 + -16348;
	// bl 0x82fd9560
	sub_82FD9560(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ffb008
	if (!cr0.eq) goto loc_82FFB008;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82ffb008
	if (!cr6.eq) goto loc_82FFB008;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,-24628(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -24628);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FFB008:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffb018
	if (!cr0.eq) goto loc_82FFB018;
	// stb r28,0(r22)
	PPC_STORE_U8(r22.u32 + 0, r28.u8);
loc_82FFB018:
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ffb070
	if (cr0.eq) goto loc_82FFB070;
	// lis r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ori r9,r10,49160
	ctx.r9.u64 = ctx.r10.u64 | 49160;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stwx r25,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r25.u32);
	// ble cr6,0x82ffb070
	if (!cr6.gt) goto loc_82FFB070;
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// addi r11,r11,-16372
	r11.s64 = r11.s64 + -16372;
	// addi r7,r7,-32761
	ctx.r7.s64 = ctx.r7.s64 + -32761;
loc_82FFB04C:
	// lbzx r9,r7,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ffb04c
	if (cr6.lt) goto loc_82FFB04C;
loc_82FFB070:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82FFB084:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82FFB090"))) PPC_WEAK_FUNC(sub_82FFB090);
PPC_FUNC_IMPL(__imp__sub_82FFB090) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addis r24,r31,1
	r24.s64 = r31.s64 + 65536;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r24,r24,-32764
	r24.s64 = r24.s64 + -32764;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffb0d4
	if (!cr6.eq) goto loc_82FFB0D4;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffb0d4
	if (!cr0.eq) goto loc_82FFB0D4;
loc_82FFB0CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffb300
	goto loc_82FFB300;
loc_82FFB0D4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r25,r10,32860
	r25.u64 = ctx.r10.u64 | 32860;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r29,r10,49160
	r29.u64 = ctx.r10.u64 | 49160;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r26,r10,32852
	r26.u64 = ctx.r10.u64 | 32852;
	// bne 0x82ffb1d4
	if (!cr0.eq) goto loc_82FFB1D4;
	// lwzx r11,r31,r25
	r11.u64 = PPC_LOAD_U32(r31.u32 + r25.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffb190
	if (!cr6.eq) goto loc_82FFB190;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,55296
	cr6.compare<uint32_t>(ctx.r10.u32, 55296, xer);
	// blt cr6,0x82ffb190
	if (cr6.lt) goto loc_82FFB190;
	// cmplwi cr6,r10,56191
	cr6.compare<uint32_t>(ctx.r10.u32, 56191, xer);
	// bgt cr6,0x82ffb190
	if (cr6.gt) goto loc_82FFB190;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r10,56320
	cr6.compare<uint32_t>(ctx.r10.u32, 56320, xer);
	// blt cr6,0x82ffb0cc
	if (cr6.lt) goto loc_82FFB0CC;
	// cmplwi cr6,r10,57343
	cr6.compare<uint32_t>(ctx.r10.u32, 57343, xer);
	// bgt cr6,0x82ffb0cc
	if (cr6.gt) goto loc_82FFB0CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// add r30,r31,r29
	r30.u64 = r31.u64 + r29.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lhzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ffb1d4
	goto loc_82FFB1D4;
loc_82FFB190:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r10,r31,r26
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r26.u32);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffb0cc
	if (cr0.eq) goto loc_82FFB0CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82FFB1D4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffb2d8
	if (!cr6.lt) goto loc_82FFB2D8;
	// add r27,r31,r25
	r27.u64 = r31.u64 + r25.u64;
loc_82FFB1E8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffb284
	if (!cr6.eq) goto loc_82FFB284;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,55296
	cr6.compare<uint32_t>(ctx.r10.u32, 55296, xer);
	// blt cr6,0x82ffb284
	if (cr6.lt) goto loc_82FFB284;
	// cmplwi cr6,r10,56191
	cr6.compare<uint32_t>(ctx.r10.u32, 56191, xer);
	// bgt cr6,0x82ffb284
	if (cr6.gt) goto loc_82FFB284;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r10,56320
	cr6.compare<uint32_t>(ctx.r10.u32, 56320, xer);
	// blt cr6,0x82ffb2e8
	if (cr6.lt) goto loc_82FFB2E8;
	// cmplwi cr6,r10,57343
	cr6.compare<uint32_t>(ctx.r10.u32, 57343, xer);
	// bgt cr6,0x82ffb2e8
	if (cr6.gt) goto loc_82FFB2E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// add r30,r31,r29
	r30.u64 = r31.u64 + r29.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lhzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ffb2c8
	goto loc_82FFB2C8;
loc_82FFB284:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r10,r31,r26
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r26.u32);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r9,r31
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffb2e8
	if (cr0.eq) goto loc_82FFB2E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82FFB2C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffb1e8
	if (cr6.lt) goto loc_82FFB1E8;
loc_82FFB2D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffb1d4
	if (!cr0.eq) goto loc_82FFB1D4;
loc_82FFB2E8:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_82FFB300:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82FFB308"))) PPC_WEAK_FUNC(sub_82FFB308);
PPC_FUNC_IMPL(__imp__sub_82FFB308) {
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
	// lis r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	r11.u64 = r11.u64 | 32772;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ffb350
	if (!cr6.eq) goto loc_82FFB350;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffb350
	if (!cr0.eq) goto loc_82FFB350;
loc_82FFB348:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffb39c
	goto loc_82FFB39C;
loc_82FFB350:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(r11.u32, 34, xer);
	// beq cr6,0x82ffb374
	if (cr6.eq) goto loc_82FFB374;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// bne cr6,0x82ffb348
	if (!cr6.eq) goto loc_82FFB348;
loc_82FFB374:
	// sth r10,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r10.u16);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-16376
	r11.s64 = r11.s64 + -16376;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82FFB39C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFB3B8"))) PPC_WEAK_FUNC(sub_82FFB3B8);
PPC_FUNC_IMPL(__imp__sub_82FFB3B8) {
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
	// lis r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	r11.u64 = r11.u64 | 32772;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ffb3f8
	if (!cr6.eq) goto loc_82FFB3F8;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb438
	if (cr0.eq) goto loc_82FFB438;
loc_82FFB3F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + r31.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ffb438
	if (!cr6.eq) goto loc_82FFB438;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-16376
	r11.s64 = r11.s64 + -16376;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82ffb43c
	goto loc_82FFB43C;
loc_82FFB438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFB43C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFB458"))) PPC_WEAK_FUNC(sub_82FFB458);
PPC_FUNC_IMPL(__imp__sub_82FFB458) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ffb4a4
	if (cr6.eq) goto loc_82FFB4A4;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffb4a4
	if (cr0.eq) goto loc_82FFB4A4;
	// addi r11,r27,2
	r11.s64 = r27.s64 + 2;
	// b 0x82ffb48c
	goto loc_82FFB48C;
loc_82FFB488:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFB48C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffb488
	if (!cr0.eq) goto loc_82FFB488;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r30,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r30.s64 = r11.s32 >> 1;
	// b 0x82ffb4a8
	goto loc_82FFB4A8;
loc_82FFB4A4:
	// li r30,0
	r30.s64 = 0;
loc_82FFB4A8:
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,-32764
	r28.s64 = r28.s64 + -32764;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r29,r11,r10
	r29.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bge cr6,0x82ffb4ec
	if (!cr6.lt) goto loc_82FFB4EC;
loc_82FFB4C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82ffb53c
	if (cr6.eq) goto loc_82FFB53C;
	// mr r29,r11
	r29.u64 = r11.u64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x82ffb4c4
	if (cr6.lt) goto loc_82FFB4C4;
loc_82FFB4EC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x82fd9c88
	sub_82FD9C88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ffb53c
	if (!cr0.eq) goto loc_82FFB53C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// addi r11,r11,-16376
	r11.s64 = r11.s64 + -16376;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82FFB534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82FFB53C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffb534
	goto loc_82FFB534;
}

__attribute__((alias("__imp__sub_82FFB548"))) PPC_WEAK_FUNC(sub_82FFB548);
PPC_FUNC_IMPL(__imp__sub_82FFB548) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ffb594
	if (cr6.eq) goto loc_82FFB594;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffb594
	if (cr0.eq) goto loc_82FFB594;
	// addi r11,r27,2
	r11.s64 = r27.s64 + 2;
	// b 0x82ffb57c
	goto loc_82FFB57C;
loc_82FFB578:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFB57C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffb578
	if (!cr0.eq) goto loc_82FFB578;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r29,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r29.s64 = r11.s32 >> 1;
	// b 0x82ffb598
	goto loc_82FFB598;
loc_82FFB594:
	// li r29,0
	r29.s64 = 0;
loc_82FFB598:
	// addis r28,r31,1
	r28.s64 = r31.s64 + 65536;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,-32764
	r28.s64 = r28.s64 + -32764;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bge cr6,0x82ffb5dc
	if (!cr6.lt) goto loc_82FFB5DC;
loc_82FFB5B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82ffb608
	if (cr6.eq) goto loc_82FFB608;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82ffb5b4
	if (cr6.lt) goto loc_82FFB5B4;
loc_82FFB5DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x82fd9c88
	sub_82FD9C88(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82FFB600:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_82FFB608:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ffb600
	goto loc_82FFB600;
}

__attribute__((alias("__imp__sub_82FFB610"))) PPC_WEAK_FUNC(sub_82FFB610);
PPC_FUNC_IMPL(__imp__sub_82FFB610) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// addi r29,r29,-32764
	r29.s64 = r29.s64 + -32764;
loc_82FFB62C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffb69c
	if (!cr6.lt) goto loc_82FFB69C;
	// addis r30,r31,3
	r30.s64 = r31.s64 + 196608;
	// addi r30,r30,-32684
	r30.s64 = r30.s64 + -32684;
loc_82FFB644:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffb6b8
	if (cr0.eq) goto loc_82FFB6B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ff4ef8
	sub_82FF4EF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffb644
	if (cr6.lt) goto loc_82FFB644;
loc_82FFB69C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffb62c
	if (!cr0.eq) goto loc_82FFB62C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFB6B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82FFB6B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ffb6b0
	goto loc_82FFB6B0;
}

__attribute__((alias("__imp__sub_82FFB6C0"))) PPC_WEAK_FUNC(sub_82FFB6C0);
PPC_FUNC_IMPL(__imp__sub_82FFB6C0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addis r29,r31,1
	r29.s64 = r31.s64 + 65536;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r29,r29,-32764
	r29.s64 = r29.s64 + -32764;
loc_82FFB6E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffb75c
	if (!cr6.lt) goto loc_82FFB75C;
	// addis r30,r31,3
	r30.s64 = r31.s64 + 196608;
	// addi r30,r30,-32684
	r30.s64 = r30.s64 + -32684;
loc_82FFB6F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ffb778
	if (!cr0.eq) goto loc_82FFB778;
	// clrlwi r9,r27,16
	ctx.r9.u64 = r27.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ffb778
	if (cr6.eq) goto loc_82FFB778;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ff4ef8
	sub_82FF4EF8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffb6f8
	if (cr6.lt) goto loc_82FFB6F8;
loc_82FFB75C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffb6e0
	if (!cr0.eq) goto loc_82FFB6E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFB770:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_82FFB778:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ffb770
	goto loc_82FFB770;
}

__attribute__((alias("__imp__sub_82FFB780"))) PPC_WEAK_FUNC(sub_82FFB780);
PPC_FUNC_IMPL(__imp__sub_82FFB780) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// addis r29,r31,2
	r29.s64 = r31.s64 + 131072;
	// addis r27,r31,2
	r27.s64 = r31.s64 + 131072;
	// addi r29,r29,-16372
	r29.s64 = r29.s64 + -16372;
	// addi r27,r27,-16376
	r27.s64 = r27.s64 + -16376;
	// addis r30,r31,1
	r30.s64 = r31.s64 + 65536;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r30,r30,-32764
	r30.s64 = r30.s64 + -32764;
	// lwz r25,0(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r24,0(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 0);
loc_82FFB7B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffb820
	if (!cr6.lt) goto loc_82FFB820;
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// addi r26,r26,-32684
	r26.s64 = r26.s64 + -32684;
loc_82FFB7D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ffb860
	if (cr0.eq) goto loc_82FFB860;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ff4ef8
	sub_82FF4EF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffb7d0
	if (cr6.lt) goto loc_82FFB7D0;
loc_82FFB820:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffb7b8
	if (!cr0.eq) goto loc_82FFB7B8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bne cr6,0x82ffb84c
	if (!cr6.eq) goto loc_82FFB84C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82ffb850
	if (cr6.eq) goto loc_82FFB850;
loc_82FFB84C:
	// li r11,1
	r11.s64 = 1;
loc_82FFB850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFB854:
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
loc_82FFB860:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bne cr6,0x82ffb87c
	if (!cr6.eq) goto loc_82FFB87C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82ffb880
	if (cr6.eq) goto loc_82FFB880;
loc_82FFB87C:
	// li r11,1
	r11.s64 = 1;
loc_82FFB880:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ffb854
	goto loc_82FFB854;
}

__attribute__((alias("__imp__sub_82FFB888"))) PPC_WEAK_FUNC(sub_82FFB888);
PPC_FUNC_IMPL(__imp__sub_82FFB888) {
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
	// lis r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,32772
	r11.u64 = r11.u64 | 32772;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ffb8c0
	if (!cr6.eq) goto loc_82FFB8C0;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffb90c
	if (cr0.eq) goto loc_82FFB90C;
loc_82FFB8C0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + r31.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffb90c
	if (cr0.eq) goto loc_82FFB90C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ff4ef8
	sub_82FF4EF8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ffb910
	goto loc_82FFB910;
loc_82FFB90C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFB910:
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

__attribute__((alias("__imp__sub_82FFB930"))) PPC_WEAK_FUNC(sub_82FFB930);
PPC_FUNC_IMPL(__imp__sub_82FFB930) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,49168
	r11.u64 = r11.u64 | 49168;
	// li r23,0
	r23.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lis r11,0
	r11.s64 = 0;
	// ori r24,r11,32772
	r24.u64 = r11.u64 | 32772;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ffbf98
	if (cr0.eq) goto loc_82FFBF98;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82ffbf04
	if (!cr6.gt) goto loc_82FFBF04;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// ble cr6,0x82ffbcd4
	if (!cr6.gt) goto loc_82FFBCD4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x82ffbb1c
	if (cr6.eq) goto loc_82FFBB1C;
	// addi r11,r10,-5
	r11.s64 = ctx.r10.s64 + -5;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x82ffbf04
	if (cr6.gt) goto loc_82FFBF04;
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// addi r29,r29,-32732
	r29.s64 = r29.s64 + -32732;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x82ffc064
	if (cr6.lt) goto loc_82FFC064;
	// addis r5,r30,2
	ctx.r5.s64 = r30.s64 + 131072;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r5,r5,-16352
	ctx.r5.s64 = ctx.r5.s64 + -16352;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r6,r30
	r11.u64 = ctx.r6.u64 + r30.u64;
	// addis r8,r11,2
	ctx.r8.s64 = r11.s64 + 131072;
	// addi r8,r8,-16348
	ctx.r8.s64 = ctx.r8.s64 + -16348;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,65279
	cr6.compare<uint32_t>(r11.u32, 65279, xer);
	// beq cr6,0x82ffb9d0
	if (cr6.eq) goto loc_82FFB9D0;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bne cr6,0x82ffb9e4
	if (!cr6.eq) goto loc_82FFB9E4;
loc_82FFB9D0:
	// addi r11,r6,2
	r11.s64 = ctx.r6.s64 + 2;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_82FFB9E4:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// subf r9,r6,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r6.s64;
	// lwz r11,-24688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24688);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82ffba00
	if (!cr6.lt) goto loc_82FFBA00;
loc_82FFB9F8:
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// b 0x82ffc064
	goto loc_82FFC064;
loc_82FFBA00:
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ffbae4
	if (!cr6.eq) goto loc_82FFBAE4;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r10,-24712
	ctx.r9.s64 = ctx.r10.s64 + -24712;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// beq 0x82ffba44
	if (cr0.eq) goto loc_82FFBA44;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82FFBA24:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,0(r9)
	r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r28,r7
	ctx.r7.s64 = ctx.r7.s64 - r28.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ffba44
	if (!cr0.eq) goto loc_82FFBA44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82ffba24
	if (!cr6.eq) goto loc_82FFBA24;
loc_82FFBA44:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ffb9f8
	if (!cr0.eq) goto loc_82FFB9F8;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bge cr6,0x82ffc064
	if (!cr6.lt) goto loc_82FFC064;
	// addis r7,r30,3
	ctx.r7.s64 = r30.s64 + 196608;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,-32696
	ctx.r7.s64 = ctx.r7.s64 + -32696;
	// add r11,r30,r24
	r11.u64 = r30.u64 + r24.u64;
	// ori r28,r10,32776
	r28.u64 = ctx.r10.u64 | 32776;
loc_82FFBA68:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// beq 0x82ffba98
	if (cr0.eq) goto loc_82FFBA98;
	// rlwinm r9,r10,8,8,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF00;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82FFBA98:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// cmplwi cr6,r4,62
	cr6.compare<uint32_t>(ctx.r4.u32, 62, xer);
	// stbx r6,r9,r28
	PPC_STORE_U8(ctx.r9.u32 + r28.u32, ctx.r6.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r10,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + r30.u32, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82ffc064
	if (cr6.eq) goto loc_82FFC064;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ffba68
	if (cr6.lt) goto loc_82FFBA68;
	// b 0x82ffc064
	goto loc_82FFC064;
loc_82FFBAE4:
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r10,-24700
	ctx.r9.s64 = ctx.r10.s64 + -24700;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// beq 0x82ffba44
	if (cr0.eq) goto loc_82FFBA44;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82FFBAF8:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r28,0(r9)
	r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r28,r7
	ctx.r7.s64 = ctx.r7.s64 - r28.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ffba44
	if (!cr0.eq) goto loc_82FFBA44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82ffbaf8
	if (!cr6.eq) goto loc_82FFBAF8;
	// b 0x82ffba44
	goto loc_82FFBA44;
loc_82FFBB1C:
	// addis r26,r30,3
	r26.s64 = r30.s64 + 196608;
	// lis r28,-32235
	r28.s64 = -2112552960;
	// addi r26,r26,-32732
	r26.s64 = r26.s64 + -32732;
	// addis r29,r30,2
	r29.s64 = r30.s64 + 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r29,r29,-16348
	r29.s64 = r29.s64 + -16348;
	// lwz r5,-24628(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + -24628);
	// ori r27,r10,49184
	r27.u64 = ctx.r10.u64 | 49184;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// ble cr6,0x82ffbb7c
	if (!cr6.gt) goto loc_82FFBB7C;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24632
	ctx.r4.s64 = r11.s64 + -24632;
	// bl 0x82fd9560
	sub_82FD9560(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ffbb7c
	if (!cr0.eq) goto loc_82FFBB7C;
	// add r11,r30,r27
	r11.u64 = r30.u64 + r27.u64;
	// lwz r10,-24628(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -24628);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,-24628(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -24628);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
loc_82FFBB7C:
	// lis r11,-32235
	r11.s64 = -2112552960;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r5,-24728(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -24728);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x82ffc064
	if (cr6.lt) goto loc_82FFC064;
	// lis r11,-32235
	r11.s64 = -2112552960;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-24736
	ctx.r4.s64 = r11.s64 + -24736;
	// bl 0x82fd9560
	sub_82FD9560(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ffc064
	if (!cr0.eq) goto loc_82FFC064;
	// add r10,r30,r27
	ctx.r10.u64 = r30.u64 + r27.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82ffc064
	if (!cr6.lt) goto loc_82FFC064;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r11,r30,r24
	r11.u64 = r30.u64 + r24.u64;
	// ori r28,r9,32776
	r28.u64 = ctx.r9.u64 | 32776;
loc_82FFBBC8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r6,62
	cr6.compare<int32_t>(ctx.r6.s32, 62, xer);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// stbx r22,r8,r28
	PPC_STORE_U8(ctx.r8.u32 + r28.u32, r22.u8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r7,r8,r30
	PPC_STORE_U16(ctx.r8.u32 + r30.u32, ctx.r7.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82ffc064
	if (cr6.eq) goto loc_82FFC064;
	// rlwinm. r9,r9,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ffbc30
	if (!cr0.eq) goto loc_82FFBC30;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ffbbc8
	if (cr6.lt) goto loc_82FFBBC8;
	// b 0x82ffc064
	goto loc_82FFC064;
loc_82FFBC30:
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// li r23,0
	r23.s64 = 0;
	// addi r29,r29,-32672
	r29.s64 = r29.s64 + -32672;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,49180
	ctx.r9.u64 = ctx.r9.u64 | 49180;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,1
	r11.s64 = 65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,49172
	r11.u64 = r11.u64 | 49172;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r10,r10,32832
	ctx.r10.u64 = ctx.r10.u64 | 32832;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwzx r7,r30,r10
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r10,-1384
	ctx.r4.s64 = ctx.r10.s64 + -1384;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,1275
	ctx.r5.s64 = 1275;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFBCD4:
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r8,-16348
	ctx.r8.s64 = ctx.r8.s64 + -16348;
	// ori r6,r10,32804
	ctx.r6.u64 = ctx.r10.u64 | 32804;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lbz r11,0(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// ori r10,r10,49189
	ctx.r10.u64 = ctx.r10.u64 | 49189;
	// ori r9,r9,49190
	ctx.r9.u64 = ctx.r9.u64 | 49190;
	// ori r7,r7,49191
	ctx.r7.u64 = ctx.r7.u64 | 49191;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffbd2c
	if (!cr0.eq) goto loc_82FFBD2C;
	// lbzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + ctx.r10.u32);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne 0x82ffbd2c
	if (!cr0.eq) goto loc_82FFBD2C;
	// lbzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + ctx.r9.u32);
	// cmplwi cr6,r5,254
	cr6.compare<uint32_t>(ctx.r5.u32, 254, xer);
	// bne cr6,0x82ffbd2c
	if (!cr6.eq) goto loc_82FFBD2C;
	// lbzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r5,255
	cr6.compare<uint32_t>(ctx.r5.u32, 255, xer);
	// beq cr6,0x82ffbd58
	if (cr6.eq) goto loc_82FFBD58;
loc_82FFBD2C:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x82ffbda0
	if (!cr6.eq) goto loc_82FFBDA0;
	// lbzx r11,r30,r10
	r11.u64 = PPC_LOAD_U8(r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(r11.u32, 254, xer);
	// bne cr6,0x82ffbda0
	if (!cr6.eq) goto loc_82FFBDA0;
	// lbzx r11,r30,r9
	r11.u64 = PPC_LOAD_U8(r30.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffbda0
	if (!cr0.eq) goto loc_82FFBDA0;
	// lbzx r11,r30,r7
	r11.u64 = PPC_LOAD_U8(r30.u32 + ctx.r7.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffbda0
	if (!cr0.eq) goto loc_82FFBDA0;
loc_82FFBD58:
	// add r10,r30,r6
	ctx.r10.u64 = r30.u64 + ctx.r6.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ffbd94
	if (!cr6.gt) goto loc_82FFBD94;
	// lis r11,-2
	r11.s64 = -131072;
	// ori r9,r11,16348
	ctx.r9.u64 = r11.u64 | 16348;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
loc_82FFBD78:
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ffbd78
	if (cr6.lt) goto loc_82FFBD78;
loc_82FFBD94:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82FFBDA0:
	// addis r9,r30,2
	ctx.r9.s64 = r30.s64 + 131072;
	// add r7,r30,r6
	ctx.r7.u64 = r30.u64 + ctx.r6.u64;
	// addi r9,r9,-16352
	ctx.r9.s64 = ctx.r9.s64 + -16352;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ffc064
	if (!cr6.lt) goto loc_82FFC064;
	// addis r6,r30,3
	ctx.r6.s64 = r30.s64 + 196608;
	// lis r11,0
	r11.s64 = 0;
	// addi r6,r6,-32696
	ctx.r6.s64 = ctx.r6.s64 + -32696;
	// ori r28,r11,32776
	r28.u64 = r11.u64 | 32776;
loc_82FFBDCC:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// beq 0x82ffbe08
	if (cr0.eq) goto loc_82FFBE08;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r11,r10,16,16,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r5,r10,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r11,24,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r5,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r11,r10
	ctx.r10.u64 = r11.u64 | ctx.r10.u64;
loc_82FFBE08:
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bgt cr6,0x82ffbe60
	if (cr6.gt) goto loc_82FFBE60;
	// add r11,r30,r24
	r11.u64 = r30.u64 + r24.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stbx r5,r10,r28
	PPC_STORE_U8(ctx.r10.u32 + r28.u32, ctx.r5.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r4,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + r30.u32, ctx.r4.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82ffc064
	if (cr6.eq) goto loc_82FFC064;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ffbdcc
	if (cr6.lt) goto loc_82FFBDCC;
	// b 0x82ffc064
	goto loc_82FFC064;
loc_82FFBE60:
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// lis r11,1
	r11.s64 = 65536;
	// addi r29,r29,-32672
	r29.s64 = r29.s64 + -32672;
	// ori r11,r11,49180
	r11.u64 = r11.u64 | 49180;
	// li r23,0
	r23.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// stwx r23,r30,r24
	PPC_STORE_U32(r30.u32 + r24.u32, r23.u32);
	// stw r23,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r23.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,1
	r11.s64 = 65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,49172
	r11.u64 = r11.u64 | 49172;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r10,r10,32832
	ctx.r10.u64 = ctx.r10.u64 | 32832;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwzx r7,r30,r10
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// stw r7,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r10,-1384
	ctx.r4.s64 = ctx.r10.s64 + -1384;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,71
	ctx.r6.s64 = 71;
	// li r5,1196
	ctx.r5.s64 = 1196;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFBF04:
	// addis r29,r30,3
	r29.s64 = r30.s64 + 196608;
	// lis r11,1
	r11.s64 = 65536;
	// addi r29,r29,-32672
	r29.s64 = r29.s64 + -32672;
	// ori r11,r11,49180
	r11.u64 = r11.u64 | 49180;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,1
	r11.s64 = 65536;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,49172
	r11.u64 = r11.u64 | 49172;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,2
	r11.s64 = 131072;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,70
	ctx.r6.s64 = 70;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r11,-1384
	ctx.r4.s64 = r11.s64 + -1384;
	// li r5,1391
	ctx.r5.s64 = 1391;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82ff9fd8
	sub_82FF9FD8(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFBF98:
	// addis r26,r30,2
	r26.s64 = r30.s64 + 131072;
	// addi r26,r26,-16348
	r26.s64 = r26.s64 + -16348;
	// lbz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// bl 0x8303e300
	sub_8303E300(ctx, base);
	// addis r27,r30,2
	r27.s64 = r30.s64 + 131072;
	// add r29,r30,r24
	r29.u64 = r30.u64 + r24.u64;
	// addi r27,r27,-16352
	r27.s64 = r27.s64 + -16352;
	// lis r11,0
	r11.s64 = 0;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// ori r28,r11,32776
	r28.u64 = r11.u64 | 32776;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r9,62
	cr6.compare<uint32_t>(ctx.r9.u32, 62, xer);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// stbx r22,r11,r28
	PPC_STORE_U8(r11.u32 + r28.u32, r22.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r30
	PPC_STORE_U16(r11.u32 + r30.u32, ctx.r3.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// beq cr6,0x82ffc064
	if (cr6.eq) goto loc_82FFC064;
	// addis r25,r30,3
	r25.s64 = r30.s64 + 196608;
	// addi r25,r25,-32732
	r25.s64 = r25.s64 + -32732;
loc_82FFC008:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ffc064
	if (cr6.eq) goto loc_82FFC064;
	// lbz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// bl 0x8303e300
	sub_8303E300(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,62
	cr6.compare<uint32_t>(ctx.r10.u32, 62, xer);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stbx r22,r11,r28
	PPC_STORE_U8(r11.u32 + r28.u32, r22.u8);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r3,r11,r30
	PPC_STORE_U16(r11.u32 + r30.u32, ctx.r3.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bne cr6,0x82ffc008
	if (!cr6.eq) goto loc_82FFC008;
loc_82FFC064:
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32848
	r11.u64 = r11.u64 | 32848;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ffc0b0
	if (!cr6.eq) goto loc_82FFC0B0;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32812
	r11.u64 = r11.u64 | 32812;
	// lwzx r11,r30,r11
	r11.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ffc0b0
	if (!cr6.eq) goto loc_82FFC0B0;
	// add r11,r30,r24
	r11.u64 = r30.u64 + r24.u64;
	// li r9,32
	ctx.r9.s64 = 32;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + r30.u32, ctx.r9.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82FFC0B0:
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32829
	r11.u64 = r11.u64 | 32829;
	// lbzx r11,r30,r11
	r11.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffc118
	if (cr0.eq) goto loc_82FFC118;
	// lis r11,0
	r11.s64 = 0;
	// add r9,r30,r24
	ctx.r9.u64 = r30.u64 + r24.u64;
	// ori r10,r11,49160
	ctx.r10.u64 = r11.u64 | 49160;
	// mr r11,r22
	r11.u64 = r22.u64;
	// stwx r23,r30,r10
	PPC_STORE_U32(r30.u32 + ctx.r10.u32, r23.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82ffc118
	if (!cr6.gt) goto loc_82FFC118;
	// addis r10,r30,1
	ctx.r10.s64 = r30.s64 + 65536;
	// addis r6,r30,1
	ctx.r6.s64 = r30.s64 + 65536;
	// addi r10,r10,-16372
	ctx.r10.s64 = ctx.r10.s64 + -16372;
	// addi r6,r6,-32761
	ctx.r6.s64 = ctx.r6.s64 + -32761;
loc_82FFC0F4:
	// lbzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ffc0f4
	if (cr6.lt) goto loc_82FFC0F4;
loc_82FFC118:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82FFC120"))) PPC_WEAK_FUNC(sub_82FFC120);
PPC_FUNC_IMPL(__imp__sub_82FFC120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC148"))) PPC_WEAK_FUNC(sub_82FFC148);
PPC_FUNC_IMPL(__imp__sub_82FFC148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC170"))) PPC_WEAK_FUNC(sub_82FFC170);
PPC_FUNC_IMPL(__imp__sub_82FFC170) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// lwz r27,292(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lis r11,0
	r11.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,32772
	r11.u64 = r11.u64 | 32772;
	// ori r10,r10,49160
	ctx.r10.u64 = ctx.r10.u64 | 49160;
	// li r23,1
	r23.s64 = 1;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// addis r28,r31,2
	r28.s64 = r31.s64 + 131072;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,1
	r11.s64 = 65536;
	// stwx r23,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r23.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r9,49164
	ctx.r9.u64 = ctx.r9.u64 | 49164;
	// ori r11,r11,49176
	r11.u64 = r11.u64 | 49176;
	// ori r10,r10,49177
	ctx.r10.u64 = ctx.r10.u64 | 49177;
	// addi r28,r28,-16364
	r28.s64 = r28.s64 + -16364;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stwx r23,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r23.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stbx r30,r31,r11
	PPC_STORE_U8(r31.u32 + r11.u32, r30.u8);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stbx r30,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r30.u8);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,49180
	r11.u64 = r11.u64 | 49180;
	// ori r10,r10,49184
	ctx.r10.u64 = ctx.r10.u64 | 49184;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r8,-1
	ctx.r8.s64 = -1;
	// ori r9,r9,32808
	ctx.r9.u64 = ctx.r9.u64 | 32808;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// lis r11,2
	r11.s64 = 131072;
	// stwx r30,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r30.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,32812
	r11.u64 = r11.u64 | 32812;
	// ori r10,r10,32816
	ctx.r10.u64 = ctx.r10.u64 | 32816;
	// stwx r8,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// addis r25,r31,3
	r25.s64 = r31.s64 + 196608;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stwx r22,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r22.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,2
	r11.s64 = 131072;
	// stbx r30,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r30.u8);
	// lbz r10,279(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 279);
	// ori r7,r7,32820
	ctx.r7.u64 = ctx.r7.u64 | 32820;
	// ori r9,r9,32824
	ctx.r9.u64 = ctx.r9.u64 | 32824;
	// ori r11,r11,32829
	r11.u64 = r11.u64 | 32829;
	// addi r26,r26,-32732
	r26.s64 = r26.s64 + -32732;
	// addi r25,r25,-32708
	r25.s64 = r25.s64 + -32708;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stwx r20,r31,r7
	PPC_STORE_U32(r31.u32 + ctx.r7.u32, r20.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r30,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r30.u32);
	// stbx r10,r31,r11
	PPC_STORE_U8(r31.u32 + r11.u32, ctx.r10.u8);
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// stb r30,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r30.u8);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,32832
	r11.u64 = r11.u64 | 32832;
	// ori r10,r10,32836
	ctx.r10.u64 = ctx.r10.u64 | 32836;
	// addis r29,r31,3
	r29.s64 = r31.s64 + 196608;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r29,r29,-32696
	r29.s64 = r29.s64 + -32696;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// lis r11,2
	r11.s64 = 131072;
	// stwx r24,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r24.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r9,32841
	ctx.r9.u64 = ctx.r9.u64 | 32841;
	// ori r11,r11,32844
	r11.u64 = r11.u64 | 32844;
	// ori r10,r10,32848
	ctx.r10.u64 = ctx.r10.u64 | 32848;
	// addis r24,r31,3
	r24.s64 = r31.s64 + 196608;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r19,r31,r9
	PPC_STORE_U8(r31.u32 + ctx.r9.u32, r19.u8);
	// addi r24,r24,-32672
	r24.s64 = r24.s64 + -32672;
	// stwx r30,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, r30.u32);
	// stwx r21,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r21.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// stw r27,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r27.u32);
	// bl 0x82fefbb8
	sub_82FEFBB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffa600
	sub_82FFA600(ctx, base);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r3,-16132(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -16132);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addis r3,r31,2
	ctx.r3.s64 = r31.s64 + 131072;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r3,r3,-16348
	ctx.r3.s64 = ctx.r3.s64 + -16348;
	// stb r11,0(r25)
	PPC_STORE_U8(r25.u32 + 0, r11.u8);
	// bl 0x8303de60
	sub_8303DE60(ctx, base);
	// addis r26,r31,2
	r26.s64 = r31.s64 + 131072;
	// lwz r27,0(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r26,r26,-16368
	r26.s64 = r26.s64 + -16368;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bl 0x8303e2a0
	sub_8303E2A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82ffc35c
	if (cr6.eq) goto loc_82FFC35C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82ffc360
	if (!cr6.eq) goto loc_82FFC360;
loc_82FFC35C:
	// stb r23,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r23.u8);
loc_82FFC360:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffb930
	sub_82FFB930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82FFC378"))) PPC_WEAK_FUNC(sub_82FFC378);
PPC_FUNC_IMPL(__imp__sub_82FFC378) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-30136
	r11.s64 = r11.s64 + -30136;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC3E0"))) PPC_WEAK_FUNC(sub_82FFC3E0);
PPC_FUNC_IMPL(__imp__sub_82FFC3E0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x82ffc378
	sub_82FFC378(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r25,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r25.u32);
	// addi r11,r11,-992
	r11.s64 = r11.s64 + -992;
	// stw r26,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82FFC458"))) PPC_WEAK_FUNC(sub_82FFC458);
PPC_FUNC_IMPL(__imp__sub_82FFC458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82fe0008
	sub_82FE0008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC488"))) PPC_WEAK_FUNC(sub_82FFC488);
PPC_FUNC_IMPL(__imp__sub_82FFC488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fdffa8
	sub_82FDFFA8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-992
	r11.s64 = r11.s64 + -992;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r10,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FFC4FC"))) PPC_WEAK_FUNC(sub_82FFC4FC);
PPC_FUNC_IMPL(__imp__sub_82FFC4FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82fe0008
	sub_82FE0008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC530"))) PPC_WEAK_FUNC(sub_82FFC530);
PPC_FUNC_IMPL(__imp__sub_82FFC530) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-992
	r11.s64 = r11.s64 + -992;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-30136
	r11.s64 = r11.s64 + -30136;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC5C8"))) PPC_WEAK_FUNC(sub_82FFC5C8);
PPC_FUNC_IMPL(__imp__sub_82FFC5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82fe0008
	sub_82FE0008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC5F0"))) PPC_WEAK_FUNC(sub_82FFC5F0);
PPC_FUNC_IMPL(__imp__sub_82FFC5F0) {
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
	// bl 0x82ffc530
	sub_82FFC530(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffc620
	if (cr0.eq) goto loc_82FFC620;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FFC620:
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

__attribute__((alias("__imp__sub_82FFC640"))) PPC_WEAK_FUNC(sub_82FFC640);
PPC_FUNC_IMPL(__imp__sub_82FFC640) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8303e370
	sub_8303E370(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-13948
	r31.s64 = r11.s64 + -13948;
	// bl 0x831b8ea0
	sub_831B8EA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831b9b28
	sub_831B9B28(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x831b5630
	sub_831B5630(ctx, base);
}

__attribute__((alias("__imp__sub_82FFC690"))) PPC_WEAK_FUNC(sub_82FFC690);
PPC_FUNC_IMPL(__imp__sub_82FFC690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ffc6d0
	if (!cr6.eq) goto loc_82FFC6D0;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-7900
	ctx.r4.s64 = r11.s64 + -7900;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFC6D0:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC6EC"))) PPC_WEAK_FUNC(sub_82FFC6EC);
PPC_FUNC_IMPL(__imp__sub_82FFC6EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,81
	ctx.r3.s64 = r31.s64 + 81;
	// addi r4,r11,-7900
	ctx.r4.s64 = r11.s64 + -7900;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FFC710"))) PPC_WEAK_FUNC(sub_82FFC710);
PPC_FUNC_IMPL(__imp__sub_82FFC710) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x822c0270
	sub_822C0270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFC718"))) PPC_WEAK_FUNC(sub_82FFC718);
PPC_FUNC_IMPL(__imp__sub_82FFC718) {
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
	// lis r29,-31942
	r29.s64 = -2093350912;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r4,-15860(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -15860);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ffc758
	if (cr6.eq) goto loc_82FFC758;
	// lwz r3,-16120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15860(r29)
	PPC_STORE_U32(r29.u32 + -15860, r11.u32);
loc_82FFC758:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ffc790
	if (cr6.eq) goto loc_82FFC790;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,-16120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// bl 0x82fd9650
	sub_82FD9650(ctx, base);
	// lis r11,-31947
	r11.s64 = -2093678592;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r6,-16120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// addi r31,r11,14752
	r31.s64 = r11.s64 + 14752;
	// stw r3,-15860(r29)
	PPC_STORE_U32(r29.u32 + -15860, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82fd9780
	sub_82FD9780(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// sth r11,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r11.u16);
loc_82FFC790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FFC798"))) PPC_WEAK_FUNC(sub_82FFC798);
PPC_FUNC_IMPL(__imp__sub_82FFC798) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r4,-15856(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -15856);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ffc7d8
	if (cr6.eq) goto loc_82FFC7D8;
	// lwz r3,-16120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15856(r31)
	PPC_STORE_U32(r31.u32 + -15856, r11.u32);
loc_82FFC7D8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ffc7f0
	if (cr6.eq) goto loc_82FFC7F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,-16120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -16120);
	// bl 0x82fd9650
	sub_82FD9650(ctx, base);
	// stw r3,-15856(r31)
	PPC_STORE_U32(r31.u32 + -15856, ctx.r3.u32);
loc_82FFC7F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FFC7F8"))) PPC_WEAK_FUNC(sub_82FFC7F8);
PPC_FUNC_IMPL(__imp__sub_82FFC7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// addi r3,r11,14752
	ctx.r3.s64 = r11.s64 + 14752;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC810"))) PPC_WEAK_FUNC(sub_82FFC810);
PPC_FUNC_IMPL(__imp__sub_82FFC810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82fe1350
	sub_82FE1350(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,-648
	r11.s64 = r11.s64 + -648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82fe16d8
	sub_82FE16D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FFC858"))) PPC_WEAK_FUNC(sub_82FFC858);
PPC_FUNC_IMPL(__imp__sub_82FFC858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC880"))) PPC_WEAK_FUNC(sub_82FFC880);
PPC_FUNC_IMPL(__imp__sub_82FFC880) {
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
	// bl 0x82fe13c8
	sub_82FE13C8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-648
	r11.s64 = r11.s64 + -648;
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

__attribute__((alias("__imp__sub_82FFC8C0"))) PPC_WEAK_FUNC(sub_82FFC8C0);
PPC_FUNC_IMPL(__imp__sub_82FFC8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-648
	r11.s64 = r11.s64 + -648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82fe1298
	sub_82FE1298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFC8D8"))) PPC_WEAK_FUNC(sub_82FFC8D8);
PPC_FUNC_IMPL(__imp__sub_82FFC8D8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x82ffc928
	if (cr0.eq) goto loc_82FFC928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe13c8
	sub_82FE13C8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-648
	r11.s64 = r11.s64 + -648;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ffc92c
	goto loc_82FFC92C;
loc_82FFC928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFC92C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FFC934"))) PPC_WEAK_FUNC(sub_82FFC934);
PPC_FUNC_IMPL(__imp__sub_82FFC934) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC968"))) PPC_WEAK_FUNC(sub_82FFC968);
PPC_FUNC_IMPL(__imp__sub_82FFC968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27252
	ctx.r3.s64 = r11.s64 + -27252;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFC978"))) PPC_WEAK_FUNC(sub_82FFC978);
PPC_FUNC_IMPL(__imp__sub_82FFC978) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-648
	r11.s64 = r11.s64 + -648;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffc9b4
	if (cr0.eq) goto loc_82FFC9B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FFC9B4:
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

__attribute__((alias("__imp__sub_82FFC9D0"))) PPC_WEAK_FUNC(sub_82FFC9D0);
PPC_FUNC_IMPL(__imp__sub_82FFC9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,-16128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ffc9f8
	if (cr6.eq) goto loc_82FFC9F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82FFC9F8:
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r11,-16124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -16124);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FFCA18"))) PPC_WEAK_FUNC(sub_82FFCA18);
PPC_FUNC_IMPL(__imp__sub_82FFCA18) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x831ba358
	sub_831BA358(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ffca64
	if (!cr6.eq) goto loc_82FFCA64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r4,r11,-520
	ctx.r4.s64 = r11.s64 + -520;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,115
	ctx.r5.s64 = 115;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffc810
	sub_82FFC810(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7816
	ctx.r4.s64 = r11.s64 + -7816;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFCA64:
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

__attribute__((alias("__imp__sub_82FFCA78"))) PPC_WEAK_FUNC(sub_82FFCA78);
PPC_FUNC_IMPL(__imp__sub_82FFCA78) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x831b8170
	sub_831B8170(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ffcac4
	if (!cr6.eq) goto loc_82FFCAC4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r4,r11,-520
	ctx.r4.s64 = r11.s64 + -520;
	// li r6,33
	ctx.r6.s64 = 33;
	// li r5,123
	ctx.r5.s64 = 123;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffc810
	sub_82FFC810(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7816
	ctx.r4.s64 = r11.s64 + -7816;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFCAC4:
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

__attribute__((alias("__imp__sub_82FFCAD8"))) PPC_WEAK_FUNC(sub_82FFCAD8);
PPC_FUNC_IMPL(__imp__sub_82FFCAD8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ffcc58
	if (cr6.eq) goto loc_82FFCC58;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x82ffcb7c
	if (!cr6.eq) goto loc_82FFCB7C;
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82ffcb0c
	goto loc_82FFCB0C;
loc_82FFCB08:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFCB0C:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82ffcb08
	if (!cr0.eq) goto loc_82FFCB08;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// ble cr6,0x82ffcb7c
	if (!cr6.gt) goto loc_82FFCB7C;
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,58
	cr6.compare<uint32_t>(ctx.r9.u32, 58, xer);
	// bne cr6,0x82ffcb5c
	if (!cr6.eq) goto loc_82FFCB5C;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x82ffcb48
	if (cr6.lt) goto loc_82FFCB48;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(r11.u32, 90, xer);
	// ble cr6,0x82ffcb58
	if (!cr6.gt) goto loc_82FFCB58;
loc_82FFCB48:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x82ffcb5c
	if (cr6.lt) goto loc_82FFCB5C;
	// cmplwi cr6,r11,122
	cr6.compare<uint32_t>(r11.u32, 122, xer);
	// bgt cr6,0x82ffcb5c
	if (cr6.gt) goto loc_82FFCB5C;
loc_82FFCB58:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82FFCB5C:
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ffcb7c
	if (!cr6.eq) goto loc_82FFCB7C;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82ffcb78
	if (cr6.eq) goto loc_82FFCB78;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// bne cr6,0x82ffcb7c
	if (!cr6.eq) goto loc_82FFCB7C;
loc_82FFCB78:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82FFCB7C:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82ffcba4
	goto loc_82FFCBA4;
loc_82FFCB8C:
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(r11.u32, 165, xer);
	// beq cr6,0x82ffcbac
	if (cr6.eq) goto loc_82FFCBAC;
	// cmplwi cr6,r11,8361
	cr6.compare<uint32_t>(r11.u32, 8361, xer);
	// beq cr6,0x82ffcbac
	if (cr6.eq) goto loc_82FFCBAC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
loc_82FFCBA4:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffcb8c
	if (!cr0.eq) goto loc_82FFCB8C;
loc_82FFCBAC:
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffcc00
	if (cr0.eq) goto loc_82FFCC00;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// b 0x82ffcbf4
	goto loc_82FFCBF4;
loc_82FFCBD0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,165
	cr6.compare<uint32_t>(ctx.r10.u32, 165, xer);
	// beq cr6,0x82ffcbe4
	if (cr6.eq) goto loc_82FFCBE4;
	// cmplwi cr6,r10,8361
	cr6.compare<uint32_t>(ctx.r10.u32, 8361, xer);
	// bne cr6,0x82ffcbec
	if (!cr6.eq) goto loc_82FFCBEC;
loc_82FFCBE4:
	// li r10,47
	ctx.r10.s64 = 47;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_82FFCBEC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_82FFCBF4:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffcbd0
	if (!cr0.eq) goto loc_82FFCBD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82FFCC00:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fd9710
	sub_82FD9710(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,6820
	ctx.r4.s64 = r11.s64 + 6820;
	// bl 0x831ba078
	sub_831BA078(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ffcc54
	if (cr6.eq) goto loc_82FFCC54;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FFCC54:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82FFCC58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFCC60"))) PPC_WEAK_FUNC(sub_82FFCC60);
PPC_FUNC_IMPL(__imp__sub_82FFCC60) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ffcd54
	if (cr6.eq) goto loc_82FFCD54;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82ffcca0
	goto loc_82FFCCA0;
loc_82FFCC88:
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(r11.u32, 165, xer);
	// beq cr6,0x82ffcca8
	if (cr6.eq) goto loc_82FFCCA8;
	// cmplwi cr6,r11,8361
	cr6.compare<uint32_t>(r11.u32, 8361, xer);
	// beq cr6,0x82ffcca8
	if (cr6.eq) goto loc_82FFCCA8;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
loc_82FFCCA0:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffcc88
	if (!cr0.eq) goto loc_82FFCC88;
loc_82FFCCA8:
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffccfc
	if (cr0.eq) goto loc_82FFCCFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// b 0x82ffccf0
	goto loc_82FFCCF0;
loc_82FFCCCC:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,165
	cr6.compare<uint32_t>(ctx.r10.u32, 165, xer);
	// beq cr6,0x82ffcce0
	if (cr6.eq) goto loc_82FFCCE0;
	// cmplwi cr6,r10,8361
	cr6.compare<uint32_t>(ctx.r10.u32, 8361, xer);
	// bne cr6,0x82ffcce8
	if (!cr6.eq) goto loc_82FFCCE8;
loc_82FFCCE0:
	// li r10,47
	ctx.r10.s64 = 47;
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
loc_82FFCCE8:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_82FFCCF0:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffcccc
	if (!cr0.eq) goto loc_82FFCCCC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82FFCCFC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fd9710
	sub_82FD9710(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,6960
	ctx.r4.s64 = r11.s64 + 6960;
	// bl 0x831ba078
	sub_831BA078(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ffcd50
	if (cr6.eq) goto loc_82FFCD50;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FFCD50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FFCD54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFCD60"))) PPC_WEAK_FUNC(sub_82FFCD60);
PPC_FUNC_IMPL(__imp__sub_82FFCD60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831b7b48
	sub_831B7B48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// bge cr6,0x82ffcdd4
	if (!cr6.lt) goto loc_82FFCDD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b9e88
	sub_831B9E88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ffcdd4
	if (cr0.eq) goto loc_82FFCDD4;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r4,r11,-520
	ctx.r4.s64 = r11.s64 + -520;
	// li r6,37
	ctx.r6.s64 = 37;
	// li r5,349
	ctx.r5.s64 = 349;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffc810
	sub_82FFC810(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7816
	ctx.r4.s64 = r11.s64 + -7816;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFCDD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFCDE0"))) PPC_WEAK_FUNC(sub_82FFCDE0);
PPC_FUNC_IMPL(__imp__sub_82FFCDE0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ffce5c
	if (cr6.eq) goto loc_82FFCE5C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82ffce5c
	if (!cr6.gt) goto loc_82FFCE5C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ffce5c
	if (cr6.eq) goto loc_82FFCE5C;
loc_82FFCE14:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b7fb0
	sub_831B7FB0(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bge cr6,0x82ffce14
	if (!cr6.lt) goto loc_82FFCE14;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r4,r11,-520
	ctx.r4.s64 = r11.s64 + -520;
	// li r6,38
	ctx.r6.s64 = 38;
	// li r5,372
	ctx.r5.s64 = 372;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ffc810
	sub_82FFC810(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-7816
	ctx.r4.s64 = r11.s64 + -7816;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FFCE5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFCE68"))) PPC_WEAK_FUNC(sub_82FFCE68);
PPC_FUNC_IMPL(__imp__sub_82FFCE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-23007
	ctx.r3.s64 = r11.s64 + -23007;
	// b 0x82fd9758
	sub_82FD9758(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFCE78"))) PPC_WEAK_FUNC(sub_82FFCE78);
PPC_FUNC_IMPL(__imp__sub_82FFCE78) {
	PPC_FUNC_PROLOGUE();
	// b 0x822c0270
	sub_822C0270(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFCE80"))) PPC_WEAK_FUNC(sub_82FFCE80);
PPC_FUNC_IMPL(__imp__sub_82FFCE80) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFCE88"))) PPC_WEAK_FUNC(sub_82FFCE88);
PPC_FUNC_IMPL(__imp__sub_82FFCE88) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822c0988
	sub_822C0988(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82FFCEC0"))) PPC_WEAK_FUNC(sub_82FFCEC0);
PPC_FUNC_IMPL(__imp__sub_82FFCEC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFCEC8"))) PPC_WEAK_FUNC(sub_82FFCEC8);
PPC_FUNC_IMPL(__imp__sub_82FFCEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_82FFCEC8:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r3
	reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bne cr6,0x82ffceec
	if (!cr6.eq) goto loc_82FFCEEC;
	// stwcx. r4,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(ctx.r4.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x82ffcec8
	if (!cr0.eq) goto loc_82FFCEC8;
	// b 0x82ffcef4
	goto loc_82FFCEF4;
loc_82FFCEEC:
	// stwcx. r11,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
loc_82FFCEF4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFCF08"))) PPC_WEAK_FUNC(sub_82FFCF08);
PPC_FUNC_IMPL(__imp__sub_82FFCF08) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffcf44
	if (cr0.eq) goto loc_82FFCF44;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8303e460
	sub_8303E460(ctx, base);
	// b 0x82ffcf48
	goto loc_82FFCF48;
loc_82FFCF44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFCF48:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFCF60"))) PPC_WEAK_FUNC(sub_82FFCF60);
PPC_FUNC_IMPL(__imp__sub_82FFCF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFCF90"))) PPC_WEAK_FUNC(sub_82FFCF90);
PPC_FUNC_IMPL(__imp__sub_82FFCF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffcfc0
	if (cr0.eq) goto loc_82FFCFC0;
	// bl 0x8303ef78
	sub_8303EF78(ctx, base);
	// b 0x82ffcfc4
	goto loc_82FFCFC4;
loc_82FFCFC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFCFC4:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFCFD8"))) PPC_WEAK_FUNC(sub_82FFCFD8);
PPC_FUNC_IMPL(__imp__sub_82FFCFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD000"))) PPC_WEAK_FUNC(sub_82FFD000);
PPC_FUNC_IMPL(__imp__sub_82FFD000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ffd0ec
	if (cr6.eq) goto loc_82FFD0EC;
	// lhz r11,0(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd0ec
	if (cr0.eq) goto loc_82FFD0EC;
	// addi r11,r9,2
	r11.s64 = ctx.r9.s64 + 2;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82ffd028
	goto loc_82FFD028;
loc_82FFD024:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFD028:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x82ffd024
	if (!cr0.eq) goto loc_82FFD024;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
loc_82FFD040:
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82ffd070
	if (cr6.eq) goto loc_82FFD070;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82ffd070
	if (cr6.eq) goto loc_82FFD070;
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(r11.u32, 165, xer);
	// beq cr6,0x82ffd070
	if (cr6.eq) goto loc_82FFD070;
	// cmplwi cr6,r11,8361
	cr6.compare<uint32_t>(r11.u32, 8361, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82ffd074
	if (!cr6.eq) goto loc_82FFD074;
loc_82FFD070:
	// li r11,1
	r11.s64 = 1;
loc_82FFD074:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffd0c8
	if (cr0.eq) goto loc_82FFD0C8;
	// lhz r11,2(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// bne cr6,0x82ffd0c8
	if (!cr6.eq) goto loc_82FFD0C8;
	// lhz r11,4(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// bne cr6,0x82ffd0c8
	if (!cr6.eq) goto loc_82FFD0C8;
	// lhz r11,6(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82ffd0bc
	if (cr6.eq) goto loc_82FFD0BC;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82ffd0bc
	if (cr6.eq) goto loc_82FFD0BC;
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(r11.u32, 165, xer);
	// beq cr6,0x82ffd0bc
	if (cr6.eq) goto loc_82FFD0BC;
	// cmplwi cr6,r11,8361
	cr6.compare<uint32_t>(r11.u32, 8361, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82ffd0c0
	if (!cr6.eq) goto loc_82FFD0C0;
loc_82FFD0BC:
	// li r11,1
	r11.s64 = 1;
loc_82FFD0C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffd0e0
	if (!cr0.eq) goto loc_82FFD0E0;
loc_82FFD0C8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ffd040
	if (!cr0.eq) goto loc_82FFD040;
	// blr 
	return;
loc_82FFD0E0:
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r3,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r3.s64 = r11.s32 >> 1;
	// blr 
	return;
loc_82FFD0EC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD0F8"))) PPC_WEAK_FUNC(sub_82FFD0F8);
PPC_FUNC_IMPL(__imp__sub_82FFD0F8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ffd268
	if (cr6.eq) goto loc_82FFD268;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd268
	if (cr0.eq) goto loc_82FFD268;
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffd164
	if (cr0.eq) goto loc_82FFD164;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd164
	if (cr0.eq) goto loc_82FFD164;
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// b 0x82ffd14c
	goto loc_82FFD14C;
loc_82FFD148:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFD14C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffd148
	if (!cr0.eq) goto loc_82FFD148;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x82ffd168
	goto loc_82FFD168;
loc_82FFD164:
	// li r11,0
	r11.s64 = 0;
loc_82FFD168:
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82ffd248
	goto loc_82FFD248;
loc_82FFD17C:
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// blt cr6,0x82ffd214
	if (cr6.lt) goto loc_82FFD214;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82ffd1ac
	if (cr6.eq) goto loc_82FFD1AC;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82ffd1ac
	if (cr6.eq) goto loc_82FFD1AC;
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(r11.u32, 165, xer);
	// beq cr6,0x82ffd1ac
	if (cr6.eq) goto loc_82FFD1AC;
	// cmplwi cr6,r11,8361
	cr6.compare<uint32_t>(r11.u32, 8361, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82ffd1b0
	if (!cr6.eq) goto loc_82FFD1B0;
loc_82FFD1AC:
	// li r11,1
	r11.s64 = 1;
loc_82FFD1B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffd208
	if (cr0.eq) goto loc_82FFD208;
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// bne cr6,0x82ffd208
	if (!cr6.eq) goto loc_82FFD208;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82ffd1f0
	if (cr6.eq) goto loc_82FFD1F0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82ffd1f0
	if (cr6.eq) goto loc_82FFD1F0;
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(r11.u32, 165, xer);
	// beq cr6,0x82ffd1f0
	if (cr6.eq) goto loc_82FFD1F0;
	// cmplwi cr6,r11,8361
	cr6.compare<uint32_t>(r11.u32, 8361, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82ffd1f4
	if (!cr6.eq) goto loc_82FFD1F4;
loc_82FFD1F0:
	// li r11,1
	r11.s64 = 1;
loc_82FFD1F4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffd208
	if (cr0.eq) goto loc_82FFD208;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// b 0x82ffd248
	goto loc_82FFD248;
loc_82FFD208:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x82ffd240
	goto loc_82FFD240;
loc_82FFD214:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x82ffd224
	if (!cr6.eq) goto loc_82FFD224;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// b 0x82ffd240
	goto loc_82FFD240;
loc_82FFD224:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82ffd248
	if (!cr6.eq) goto loc_82FFD248;
	// addi r11,r3,2
	r11.s64 = ctx.r3.s64 + 2;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r3,r11,2
	ctx.r3.s64 = r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
loc_82FFD240:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82FFD248:
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82ffd17c
	if (!cr0.eq) goto loc_82FFD17C;
	// li r11,0
	r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
loc_82FFD268:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD288"))) PPC_WEAK_FUNC(sub_82FFD288);
PPC_FUNC_IMPL(__imp__sub_82FFD288) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ffd2d8
	if (cr6.eq) goto loc_82FFD2D8;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd2d8
	if (cr0.eq) goto loc_82FFD2D8;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// b 0x82ffd2c0
	goto loc_82FFD2C0;
loc_82FFD2BC:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFD2C0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffd2bc
	if (!cr0.eq) goto loc_82FFD2BC;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x82ffd2dc
	goto loc_82FFD2DC;
loc_82FFD2D8:
	// li r11,0
	r11.s64 = 0;
loc_82FFD2DC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// addi r23,r30,2
	r23.s64 = r30.s64 + 2;
	// li r26,1
	r26.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82ffd000
	sub_82FFD000(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ffd4a8
	if (cr6.eq) goto loc_82FFD4A8;
loc_82FFD344:
	// add r25,r26,r3
	r25.u64 = r26.u64 + ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r28,r25,-1
	r28.s64 = r25.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82fda3d0
	sub_82FDA3D0(ctx, base);
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82ffd490
	if (cr0.lt) goto loc_82FFD490;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
loc_82FFD374:
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82ffd39c
	if (cr6.eq) goto loc_82FFD39C;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x82ffd39c
	if (cr6.eq) goto loc_82FFD39C;
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(r11.u32, 165, xer);
	// beq cr6,0x82ffd39c
	if (cr6.eq) goto loc_82FFD39C;
	// cmplwi cr6,r11,8361
	cr6.compare<uint32_t>(r11.u32, 8361, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82ffd3a0
	if (!cr6.eq) goto loc_82FFD3A0;
loc_82FFD39C:
	// li r11,1
	r11.s64 = 1;
loc_82FFD3A0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ffd3b4
	if (!cr0.eq) goto loc_82FFD3B4;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bge 0x82ffd374
	if (!cr0.lt) goto loc_82FFD374;
loc_82FFD3B4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x82ffd490
	if (cr6.lt) goto loc_82FFD490;
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	r11.u64 = PPC_LOAD_U16(r11.u32 + r30.u32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// bne cr6,0x82ffd3f0
	if (!cr6.eq) goto loc_82FFD3F0;
	// addi r11,r28,2
	r11.s64 = r28.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	r11.u64 = PPC_LOAD_U16(r11.u32 + r30.u32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// bne cr6,0x82ffd3f0
	if (!cr6.eq) goto loc_82FFD3F0;
	// addi r11,r28,3
	r11.s64 = r28.s64 + 3;
	// cmpw cr6,r11,r25
	cr6.compare<int32_t>(r11.s32, r25.s32, xer);
	// beq cr6,0x82ffd490
	if (cr6.eq) goto loc_82FFD490;
loc_82FFD3F0:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fda3d0
	sub_82FDA3D0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ffd440
	if (cr6.eq) goto loc_82FFD440;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd440
	if (cr0.eq) goto loc_82FFD440;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x82ffd428
	goto loc_82FFD428;
loc_82FFD424:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFD428:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffd424
	if (!cr0.eq) goto loc_82FFD424;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r6,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r6.s64 = r11.s32 >> 1;
	// b 0x82ffd444
	goto loc_82FFD444;
loc_82FFD440:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82FFD444:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r25,3
	ctx.r5.s64 = r25.s64 + 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fda3d0
	sub_82FDA3D0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// bl 0x82fd9be0
	sub_82FD9BE0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd9be0
	sub_82FD9BE0(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82ffd488
	if (!cr6.eq) goto loc_82FFD488;
	// li r26,1
	r26.s64 = 1;
	// b 0x82ffd494
	goto loc_82FFD494;
loc_82FFD488:
	// mr r26,r28
	r26.u64 = r28.u64;
	// b 0x82ffd494
	goto loc_82FFD494;
loc_82FFD490:
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
loc_82FFD494:
	// rlwinm r11,r26,1,0,30
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82ffd000
	sub_82FFD000(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ffd344
	if (!cr6.eq) goto loc_82FFD344;
loc_82FFD4A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82FFD4C8"))) PPC_WEAK_FUNC(sub_82FFD4C8);
PPC_FUNC_IMPL(__imp__sub_82FFD4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD4F0"))) PPC_WEAK_FUNC(sub_82FFD4F0);
PPC_FUNC_IMPL(__imp__sub_82FFD4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdb1a0
	sub_82FDB1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD518"))) PPC_WEAK_FUNC(sub_82FFD518);
PPC_FUNC_IMPL(__imp__sub_82FFD518) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ffd56c
	if (cr6.eq) goto loc_82FFD56C;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd56c
	if (cr0.eq) goto loc_82FFD56C;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// b 0x82ffd554
	goto loc_82FFD554;
loc_82FFD550:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFD554:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffd550
	if (!cr0.eq) goto loc_82FFD550;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// b 0x82ffd570
	goto loc_82FFD570;
loc_82FFD56C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82FFD570:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82ffd5a8
	if (cr6.eq) goto loc_82FFD5A8;
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd5a8
	if (cr0.eq) goto loc_82FFD5A8;
	// addi r11,r27,2
	r11.s64 = r27.s64 + 2;
	// b 0x82ffd590
	goto loc_82FFD590;
loc_82FFD58C:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFD590:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82ffd58c
	if (!cr0.eq) goto loc_82FFD58C;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// b 0x82ffd5ac
	goto loc_82FFD5AC;
loc_82FFD5A8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82FFD5AC:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// sth r26,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r26.u16);
	// beq cr6,0x82ffd6b8
	if (cr6.eq) goto loc_82FFD6B8;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ffd6b8
	if (cr0.eq) goto loc_82FFD6B8;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// b 0x82ffd5f4
	goto loc_82FFD5F4;
loc_82FFD5F0:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_82FFD5F4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82ffd5f0
	if (!cr0.eq) goto loc_82FFD5F0;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x82ffd6b8
	if (cr6.lt) goto loc_82FFD6B8;
loc_82FFD61C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// beq cr6,0x82ffd644
	if (cr6.eq) goto loc_82FFD644;
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// beq cr6,0x82ffd644
	if (cr6.eq) goto loc_82FFD644;
	// cmplwi cr6,r10,165
	cr6.compare<uint32_t>(ctx.r10.u32, 165, xer);
	// beq cr6,0x82ffd644
	if (cr6.eq) goto loc_82FFD644;
	// cmplwi cr6,r10,8361
	cr6.compare<uint32_t>(ctx.r10.u32, 8361, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// bne cr6,0x82ffd648
	if (!cr6.eq) goto loc_82FFD648;
loc_82FFD644:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82FFD648:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ffd65c
	if (!cr0.eq) goto loc_82FFD65C;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82ffd61c
	if (!cr6.lt) goto loc_82FFD61C;
loc_82FFD65C:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x82ffd6b8
	if (cr6.lt) goto loc_82FFD6B8;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// srawi r29,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r29.s64 = r11.s32 >> 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r29,1
	ctx.r6.s64 = r29.s64 + 1;
	// bl 0x82fda3d0
	sub_82FDA3D0(ctx, base);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sthx r26,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, r26.u16);
	// bl 0x82fd9be0
	sub_82FD9BE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffd0f8
	sub_82FFD0F8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ffd288
	sub_82FFD288(ctx, base);
	// b 0x82ffd6c4
	goto loc_82FFD6C4;
loc_82FFD6B8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fd9eb0
	sub_82FD9EB0(ctx, base);
loc_82FFD6C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FFD6D0"))) PPC_WEAK_FUNC(sub_82FFD6D0);
PPC_FUNC_IMPL(__imp__sub_82FFD6D0) {
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
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ffce88
	sub_82FFCE88(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82FFD710"))) PPC_WEAK_FUNC(sub_82FFD710);
PPC_FUNC_IMPL(__imp__sub_82FFD710) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffd73c
	if (cr0.eq) goto loc_82FFD73C;
	// bl 0x82ffce78
	sub_82FFCE78(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FFD73C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD750"))) PPC_WEAK_FUNC(sub_82FFD750);
PPC_FUNC_IMPL(__imp__sub_82FFD750) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ffce80
	sub_82FFCE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFD758"))) PPC_WEAK_FUNC(sub_82FFD758);
PPC_FUNC_IMPL(__imp__sub_82FFD758) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ffcec0
	sub_82FFCEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFD760"))) PPC_WEAK_FUNC(sub_82FFD760);
PPC_FUNC_IMPL(__imp__sub_82FFD760) {
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
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82ffce80
	sub_82FFCE80(ctx, base);
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

__attribute__((alias("__imp__sub_82FFD798"))) PPC_WEAK_FUNC(sub_82FFD798);
PPC_FUNC_IMPL(__imp__sub_82FFD798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82ffcec0
	sub_82FFCEC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FFD7A8"))) PPC_WEAK_FUNC(sub_82FFD7A8);
PPC_FUNC_IMPL(__imp__sub_82FFD7A8) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-208
	r11.s64 = r11.s64 + -208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-31942
	r11.s64 = -2093350912;
	// lwz r4,-16120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -16120);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82FFD7F8"))) PPC_WEAK_FUNC(sub_82FFD7F8);
PPC_FUNC_IMPL(__imp__sub_82FFD7F8) {
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
	// lis r31,-31942
	r31.s64 = -2093350912;
	// lwz r3,-15844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -15844);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ffd82c
	if (cr6.eq) goto loc_82FFD82C;
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
loc_82FFD82C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15844(r31)
	PPC_STORE_U32(r31.u32 + -15844, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD848"))) PPC_WEAK_FUNC(sub_82FFD848);
PPC_FUNC_IMPL(__imp__sub_82FFD848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-200
	r11.s64 = r11.s64 + -200;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD858"))) PPC_WEAK_FUNC(sub_82FFD858);
PPC_FUNC_IMPL(__imp__sub_82FFD858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r10,r10,-156
	ctx.r10.s64 = ctx.r10.s64 + -156;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82FFD880"))) PPC_WEAK_FUNC(sub_82FFD880);
PPC_FUNC_IMPL(__imp__sub_82FFD880) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-156
	r11.s64 = r11.s64 + -156;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ffd8d0
	if (cr0.eq) goto loc_82FFD8D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FFD8D0:
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

__attribute__((alias("__imp__sub_82FFD8F0"))) PPC_WEAK_FUNC(sub_82FFD8F0);
PPC_FUNC_IMPL(__imp__sub_82FFD8F0) {
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-156
	r11.s64 = r11.s64 + -156;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r5.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x82fd8ec8
	sub_82FD8EC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82FFD950"))) PPC_WEAK_FUNC(sub_82FFD950);
PPC_FUNC_IMPL(__imp__sub_82FFD950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-140
	r11.s64 = r11.s64 + -140;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD968"))) PPC_WEAK_FUNC(sub_82FFD968);
PPC_FUNC_IMPL(__imp__sub_82FFD968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffd9b4
	if (cr0.eq) goto loc_82FFD9B4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8303f180
	sub_8303F180(ctx, base);
	// b 0x82ffd9b8
	goto loc_82FFD9B8;
loc_82FFD9B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFD9B8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFD9C0"))) PPC_WEAK_FUNC(sub_82FFD9C0);
PPC_FUNC_IMPL(__imp__sub_82FFD9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFD9F8"))) PPC_WEAK_FUNC(sub_82FFD9F8);
PPC_FUNC_IMPL(__imp__sub_82FFD9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffda44
	if (cr0.eq) goto loc_82FFDA44;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8303f2b0
	sub_8303F2B0(ctx, base);
	// b 0x82ffda48
	goto loc_82FFDA48;
loc_82FFDA44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFDA48:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFDA50"))) PPC_WEAK_FUNC(sub_82FFDA50);
PPC_FUNC_IMPL(__imp__sub_82FFDA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFDA88"))) PPC_WEAK_FUNC(sub_82FFDA88);
PPC_FUNC_IMPL(__imp__sub_82FFDA88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffdad4
	if (cr0.eq) goto loc_82FFDAD4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8303f7b0
	sub_8303F7B0(ctx, base);
	// b 0x82ffdad8
	goto loc_82FFDAD8;
loc_82FFDAD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFDAD8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFDAE0"))) PPC_WEAK_FUNC(sub_82FFDAE0);
PPC_FUNC_IMPL(__imp__sub_82FFDAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFDB18"))) PPC_WEAK_FUNC(sub_82FFDB18);
PPC_FUNC_IMPL(__imp__sub_82FFDB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffdb64
	if (cr0.eq) goto loc_82FFDB64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8303ff58
	sub_8303FF58(ctx, base);
	// b 0x82ffdb68
	goto loc_82FFDB68;
loc_82FFDB64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFDB68:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFDB70"))) PPC_WEAK_FUNC(sub_82FFDB70);
PPC_FUNC_IMPL(__imp__sub_82FFDB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFDBA0"))) PPC_WEAK_FUNC(sub_82FFDBA0);
PPC_FUNC_IMPL(__imp__sub_82FFDBA0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82ffd7a8
	sub_82FFD7A8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,152
	r11.s64 = r11.s64 + 152;
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

__attribute__((alias("__imp__sub_82FFDBF8"))) PPC_WEAK_FUNC(sub_82FFDBF8);
PPC_FUNC_IMPL(__imp__sub_82FFDBF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffdc48
	if (cr0.eq) goto loc_82FFDC48;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// bl 0x83040160
	sub_83040160(ctx, base);
	// b 0x82ffdc4c
	goto loc_82FFDC4C;
loc_82FFDC48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFDC4C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFDC54"))) PPC_WEAK_FUNC(sub_82FFDC54);
PPC_FUNC_IMPL(__imp__sub_82FFDC54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFDC80"))) PPC_WEAK_FUNC(sub_82FFDC80);
PPC_FUNC_IMPL(__imp__sub_82FFDC80) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82ffd7a8
	sub_82FFD7A8(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stb r30,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,216
	r11.s64 = r11.s64 + 216;
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

__attribute__((alias("__imp__sub_82FFDCD8"))) PPC_WEAK_FUNC(sub_82FFDCD8);
PPC_FUNC_IMPL(__imp__sub_82FFDCD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
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
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffdd28
	if (cr0.eq) goto loc_82FFDD28;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// bl 0x83040348
	sub_83040348(ctx, base);
	// b 0x82ffdd2c
	goto loc_82FFDD2C;
loc_82FFDD28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFDD2C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFDD34"))) PPC_WEAK_FUNC(sub_82FFDD34);
PPC_FUNC_IMPL(__imp__sub_82FFDD34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FFDD68"))) PPC_WEAK_FUNC(sub_82FFDD68);
PPC_FUNC_IMPL(__imp__sub_82FFDD68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ffddb4
	if (cr0.eq) goto loc_82FFDDB4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x8303e318
	sub_8303E318(ctx, base);
	// b 0x82ffddb8
	goto loc_82FFDDB8;
loc_82FFDDB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FFDDB8:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FFDDC0"))) PPC_WEAK_FUNC(sub_82FFDDC0);
PPC_FUNC_IMPL(__imp__sub_82FFDDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

