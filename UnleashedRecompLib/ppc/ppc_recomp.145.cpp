#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BD41F0"))) PPC_WEAK_FUNC(sub_82BD41F0);
PPC_FUNC_IMPL(__imp__sub_82BD41F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b1cc
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD41F8"))) PPC_WEAK_FUNC(sub_82BD41F8);
PPC_FUNC_IMPL(__imp__sub_82BD41F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r11,r11,4159
	r11.s64 = r11.s64 + 4159;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,1,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFE000;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// li r9,170
	ctx.r9.s64 = 170;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFFFF;
	// addi r11,r8,169
	r11.s64 = ctx.r8.s64 + 169;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82bd4238
	if (!cr6.gt) goto loc_82BD4238;
	// addi r10,r11,169
	ctx.r10.s64 = r11.s64 + 169;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// b 0x82bd423c
	goto loc_82BD423C;
loc_82BD4238:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BD423C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x82bd4250
	if (!cr6.gt) goto loc_82BD4250;
	// addi r7,r10,169
	ctx.r7.s64 = ctx.r10.s64 + 169;
	// divwu r9,r7,r9
	ctx.r9.u32 = ctx.r7.u32 / ctx.r9.u32;
	// b 0x82bd4254
	goto loc_82BD4254;
loc_82BD4250:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82BD4254:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r11,r11,26
	r11.s64 = r11.s64 + 26;
	// rldicr r3,r11,12,51
	ctx.r3.u64 = __builtin_rotateleft64(r11.u64, 12) & 0xFFFFFFFFFFFFF000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4278"))) PPC_WEAK_FUNC(sub_82BD4278);
PPC_FUNC_IMPL(__imp__sub_82BD4278) {
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
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82bd4140
	sub_82BD4140(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD42B8"))) PPC_WEAK_FUNC(sub_82BD42B8);
PPC_FUNC_IMPL(__imp__sub_82BD42B8) {
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
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x82bd54b0
	sub_82BD54B0(ctx, base);
	// cmpwi cr6,r3,192
	cr6.compare<int32_t>(ctx.r3.s32, 192, xer);
	// li r3,192
	ctx.r3.s64 = 192;
	// beq cr6,0x82bd42dc
	if (cr6.eq) goto loc_82BD42DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD42DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD42F0"))) PPC_WEAK_FUNC(sub_82BD42F0);
PPC_FUNC_IMPL(__imp__sub_82BD42F0) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bd54b0
	sub_82BD54B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD42F8"))) PPC_WEAK_FUNC(sub_82BD42F8);
PPC_FUNC_IMPL(__imp__sub_82BD42F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8324b2dc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r30,-3
	r30.s64 = -3;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// li r8,16416
	ctx.r8.s64 = 16416;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,17
	ctx.r4.s64 = 1114112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b2cc
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd43a8
	if (cr0.lt) goto loc_82BD43A8;
	// li r11,0
	r11.s64 = 0;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8324b2dc
	__imp__RtlInitAnsiString(ctx, base);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8324b30c
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8324b2fc
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82bd43a4
	if (cr6.lt) goto loc_82BD43A4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd43b0
	goto loc_82BD43B0;
loc_82BD43A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BD43A8:
	// bl 0x82bd5540
	sub_82BD5540(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD43B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD43C8"))) PPC_WEAK_FUNC(sub_82BD43C8);
PPC_FUNC_IMPL(__imp__sub_82BD43C8) {
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
	// clrlwi. r11,r3,20
	r11.u64 = ctx.r3.u32 & 0xFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r4,r3,20,12,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0xFFFFF;
	// beq 0x82bd43e4
	if (cr0.eq) goto loc_82BD43E4;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82BD43E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8324b31c
	__imp__FscSetCacheElementCount(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd43fc
	if (cr0.lt) goto loc_82BD43FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd4404
	goto loc_82BD4404;
loc_82BD43FC:
	// bl 0x82bd5540
	sub_82BD5540(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD4404:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4418"))) PPC_WEAK_FUNC(sub_82BD4418);
PPC_FUNC_IMPL(__imp__sub_82BD4418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,-4396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4396);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd4448
	if (cr0.lt) goto loc_82BD4448;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd4450
	goto loc_82BD4450;
loc_82BD4448:
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD4450:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4460"))) PPC_WEAK_FUNC(sub_82BD4460);
PPC_FUNC_IMPL(__imp__sub_82BD4460) {
	PPC_FUNC_PROLOGUE();
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
	// b 0x8324b1dc
	__imp__XamEnumerate(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD4478"))) PPC_WEAK_FUNC(sub_82BD4478);
PPC_FUNC_IMPL(__imp__sub_82BD4478) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bd44a8
	if (cr6.eq) goto loc_82BD44A8;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82BD44A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bd454c
	if (cr6.eq) goto loc_82BD454C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,259
	r11.s64 = 259;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// clrlwi. r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bne 0x82bd44dc
	if (!cr0.eq) goto loc_82BD44DC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82BD44DC:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-4396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4396);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd4528
	if (cr0.lt) goto loc_82BD4528;
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// beq cr6,0x82bd4528
	if (cr6.eq) goto loc_82BD4528;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bd4520
	if (cr6.eq) goto loc_82BD4520;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82BD4520:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd45f4
	goto loc_82BD45F4;
loc_82BD4528:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,17
	r11.u64 = r11.u64 | 17;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82bd45ec
	if (!cr6.eq) goto loc_82BD45EC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bd4544
	if (cr6.eq) goto loc_82BD4544;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82BD4544:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82bd45ec
	goto loc_82BD45EC;
loc_82BD454C:
	// lis r11,-31951
	r11.s64 = -2093940736;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-4396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4396);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// bne cr6,0x82bd45a0
	if (!cr6.eq) goto loc_82BD45A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b32c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd45b8
	if (cr0.lt) goto loc_82BD45B8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD45A0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bd45b8
	if (cr6.lt) goto loc_82BD45B8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82bd45f4
	goto loc_82BD45F4;
loc_82BD45B8:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,17
	r11.u64 = r11.u64 | 17;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82bd45d4
	if (!cr6.eq) goto loc_82BD45D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82bd45f4
	goto loc_82BD45F4;
loc_82BD45D4:
	// rlwinm r11,r3,0,0,1
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd45ec
	if (!cr6.eq) goto loc_82BD45EC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82BD45EC:
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD45F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BD4600"))) PPC_WEAK_FUNC(sub_82BD4600);
PPC_FUNC_IMPL(__imp__sub_82BD4600) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd5608
	sub_82BD5608(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bd4650
	if (cr0.eq) goto loc_82BD4650;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bd4634
	if (cr6.eq) goto loc_82BD4634;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82BD4634:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82bd4654
	if (!cr6.eq) goto loc_82BD4654;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bd5600
	sub_82BD5600(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82bd4654
	goto loc_82BD4654;
loc_82BD4650:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BD4654:
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

__attribute__((alias("__imp__sub_82BD4668"))) PPC_WEAK_FUNC(sub_82BD4668);
PPC_FUNC_IMPL(__imp__sub_82BD4668) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// beq cr6,0x82bd46e8
	if (cr6.eq) goto loc_82BD46E8;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// beq cr6,0x82bd46e0
	if (cr6.eq) goto loc_82BD46E0;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// beq cr6,0x82bd46d8
	if (cr6.eq) goto loc_82BD46D8;
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// beq cr6,0x82bd46d0
	if (cr6.eq) goto loc_82BD46D0;
	// cmplwi cr6,r27,5
	cr6.compare<uint32_t>(r27.u32, 5, xer);
	// bne cr6,0x82bd46bc
	if (!cr6.eq) goto loc_82BD46BC;
	// rlwinm. r11,r28,0,1,1
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,4
	r30.s64 = 4;
	// bne 0x82bd46ec
	if (!cr0.eq) goto loc_82BD46EC;
loc_82BD46BC:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
loc_82BD46C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bd4854
	goto loc_82BD4854;
loc_82BD46D0:
	// li r30,3
	r30.s64 = 3;
	// b 0x82bd46ec
	goto loc_82BD46EC;
loc_82BD46D8:
	// li r30,1
	r30.s64 = 1;
	// b 0x82bd46ec
	goto loc_82BD46EC;
loc_82BD46E0:
	// li r30,5
	r30.s64 = 5;
	// b 0x82bd46ec
	goto loc_82BD46EC;
loc_82BD46E8:
	// li r30,2
	r30.s64 = 2;
loc_82BD46EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8324b2dc
	__imp__RtlInitAnsiString(ctx, base);
	// lhz r11,104(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82bd4718
	if (!cr6.gt) goto loc_82BD4718;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,-1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82bd471c
	if (cr6.eq) goto loc_82BD471C;
loc_82BD4718:
	// li r29,0
	r29.s64 = 0;
loc_82BD471C:
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwinm r9,r31,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8000000;
	// rlwimi r11,r31,28,4,4
	r11.u64 = (__builtin_rotateleft32(r31.u32, 28) & 0x8000000) | (r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwinm r8,r31,0,3,3
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000000;
	// rlwinm r11,r11,31,3,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1C000000;
	// rlwinm r10,r31,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,0,5,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// li r7,-3
	ctx.r7.s64 = -3;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// not r9,r31
	ctx.r9.u64 = ~r31.u64;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// rlwinm r11,r11,24,8,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,7,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x20;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm. r8,r31,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// rlwinm r11,r11,21,11,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1FFFFF;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// beq 0x82bd4784
	if (cr0.eq) goto loc_82BD4784;
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// oris r28,r28,1
	r28.u64 = r28.u64 | 65536;
loc_82BD4784:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bd4790
	if (!cr6.eq) goto loc_82BD4790;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_82BD4790:
	// lis r6,-31951
	ctx.r6.s64 = -2093940736;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// oris r4,r28,16
	ctx.r4.u64 = r28.u64 | 1048576;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// andi. r8,r31,32679
	ctx.r8.u64 = r31.u64 & 32679;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r11,-4396(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4396);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// ori r4,r4,128
	ctx.r4.u64 = ctx.r4.u64 | 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x82bd481c
	if (!cr0.lt) goto loc_82BD481C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,53
	r11.u64 = r11.u64 | 53;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82bd47f4
	if (!cr6.eq) goto loc_82BD47F4;
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x82bd4814
	goto loc_82BD4814;
loc_82BD47F4:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,186
	r11.u64 = r11.u64 | 186;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bne cr6,0x82bd46c8
	if (!cr6.eq) goto loc_82BD46C8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne cr6,0x82bd4814
	if (!cr6.eq) goto loc_82BD4814;
	// li r3,5
	ctx.r3.s64 = 5;
loc_82BD4814:
	// bl 0x82bd5600
	sub_82BD5600(ctx, base);
	// b 0x82bd46c8
	goto loc_82BD46C8;
loc_82BD481C:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// bne cr6,0x82bd4830
	if (!cr6.eq) goto loc_82BD4830;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82bd4840
	if (cr6.eq) goto loc_82BD4840;
loc_82BD4830:
	// cmplwi cr6,r27,4
	cr6.compare<uint32_t>(r27.u32, 4, xer);
	// bne cr6,0x82bd4848
	if (!cr6.eq) goto loc_82BD4848;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82bd4848
	if (!cr6.eq) goto loc_82BD4848;
loc_82BD4840:
	// li r3,183
	ctx.r3.s64 = 183;
	// b 0x82bd484c
	goto loc_82BD484C;
loc_82BD4848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD484C:
	// bl 0x82bd5600
	sub_82BD5600(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BD4854:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BD4860"))) PPC_WEAK_FUNC(sub_82BD4860);
PPC_FUNC_IMPL(__imp__sub_82BD4860) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bd4890
	if (cr6.eq) goto loc_82BD4890;
	// stw r6,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r6.u32);
loc_82BD4890:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bd4904
	if (cr6.eq) goto loc_82BD4904;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r11,259
	r11.s64 = 259;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// clrlwi. r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bne 0x82bd48c0
	if (!cr0.eq) goto loc_82BD48C0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82BD48C0:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b33c
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd4978
	if (cr6.eq) goto loc_82BD4978;
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// beq cr6,0x82bd4978
	if (cr6.eq) goto loc_82BD4978;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bd48fc
	if (cr6.eq) goto loc_82BD48FC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82BD48FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd4980
	goto loc_82BD4980;
loc_82BD4904:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b33c
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	cr6.compare<int32_t>(ctx.r3.s32, 259, xer);
	// bne cr6,0x82bd4948
	if (!cr6.eq) goto loc_82BD4948;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b32c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd4960
	if (cr0.lt) goto loc_82BD4960;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD4948:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bd4960
	if (cr6.lt) goto loc_82BD4960;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82bd4980
	goto loc_82BD4980;
loc_82BD4960:
	// rlwinm r11,r3,0,0,1
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd4978
	if (!cr6.eq) goto loc_82BD4978;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82BD4978:
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD4980:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BD4988"))) PPC_WEAK_FUNC(sub_82BD4988);
PPC_FUNC_IMPL(__imp__sub_82BD4988) {
	PPC_FUNC_PROLOGUE();
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8324b1ec
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD4990"))) PPC_WEAK_FUNC(sub_82BD4990);
PPC_FUNC_IMPL(__imp__sub_82BD4990) {
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
	// bl 0x8324b1fc
	__imp__XamUserGetSigninInfo(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd49b0
	if (cr0.lt) goto loc_82BD49B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd49c8
	goto loc_82BD49C8;
loc_82BD49B0:
	// rlwinm r11,r3,0,3,15
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82bd49c8
	if (cr6.eq) goto loc_82BD49C8;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82BD49C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD49D8"))) PPC_WEAK_FUNC(sub_82BD49D8);
PPC_FUNC_IMPL(__imp__sub_82BD49D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b20c
	__imp__XamShowSigninUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD49E0"))) PPC_WEAK_FUNC(sub_82BD49E0);
PPC_FUNC_IMPL(__imp__sub_82BD49E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324b21c
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD49E8"))) PPC_WEAK_FUNC(sub_82BD49E8);
PPC_FUNC_IMPL(__imp__sub_82BD49E8) {
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
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8324b22c
	__imp__XamShowMessageBoxUI(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4A10"))) PPC_WEAK_FUNC(sub_82BD4A10);
PPC_FUNC_IMPL(__imp__sub_82BD4A10) {
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
	// bl 0x8324b23c
	__imp__XamShowDirtyDiscErrorUI(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bd5678
	sub_82BD5678(ctx, base);
}

__attribute__((alias("__imp__sub_82BD4A30"))) PPC_WEAK_FUNC(sub_82BD4A30);
PPC_FUNC_IMPL(__imp__sub_82BD4A30) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,997
	cr6.compare<uint32_t>(r11.u32, 997, xer);
	// bne cr6,0x82bd4a9c
	if (!cr6.eq) goto loc_82BD4A9C;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82bd4a78
	if (cr6.eq) goto loc_82BD4A78;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd4a78
	if (cr6.eq) goto loc_82BD4A78;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82bd5710
	sub_82BD5710(ctx, base);
	// b 0x82bd4a7c
	goto loc_82BD4A7C;
loc_82BD4A78:
	// li r3,258
	ctx.r3.s64 = 258;
loc_82BD4A7C:
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// bne cr6,0x82bd4a8c
	if (!cr6.eq) goto loc_82BD4A8C;
	// li r3,996
	ctx.r3.s64 = 996;
	// b 0x82bd4ab0
	goto loc_82BD4AB0;
loc_82BD4A8C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd4a9c
	if (cr6.eq) goto loc_82BD4A9C;
	// bl 0x82bd5708
	sub_82BD5708(ctx, base);
	// b 0x82bd4ab0
	goto loc_82BD4AB0;
loc_82BD4A9C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bd4aac
	if (cr6.eq) goto loc_82BD4AAC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82BD4AAC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82BD4AB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4AC8"))) PPC_WEAK_FUNC(sub_82BD4AC8);
PPC_FUNC_IMPL(__imp__sub_82BD4AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mftb r11
	r11.u64 = __rdtsc();
	// rotlwi. r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd4ad8
	if (!cr0.eq) goto loc_82BD4AD8;
	// mftb r11
	r11.u64 = __rdtsc();
loc_82BD4AD8:
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4AE8"))) PPC_WEAK_FUNC(sub_82BD4AE8);
PPC_FUNC_IMPL(__imp__sub_82BD4AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8324b34c
	__imp__vsprintf(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4B30"))) PPC_WEAK_FUNC(sub_82BD4B30);
PPC_FUNC_IMPL(__imp__sub_82BD4B30) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8324b35c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd4b70
	if (!cr0.lt) goto loc_82BD4B70;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x82bd4b74
	goto loc_82BD4B74;
loc_82BD4B70:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82BD4B74:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd4b84
	if (cr6.eq) goto loc_82BD4B84;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// ble cr6,0x82bd4bb0
	if (!cr6.gt) goto loc_82BD4BB0;
loc_82BD4B84:
	// bl 0x8324b12c
	__imp__XGetGameRegion(ctx, base);
	// rlwinm r11,r3,0,16,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82bd4bac
	if (!cr6.eq) goto loc_82BD4BAC;
	// cmplwi cr6,r3,257
	cr6.compare<uint32_t>(ctx.r3.u32, 257, xer);
	// bne cr6,0x82bd4ba4
	if (!cr6.eq) goto loc_82BD4BA4;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82bd4bb0
	goto loc_82BD4BB0;
loc_82BD4BA4:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82bd4bb0
	goto loc_82BD4BB0;
loc_82BD4BAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BD4BB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4BC0"))) PPC_WEAK_FUNC(sub_82BD4BC0);
PPC_FUNC_IMPL(__imp__sub_82BD4BC0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,104
	r11.s64 = 104;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b37c
	__imp__MmQueryStatistics(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r8,r11
	ctx.r8.s64 = r11.s64 - ctx.r8.s64;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4C40"))) PPC_WEAK_FUNC(sub_82BD4C40);
PPC_FUNC_IMPL(__imp__sub_82BD4C40) {
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
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82bd4c60
	if (!cr6.eq) goto loc_82BD4C60;
	// bl 0x8324b25c
	__imp__XamResetInactivity(ctx, base);
loc_82BD4C60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8324b24c
	__imp__XamEnableInactivityProcessing(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd4c7c
	if (cr0.lt) goto loc_82BD4C7C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd4c94
	goto loc_82BD4C94;
loc_82BD4C7C:
	// rlwinm r11,r3,0,3,15
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82bd4c94
	if (cr6.eq) goto loc_82BD4C94;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_82BD4C94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4CA8"))) PPC_WEAK_FUNC(sub_82BD4CA8);
PPC_FUNC_IMPL(__imp__sub_82BD4CA8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8324b2dc
	__imp__RtlInitAnsiString(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd5718
	sub_82BD5718(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4CE8"))) PPC_WEAK_FUNC(sub_82BD4CE8);
PPC_FUNC_IMPL(__imp__sub_82BD4CE8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// bl 0x8324b38c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd4d98
	if (cr0.lt) goto loc_82BD4D98;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,204
	ctx.r7.s64 = ctx.r1.s64 + 204;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x8324b26c
	__imp__XamShowMessageBoxUIEx(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// bne cr6,0x82bd4d90
	if (!cr6.eq) goto loc_82BD4D90;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82bd4a30
	sub_82BD4A30(ctx, base);
loc_82BD4D90:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8324b2fc
	__imp__NtClose(ctx, base);
loc_82BD4D98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BD4DA0"))) PPC_WEAK_FUNC(sub_82BD4DA0);
PPC_FUNC_IMPL(__imp__sub_82BD4DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-14296
	r11.s64 = r11.s64 + -14296;
loc_82BD4DB0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bd4e08
	if (!cr6.eq) goto loc_82BD4E08;
	// clrlwi. r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82bd4df8
	if (cr0.eq) goto loc_82BD4DF8;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82BD4DD4:
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bd4df8
	if (!cr6.lt) goto loc_82BD4DF8;
	// lhz r31,0(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// sth r31,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r31.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// blt cr6,0x82bd4dd4
	if (cr6.lt) goto loc_82BD4DD4;
loc_82BD4DF8:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r4
	PPC_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u16);
	// b 0x82bd4e10
	goto loc_82BD4E10;
loc_82BD4E08:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82BD4E10:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// ble cr6,0x82bd4db0
	if (!cr6.gt) goto loc_82BD4DB0;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD4E28"))) PPC_WEAK_FUNC(sub_82BD4E28);
PPC_FUNC_IMPL(__imp__sub_82BD4E28) {
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
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x8324b39c
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bd4fec
	if (cr0.eq) goto loc_82BD4FEC;
	// bl 0x8324b28c
	__imp__XGetAVPack(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x82bd4fec
	if (cr6.eq) goto loc_82BD4FEC;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x82bd4fec
	if (cr6.eq) goto loc_82BD4FEC;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82bd4fec
	if (cr6.eq) goto loc_82BD4FEC;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x82bd4fec
	if (cr6.eq) goto loc_82BD4FEC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8324b35c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd4fec
	if (!cr0.eq) goto loc_82BD4FEC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,16,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// bne cr6,0x82bd4fec
	if (!cr6.eq) goto loc_82BD4FEC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,10
	ctx.r4.s64 = 10;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8324b35c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd4fec
	if (!cr0.eq) goto loc_82BD4FEC;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd4edc
	if (!cr0.eq) goto loc_82BD4EDC;
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd4fec
	if (!cr0.eq) goto loc_82BD4FEC;
loc_82BD4EDC:
	// bl 0x8324b27c
	__imp__XGetLanguage(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,258
	ctx.r3.s64 = ctx.r1.s64 + 258;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, r30.u16);
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,17
	ctx.r8.s64 = 17;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// li r11,15
	r11.s64 = 15;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// cmplwi cr6,r31,10
	cr6.compare<uint32_t>(r31.u32, 10, xer);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// blt cr6,0x82bd4fac
	if (cr6.lt) goto loc_82BD4FAC;
	// li r31,1
	r31.s64 = 1;
loc_82BD4FAC:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82bd4da0
	sub_82BD4DA0(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82bd4da0
	sub_82BD4DA0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82bd4ce8
	sub_82BD4CE8(ctx, base);
	// li r31,1
	r31.s64 = 1;
loc_82BD4FEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp___xstart"))) PPC_WEAK_FUNC(_xstart);
PPC_FUNC_IMPL(__imp___xstart) {
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
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-31930
	ctx.r9.s64 = -2092564480;
	// lis r8,-31930
	ctx.r8.s64 = -2092564480;
	// li r11,-1
	r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,-10192(r9)
	PPC_STORE_U32(ctx.r9.u32 + -10192, r11.u32);
	// stw r10,-10188(r8)
	PPC_STORE_U32(ctx.r8.u32 + -10188, ctx.r10.u32);
	// bl 0x82bd5d70
	sub_82BD5D70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bd5bc0
	sub_82BD5BC0(ctx, base);
	// bl 0x82bd4e28
	sub_82BD4E28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bd5064
	if (cr0.eq) goto loc_82BD5064;
	// bl 0x8324b29c
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BD5064:
	// bl 0x831b5cd0
	sub_831B5CD0(ctx, base);
	// bl 0x82bd5b48
	sub_82BD5B48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bd5a68
	sub_82BD5A68(ctx, base);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,-2136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82bd519c
	if (cr6.eq) goto loc_82BD519C;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x82bd5a58
	sub_82BD5A58(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bd5180
	if (cr0.eq) goto loc_82BD5180;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_82BD50B0:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
loc_82BD50B8:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bd50f4
	if (cr0.eq) goto loc_82BD50F4;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82bd50d0
	if (cr6.eq) goto loc_82BD50D0;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x82bd50f4
	if (!cr6.eq) goto loc_82BD50F4;
loc_82BD50D0:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd50b8
	goto loc_82BD50B8;
loc_82BD50F4:
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bd516c
	if (cr0.eq) goto loc_82BD516C;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_82BD5118:
	// cmpwi cr6,r9,34
	cr6.compare<int32_t>(ctx.r9.s32, 34, xer);
	// beq cr6,0x82bd5130
	if (cr6.eq) goto loc_82BD5130;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x82bd513c
	goto loc_82BD513C;
loc_82BD5130:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_82BD513C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r9,r11
	ctx.r9.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r11,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r11.u8);
	// beq 0x82bd516c
	if (cr0.eq) goto loc_82BD516C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82bd5118
	if (!cr6.eq) goto loc_82BD5118;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x82bd516c
	if (cr6.eq) goto loc_82BD516C;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x82bd5118
	if (!cr6.eq) goto loc_82BD5118;
loc_82BD516C:
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd517c
	if (cr0.eq) goto loc_82BD517C;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// ble cr6,0x82bd50b0
	if (!cr6.gt) goto loc_82BD50B0;
loc_82BD517C:
	// stb r29,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r29.u8);
loc_82BD5180:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x82bd51a4
	goto loc_82BD51A4;
loc_82BD519C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD51A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822c3ac0
	sub_822C3AC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x831b5650
	sub_831B5650(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-11624
	ctx.r3.s64 = r11.s64 + -11624;
	// bl 0x8324b3ac
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x8324b29c
	__imp__XamLoaderTerminateTitle(ctx, base);
}

__attribute__((alias("__imp__sub_82BD51D4"))) PPC_WEAK_FUNC(sub_82BD51D4);
PPC_FUNC_IMPL(__imp__sub_82BD51D4) {
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
	// bl 0x82bd59c8
	sub_82BD59C8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD51F8"))) PPC_WEAK_FUNC(sub_82BD51F8);
PPC_FUNC_IMPL(__imp__sub_82BD51F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5210"))) PPC_WEAK_FUNC(sub_82BD5210);
PPC_FUNC_IMPL(__imp__sub_82BD5210) {
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
	// bl 0x8324b3cc
	__imp__RtlNtStatusToDosError(ctx, base);
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd5234
	if (!cr6.eq) goto loc_82BD5234;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r3,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r3.u32);
loc_82BD5234:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5248"))) PPC_WEAK_FUNC(sub_82BD5248);
PPC_FUNC_IMPL(__imp__sub_82BD5248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,336(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd5260
	if (!cr6.eq) goto loc_82BD5260;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// blr 
	return;
loc_82BD5260:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5268"))) PPC_WEAK_FUNC(sub_82BD5268);
PPC_FUNC_IMPL(__imp__sub_82BD5268) {
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
	// li r30,1627
	r30.s64 = 1627;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bd52b0
	if (cr6.eq) goto loc_82BD52B0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b2ac
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd52b4
	if (cr0.lt) goto loc_82BD52B4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r31,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF;
	// lhz r11,12(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd52b4
	if (!cr6.eq) goto loc_82BD52B4;
loc_82BD52B0:
	// li r30,0
	r30.s64 = 0;
loc_82BD52B4:
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

__attribute__((alias("__imp__sub_82BD52D0"))) PPC_WEAK_FUNC(sub_82BD52D0);
PPC_FUNC_IMPL(__imp__sub_82BD52D0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r11.u64);
	// lhz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// beq 0x82bd5340
	if (cr0.eq) goto loc_82BD5340;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
loc_82BD532C:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmplwi cr6,r7,92
	cr6.compare<uint32_t>(ctx.r7.u32, 92, xer);
	// beq cr6,0x82bd5340
	if (cr6.eq) goto loc_82BD5340;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd532c
	if (!cr0.eq) goto loc_82BD532C;
loc_82BD5340:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// clrlwi. r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// sth r9,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r9.u16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// sth r9,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r9.u16);
	// beq 0x82bd543c
	if (cr0.eq) goto loc_82BD543C;
	// clrlwi. r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd543c
	if (cr0.eq) goto loc_82BD543C;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82bd53a0
	if (!cr6.eq) goto loc_82BD53A0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,42
	cr6.compare<uint32_t>(ctx.r10.u32, 42, xer);
	// bne cr6,0x82bd53a0
	if (!cr6.eq) goto loc_82BD53A0;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// bne cr6,0x82bd53a0
	if (!cr6.eq) goto loc_82BD53A0;
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r11,42
	cr6.compare<uint32_t>(r11.u32, 42, xer);
	// bne cr6,0x82bd53a0
	if (!cr6.eq) goto loc_82BD53A0;
	// sth r31,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r31.u16);
loc_82BD53A0:
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// li r8,16417
	ctx.r8.s64 = 16417;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8324b2cc
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd5444
	if (cr0.lt) goto loc_82BD5444;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// lwz r11,-4396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4396);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x82bd5418
	if (!cr0.lt) goto loc_82BD5418;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8324b2fc
	__imp__NtClose(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82bd5444
	goto loc_82BD5444;
loc_82BD5418:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bd542c
	if (cr6.eq) goto loc_82BD542C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82bd5434
	goto loc_82BD5434;
loc_82BD542C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8324b2fc
	__imp__NtClose(ctx, base);
loc_82BD5434:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x82bd5444
	goto loc_82BD5444;
loc_82BD543C:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
loc_82BD5444:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BD5450"))) PPC_WEAK_FUNC(sub_82BD5450);
PPC_FUNC_IMPL(__imp__sub_82BD5450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-31951
	r11.s64 = -2093940736;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r11,-4396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4396);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd549c
	if (cr0.lt) goto loc_82BD549C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82BD549C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD54B0"))) PPC_WEAK_FUNC(sub_82BD54B0);
PPC_FUNC_IMPL(__imp__sub_82BD54B0) {
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
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82bd54e0
	if (cr6.eq) goto loc_82BD54E0;
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	r11.s64 = r11.s64 * -10000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// b 0x82bd54f0
	goto loc_82BD54F0;
loc_82BD54E0:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82BD54F0:
	// clrlwi r30,r31,24
	r30.u64 = r31.u32 & 0xFF;
loc_82BD54F4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8324b40c
	__imp__KeDelayExecutionThread(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bd5514
	if (cr6.eq) goto loc_82BD5514;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x82bd54f4
	if (cr6.eq) goto loc_82BD54F4;
loc_82BD5514:
	// cmpwi cr6,r3,192
	cr6.compare<int32_t>(ctx.r3.s32, 192, xer);
	// li r3,192
	ctx.r3.s64 = 192;
	// beq cr6,0x82bd5524
	if (cr6.eq) goto loc_82BD5524;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD5524:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5540"))) PPC_WEAK_FUNC(sub_82BD5540);
PPC_FUNC_IMPL(__imp__sub_82BD5540) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd5210
	sub_82BD5210(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5548"))) PPC_WEAK_FUNC(sub_82BD5548);
PPC_FUNC_IMPL(__imp__sub_82BD5548) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8324b2dc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r8,16448
	ctx.r8.s64 = 16448;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8324b2cc
	__imp__NtOpenFile(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd55e0
	if (cr0.lt) goto loc_82BD55E0;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,13
	ctx.r7.s64 = 13;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8324b30c
	__imp__NtSetInformationFile(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8324b2fc
	__imp__NtClose(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82bd55dc
	if (cr6.lt) goto loc_82BD55DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd55e8
	goto loc_82BD55E8;
loc_82BD55DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BD55E0:
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD55E8:
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

__attribute__((alias("__imp__sub_82BD5600"))) PPC_WEAK_FUNC(sub_82BD5600);
PPC_FUNC_IMPL(__imp__sub_82BD5600) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd51f8
	sub_82BD51F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5608"))) PPC_WEAK_FUNC(sub_82BD5608);
PPC_FUNC_IMPL(__imp__sub_82BD5608) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,-4396(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4396);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd5654
	if (!cr0.lt) goto loc_82BD5654;
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd5660
	goto loc_82BD5660;
loc_82BD5654:
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
loc_82BD5660:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5678"))) PPC_WEAK_FUNC(sub_82BD5678);
PPC_FUNC_IMPL(__imp__sub_82BD5678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd5700
	if (cr6.eq) goto loc_82BD5700;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11580
	ctx.r10.s64 = ctx.r10.s64 + -11580;
loc_82BD568C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82bd56b0
	if (cr0.eq) goto loc_82BD56B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82bd568c
	if (cr6.eq) goto loc_82BD568C;
loc_82BD56B0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bd56c0
	if (!cr0.eq) goto loc_82BD56C0;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// b 0x82bd56fc
	goto loc_82BD56FC;
loc_82BD56C0:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11600
	ctx.r10.s64 = ctx.r10.s64 + -11600;
loc_82BD56CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82bd56f0
	if (cr0.eq) goto loc_82BD56F0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82bd56cc
	if (cr6.eq) goto loc_82BD56CC;
loc_82BD56F0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bd5700
	if (!cr0.eq) goto loc_82BD5700;
	// ori r4,r4,256
	ctx.r4.u64 = ctx.r4.u64 | 256;
loc_82BD56FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD5700:
	// b 0x8324b2bc
	__imp__XamLoaderLaunchTitle(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5708"))) PPC_WEAK_FUNC(sub_82BD5708);
PPC_FUNC_IMPL(__imp__sub_82BD5708) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bd5248
	sub_82BD5248(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5710"))) PPC_WEAK_FUNC(sub_82BD5710);
PPC_FUNC_IMPL(__imp__sub_82BD5710) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82bd5dc8
	sub_82BD5DC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5718"))) PPC_WEAK_FUNC(sub_82BD5718);
PPC_FUNC_IMPL(__imp__sub_82BD5718) {
	PPC_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82bd5e30
	sub_82BD5E30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BD5728"))) PPC_WEAK_FUNC(sub_82BD5728);
PPC_FUNC_IMPL(__imp__sub_82BD5728) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,1500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1500);
	// bl 0x8324b4cc
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd578c
	if (cr0.lt) goto loc_82BD578C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmpwi cr6,r31,15
	cr6.compare<int32_t>(r31.s32, 15, xer);
	// bne cr6,0x82bd5768
	if (!cr6.eq) goto loc_82BD5768;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x82bd5774
	goto loc_82BD5774;
loc_82BD5768:
	// cmpwi cr6,r31,-15
	cr6.compare<int32_t>(r31.s32, -15, xer);
	// bne cr6,0x82bd5774
	if (!cr6.eq) goto loc_82BD5774;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_82BD5774:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8324b4bc
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8324b4ac
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd5794
	goto loc_82BD5794;
loc_82BD578C:
	// bl 0x82bd5540
	sub_82BD5540(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD5794:
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

__attribute__((alias("__imp__sub_82BD57A8"))) PPC_WEAK_FUNC(sub_82BD57A8);
PPC_FUNC_IMPL(__imp__sub_82BD57A8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1500);
	// bl 0x8324b4cc
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd5808
	if (cr0.lt) goto loc_82BD5808;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8324b4dc
	__imp__KeQueryBasePriorityThread(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// bne cr6,0x82bd57ec
	if (!cr6.eq) goto loc_82BD57EC;
	// li r31,15
	r31.s64 = 15;
	// b 0x82bd57f8
	goto loc_82BD57F8;
loc_82BD57EC:
	// cmpwi cr6,r31,-16
	cr6.compare<int32_t>(r31.s32, -16, xer);
	// bne cr6,0x82bd57f8
	if (!cr6.eq) goto loc_82BD57F8;
	// li r31,-15
	r31.s64 = -15;
loc_82BD57F8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8324b4ac
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82bd5814
	goto loc_82BD5814;
loc_82BD5808:
	// bl 0x82bd5540
	sub_82BD5540(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82BD5814:
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

__attribute__((alias("__imp__sub_82BD5828"))) PPC_WEAK_FUNC(sub_82BD5828);
PPC_FUNC_IMPL(__imp__sub_82BD5828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// bl 0x8324b4ec
	__imp__NtSuspendThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd5850
	if (!cr0.lt) goto loc_82BD5850;
	// bl 0x82bd5540
	sub_82BD5540(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bd5854
	goto loc_82BD5854;
loc_82BD5850:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD5854:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5868"))) PPC_WEAK_FUNC(sub_82BD5868);
PPC_FUNC_IMPL(__imp__sub_82BD5868) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,1500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1500);
	// bl 0x8324b4cc
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd58c0
	if (cr0.lt) goto loc_82BD58C0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd58ac
	if (cr0.eq) goto loc_82BD58AC;
	// lwz r11,320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// b 0x82bd58b0
	goto loc_82BD58B0;
loc_82BD58AC:
	// li r11,259
	r11.s64 = 259;
loc_82BD58B0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8324b4ac
	__imp__ObDereferenceObject(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd58c8
	goto loc_82BD58C8;
loc_82BD58C0:
	// bl 0x82bd5540
	sub_82BD5540(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD58C8:
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

__attribute__((alias("__imp__sub_82BD58E0"))) PPC_WEAK_FUNC(sub_82BD58E0);
PPC_FUNC_IMPL(__imp__sub_82BD58E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-31932
	ctx.r10.s64 = -2092695552;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,-7328(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7328);
	// stw r11,-7328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7328, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD58F8"))) PPC_WEAK_FUNC(sub_82BD58F8);
PPC_FUNC_IMPL(__imp__sub_82BD58F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// mulli r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 * 3;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5910"))) PPC_WEAK_FUNC(sub_82BD5910);
PPC_FUNC_IMPL(__imp__sub_82BD5910) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// bge cr6,0x82bd596c
	if (!cr6.lt) goto loc_82BD596C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1500(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1500);
	// bl 0x8324b4cc
	__imp__ObReferenceObjectByHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x82bd599c
	if (cr0.lt) goto loc_82BD599C;
	// li r11,1
	r11.s64 = 1;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// slw r4,r11,r30
	ctx.r4.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// bl 0x8324b4fc
	__imp__KeSetAffinityThread(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8324b4ac
	__imp__ObDereferenceObject(ctx, base);
	// b 0x82bd5974
	goto loc_82BD5974;
loc_82BD596C:
	// lis r31,-16384
	r31.s64 = -1073741824;
	// ori r31,r31,13
	r31.u64 = r31.u64 | 13;
loc_82BD5974:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82bd599c
	if (cr6.lt) goto loc_82BD599C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd5994
	if (cr6.eq) goto loc_82BD5994;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r3,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r3.s64 = 31 - r11.s64;
	// b 0x82bd59a8
	goto loc_82BD59A8;
loc_82BD5994:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd59a8
	goto loc_82BD59A8;
loc_82BD599C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd5540
	sub_82BD5540(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BD59A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD59C0"))) PPC_WEAK_FUNC(sub_82BD59C0);
PPC_FUNC_IMPL(__imp__sub_82BD59C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,268(r13)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD59C8"))) PPC_WEAK_FUNC(sub_82BD59C8);
PPC_FUNC_IMPL(__imp__sub_82BD59C8) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,1484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1484);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd5a08
	if (cr6.eq) goto loc_82BD5A08;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bd5a0c
	goto loc_82BD5A0C;
loc_82BD5A08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD5A0C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd5a40
	if (!cr6.eq) goto loc_82BD5A40;
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r10,-7328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -7328);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd5a40
	if (cr6.eq) goto loc_82BD5A40;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq cr6,0x82bd5a44
	if (cr6.eq) goto loc_82BD5A44;
loc_82BD5A40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD5A44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5A58"))) PPC_WEAK_FUNC(sub_82BD5A58);
PPC_FUNC_IMPL(__imp__sub_82BD5A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,1480(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1480);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5A68"))) PPC_WEAK_FUNC(sub_82BD5A68);
PPC_FUNC_IMPL(__imp__sub_82BD5A68) {
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
	// lis r11,-32230
	r11.s64 = -2112225280;
	// lwz r10,-10176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -10176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd5a98
	if (cr6.eq) goto loc_82BD5A98;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD5A98:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r10,4992
	ctx.r10.s64 = ctx.r10.s64 + 4992;
	// addi r30,r11,5004
	r30.s64 = r11.s64 + 5004;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x82bd5ae8
	if (!cr6.lt) goto loc_82BD5AE8;
loc_82BD5AB8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bd5b30
	if (!cr6.eq) goto loc_82BD5B30;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd5ad4
	if (cr6.eq) goto loc_82BD5AD4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD5AD4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82bd5ab8
	if (cr6.lt) goto loc_82BD5AB8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bd5b30
	if (!cr6.eq) goto loc_82BD5B30;
loc_82BD5AE8:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r30,r11,4988
	r30.s64 = r11.s64 + 4988;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x82bd5b2c
	if (!cr6.lt) goto loc_82BD5B2C;
loc_82BD5B04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd5b20
	if (cr6.eq) goto loc_82BD5B20;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82bd5b20
	if (cr6.eq) goto loc_82BD5B20;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD5B20:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82bd5b04
	if (cr6.lt) goto loc_82BD5B04;
loc_82BD5B2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD5B30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5B48"))) PPC_WEAK_FUNC(sub_82BD5B48);
PPC_FUNC_IMPL(__imp__sub_82BD5B48) {
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
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x82bd5ba4
	if (!cr6.lt) goto loc_82BD5BA4;
loc_82BD5B7C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82bd5ba4
	if (!cr6.eq) goto loc_82BD5BA4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd5b98
	if (cr6.eq) goto loc_82BD5B98;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD5B98:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82bd5b7c
	if (cr6.lt) goto loc_82BD5B7C;
loc_82BD5BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5BC0"))) PPC_WEAK_FUNC(sub_82BD5BC0);
PPC_FUNC_IMPL(__imp__sub_82BD5BC0) {
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
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,-4392
	r29.s64 = r11.s64 + -4392;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31951
	r11.s64 = -2093940736;
	// addi r31,r11,-4364
	r31.s64 = r11.s64 + -4364;
	// lwz r11,-4364(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4364);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// beq cr6,0x82bd5c18
	if (cr6.eq) goto loc_82BD5C18;
loc_82BD5BF8:
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bne cr6,0x82bd5bf8
	if (!cr6.eq) goto loc_82BD5BF8;
loc_82BD5C18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BD5C28"))) PPC_WEAK_FUNC(sub_82BD5C28);
PPC_FUNC_IMPL(__imp__sub_82BD5C28) {
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
	// lis r11,-31951
	r11.s64 = -2093940736;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-4392
	r30.s64 = r11.s64 + -4392;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82bd5c74
	if (cr6.eq) goto loc_82BD5C74;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// addi r10,r11,-4364
	ctx.r10.s64 = r11.s64 + -4364;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x82bd5c84
	goto loc_82BD5C84;
loc_82BD5C74:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82BD5C84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BD5C98"))) PPC_WEAK_FUNC(sub_82BD5C98);
PPC_FUNC_IMPL(__imp__sub_82BD5C98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r30,16
	r30.s64 = 1048576;
	// lwz r11,1464(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1464);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd5cf0
	if (cr6.eq) goto loc_82BD5CF0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x8324b52c
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bd5cf0
	if (cr0.eq) goto loc_82BD5CF0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82bd5cf0
	if (!cr6.eq) goto loc_82BD5CF0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd5d54
	goto loc_82BD5D54;
loc_82BD5CF0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82BD5D00:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82bd5d00
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BD5D00;
	// lis r31,-31932
	r31.s64 = -2092695552;
	// li r11,48
	r11.s64 = 48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,-7336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -7336);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82bd5d44
	if (!cr6.eq) goto loc_82BD5D44;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82bd7788
	sub_82BD7788(ctx, base);
	// stw r3,-7336(r31)
	PPC_STORE_U32(r31.u32 + -7336, ctx.r3.u32);
loc_82BD5D44:
	// addi r11,r3,0
	r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82BD5D54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5D70"))) PPC_WEAK_FUNC(sub_82BD5D70);
PPC_FUNC_IMPL(__imp__sub_82BD5D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82bd5c98
	sub_82BD5C98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd5db8
	if (!cr0.eq) goto loc_82BD5DB8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1484);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd5db0
	if (cr6.eq) goto loc_82BD5DB0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD5DB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8324b53c
	__imp__HalReturnToFirmware(ctx, base);
loc_82BD5DB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5DC8"))) PPC_WEAK_FUNC(sub_82BD5DC8);
PPC_FUNC_IMPL(__imp__sub_82BD5DC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82bd92c8
	sub_82BD92C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
loc_82BD5DEC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b32c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd5e1c
	if (cr0.lt) goto loc_82BD5E1C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82bd5e24
	if (cr6.eq) goto loc_82BD5E24;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x82bd5dec
	if (cr6.eq) goto loc_82BD5DEC;
	// b 0x82bd5e24
	goto loc_82BD5E24;
loc_82BD5E1C:
	// bl 0x82bd5210
	sub_82BD5210(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82BD5E24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BD5E30"))) PPC_WEAK_FUNC(sub_82BD5E30);
PPC_FUNC_IMPL(__imp__sub_82BD5E30) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,20
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD5E38"))) PPC_WEAK_FUNC(sub_82BD5E38);
PPC_FUNC_IMPL(__imp__sub_82BD5E38) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r10,76
	r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bd5fd4
	if (!cr6.eq) goto loc_82BD5FD4;
	// lwz r11,72(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x82bd5ee0
	if (cr6.eq) goto loc_82BD5EE0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd5ee0
	if (cr6.eq) goto loc_82BD5EE0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd5f10
	if (cr0.lt) goto loc_82BD5F10;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82bd5fa0
	goto loc_82BD5FA0;
loc_82BD5EE0:
	// lis r11,16
	r11.s64 = 1048576;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd5f18
	if (!cr0.lt) goto loc_82BD5F18;
loc_82BD5F10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd5fe0
	goto loc_82BD5FE0;
loc_82BD5F18:
	// lis r11,1
	r11.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd5f60
	if (!cr0.lt) goto loc_82BD5F60;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82bd5f10
	goto loc_82BD5F10;
loc_82BD5F60:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82BD5FA0:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r8,76
	ctx.r10.s64 = ctx.r8.s64 + 76;
	// b 0x82bd5fc0
	goto loc_82BD5FC0;
loc_82BD5FB4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82BD5FC0:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd5fb4
	if (cr6.lt) goto loc_82BD5FB4;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
loc_82BD5FD4:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82BD5FE0:
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

__attribute__((alias("__imp__sub_82BD5FF8"))) PPC_WEAK_FUNC(sub_82BD5FF8);
PPC_FUNC_IMPL(__imp__sub_82BD5FF8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd609c
	if (cr6.eq) goto loc_82BD609C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82BD6024:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bgt cr6,0x82bd60e4
	if (cr6.gt) goto loc_82BD60E4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// bne cr6,0x82bd608c
	if (!cr6.eq) goto loc_82BD608C;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// stw r7,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r7.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r11.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// ble cr6,0x82bd6090
	if (!cr6.gt) goto loc_82BD6090;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// b 0x82bd6090
	goto loc_82BD6090;
loc_82BD608C:
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82BD6090:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd6024
	if (!cr6.eq) goto loc_82BD6024;
loc_82BD609C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd5e38
	sub_82BD5E38(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bd60dc
	if (cr0.eq) goto loc_82BD60DC;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// blt cr6,0x82bd60dc
	if (cr6.lt) goto loc_82BD60DC;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_82BD60DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82BD60E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r9,r29,r30
	ctx.r9.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd609c
	if (!cr6.eq) goto loc_82BD609C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82bd60dc
	if (!cr6.gt) goto loc_82BD60DC;
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// b 0x82bd60dc
	goto loc_82BD60DC;
}

__attribute__((alias("__imp__sub_82BD6118"))) PPC_WEAK_FUNC(sub_82BD6118);
PPC_FUNC_IMPL(__imp__sub_82BD6118) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r25,r30,56
	r25.s64 = r30.s64 + 56;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// lwz r31,56(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bd6180
	if (cr6.eq) goto loc_82BD6180;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_82BD614C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82bd616c
	if (cr6.lt) goto loc_82BD616C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bd618c
	if (cr6.eq) goto loc_82BD618C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// beq cr6,0x82bd618c
	if (cr6.eq) goto loc_82BD618C;
loc_82BD616C:
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bd614c
	if (!cr6.eq) goto loc_82BD614C;
loc_82BD6180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD6184:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
loc_82BD618C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,1412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82bd61b4
	if (cr6.eq) goto loc_82BD61B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82bd61d0
	goto loc_82BD61D0;
loc_82BD61B4:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
loc_82BD61D0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bd6180
	if (cr6.lt) goto loc_82BD6180;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82bd61fc
	if (!cr6.eq) goto loc_82BD61FC;
	// stw r26,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r26.u32);
loc_82BD61FC:
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd622c
	if (cr0.eq) goto loc_82BD622C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82bd6298
	if (cr6.eq) goto loc_82BD6298;
loc_82BD622C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bd623c
	if (!cr6.eq) goto loc_82BD623C;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// b 0x82bd6248
	goto loc_82BD6248;
loc_82BD623C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82BD6248:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd6298
	if (!cr0.eq) goto loc_82BD6298;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_82BD6258:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bd628c
	if (!cr6.lt) goto loc_82BD628C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82bd628c
	if (cr0.eq) goto loc_82BD628C;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd6258
	if (cr0.eq) goto loc_82BD6258;
	// b 0x82bd6298
	goto loc_82BD6298;
loc_82BD628C:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd6180
	if (!cr6.eq) goto loc_82BD6180;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82BD6298:
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// andi. r10,r10,239
	ctx.r10.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf. r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bne 0x82bd6328
	if (!cr0.eq) goto loc_82BD6328;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd62e8
	if (!cr6.eq) goto loc_82BD62E8;
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// b 0x82bd62f4
	goto loc_82BD62F4;
loc_82BD62E8:
	// stb r26,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r26.u8);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_82BD62F4:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,76(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r31,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r31.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,52(r30)
	PPC_STORE_U32(r30.u32 + 52, ctx.r10.u32);
	// b 0x82bd6334
	goto loc_82BD6334;
loc_82BD6328:
	// li r10,16
	ctx.r10.s64 = 16;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
loc_82BD6334:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r9,5(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,28,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFF;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// bne 0x82bd636c
	if (!cr0.eq) goto loc_82BD636C;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
loc_82BD636C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd6184
	if (!cr6.eq) goto loc_82BD6184;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x82bd6398
	goto loc_82BD6398;
loc_82BD6380:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bd6394
	if (cr6.lt) goto loc_82BD6394;
	// stw r10,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r10.u32);
loc_82BD6394:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BD6398:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd6380
	if (!cr6.eq) goto loc_82BD6380;
	// b 0x82bd6184
	goto loc_82BD6184;
}

__attribute__((alias("__imp__sub_82BD63A8"))) PPC_WEAK_FUNC(sub_82BD63A8);
PPC_FUNC_IMPL(__imp__sub_82BD63A8) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd63ec
	if (!cr0.eq) goto loc_82BD63EC;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82bd63f0
	goto loc_82BD63F0;
loc_82BD63EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD63F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD6400"))) PPC_WEAK_FUNC(sub_82BD6400);
PPC_FUNC_IMPL(__imp__sub_82BD6400) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r10,-274
	ctx.r10.s64 = -17956864;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lhz r11,2(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// li r26,1
	r26.s64 = 1;
	// ori r25,r10,65262
	r25.u64 = ctx.r10.u64 | 65262;
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// subf r31,r11,r30
	r31.s64 = r30.s64 - r11.s64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82bd6614
	if (cr6.eq) goto loc_82BD6614;
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd6614
	if (!cr0.eq) goto loc_82BD6614;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,61440
	cr6.compare<uint32_t>(r11.u32, 61440, xer);
	// bgt cr6,0x82bd6614
	if (cr6.gt) goto loc_82BD6614;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bd6510
	if (cr6.eq) goto loc_82BD6510;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd64c4
	if (!cr6.eq) goto loc_82BD64C4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd64c4
	if (!cr6.eq) goto loc_82BD64C4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd64c4
	if (!cr6.eq) goto loc_82BD64C4;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bd64c4
	if (!cr6.lt) goto loc_82BD64C4;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_82BD64C4:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd64fc
	if (cr0.eq) goto loc_82BD64FC;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82bd64f0
	if (cr0.eq) goto loc_82BD64F0;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82bd64f0
	if (!cr6.gt) goto loc_82BD64F0;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BD64F0:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8324b57c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BD64FC:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_82BD6510:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd6570
	if (!cr6.eq) goto loc_82BD6570;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd6570
	if (!cr6.eq) goto loc_82BD6570;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd6570
	if (!cr6.eq) goto loc_82BD6570;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bd6570
	if (!cr6.lt) goto loc_82BD6570;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_82BD6570:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd65a8
	if (cr0.eq) goto loc_82BD65A8;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82bd659c
	if (cr0.eq) goto loc_82BD659C;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82bd659c
	if (!cr6.gt) goto loc_82BD659C;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BD659C:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8324b57c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BD65A8:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// beq 0x82bd65cc
	if (cr0.eq) goto loc_82BD65CC;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_82BD65CC:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r10,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// bne 0x82bd6614
	if (!cr0.eq) goto loc_82BD6614;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
loc_82BD6614:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd67f8
	if (!cr0.eq) goto loc_82BD67F8;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd67f8
	if (!cr0.eq) goto loc_82BD67F8;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,61440
	cr6.compare<uint32_t>(r11.u32, 61440, xer);
	// bgt cr6,0x82bd67f8
	if (cr6.gt) goto loc_82BD67F8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bd66f8
	if (cr6.eq) goto loc_82BD66F8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd66b0
	if (!cr6.eq) goto loc_82BD66B0;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd66b0
	if (!cr6.eq) goto loc_82BD66B0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd66b0
	if (!cr6.eq) goto loc_82BD66B0;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bd66b0
	if (!cr6.lt) goto loc_82BD66B0;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_82BD66B0:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd66e8
	if (cr0.eq) goto loc_82BD66E8;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82bd66dc
	if (cr0.eq) goto loc_82BD66DC;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82bd66dc
	if (!cr6.gt) goto loc_82BD66DC;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BD66DC:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8324b57c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BD66E8:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_82BD66F8:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x82bd671c
	if (cr0.eq) goto loc_82BD671C;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_82BD671C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd677c
	if (!cr6.eq) goto loc_82BD677C;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd677c
	if (!cr6.eq) goto loc_82BD677C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd677c
	if (!cr6.eq) goto loc_82BD677C;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bd677c
	if (!cr6.lt) goto loc_82BD677C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
loc_82BD677C:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd67b4
	if (cr0.eq) goto loc_82BD67B4;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82bd67a8
	if (cr0.eq) goto loc_82BD67A8;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82bd67a8
	if (!cr6.gt) goto loc_82BD67A8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BD67A8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8324b57c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BD67B4:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// sth r10,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r10.u16);
	// bne 0x82bd67f8
	if (!cr0.eq) goto loc_82BD67F8;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
loc_82BD67F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82BD6808"))) PPC_WEAK_FUNC(sub_82BD6808);
PPC_FUNC_IMPL(__imp__sub_82BD6808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b28
	// lbz r31,4(r4)
	r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbz r29,5(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r3
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// b 0x82bd6924
	goto loc_82BD6924;
loc_82BD683C:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// ble cr6,0x82bd6860
	if (!cr6.gt) goto loc_82BD6860;
	// li r6,-4096
	ctx.r6.s64 = -4096;
	// cmplwi cr6,r5,61441
	cr6.compare<uint32_t>(ctx.r5.u32, 61441, xer);
	// bne cr6,0x82bd6854
	if (!cr6.eq) goto loc_82BD6854;
	// li r6,-4112
	ctx.r6.s64 = -4112;
loc_82BD6854:
	// li r11,0
	r11.s64 = 0;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// b 0x82bd6868
	goto loc_82BD6868;
loc_82BD6860:
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
	// stb r29,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r29.u8);
loc_82BD6868:
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r31,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, r31.u8);
	// sth r6,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r6.u16);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// bge cr6,0x82bd68cc
	if (!cr6.lt) goto loc_82BD68CC;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82bd68f0
	if (!cr6.eq) goto loc_82BD68F0;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
	// b 0x82bd68f0
	goto loc_82BD68F0;
loc_82BD68CC:
	// lwz r11,384(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// addi r9,r3,384
	ctx.r9.s64 = ctx.r3.s64 + 384;
	// b 0x82bd68e8
	goto loc_82BD68E8;
loc_82BD68D8:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd68f0
	if (!cr6.gt) goto loc_82BD68F0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BD68E8:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82bd68d8
	if (!cr6.eq) goto loc_82BD68D8;
loc_82BD68F0:
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// stw r28,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r28.u32);
	// add r4,r8,r4
	ctx.r4.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82bd6938
	if (!cr6.lt) goto loc_82BD6938;
loc_82BD6924:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82bd683c
	if (!cr6.eq) goto loc_82BD683C;
	// rlwinm. r11,r29,0,27,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd6938
	if (!cr0.eq) goto loc_82BD6938;
	// sth r7,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r7.u16);
loc_82BD6938:
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BD6940"))) PPC_WEAK_FUNC(sub_82BD6940);
PPC_FUNC_IMPL(__imp__sub_82BD6940) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bd6a40
	if (cr6.eq) goto loc_82BD6A40;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd698c
	if (cr0.eq) goto loc_82BD698C;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82bd698c
	if (cr6.eq) goto loc_82BD698C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1278
	ctx.r6.s64 = 1278;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8324b55c
	__imp__KeBugCheckEx(ctx, base);
loc_82BD698C:
	// lwz r31,88(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// addi r30,r29,88
	r30.s64 = r29.s64 + 88;
	// li r28,0
	r28.s64 = 0;
	// b 0x82bd69c0
	goto loc_82BD69C0;
loc_82BD699C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82BD69C0:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bne cr6,0x82bd699c
	if (!cr6.eq) goto loc_82BD699C;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd69d8
	if (!cr0.eq) goto loc_82BD69D8;
	// stw r28,1408(r29)
	PPC_STORE_U32(r29.u32 + 1408, r28.u32);
loc_82BD69D8:
	// lwz r31,72(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// stw r28,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r28.u32);
	// b 0x82bd6a08
	goto loc_82BD6A08;
loc_82BD69E4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82BD6A08:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bd69e4
	if (!cr6.eq) goto loc_82BD69E4;
	// li r31,64
	r31.s64 = 64;
loc_82BD6A14:
	// addi r11,r31,255
	r11.s64 = r31.s64 + 255;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// mr r31,r11
	r31.u64 = r11.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bd6a38
	if (cr6.eq) goto loc_82BD6A38;
	// bl 0x82bd63a8
	sub_82BD63A8(ctx, base);
loc_82BD6A38:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82bd6a14
	if (!cr6.eq) goto loc_82BD6A14;
loc_82BD6A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BD6A50"))) PPC_WEAK_FUNC(sub_82BD6A50);
PPC_FUNC_IMPL(__imp__sub_82BD6A50) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82bd6a84
	if (!cr6.gt) goto loc_82BD6A84;
loc_82BD6A7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd6fc8
	goto loc_82BD6FC8;
loc_82BD6A84:
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// li r25,1
	r25.s64 = 1;
	// lbz r9,5(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rotlwi r10,r11,4
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 4);
	// rlwinm. r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// add r31,r10,r27
	r31.u64 = ctx.r10.u64 + r27.u64;
	// beq 0x82bd6b3c
	if (cr0.eq) goto loc_82BD6B3C;
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82bd6118
	sub_82BD6118(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82bd6a7c
	if (cr0.eq) goto loc_82BD6A7C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82bd6400
	sub_82BD6400(ctx, base);
	// lhz r11,0(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// lbz r28,5(r4)
	r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// bge cr6,0x82bd6c0c
	if (!cr6.lt) goto loc_82BD6C0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x82bd6fc8
	goto loc_82BD6FC8;
loc_82BD6B3C:
	// lbz r28,5(r31)
	r28.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd6a7c
	if (!cr0.eq) goto loc_82BD6A7C;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82bd6a7c
	if (cr6.lt) goto loc_82BD6A7C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd6bbc
	if (!cr6.eq) goto loc_82BD6BBC;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd6bbc
	if (!cr6.eq) goto loc_82BD6BBC;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd6bbc
	if (!cr6.eq) goto loc_82BD6BBC;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bd6bbc
	if (!cr6.lt) goto loc_82BD6BBC;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82BD6BBC:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd6bf8
	if (cr0.eq) goto loc_82BD6BF8;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82bd6be8
	if (cr0.eq) goto loc_82BD6BE8;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82bd6be8
	if (!cr6.gt) goto loc_82BD6BE8;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BD6BE8:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x8324b57c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BD6BF8:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
loc_82BD6C0C:
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// lbz r9,6(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 6);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// subf r24,r9,r10
	r24.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bgt cr6,0x82bd6c38
	if (cr6.gt) goto loc_82BD6C38;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82BD6C38:
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd6c70
	if (cr0.eq) goto loc_82BD6C70;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 0);
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r9,r11,r27
	ctx.r9.u64 = r11.u64 + r27.u64;
	// add r11,r10,r27
	r11.u64 = ctx.r10.u64 + r27.u64;
	// addi r10,r9,-16
	ctx.r10.s64 = ctx.r9.s64 + -16;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
	// ld r10,-16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// std r10,-16(r9)
	PPC_STORE_U64(ctx.r9.u32 + -16, ctx.r10.u64);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,-8(r9)
	PPC_STORE_U64(ctx.r9.u32 + -8, r11.u64);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD6C70:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd6cc8
	if (!cr6.eq) goto loc_82BD6CC8;
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r11,r10
	ctx.r8.u64 = r11.u64 | ctx.r10.u64;
	// subf r9,r23,r9
	ctx.r9.s64 = ctx.r9.s64 - r23.s64;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// stb r8,5(r27)
	PPC_STORE_U8(r27.u32 + 5, ctx.r8.u8);
	// stb r9,6(r27)
	PPC_STORE_U8(r27.u32 + 6, ctx.r9.u8);
	// sth r11,0(r27)
	PPC_STORE_U16(r27.u32 + 0, r11.u16);
	// bne 0x82bd6cb0
	if (!cr0.eq) goto loc_82BD6CB0;
	// rlwinm r10,r11,4,12,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x82bd6f94
	goto loc_82BD6F94;
loc_82BD6CB0:
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r27,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r27.u32);
	// b 0x82bd6f94
	goto loc_82BD6F94;
loc_82BD6CC8:
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// subf r10,r23,r11
	ctx.r10.s64 = r11.s64 - r23.s64;
	// sth r9,0(r27)
	PPC_STORE_U16(r27.u32 + 0, ctx.r9.u16);
	// rlwinm. r8,r28,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stb r10,6(r27)
	PPC_STORE_U8(r27.u32 + 6, ctx.r10.u8);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// sth r9,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// beq 0x82bd6d58
	if (cr0.eq) goto loc_82BD6D58;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// blt cr6,0x82bd6dac
	if (cr6.lt) goto loc_82BD6DAC;
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x82bd6d4c
	goto loc_82BD6D4C;
loc_82BD6D3C:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd6f5c
	if (!cr6.gt) goto loc_82BD6F5C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BD6D4C:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82bd6d3c
	if (!cr6.eq) goto loc_82BD6D3C;
	// b 0x82bd6f5c
	goto loc_82BD6F5C;
loc_82BD6D58:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lbz r28,5(r29)
	r28.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd6ddc
	if (cr0.eq) goto loc_82BD6DDC;
	// andi. r11,r10,239
	r11.u64 = ctx.r10.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x82bd6db4
	if (!cr6.lt) goto loc_82BD6DB4;
loc_82BD6DAC:
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x82bd6efc
	goto loc_82BD6EFC;
loc_82BD6DB4:
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x82bd6dd0
	goto loc_82BD6DD0;
loc_82BD6DC0:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd6f5c
	if (!cr6.gt) goto loc_82BD6F5C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BD6DD0:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x82bd6dc0
	if (!cr6.eq) goto loc_82BD6DC0;
	// b 0x82bd6f5c
	goto loc_82BD6F5C;
loc_82BD6DDC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r9,r29,8
	ctx.r9.s64 = r29.s64 + 8;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd6e3c
	if (!cr6.eq) goto loc_82BD6E3C;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd6e3c
	if (!cr6.eq) goto loc_82BD6E3C;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd6e3c
	if (!cr6.eq) goto loc_82BD6E3C;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bd6e3c
	if (!cr6.lt) goto loc_82BD6E3C;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82BD6E3C:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd6e78
	if (cr0.eq) goto loc_82BD6E78;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// beq 0x82bd6e68
	if (cr0.eq) goto loc_82BD6E68;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82bd6e68
	if (!cr6.gt) goto loc_82BD6E68;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82BD6E68:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// addi r3,r29,24
	ctx.r3.s64 = r29.s64 + 24;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// bl 0x8324b57c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BD6E78:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stb r28,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r28.u8);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82bd6f88
	if (cr6.gt) goto loc_82BD6F88;
	// rlwinm. r10,r28,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r5,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r5.u16);
	// bne 0x82bd6ec8
	if (!cr0.eq) goto loc_82BD6EC8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x82bd6edc
	goto loc_82BD6EDC;
loc_82BD6EC8:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_82BD6EDC:
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x82bd6f38
	if (!cr6.lt) goto loc_82BD6F38;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_82BD6EFC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd6f5c
	if (!cr6.eq) goto loc_82BD6F5C;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x82bd6f5c
	goto loc_82BD6F5C;
loc_82BD6F38:
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// b 0x82bd6f54
	goto loc_82BD6F54;
loc_82BD6F44:
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd6f5c
	if (!cr6.gt) goto loc_82BD6F5C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BD6F54:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd6f44
	if (!cr6.eq) goto loc_82BD6F44;
loc_82BD6F5C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x82bd6f94
	goto loc_82BD6F94;
loc_82BD6F88:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
loc_82BD6F94:
	// rlwinm. r11,r22,0,28,28
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd6fb8
	if (cr0.eq) goto loc_82BD6FB8;
	// cmplw cr6,r23,r24
	cr6.compare<uint32_t>(r23.u32, r24.u32, xer);
	// ble cr6,0x82bd6fb8
	if (!cr6.gt) goto loc_82BD6FB8;
	// add r11,r24,r27
	r11.u64 = r24.u64 + r27.u64;
	// subf r5,r24,r23
	ctx.r5.s64 = r23.s64 - r24.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BD6FB8:
	// lbz r11,5(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 5);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r11,r22,28,24,26
	r11.u64 = (__builtin_rotateleft32(r22.u32, 28) & 0xE0) | (r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stb r11,5(r27)
	PPC_STORE_U8(r27.u32 + 5, r11.u8);
loc_82BD6FC8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BD6FD0"))) PPC_WEAK_FUNC(sub_82BD6FD0);
PPC_FUNC_IMPL(__imp__sub_82BD6FD0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd7020
	if (cr0.eq) goto loc_82BD7020;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82bd7020
	if (cr6.eq) goto loc_82BD7020;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r6,5170
	ctx.r6.s64 = 5170;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8324b55c
	__imp__KeBugCheckEx(ctx, base);
loc_82BD7020:
	// lbz r11,-11(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -11);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd7034
	if (!cr0.eq) goto loc_82BD7034;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82bd7060
	goto loc_82BD7060;
loc_82BD7034:
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd7050
	if (cr0.eq) goto loc_82BD7050;
	// lhz r11,-16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -16);
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r3,r11,-48
	ctx.r3.s64 = r11.s64 + -48;
	// b 0x82bd7060
	goto loc_82BD7060;
loc_82BD7050:
	// lhz r11,-16(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -16);
	// lbz r10,-10(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + -10);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
loc_82BD7060:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD7078"))) PPC_WEAK_FUNC(sub_82BD7078);
PPC_FUNC_IMPL(__imp__sub_82BD7078) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// subf r10,r29,r27
	ctx.r10.s64 = r27.s64 - r29.s64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r31,87
	r11.s64 = r31.s64 + 87;
	// srawi r10,r10,16
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r26.s64 = temp.s64;
	// bne cr6,0x82bd70c4
	if (!cr6.eq) goto loc_82BD70C4;
	// lhz r22,0(r28)
	r22.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// b 0x82bd70c8
	goto loc_82BD70C8;
loc_82BD70C4:
	// li r22,0
	r22.s64 = 0;
loc_82BD70C8:
	// subf r10,r31,r30
	ctx.r10.s64 = r30.s64 - r31.s64;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// clrlwi r24,r10,16
	r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x82bd7130
	if (cr6.lt) goto loc_82BD7130;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x82bd70f0
	if (cr6.lt) goto loc_82BD70F0;
loc_82BD70E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd71d8
	goto loc_82BD71D8;
loc_82BD70F0:
	// subf r11,r8,r30
	r11.s64 = r30.s64 - ctx.r8.s64;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd70e8
	if (cr0.lt) goto loc_82BD70E8;
	// lwz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_82BD7130:
	// subf r11,r8,r27
	r11.s64 = r27.s64 - ctx.r8.s64;
	// sth r22,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r24.u16);
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// stb r25,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
	// addze. r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// stb r7,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x82bd7198
	if (cr0.eq) goto loc_82BD7198;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd5ff8
	sub_82BD5FF8(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
loc_82BD7198:
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.s64 = ctx.r8.s64 - r30.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r31,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, r31.u32);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stb r25,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r25.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82BD71D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BD71E0"))) PPC_WEAK_FUNC(sub_82BD71E0);
PPC_FUNC_IMPL(__imp__sub_82BD71E0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addis r11,r28,1
	r11.s64 = r28.s64 + 65536;
	// li r27,64
	r27.s64 = 64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r29,r11,16,16,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// li r11,0
	r11.s64 = 0;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_82BD7214:
	// addi r10,r30,24
	ctx.r10.s64 = r30.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82bd7298
	if (cr6.eq) goto loc_82BD7298;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82bd72a8
	if (cr6.gt) goto loc_82BD72A8;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82bd72a8
	if (cr6.gt) goto loc_82BD72A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd6118
	sub_82BD6118(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82bd72a8
	if (cr0.eq) goto loc_82BD72A8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82bd6400
	sub_82BD6400(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82bd7414
	goto loc_82BD7414;
loc_82BD7298:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x82bd72a8
	if (!cr6.eq) goto loc_82BD72A8;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82BD72A8:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x82bd7214
	if (cr6.lt) goto loc_82BD7214;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// beq cr6,0x82bd7410
	if (cr6.eq) goto loc_82BD7410;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd7410
	if (cr0.eq) goto loc_82BD7410;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addis r30,r28,1
	r30.s64 = r28.s64 + 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82bd72f4
	if (cr6.gt) goto loc_82BD72F4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82BD72F4:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd7364
	if (!cr0.lt) goto loc_82BD7364;
loc_82BD7318:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82bd735c
	if (cr6.eq) goto loc_82BD735C;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82bd7338
	if (!cr6.lt) goto loc_82BD7338;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_82BD7338:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd7318
	if (cr0.lt) goto loc_82BD7318;
loc_82BD735C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82bd7410
	if (cr6.lt) goto loc_82BD7410;
loc_82BD7364:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bgt cr6,0x82bd7388
	if (cr6.gt) goto loc_82BD7388;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82BD7388:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82bd73f8
	if (cr0.lt) goto loc_82BD73F8;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r7
	ctx.r8.u64 = r11.u64 + ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82bd7078
	sub_82BD7078(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bd73e4
	if (!cr0.eq) goto loc_82BD73E4;
	// lis r30,-16384
	r30.s64 = -1073741824;
	// ori r30,r30,23
	r30.u64 = r30.u64 | 23;
loc_82BD73E4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82bd73f8
	if (cr6.lt) goto loc_82BD73F8;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// b 0x82bd7414
	goto loc_82BD7414;
loc_82BD73F8:
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
loc_82BD7410:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD7414:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BD7420"))) PPC_WEAK_FUNC(sub_82BD7420);
PPC_FUNC_IMPL(__imp__sub_82BD7420) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,1412(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd7768
	if (!cr6.eq) goto loc_82BD7768;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// li r19,0
	r19.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r9,r10,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r9
	ctx.r10.s64 = ctx.r9.s64 - r31.s64;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// mr r23,r19
	r23.u64 = r19.u64;
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// lwzx r25,r11,r28
	r25.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bne cr6,0x82bd7494
	if (!cr6.eq) goto loc_82BD7494;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r26,4097
	r26.s64 = 4097;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// b 0x82bd74b0
	goto loc_82BD74B0;
loc_82BD7494:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bd74b0
	if (cr0.eq) goto loc_82BD74B0;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// bne cr6,0x82bd74b0
	if (!cr6.eq) goto loc_82BD74B0;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r23,r11,r31
	r23.s64 = r31.s64 - r11.s64;
loc_82BD74B0:
	// rlwinm r11,r24,4,0,27
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r20,r19
	r20.u64 = r19.u64;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// rlwinm r11,r10,0,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// srawi r8,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 4;
	// clrlwi r27,r8,16
	r27.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x82bd74e4
	if (!cr6.eq) goto loc_82BD74E4;
	// li r27,4097
	r27.s64 = 4097;
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// b 0x82bd74fc
	goto loc_82BD74FC;
loc_82BD74E4:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82bd74fc
	if (!cr6.eq) goto loc_82BD74FC;
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm. r8,r8,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82bd74fc
	if (!cr0.eq) goto loc_82BD74FC;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
loc_82BD74FC:
	// rlwinm r22,r27,4,12,27
	r22.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFF0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// clrlwi r21,r27,16
	r21.u64 = r27.u32 & 0xFFFF;
	// subf r29,r22,r10
	r29.s64 = ctx.r10.s64 - r22.s64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// bgt cr6,0x82bd7518
	if (cr6.gt) goto loc_82BD7518;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_82BD7518:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd7768
	if (cr6.eq) goto loc_82BD7768;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82bd5e38
	sub_82BD5E38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82bd7768
	if (cr0.eq) goto loc_82BD7768;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,24(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// stw r30,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r30.u32);
	// stw r19,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r19.u32);
	// stw r19,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r19.u32);
	// blt 0x82bd7768
	if (cr0.lt) goto loc_82BD7768;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82bd5ff8
	sub_82BD5FF8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,48(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 48);
	// clrlwi. r11,r26,16
	r11.u64 = r26.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,48(r25)
	PPC_STORE_U32(r25.u32 + 48, ctx.r10.u32);
	// beq 0x82bd7650
	if (cr0.eq) goto loc_82BD7650;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r26,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r26.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// lwz r10,48(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r10,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// stw r31,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r31.u32);
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r10,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r10.u8);
	// bge cr6,0x82bd760c
	if (!cr6.lt) goto loc_82BD760C;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd7634
	if (!cr6.eq) goto loc_82BD7634;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x82bd7634
	goto loc_82BD7634;
loc_82BD760C:
	// lwz r10,384(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// addi r9,r28,384
	ctx.r9.s64 = r28.s64 + 384;
	// b 0x82bd7628
	goto loc_82BD7628;
loc_82BD7618:
	// lhz r7,-8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + -8);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x82bd7630
	if (!cr6.gt) goto loc_82BD7630;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82BD7628:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd7618
	if (!cr6.eq) goto loc_82BD7618;
loc_82BD7630:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BD7634:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x82bd7694
	goto loc_82BD7694;
loc_82BD7650:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82bd766c
	if (cr6.eq) goto loc_82BD766C;
	// lbz r11,5(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r23)
	PPC_STORE_U8(r23.u32 + 5, r11.u8);
	// stw r23,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r23.u32);
	// b 0x82bd7694
	goto loc_82BD7694;
loc_82BD766C:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bd7694
	if (cr6.lt) goto loc_82BD7694;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd7694
	if (!cr6.lt) goto loc_82BD7694;
	// lwz r11,40(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// stw r11,64(r25)
	PPC_STORE_U32(r25.u32 + 64, r11.u32);
loc_82BD7694:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82bd7758
	if (cr6.eq) goto loc_82BD7758;
	// add r11,r22,r29
	r11.u64 = r22.u64 + r29.u64;
	// sth r19,2(r29)
	PPC_STORE_U16(r29.u32 + 2, r19.u16);
	// lbz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 4);
	// cmplwi cr6,r21,128
	cr6.compare<uint32_t>(r21.u32, 128, xer);
	// stb r19,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r19.u8);
	// stb r10,4(r29)
	PPC_STORE_U8(r29.u32 + 4, ctx.r10.u8);
	// sth r27,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r27.u16);
	// sth r27,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r27.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82bd770c
	if (!cr6.lt) goto loc_82BD770C;
	// addi r11,r21,48
	r11.s64 = r21.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd7730
	if (!cr6.eq) goto loc_82BD7730;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x82bd7730
	goto loc_82BD7730;
loc_82BD770C:
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// b 0x82bd7728
	goto loc_82BD7728;
loc_82BD7718:
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// cmplw cr6,r21,r9
	cr6.compare<uint32_t>(r21.u32, ctx.r9.u32, xer);
	// ble cr6,0x82bd7730
	if (!cr6.gt) goto loc_82BD7730;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BD7728:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd7718
	if (!cr6.eq) goto loc_82BD7718;
loc_82BD7730:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r11,r21,r11
	r11.u64 = r21.u64 + r11.u64;
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// b 0x82bd7778
	goto loc_82BD7778;
loc_82BD7758:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82bd7778
	if (cr6.eq) goto loc_82BD7778;
	// sth r19,2(r20)
	PPC_STORE_U16(r20.u32 + 2, r19.u16);
	// b 0x82bd7778
	goto loc_82BD7778;
loc_82BD7768:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
loc_82BD7778:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82BD7788"))) PPC_WEAK_FUNC(sub_82BD7788);
PPC_FUNC_IMPL(__imp__sub_82BD7788) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b0c
	// addi r31,r1,-272
	r31.s64 = ctx.r1.s64 + -272;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r24,292(r31)
	PPC_STORE_U32(r31.u32 + 292, r24.u32);
	// li r22,0
	r22.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r22,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r22.u32);
	// stw r29,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r29.u32);
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// stw r5,308(r31)
	PPC_STORE_U32(r31.u32 + 308, ctx.r5.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r6,316(r31)
	PPC_STORE_U32(r31.u32 + 316, ctx.r6.u32);
	// stw r21,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r21.u32);
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// li r11,6
	r11.s64 = 6;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82BD77D4:
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82bd77d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82BD77D4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82bd784c
	if (cr6.eq) goto loc_82BD784C;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x82bd7810
	if (!cr6.eq) goto loc_82BD7810;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 308);
loc_82BD7810:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd7838
	goto loc_82BD7838;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r21,324(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// li r22,0
	r22.s64 = 0;
	// lwz r5,308(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r29,300(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// lwz r24,292(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 292);
loc_82BD7838:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x82bd7848
	if (!cr6.lt) goto loc_82BD7848;
loc_82BD7840:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd7d14
	goto loc_82BD7D14;
loc_82BD7848:
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 316);
loc_82BD784C:
	// lis r23,-31932
	r23.s64 = -2092695552;
	// lwz r11,-7332(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + -7332);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd7860
	if (cr0.eq) goto loc_82BD7860;
	// ori r24,r24,128
	r24.u64 = r24.u64 | 128;
loc_82BD7860:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd7878
	if (!cr6.eq) goto loc_82BD7878;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,-4352(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4352);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82BD7878:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd7890
	if (!cr6.eq) goto loc_82BD7890;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,-4348(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4348);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_82BD7890:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd78a8
	if (!cr6.eq) goto loc_82BD78A8;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,-4340(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4340);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
loc_82BD78A8:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd78c0
	if (!cr6.eq) goto loc_82BD78C0;
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r11,-4344(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4344);
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_82BD78C0:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd78d8
	if (!cr6.eq) goto loc_82BD78D8;
	// lis r11,32764
	r11.s64 = 2147221504;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
loc_82BD78D8:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd78f0
	if (cr6.eq) goto loc_82BD78F0;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82bd78f8
	if (!cr6.gt) goto loc_82BD78F8;
loc_82BD78F0:
	// lis r11,15
	r11.s64 = 983040;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
loc_82BD78F8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x82bd7950
	if (!cr6.eq) goto loc_82BD7950;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// bne cr6,0x82bd7920
	if (!cr6.eq) goto loc_82BD7920;
	// lis r11,64
	r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r27,r10,65535
	r27.u64 = ctx.r10.u64 | 65535;
	// b 0x82bd7930
	goto loc_82BD7930;
loc_82BD7920:
	// lis r11,0
	r11.s64 = 0;
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
loc_82BD7928:
	// add r11,r5,r27
	r11.u64 = ctx.r5.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
loc_82BD7930:
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r25,1424
	r25.s64 = 1424;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne 0x82bd7988
	if (!cr0.eq) goto loc_82BD7988;
	// beq cr6,0x82bd797c
	if (cr6.eq) goto loc_82BD797C;
	// oris r24,r24,32768
	r24.u64 = r24.u64 | 2147483648;
	// b 0x82bd798c
	goto loc_82BD798C;
loc_82BD7950:
	// lis r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// ori r27,r11,65535
	r27.u64 = r11.u64 | 65535;
	// add r11,r6,r27
	r11.u64 = ctx.r6.u64 + r27.u64;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// bne cr6,0x82bd7928
	if (!cr6.eq) goto loc_82BD7928;
	// addis r11,r11,16
	r11.s64 = r11.s64 + 1048576;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x82bd7930
	goto loc_82BD7930;
loc_82BD797C:
	// li r25,1452
	r25.s64 = 1452;
	// li r21,-1
	r21.s64 = -1;
	// b 0x82bd798c
	goto loc_82BD798C;
loc_82BD7988:
	// bne cr6,0x82bd7840
	if (!cr6.eq) goto loc_82BD7840;
loc_82BD798C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// beq cr6,0x82bd7a94
	if (cr6.eq) goto loc_82BD7A94;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd79e8
	if (cr6.eq) goto loc_82BD79E8;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd7840
	if (cr6.eq) goto loc_82BD7840;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd7840
	if (cr6.eq) goto loc_82BD7840;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82bd7840
	if (cr6.gt) goto loc_82BD7840;
	// rlwinm. r9,r24,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bd7840
	if (!cr0.eq) goto loc_82BD7840;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r28,r10,r29
	r28.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// b 0x82bd7a84
	goto loc_82BD7A84;
loc_82BD79E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b36c
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd7840
	if (cr0.lt) goto loc_82BD7840;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82bd7840
	if (!cr6.eq) goto loc_82BD7840;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82bd7840
	if (cr6.eq) goto loc_82BD7840;
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x82bd7a7c
	if (!cr6.eq) goto loc_82BD7A7C;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8324b36c
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// blt 0x82bd7a84
	if (cr0.lt) goto loc_82BD7A84;
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,8192
	cr6.compare<uint32_t>(ctx.r10.u32, 8192, xer);
	// bne cr6,0x82bd7a84
	if (!cr6.eq) goto loc_82BD7A84;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r11.u32);
	// b 0x82bd7a84
	goto loc_82BD7A84;
loc_82BD7A7C:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
loc_82BD7A84:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// b 0x82bd7ae0
	goto loc_82BD7AE0;
loc_82BD7A94:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd7840
	if (!cr6.eq) goto loc_82BD7840;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd7840
	if (cr0.lt) goto loc_82BD7840;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// mr r26,r22
	r26.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd7ad4
	if (!cr6.eq) goto loc_82BD7AD4;
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
loc_82BD7AD4:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82BD7AE0:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82bd7b40
	if (!cr6.eq) goto loc_82BD7B40;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,316
	ctx.r4.s64 = r31.s64 + 316;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd7b34
	if (!cr0.lt) goto loc_82BD7B34;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bd7840
	if (!cr6.eq) goto loc_82BD7840;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,308
	ctx.r4.s64 = r31.s64 + 308;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x82bd7840
	goto loc_82BD7840;
loc_82BD7B34:
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r28,r28,r11
	r28.u64 = r28.u64 + r11.u64;
loc_82BD7B40:
	// addi r11,r10,1431
	r11.s64 = ctx.r10.s64 + 1431;
	// li r8,8
	ctx.r8.s64 = 8;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r9,r25,128
	ctx.r9.s64 = r25.s64 + 128;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
loc_82BD7B54:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82bd7b54
	if (!cr0.eq) goto loc_82BD7B54;
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r22.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r10,-7332(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -7332);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd7b9c
	if (cr0.eq) goto loc_82BD7B9C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	PPC_STORE_U32(ctx.r10.u32 + 380, r11.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// addi r29,r11,1548
	r29.s64 = r11.s64 + 1548;
loc_82BD7B9C:
	// addi r11,r9,15
	r11.s64 = ctx.r9.s64 + 15;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// li r11,1
	r11.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	r12.s64 = 1610678272;
	// ori r12,r12,125
	r12.u64 = r12.u64 | 125;
	// and r10,r24,r12
	ctx.r10.u64 = r24.u64 & r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r24,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r24.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// sth r27,368(r11)
	PPC_STORE_U16(r11.u32 + 368, r27.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// sth r10,58(r11)
	PPC_STORE_U16(r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r22,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r22.u32);
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r3,379(r11)
	PPC_STORE_U8(r11.u32 + 379, ctx.r3.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,384
	r11.s64 = r11.s64 + 384;
loc_82BD7C1C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82bd7c1c
	if (!cr0.eq) goto loc_82BD7C1C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r21,-1
	cr6.compare<int32_t>(r21.s32, -1, xer);
	// addi r11,r10,88
	r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r11.u32);
	// stw r11,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, r11.u32);
	// bne cr6,0x82bd7c54
	if (!cr6.eq) goto loc_82BD7C54;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r21,r29
	r21.u64 = r29.u64;
	// bl 0x8324b58c
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_82BD7C54:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r21,1408(r11)
	PPC_STORE_U32(r11.u32 + 1408, r21.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r7,84(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// bl 0x82bd7078
	sub_82BD7078(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bd7840
	if (cr0.eq) goto loc_82BD7840;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm. r10,r24,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r22,56(r11)
	PPC_STORE_U16(r11.u32 + 56, r22.u16);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r10,1412(r11)
	PPC_STORE_U32(r11.u32 + 1412, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r9,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82BD7D14:
	// addi r1,r31,272
	ctx.r1.s64 = r31.s64 + 272;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82BD7D1C"))) PPC_WEAK_FUNC(sub_82BD7D1C);
PPC_FUNC_IMPL(__imp__sub_82BD7D1C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD7D30"))) PPC_WEAK_FUNC(sub_82BD7D30);
PPC_FUNC_IMPL(__imp__sub_82BD7D30) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r24,0
	r24.s64 = 0;
	// mr r28,r30
	r28.u64 = r30.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r28.u32);
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// beq 0x82bd7d98
	if (cr0.eq) goto loc_82BD7D98;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82bd7d98
	if (cr6.eq) goto loc_82BD7D98;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1479
	ctx.r6.s64 = 1479;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8324b55c
	__imp__KeBugCheckEx(ctx, base);
loc_82BD7D98:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// or r23,r11,r29
	r23.u64 = r11.u64 | r29.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x82bd7db4
	if (!cr6.eq) goto loc_82BD7DB4;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82BD7DB4:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd7de4
	if (!cr0.eq) goto loc_82BD7DE4;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r27
	r22.u64 = r27.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82BD7DE4:
	// cmplwi cr6,r29,128
	cr6.compare<uint32_t>(r29.u32, 128, xer);
	// bge cr6,0x82bd7fdc
	if (!cr6.lt) goto loc_82BD7FDC;
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd7ea0
	if (cr6.eq) goto loc_82BD7EA0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// stb r6,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r6.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bd7e70
	if (!cr6.eq) goto loc_82BD7E70;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bd7e70
	if (!cr6.eq) goto loc_82BD7E70;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bd7e70
	if (!cr6.eq) goto loc_82BD7E70;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_82BD7E70:
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r26,r11
	r26.u64 = r11.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// rlwimi r6,r27,0,28,26
	ctx.r6.u64 = (__builtin_rotateleft32(r27.u32, 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r6.u64 & 0x10);
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r26.u32);
	// stb r6,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r6.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - r25.s64;
	// stb r10,6(r11)
	PPC_STORE_U8(r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r24.u8);
	// b 0x82bd8430
	goto loc_82BD8430;
loc_82BD7EA0:
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// blt cr6,0x82bd7ef0
	if (cr6.lt) goto loc_82BD7EF0;
	// beq cr6,0x82bd7f10
	if (cr6.eq) goto loc_82BD7F10;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82bd7f30
	if (cr6.lt) goto loc_82BD7F30;
	// beq cr6,0x82bd7f50
	if (cr6.eq) goto loc_82BD7F50;
	// b 0x82bd7fe8
	goto loc_82BD7FE8;
loc_82BD7EF0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd7f00
	if (cr6.eq) goto loc_82BD7F00;
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x82bd7f5c
	goto loc_82BD7F5C;
loc_82BD7F00:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_82BD7F10:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd7f20
	if (cr6.eq) goto loc_82BD7F20;
	// addi r9,r30,640
	ctx.r9.s64 = r30.s64 + 640;
	// b 0x82bd7f5c
	goto loc_82BD7F5C;
loc_82BD7F20:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_82BD7F30:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd7f40
	if (cr6.eq) goto loc_82BD7F40;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
	// b 0x82bd7f5c
	goto loc_82BD7F5C;
loc_82BD7F40:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82BD7F50:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bd7fe8
	if (cr6.eq) goto loc_82BD7FE8;
	// addi r9,r30,1152
	ctx.r9.s64 = r30.s64 + 1152;
loc_82BD7F5C:
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd8088
	if (!cr6.eq) goto loc_82BD8088;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd8088
	if (!cr6.eq) goto loc_82BD8088;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd8088
	if (!cr6.eq) goto loc_82BD8088;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x82bd8088
	goto loc_82BD8088;
loc_82BD7FDC:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82bd846c
	if (cr6.gt) goto loc_82BD846C;
loc_82BD7FE8:
	// lwz r11,388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// beq cr6,0x82bd8044
	if (cr6.eq) goto loc_82BD8044;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82bd8044
	if (cr6.lt) goto loc_82BD8044;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_82BD8018:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd8044
	if (cr6.eq) goto loc_82BD8044;
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bge cr6,0x82bd8058
	if (!cr6.lt) goto loc_82BD8058;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8018
	goto loc_82BD8018;
loc_82BD8044:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bd71e0
	sub_82BD71E0(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bd8538
	if (cr0.eq) goto loc_82BD8538;
loc_82BD8058:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x82bd8084
	if (!cr6.eq) goto loc_82BD8084;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bne cr6,0x82bd8084
	if (!cr6.eq) goto loc_82BD8084;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_82BD8084:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82BD8088:
	// lbz r10,5(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r9,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r9.u32);
	// stw r26,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r26.u32);
	// stb r27,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// stb r9,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	PPC_STORE_U8(ctx.r3.u32 + 7, r24.u8);
	// beq 0x82bd841c
	if (cr0.eq) goto loc_82BD841C;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x82bd80f4
	if (!cr6.eq) goto loc_82BD80F4;
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lbz r11,6(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stb r11,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, r11.u8);
	// b 0x82bd841c
	goto loc_82BD841C;
loc_82BD80F4:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// beq 0x82bd81b4
	if (cr0.eq) goto loc_82BD81B4;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// bge cr6,0x82bd8170
	if (!cr6.lt) goto loc_82BD8170;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd8220
	if (!cr6.eq) goto loc_82BD8220;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82bd821c
	goto loc_82BD821C;
loc_82BD8170:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82BD8188:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd8220
	if (cr6.eq) goto loc_82BD8220;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd8220
	if (!cr6.gt) goto loc_82BD8220;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8188
	goto loc_82BD8188;
loc_82BD81B4:
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bd8284
	if (cr0.eq) goto loc_82BD8284;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	cr6.compare<uint32_t>(ctx.r8.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x82bd8244
	if (!cr6.lt) goto loc_82BD8244;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd8220
	if (!cr6.eq) goto loc_82BD8220;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82BD821C:
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_82BD8220:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// b 0x82bd83e0
	goto loc_82BD83E0;
loc_82BD8244:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_82BD8258:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd8220
	if (cr6.eq) goto loc_82BD8220;
	// lhz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x82bd8220
	if (!cr6.gt) goto loc_82BD8220;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8258
	goto loc_82BD8258;
loc_82BD8284:
	// stb r10,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82bd82e8
	if (!cr6.eq) goto loc_82BD82E8;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82bd82e8
	if (!cr6.eq) goto loc_82BD82E8;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x82bd82e8
	if (!cr6.eq) goto loc_82BD82E8;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bge cr6,0x82bd82e8
	if (!cr6.lt) goto loc_82BD82E8;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_82BD82E8:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// add r5,r11,r6
	ctx.r5.u64 = r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82bd83e8
	if (cr6.gt) goto loc_82BD83E8;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd8328
	if (!cr0.eq) goto loc_82BD8328;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
loc_82BD8328:
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x82bd8380
	if (!cr6.lt) goto loc_82BD8380;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	PPC_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd83c0
	if (!cr6.eq) goto loc_82BD83C0;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x82bd83c0
	goto loc_82BD83C0;
loc_82BD8380:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lwz r11,384(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 384);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
loc_82BD8394:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd83c0
	if (cr6.eq) goto loc_82BD83C0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd83c0
	if (!cr6.gt) goto loc_82BD83C0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8394
	goto loc_82BD8394;
loc_82BD83C0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
loc_82BD83E0:
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// b 0x82bd83f4
	goto loc_82BD83F4;
loc_82BD83E8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
loc_82BD83F4:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stb r10,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd841c
	if (cr0.eq) goto loc_82BD841C;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
loc_82BD841C:
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd8430
	if (cr0.eq) goto loc_82BD8430;
	// lbz r11,5(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,5(r26)
	PPC_STORE_U8(r26.u32 + 5, r11.u8);
loc_82BD8430:
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// beq cr6,0x82bd8450
	if (cr6.eq) goto loc_82BD8450;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r22,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r22.u32);
loc_82BD8450:
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd856c
	if (cr0.eq) goto loc_82BD856C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// b 0x82bd856c
	goto loc_82BD856C;
loc_82BD846C:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd853c
	if (cr0.eq) goto loc_82BD853C;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// mr r11,r24
	r11.u64 = r24.u64;
	// bne 0x82bd8494
	if (!cr0.eq) goto loc_82BD8494;
	// lis r11,128
	r11.s64 = 8388608;
loc_82BD8494:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// oris r5,r11,24576
	ctx.r5.u64 = r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8324b48c
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd8538
	if (cr0.lt) goto loc_82BD8538;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	r11.s64 = r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stb r10,37(r9)
	PPC_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// b 0x82bd856c
	goto loc_82BD856C;
loc_82BD8538:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82BD853C:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd8568
	if (cr0.eq) goto loc_82BD8568;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r24,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r24.u32);
	// stw r27,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r27.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// stw r4,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// bl 0x8324b59c
	__imp__RtlRaiseException(ctx, base);
loc_82BD8568:
	// stw r24,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r24.u32);
loc_82BD856C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x82bd85ac
	sub_82BD85AC(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BD8584"))) PPC_WEAK_FUNC(sub_82BD8584);
PPC_FUNC_IMPL(__imp__sub_82BD8584) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r22,104(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82bd85c8
	goto loc_82BD85C8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BD85C8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82bd85d8
	if (cr6.eq) goto loc_82BD85D8;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BD85D8:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD85AC"))) PPC_WEAK_FUNC(sub_82BD85AC);
PPC_FUNC_IMPL(__imp__sub_82BD85AC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r28{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r28.u64);
	// std r22,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r22.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82bd85d8
	if (cr6.eq) goto loc_82BD85D8;
	// lwz r3,1408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BD85D8:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD8600"))) PPC_WEAK_FUNC(sub_82BD8600);
PPC_FUNC_IMPL(__imp__sub_82BD8600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r26,0
	r26.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// beq 0x82bd8668
	if (cr0.eq) goto loc_82BD8668;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82bd8668
	if (cr6.eq) goto loc_82BD8668;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,4414
	ctx.r6.s64 = 4414;
	// lwz r5,168(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8324b55c
	__imp__KeBugCheckEx(ctx, base);
loc_82BD8668:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bd8678
	if (!cr6.eq) goto loc_82BD8678;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd8870
	goto loc_82BD8870;
loc_82BD8678:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd86a0
	if (!cr0.eq) goto loc_82BD86A0;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r25,r27
	r25.u64 = r27.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
loc_82BD86A0:
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd8808
	if (!cr0.eq) goto loc_82BD8808;
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82bd6400
	sub_82BD6400(ctx, base);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,128
	cr6.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// bge cr6,0x82bd8750
	if (!cr6.lt) goto loc_82BD8750;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd8728
	if (!cr6.eq) goto loc_82BD8728;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_82BD8728:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82bd87f4
	goto loc_82BD87F4;
loc_82BD8750:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x82bd877c
	if (cr6.lt) goto loc_82BD877C;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bd877c
	if (cr6.lt) goto loc_82BD877C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd7420
	sub_82BD7420(ctx, base);
	// b 0x82bd8860
	goto loc_82BD8860;
loc_82BD877C:
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82bd87fc
	if (cr6.gt) goto loc_82BD87FC;
	// lbz r11,5(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, r11.u8);
	// lwz r11,384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_82BD879C:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd87d0
	if (cr6.eq) goto loc_82BD87D0;
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r8,r11,-8
	ctx.r8.s64 = r11.s64 + -8;
	// lhz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// ble cr6,0x82bd87d0
	if (!cr6.gt) goto loc_82BD87D0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd879c
	goto loc_82BD879C;
loc_82BD87D0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82BD87F4:
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// b 0x82bd8860
	goto loc_82BD8860;
loc_82BD87FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
	// b 0x82bd8860
	goto loc_82BD8860;
loc_82BD8808:
	// addi r11,r29,-32
	r11.s64 = r29.s64 + -32;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,-32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -32);
	// lwz r10,-28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82bd8838
	if (cr6.eq) goto loc_82BD8838;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r25,r26
	r25.u64 = r26.u64;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
loc_82BD8838:
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82bd8860
	if (!cr0.lt) goto loc_82BD8860;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
loc_82BD8860:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x82bd88a0
	sub_82BD88A0(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82BD8870:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82BD8878"))) PPC_WEAK_FUNC(sub_82BD8878);
PPC_FUNC_IMPL(__imp__sub_82BD8878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r25.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r25,84(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x82bd88bc
	goto loc_82BD88BC;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r25.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BD88BC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82bd88cc
	if (cr6.eq) goto loc_82BD88CC;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BD88CC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD88A0"))) PPC_WEAK_FUNC(sub_82BD88A0);
PPC_FUNC_IMPL(__imp__sub_82BD88A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r25,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r25.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82bd88cc
	if (cr6.eq) goto loc_82BD88CC;
	// lwz r3,1408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BD88CC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r25,-24(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD88F0"))) PPC_WEAK_FUNC(sub_82BD88F0);
PPC_FUNC_IMPL(__imp__sub_82BD88F0) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b04
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r27.u32);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r19,0
	r19.s64 = 0;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r19,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r19.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r26,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r26.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r21,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r21.u32);
	// beq 0x82bd8960
	if (cr0.eq) goto loc_82BD8960;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 379);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82bd8960
	if (cr6.eq) goto loc_82BD8960;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// li r6,3162
	ctx.r6.s64 = 3162;
	// lwz r5,312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x8324b55c
	__imp__KeBugCheckEx(ctx, base);
loc_82BD8960:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82bd8970
	if (!cr6.eq) goto loc_82BD8970;
loc_82BD8968:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd9130
	goto loc_82BD9130;
loc_82BD8970:
	// lis r11,32767
	r11.s64 = 2147418112;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// or r23,r10,r30
	r23.u64 = ctx.r10.u64 | r30.u64;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bgt cr6,0x82bd8968
	if (cr6.gt) goto loc_82BD8968;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// li r22,1
	r22.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x82bd899c
	if (!cr6.eq) goto loc_82BD899C;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82BD899C:
	// lwz r10,80(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// rlwinm r9,r23,0,2,23
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3FFFFF00;
	// rlwinm. r9,r9,0,23,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC0001FF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,84(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// and r24,r11,r8
	r24.u64 = r11.u64 & ctx.r8.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// bne 0x82bd89d4
	if (!cr0.eq) goto loc_82BD89D4;
	// lwz r11,380(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bd89d4
	if (!cr6.eq) goto loc_82BD89D4;
	// lbz r11,-11(r20)
	r11.u64 = PPC_LOAD_U8(r20.u32 + -11);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd89dc
	if (cr0.eq) goto loc_82BD89DC;
loc_82BD89D4:
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_82BD89DC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd8a00
	if (!cr0.eq) goto loc_82BD8A00;
	// lwz r3,1408(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1408);
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// xori r23,r23,1
	r23.u64 = r23.u64 ^ 1;
	// stw r22,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r22.u32);
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_82BD8A00:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r20,-16
	r30.s64 = r20.s64 + -16;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// lbz r7,5(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd9104
	if (cr0.eq) goto loc_82BD9104;
	// rlwinm. r6,r7,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// beq 0x82bd8a68
	if (cr0.eq) goto loc_82BD8A68;
	// addi r9,r24,32
	ctx.r9.s64 = r24.s64 + 32;
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// addi r10,r30,-32
	ctx.r10.s64 = r30.s64 + -32;
	// addis r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 65536;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// rlwinm r24,r5,0,0,15
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// addi r25,r8,-48
	r25.s64 = ctx.r8.s64 + -48;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// b 0x82bd8a78
	goto loc_82BD8A78;
loc_82BD8A68:
	// lbz r10,6(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 6);
	// rotlwi r9,r11,4
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 4);
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf r25,r10,r9
	r25.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82BD8A78:
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// rlwinm r28,r24,28,4,31
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFFFFFF;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bgt cr6,0x82bd8ed4
	if (cr6.gt) goto loc_82BD8ED4;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bne cr6,0x82bd8aa8
	if (!cr6.eq) goto loc_82BD8AA8;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_82BD8AA8:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82bd8ac4
	if (cr6.eq) goto loc_82BD8AC4;
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x82bd8b04
	goto loc_82BD8B04;
loc_82BD8AC4:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd8afc
	if (cr0.eq) goto loc_82BD8AFC;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r28,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// add r11,r9,r30
	r11.u64 = ctx.r9.u64 + r30.u64;
	// subf r9,r26,r24
	ctx.r9.s64 = r24.s64 - r26.s64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// ld r8,-16(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// ld r10,-8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -8);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// stb r9,6(r30)
	PPC_STORE_U8(r30.u32 + 6, ctx.r9.u8);
	// b 0x82bd8b04
	goto loc_82BD8B04;
loc_82BD8AFC:
	// subf r11,r26,r24
	r11.s64 = r24.s64 - r26.s64;
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_82BD8B04:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x82bd8b24
	if (!cr6.gt) goto loc_82BD8B24;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd8b24
	if (cr0.eq) goto loc_82BD8B24;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r25,r20
	ctx.r3.u64 = r25.u64 + r20.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BD8B24:
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82bd90d0
	if (cr6.eq) goto loc_82BD90D0;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd8b88
	if (cr0.eq) goto loc_82BD8B88;
	// addi r30,r30,-32
	r30.s64 = r30.s64 + -32;
	// rlwinm r11,r29,4,0,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8324b49c
	__imp__NtFreeVirtualMemory(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bd90d0
	if (cr0.lt) goto loc_82BD90D0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// b 0x82bd90d0
	goto loc_82BD90D0;
loc_82BD8B88:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r28,16
	ctx.r9.u64 = r28.u32 & 0xFFFF;
	// add r29,r10,r30
	r29.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// sth r9,2(r29)
	PPC_STORE_U16(r29.u32 + 2, ctx.r9.u16);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// stb r11,4(r29)
	PPC_STORE_U8(r29.u32 + 4, r11.u8);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// subf r28,r28,r11
	r28.s64 = r11.s64 - r28.s64;
	// sth r9,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// beq 0x82bd8c3c
	if (cr0.eq) goto loc_82BD8C3C;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r11,24
	ctx.r10.s64 = r11.s64 + 24;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lwzx r9,r9,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r27.u32);
	// stw r29,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, r29.u32);
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82bd8c04
	if (!cr6.lt) goto loc_82BD8C04;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// b 0x82bd8c78
	goto loc_82BD8C78;
loc_82BD8C04:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
loc_82BD8C10:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82bd8cb0
	if (cr6.eq) goto loc_82BD8CB0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd8cb0
	if (!cr6.gt) goto loc_82BD8CB0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8c10
	goto loc_82BD8C10;
loc_82BD8C3C:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r29
	r30.u64 = r11.u64 + r29.u64;
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd8d0c
	if (cr0.eq) goto loc_82BD8D0C;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(r30.u32 + 2, r11.u16);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// lbz r11,5(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82bd8cd4
	if (!cr6.lt) goto loc_82BD8CD4;
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
loc_82BD8C78:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd8cb0
	if (!cr6.eq) goto loc_82BD8CB0;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
loc_82BD8CB0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// b 0x82bd8ebc
	goto loc_82BD8EBC;
loc_82BD8CD4:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r10,r27,384
	ctx.r10.s64 = r27.s64 + 384;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
loc_82BD8CE0:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bd8cb0
	if (cr6.eq) goto loc_82BD8CB0;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd8cb0
	if (!cr6.gt) goto loc_82BD8CB0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8ce0
	goto loc_82BD8CE0;
loc_82BD8D0C:
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82bd8d70
	if (!cr6.eq) goto loc_82BD8D70;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82bd8d70
	if (!cr6.eq) goto loc_82BD8D70;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// bne cr6,0x82bd8d70
	if (!cr6.eq) goto loc_82BD8D70;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82bd8d70
	if (!cr6.lt) goto loc_82BD8D70;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r22.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
loc_82BD8D70:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd8db4
	if (cr0.eq) goto loc_82BD8DB4;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r11,r10,4
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r4,r11,-24
	ctx.r4.s64 = r11.s64 + -24;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// beq 0x82bd8da4
	if (cr0.eq) goto loc_82BD8DA4;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// ble cr6,0x82bd8da4
	if (!cr6.gt) goto loc_82BD8DA4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
loc_82BD8DA4:
	// lis r5,-274
	ctx.r5.s64 = -17956864;
	// ori r5,r5,65262
	ctx.r5.u64 = ctx.r5.u64 | 65262;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x8324b57c
	__imp__RtlCompareMemoryUlong(ctx, base);
loc_82BD8DB4:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,48(r27)
	PPC_STORE_U32(r27.u32 + 48, r11.u32);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r5,r11,r28
	ctx.r5.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r5,61440
	cr6.compare<uint32_t>(ctx.r5.u32, 61440, xer);
	// bgt cr6,0x82bd8ec4
	if (cr6.gt) goto loc_82BD8EC4;
	// clrlwi r11,r5,16
	r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r29)
	PPC_STORE_U16(r29.u32 + 0, r11.u16);
	// lbz r10,5(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd8df8
	if (!cr0.eq) goto loc_82BD8DF8;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// b 0x82bd8e0c
	goto loc_82BD8E0C;
loc_82BD8DF8:
	// lbz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r29,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, r29.u32);
loc_82BD8E0C:
	// lbz r9,5(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 5);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// rlwinm r11,r9,0,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// stb r11,5(r29)
	PPC_STORE_U8(r29.u32 + 5, r11.u8);
	// bge cr6,0x82bd8e64
	if (!cr6.lt) goto loc_82BD8E64;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bd8e9c
	if (!cr6.eq) goto loc_82BD8E9C;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r22,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r22.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r9.u32);
	// b 0x82bd8e9c
	goto loc_82BD8E9C;
loc_82BD8E64:
	// lwz r11,384(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 384);
	// addi r9,r27,384
	ctx.r9.s64 = r27.s64 + 384;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
loc_82BD8E70:
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82bd8e9c
	if (cr6.eq) goto loc_82BD8E9C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// stw r7,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// ble cr6,0x82bd8e9c
	if (!cr6.gt) goto loc_82BD8E9C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8e70
	goto loc_82BD8E70;
loc_82BD8E9C:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// stw r9,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r9.u32);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 48);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
loc_82BD8EBC:
	// stw r11,48(r21)
	PPC_STORE_U32(r21.u32 + 48, r11.u32);
	// b 0x82bd90d0
	goto loc_82BD90D0;
loc_82BD8EC4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bd6808
	sub_82BD6808(ctx, base);
	// b 0x82bd90d0
	goto loc_82BD90D0;
loc_82BD8ED4:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82bd8efc
	if (!cr6.eq) goto loc_82BD8EFC;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bd6a50
	sub_82BD6A50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bd90d0
	if (!cr0.eq) goto loc_82BD90D0;
loc_82BD8EFC:
	// rlwinm. r11,r23,0,27,27
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd8f0c
	if (cr0.eq) goto loc_82BD8F0C;
	// stw r19,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r19.u32);
	// b 0x82bd90d8
	goto loc_82BD90D8;
loc_82BD8F0C:
	// rlwinm r23,r23,0,14,1
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFC003FFFF;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd8fd4
	if (cr0.eq) goto loc_82BD8FD4;
	// rlwinm r11,r23,0,23,19
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// li r10,256
	ctx.r10.s64 = 256;
	// stw r11,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r11.u32);
	// lbz r9,5(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwimi r10,r9,4,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 4) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r23,r10,r11
	r23.u64 = ctx.r10.u64 | r11.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
	// beq 0x82bd8f50
	if (cr0.eq) goto loc_82BD8F50;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x82bd8f60
	goto loc_82BD8F60;
loc_82BD8F50:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_82BD8F60:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bd8f8c
	if (cr0.eq) goto loc_82BD8F8C;
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bd8f8c
	if (!cr0.eq) goto loc_82BD8F8C;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_82BD8F8C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd8fec
	goto loc_82BD8FEC;
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// andi. r11,r11,253
	r11.u64 = r11.u64 & 253;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// li r19,0
	r19.s64 = 0;
	// lwz r26,364(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// li r22,1
	r22.s64 = 1;
	// lwz r20,356(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 356);
	// lwz r23,348(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// lwz r27,340(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r24,80(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r25,92(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// b 0x82bd8fec
	goto loc_82BD8FEC;
loc_82BD8FD4:
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bd8fec
	if (cr0.eq) goto loc_82BD8FEC;
	// rlwinm r11,r11,18,0,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0xFFFC0000;
	// or r23,r11,r23
	r23.u64 = r11.u64 | r23.u64;
	// stw r23,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r23.u32);
loc_82BD8FEC:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r23,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bd7d30
	sub_82BD7D30(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82bd90c8
	if (cr0.eq) goto loc_82BD90C8;
	// lbz r10,-11(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + -11);
	// addi r11,r29,-16
	r11.s64 = r29.s64 + -16;
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bd907c
	if (cr0.eq) goto loc_82BD907C;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bd9028
	if (cr0.eq) goto loc_82BD9028;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// b 0x82bd9038
	goto loc_82BD9038;
loc_82BD9028:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-16
	ctx.r10.s64 = r11.s64 + -16;
loc_82BD9038:
	// lbz r11,5(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 5);
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bd9074
	if (cr0.eq) goto loc_82BD9074;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd9058
	if (cr0.eq) goto loc_82BD9058;
	// addi r11,r30,-32
	r11.s64 = r30.s64 + -32;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x82bd9068
	goto loc_82BD9068;
loc_82BD9058:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rotlwi r11,r11,4
	r11.u64 = __builtin_rotateleft32(r11.u32, 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
loc_82BD9068:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82bd907c
	goto loc_82BD907C;
loc_82BD9074:
	// std r19,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r19.u64);
	// std r19,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r19.u64);
loc_82BD907C:
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// blt cr6,0x82bd908c
	if (cr6.lt) goto loc_82BD908C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_82BD908C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// ble cr6,0x82bd90b8
	if (!cr6.gt) goto loc_82BD90B8;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd90b8
	if (cr0.eq) goto loc_82BD90B8;
	// subf r5,r25,r26
	ctx.r5.s64 = r26.s64 - r25.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r29,r25
	ctx.r3.u64 = r29.u64 + r25.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BD90B8:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bd8600
	sub_82BD8600(ctx, base);
loc_82BD90C8:
	// mr r20,r29
	r20.u64 = r29.u64;
	// stw r20,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r20.u32);
loc_82BD90D0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// bne cr6,0x82bd9104
	if (!cr6.eq) goto loc_82BD9104;
loc_82BD90D8:
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bd9104
	if (cr0.eq) goto loc_82BD9104;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stw r19,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r19.u32);
	// stw r22,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r22.u32);
	// stw r19,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r19.u32);
	// stw r24,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r24.u32);
	// bl 0x8324b59c
	__imp__RtlRaiseException(ctx, base);
loc_82BD9104:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82bd9120
	goto loc_82BD9120;
	// li r11,0
	r11.s64 = 0;
	// stw r11,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r11.u32);
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
loc_82BD9120:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	r12.s64 = r31.s64 + 320;
	// bl 0x82bd9158
	sub_82BD9158(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 356);
loc_82BD9130:
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82BD9138"))) PPC_WEAK_FUNC(sub_82BD9138);
PPC_FUNC_IMPL(__imp__sub_82BD9138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// b 0x82bd9170
	goto loc_82BD9170;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82BD9170:
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd9184
	if (cr6.eq) goto loc_82BD9184;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BD9184:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9158"))) PPC_WEAK_FUNC(sub_82BD9158);
PPC_FUNC_IMPL(__imp__sub_82BD9158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r21{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-320
	r31.s64 = r12.s64 + -320;
	// std r21,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r21.u64);
	// mflr r12
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd9184
	if (cr6.eq) goto loc_82BD9184;
	// lwz r3,1408(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 1408);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82BD9184:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	r21.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD919C"))) PPC_WEAK_FUNC(sub_82BD919C);
PPC_FUNC_IMPL(__imp__sub_82BD919C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD91C4"))) PPC_WEAK_FUNC(sub_82BD91C4);
PPC_FUNC_IMPL(__imp__sub_82BD91C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD91D0"))) PPC_WEAK_FUNC(sub_82BD91D0);
PPC_FUNC_IMPL(__imp__sub_82BD91D0) {
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
	// andi. r11,r3,5
	r11.u64 = ctx.r3.u64 & 5;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ori r3,r11,4096
	ctx.r3.u64 = r11.u64 | 4096;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82bd920c
	if (!cr6.lt) goto loc_82BD920C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82bd9208
	if (!cr6.eq) goto loc_82BD9208;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82bd9218
	goto loc_82BD9218;
loc_82BD9208:
	// lis r5,1
	ctx.r5.s64 = 65536;
loc_82BD920C:
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// ble cr6,0x82bd9218
	if (!cr6.gt) goto loc_82BD9218;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
loc_82BD9218:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd7788
	sub_82BD7788(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82bd9238
	if (!cr0.eq) goto loc_82BD9238;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82bd5600
	sub_82BD5600(ctx, base);
loc_82BD9238:
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

__attribute__((alias("__imp__sub_82BD9250"))) PPC_WEAK_FUNC(sub_82BD9250);
PPC_FUNC_IMPL(__imp__sub_82BD9250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82bd6940
	sub_82BD6940(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bd9270
	if (!cr0.eq) goto loc_82BD9270;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd927c
	goto loc_82BD927C;
loc_82BD9270:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82bd5600
	sub_82BD5600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD927C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9290"))) PPC_WEAK_FUNC(sub_82BD9290);
PPC_FUNC_IMPL(__imp__sub_82BD9290) {
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
	// bl 0x82bd92e8
	sub_82BD92E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82bd6fd0
	sub_82BD6FD0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD92C8"))) PPC_WEAK_FUNC(sub_82BD92C8);
PPC_FUNC_IMPL(__imp__sub_82BD92C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x82bd92d8
	if (!cr6.eq) goto loc_82BD92D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BD92D8:
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	r11.s64 = r11.s64 * -10000;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD92E8"))) PPC_WEAK_FUNC(sub_82BD92E8);
PPC_FUNC_IMPL(__imp__sub_82BD92E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r3,-7336(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7336);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD92F8"))) PPC_WEAK_FUNC(sub_82BD92F8);
PPC_FUNC_IMPL(__imp__sub_82BD92F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,10896(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 10896);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9328"))) PPC_WEAK_FUNC(sub_82BD9328);
PPC_FUNC_IMPL(__imp__sub_82BD9328) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82bd93dc
	if (cr6.eq) goto loc_82BD93DC;
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x82bd9384
	if (!cr6.eq) goto loc_82BD9384;
	// ld r9,21608(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 21608);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// std r9,21608(r10)
	PPC_STORE_U64(ctx.r10.u32 + 21608, ctx.r9.u64);
	// b 0x82bd9394
	goto loc_82BD9394;
loc_82BD9384:
	// ld r8,21600(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 21600);
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r9,21600(r10)
	PPC_STORE_U64(ctx.r10.u32 + 21600, ctx.r9.u64);
loc_82BD9394:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,13436(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13436);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd93dc
	if (cr6.eq) goto loc_82BD93DC;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f13,21592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21592);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// lfs f0,-5316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5316);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD93DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD93F0"))) PPC_WEAK_FUNC(sub_82BD93F0);
PPC_FUNC_IMPL(__imp__sub_82BD93F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,60(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9408"))) PPC_WEAK_FUNC(sub_82BD9408);
PPC_FUNC_IMPL(__imp__sub_82BD9408) {
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
	// li r11,4
	r11.s64 = 4;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cctpl 
loc_82BD9424:
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// db16cyc 
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd9424
	if (!cr0.eq) goto loc_82BD9424;
	// cctpm 
	// lbz r11,10941(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd94d4
	if (!cr0.eq) goto loc_82BD94D4;
	// lwz r11,10896(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 10896);
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,88(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82bd9484
	if (cr6.eq) goto loc_82BD9484;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82BD9484:
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
	// lwz r11,10888(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 10888);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x82bd94a4
	if (!cr6.eq) goto loc_82BD94A4;
	// lwz r11,11004(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 11004);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82bd94a4
	if (cr6.eq) goto loc_82BD94A4;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82BD94A4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// cmplwi cr6,r11,5000
	cr6.compare<uint32_t>(r11.u32, 5000, xer);
	// bge cr6,0x82bd94bc
	if (!cr6.lt) goto loc_82BD94BC;
loc_82BD94B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82bd94d8
	goto loc_82BD94D8;
loc_82BD94BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82beceb0
	sub_82BECEB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd94d4
	if (!cr0.eq) goto loc_82BD94D4;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// b 0x82bd94b4
	goto loc_82BD94B4;
loc_82BD94D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD94D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BD94E0"))) PPC_WEAK_FUNC(sub_82BD94E0);
PPC_FUNC_IMPL(__imp__sub_82BD94E0) {
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
	// lis r30,-31951
	r30.s64 = -2093940736;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-4336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4336);
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// ble cr6,0x82bd9510
	if (!cr6.gt) goto loc_82BD9510;
	// li r11,8192
	r11.s64 = 8192;
	// stw r11,-4336(r30)
	PPC_STORE_U32(r30.u32 + -4336, r11.u32);
loc_82BD9510:
	// stw r11,23996(r31)
	PPC_STORE_U32(r31.u32 + 23996, r11.u32);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// lwz r11,-4336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4336);
	// addi r11,r11,136
	r11.s64 = r11.s64 + 136;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,23984(r31)
	PPC_STORE_U32(r31.u32 + 23984, ctx.r3.u32);
	// bne 0x82bd953c
	if (!cr0.eq) goto loc_82BD953C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd9668
	goto loc_82BD9668;
loc_82BD953C:
	// lwz r11,-4336(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4336);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// stw r3,23992(r31)
	PPC_STORE_U32(r31.u32 + 23992, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82bd9574
	if (!cr0.eq) goto loc_82BD9574;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,23984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 23984);
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,23984(r31)
	PPC_STORE_U32(r31.u32 + 23984, r11.u32);
	// b 0x82bd9668
	goto loc_82BD9668;
loc_82BD9574:
	// lwz r11,23984(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23984);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,24
	ctx.r10.s64 = 24;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r6,-11560
	ctx.r4.s64 = ctx.r6.s64 + -11560;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// li r10,8709
	ctx.r10.s64 = 8709;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,8576
	ctx.r9.u64 = ctx.r9.u64 | 8576;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,10568(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 10568);
	// li r10,15
	ctx.r10.s64 = 15;
	// rlwinm r6,r6,0,29,20
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF807;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// lwz r9,23984(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 23984);
	// rlwinm r11,r9,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_82BD9618:
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// stwu r6,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r8.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r8.u32 = ea;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// bne 0x82bd9618
	if (!cr0.eq) goto loc_82BD9618;
	// lwz r11,23984(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23984);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// addi r11,r11,-28
	r11.s64 = r11.s64 + -28;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r11,23988(r31)
	PPC_STORE_U32(r31.u32 + 23988, r11.u32);
loc_82BD9668:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9680"))) PPC_WEAK_FUNC(sub_82BD9680);
PPC_FUNC_IMPL(__imp__sub_82BD9680) {
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
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,23984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 23984);
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,23992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 23992);
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,23984(r31)
	PPC_STORE_U32(r31.u32 + 23984, r11.u32);
	// stw r11,23992(r31)
	PPC_STORE_U32(r31.u32 + 23992, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD96D0"))) PPC_WEAK_FUNC(sub_82BD96D0);
PPC_FUNC_IMPL(__imp__sub_82BD96D0) {
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
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82bd9708
	if (!cr6.eq) goto loc_82BD9708;
	// bl 0x82bedaa0
	sub_82BEDAA0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bd9710
	goto loc_82BD9710;
loc_82BD9708:
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
loc_82BD9710:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9728"))) PPC_WEAK_FUNC(sub_82BD9728);
PPC_FUNC_IMPL(__imp__sub_82BD9728) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// bl 0x82bec2d8
	sub_82BEC2D8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd9790
	if (!cr0.eq) goto loc_82BD9790;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec208
	sub_82BEC208(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed4f8
	sub_82BED4F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed2a8
	sub_82BED2A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd978c
	if (!cr0.eq) goto loc_82BD978C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed4f8
	sub_82BED4F8(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82bd9790
	goto loc_82BD9790;
loc_82BD978C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD9790:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD97A8"))) PPC_WEAK_FUNC(sub_82BD97A8);
PPC_FUNC_IMPL(__imp__sub_82BD97A8) {
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
	// lwz r11,10888(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10888);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd97cc
	if (cr6.eq) goto loc_82BD97CC;
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
loc_82BD97CC:
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
	// stw r3,10888(r31)
	PPC_STORE_U32(r31.u32 + 10888, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD97E8"))) PPC_WEAK_FUNC(sub_82BD97E8);
PPC_FUNC_IMPL(__imp__sub_82BD97E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// eieio 
	// li r11,0
	r11.s64 = 0;
	// stw r11,10888(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10888, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD97F8"))) PPC_WEAK_FUNC(sub_82BD97F8);
PPC_FUNC_IMPL(__imp__sub_82BD97F8) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,12440
	r29.s64 = r31.s64 + 12440;
loc_82BD9810:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,14832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14832);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd9830
	if (cr6.eq) goto loc_82BD9830;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdd9f0
	sub_82BDD9F0(ctx, base);
loc_82BD9830:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x82bd9810
	if (cr6.lt) goto loc_82BD9810;
	// lwz r11,12456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// lwz r10,14824(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14824);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd985c
	if (cr6.eq) goto loc_82BD985C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bddd38
	sub_82BDDD38(ctx, base);
loc_82BD985C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be0110
	sub_82BE0110(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdfe58
	sub_82BDFE58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be02e0
	sub_82BE02E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdd218
	sub_82BDD218(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// rldicr r29,r11,63,63
	r29.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82BD9898:
	// subfic r11,r30,95
	xer.ca = r30.u32 <= 95;
	r11.s64 = 95 - r30.s64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mulli r11,r11,21846
	r11.s64 = r11.s64 * 21846;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r8,r29,r11
	ctx.r8.u64 = r11.u8 & 0x40 ? 0 : (r29.u64 >> (r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdd0f8
	sub_82BDD0F8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// blt cr6,0x82bd9898
	if (cr6.lt) goto loc_82BD9898;
	// li r30,0
	r30.s64 = 0;
loc_82BD98D8:
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r6,r29,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (r29.u64 >> (r11.u8 & 0x7F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be9818
	sub_82BE9818(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,26
	cr6.compare<uint32_t>(r30.u32, 26, xer);
	// blt cr6,0x82bd98d8
	if (cr6.lt) goto loc_82BD98D8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BD9908"))) PPC_WEAK_FUNC(sub_82BD9908);
PPC_FUNC_IMPL(__imp__sub_82BD9908) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bd9948
	if (cr0.eq) goto loc_82BD9948;
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// stw r3,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
loc_82BD9948:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BD9960"))) PPC_WEAK_FUNC(sub_82BD9960);
PPC_FUNC_IMPL(__imp__sub_82BD9960) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82bd9908
	sub_82BD9908(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82bd9994
	if (cr0.eq) goto loc_82BD9994;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BD9994:
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

__attribute__((alias("__imp__sub_82BD99B0"))) PPC_WEAK_FUNC(sub_82BD99B0);
PPC_FUNC_IMPL(__imp__sub_82BD99B0) {
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
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,24064
	ctx.r3.s64 = 24064;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x82bd9960
	sub_82BD9960(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82bd99f4
	if (!cr0.eq) goto loc_82BD99F4;
loc_82BD99E8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82bd9a7c
	goto loc_82BD9A7C;
loc_82BD99F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed740
	sub_82BED740(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd9a14
	if (!cr0.eq) goto loc_82BD9A14;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// b 0x82bd99e8
	goto loc_82BD99E8;
loc_82BD9A14:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x82bd9a4c
	if (!cr6.eq) goto loc_82BD9A4C;
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stb r11,10940(r31)
	PPC_STORE_U8(r31.u32 + 10940, r11.u8);
	// bl 0x82beae48
	sub_82BEAE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed9d0
	sub_82BED9D0(ctx, base);
loc_82BD9A38:
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82bd9a74
	if (!cr0.eq) goto loc_82BD9A74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd96d0
	sub_82BD96D0(ctx, base);
	// b 0x82bd99e8
	goto loc_82BD99E8;
loc_82BD9A4C:
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd9a60
	if (!cr0.eq) goto loc_82BD9A60;
	// rlwinm. r11,r30,0,2,7
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bd9a60
	if (!cr0.eq) goto loc_82BD9A60;
	// oris r30,r30,3072
	r30.u64 = r30.u64 | 201326592;
loc_82BD9A60:
	// stw r30,23980(r31)
	PPC_STORE_U32(r31.u32 + 23980, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed7b8
	sub_82BED7B8(ctx, base);
	// b 0x82bd9a38
	goto loc_82BD9A38;
loc_82BD9A74:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BD9A7C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BD9A88"))) PPC_WEAK_FUNC(sub_82BD9A88);
PPC_FUNC_IMPL(__imp__sub_82BD9A88) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lis r11,10280
	r11.s64 = 673710080;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r30,r11,310
	r30.u64 = r11.u64 | 310;
	// bne cr6,0x82bd9ad4
	if (!cr6.eq) goto loc_82BD9AD4;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82bd9acc
	if (!cr6.eq) goto loc_82BD9ACC;
	// bl 0x82bee2c0
	sub_82BEE2C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x82bd9adc
	goto loc_82BD9ADC;
loc_82BD9ACC:
	// bl 0x82bee270
	sub_82BEE270(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82BD9AD4:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bne cr6,0x82bd9ae8
	if (!cr6.eq) goto loc_82BD9AE8;
loc_82BD9ADC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bee170
	sub_82BEE170(ctx, base);
	// b 0x82bd9af0
	goto loc_82BD9AF0;
loc_82BD9AE8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bee078
	sub_82BEE078(ctx, base);
loc_82BD9AF0:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BD9AF8"))) PPC_WEAK_FUNC(sub_82BD9AF8);
PPC_FUNC_IMPL(__imp__sub_82BD9AF8) {
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
	// addi r30,r31,16712
	r30.s64 = r31.s64 + 16712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8324b5bc
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,16548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16548(r31)
	PPC_STORE_U32(r31.u32 + 16548, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,16704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16704);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16700(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16700);
	// stw r11,16552(r31)
	PPC_STORE_U32(r31.u32 + 16552, r11.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd9bb8
	if (cr6.eq) goto loc_82BD9BB8;
loc_82BD9B40:
	// lwz r11,16700(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16700);
	// lwz r8,16548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// rlwinm r11,r11,3,25,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x78;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r11,16572
	ctx.r10.s64 = r11.s64 + 16572;
	// lwz r10,16576(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16576);
	// lwz r11,16572(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16572);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82bd9bb8
	if (cr6.gt) goto loc_82BD9BB8;
	// lwz r10,16568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16568);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16568(r31)
	PPC_STORE_U32(r31.u32 + 16568, ctx.r10.u32);
	// bne cr6,0x82bd9b84
	if (!cr6.eq) goto loc_82BD9B84;
	// lwz r11,10900(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10900);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x82bd9b94
	goto loc_82BD9B94;
loc_82BD9B84:
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,24848(r10)
	PPC_MM_STORE_U32(ctx.r10.u32 + 24848, r11.u32);
	// eieio 
	// sync 
loc_82BD9B94:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,16700(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16700);
	// stw r10,23376(r31)
	PPC_STORE_U32(r31.u32 + 23376, ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16700(r31)
	PPC_STORE_U32(r31.u32 + 16700, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,16704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16704);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd9b40
	if (!cr6.eq) goto loc_82BD9B40;
loc_82BD9BB8:
	// lwz r11,16544(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd9be4
	if (cr6.eq) goto loc_82BD9BE4;
	// lwz r10,16568(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16568);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r8,16548(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BD9BE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bd4ac8
	sub_82BD4AC8(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sradi r11,r11,10
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0x3FF) != 0);
	r11.s64 = r11.s64 >> 10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,21676(r31)
	PPC_STORE_U32(r31.u32 + 21676, r11.u32);
	// bl 0x8324b5ac
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BD9C10"))) PPC_WEAK_FUNC(sub_82BD9C10);
PPC_FUNC_IMPL(__imp__sub_82BD9C10) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82bd9c38
	if (!cr6.eq) goto loc_82BD9C38;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1424);
	// b 0x82bd9c40
	goto loc_82BD9C40;
loc_82BD9C38:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1428);
loc_82BD9C40:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r26,r31,16712
	r26.s64 = r31.s64 + 16712;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8324b5bc
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,16564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16564);
	// lwz r11,21556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21556);
	// rlwinm r29,r30,24,28,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r27,r30,24
	r27.u64 = r30.u32 & 0xFF;
	// rlwinm r28,r30,0,0,19
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,16564(r31)
	PPC_STORE_U32(r31.u32 + 16564, ctx.r10.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// bne cr6,0x82bd9c80
	if (!cr6.eq) goto loc_82BD9C80;
	// li r30,60
	r30.s64 = 60;
loc_82BD9C80:
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,16552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16552);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r24,r10,r11
	r24.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8324b5cc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r10,r24,100
	ctx.r10.s64 = r24.s64 * 100;
	// divwu r11,r11,r30
	r11.u32 = r11.u32 / r30.u32;
	// twllei r30,0
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// cmplwi cr6,r7,100
	cr6.compare<uint32_t>(ctx.r7.u32, 100, xer);
	// ble cr6,0x82bd9cbc
	if (!cr6.gt) goto loc_82BD9CBC;
	// li r7,100
	ctx.r7.s64 = 100;
loc_82BD9CBC:
	// lwz r8,16556(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16556);
	// lwz r10,16548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// add r11,r8,r29
	r11.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82bd9ce8
	if (cr6.gt) goto loc_82BD9CE8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bd9ce8
	if (cr6.eq) goto loc_82BD9CE8;
	// cmplw cr6,r7,r27
	cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, xer);
	// ble cr6,0x82bd9ce8
	if (!cr6.gt) goto loc_82BD9CE8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82BD9CE8:
	// lwz r9,16540(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16540);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bd9d2c
	if (cr6.eq) goto loc_82BD9D2C;
	// cntlzw r6,r28
	ctx.r6.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r5,16564(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16564);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r6,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82BD9D2C:
	// lwz r10,16548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// stw r11,16556(r31)
	PPC_STORE_U32(r31.u32 + 16556, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bd9d70
	if (cr6.eq) goto loc_82BD9D70;
	// lwz r10,16564(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16564);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82bd9d70
	if (cr6.eq) goto loc_82BD9D70;
	// lwz r10,16704(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16704);
	// rlwinm r10,r10,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x78;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r9,r10,16572
	ctx.r9.s64 = ctx.r10.s64 + 16572;
	// stw r11,16576(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16576, r11.u32);
	// stw r28,16572(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16572, r28.u32);
	// lwz r11,16704(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16704);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16704(r31)
	PPC_STORE_U32(r31.u32 + 16704, r11.u32);
	// b 0x82bd9dac
	goto loc_82BD9DAC;
loc_82BD9D70:
	// lwz r11,16568(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16568);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16568(r31)
	PPC_STORE_U32(r31.u32 + 16568, r11.u32);
	// beq cr6,0x82bd9d98
	if (cr6.eq) goto loc_82BD9D98;
	// lis r11,32712
	r11.s64 = 2143813632;
	// stw r28,24848(r11)
	PPC_MM_STORE_U32(r11.u32 + 24848, r28.u32);
	// eieio 
	// sync 
	// b 0x82bd9da4
	goto loc_82BD9DA4;
loc_82BD9D98:
	// lwz r11,10900(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10900);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82BD9DA4:
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,23376(r31)
	PPC_STORE_U32(r31.u32 + 23376, r11.u32);
loc_82BD9DAC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8324b5ac
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82BD9DC0"))) PPC_WEAK_FUNC(sub_82BD9DC0);
PPC_FUNC_IMPL(__imp__sub_82BD9DC0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82befc08
	sub_82BEFC08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be9b28
	sub_82BE9B28(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82bd9e70
	if (!cr6.eq) goto loc_82BD9E70;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bd9e0c
	if (!cr6.gt) goto loc_82BD9E0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BD9E0C:
	// li r11,1401
	r11.s64 = 1401;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,-16380
	r11.s64 = -1073479680;
	// li r9,19
	ctx.r9.s64 = 19;
	// ori r11,r11,15360
	r11.u64 = r11.u64 | 15360;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r6,256
	ctx.r6.s64 = 256;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10900);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82BD9E70:
	// lwz r11,13596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13596);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bd9eb8
	if (cr6.eq) goto loc_82BD9EB8;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82bd9eb8
	if (cr6.eq) goto loc_82BD9EB8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82bd9eb0
	if (cr6.eq) goto loc_82BD9EB0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x82bd9ea8
	if (cr6.eq) goto loc_82BD9EA8;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bd9ec0
	if (!cr6.eq) goto loc_82BD9EC0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bd9ec4
	goto loc_82BD9EC4;
loc_82BD9EA8:
	// li r11,3
	r11.s64 = 3;
	// b 0x82bd9ec4
	goto loc_82BD9EC4;
loc_82BD9EB0:
	// li r11,2
	r11.s64 = 2;
	// b 0x82bd9ec4
	goto loc_82BD9EC4;
loc_82BD9EB8:
	// li r11,1
	r11.s64 = 1;
	// b 0x82bd9ec4
	goto loc_82BD9EC4;
loc_82BD9EC0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BD9EC4:
	// lwz r10,11852(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11852);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r10,9,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x7F;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// or r30,r11,r29
	r30.u64 = r11.u64 | r29.u64;
	// ble cr6,0x82bd9ef4
	if (!cr6.gt) goto loc_82BD9EF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82BD9EF4:
	// lis r11,-32066
	r11.s64 = -2101477376;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r11,-25584
	ctx.r6.s64 = r11.s64 + -25584;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beb740
	sub_82BEB740(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x82bd9f7c
	if (!cr6.eq) goto loc_82BD9F7C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bd9f2c
	if (!cr6.gt) goto loc_82BD9F2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BD9F2C:
	// lis r11,-16380
	r11.s64 = -1073479680;
	// li r10,19
	ctx.r10.s64 = 19;
	// ori r11,r11,15360
	r11.u64 = r11.u64 | 15360;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,256
	ctx.r8.s64 = 256;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10900(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10900);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82BD9F7C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82befc08
	sub_82BEFC08(ctx, base);
	// lbz r11,10941(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10941);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,10941(r31)
	PPC_STORE_U8(r31.u32 + 10941, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BD9FA0"))) PPC_WEAK_FUNC(sub_82BD9FA0);
PPC_FUNC_IMPL(__imp__sub_82BD9FA0) {
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
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bd9fd4
	if (!cr6.gt) goto loc_82BD9FD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BD9FD4:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r10,6209
	ctx.r10.s64 = 6209;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r8,-1793
	ctx.r8.s64 = -1793;
	// ori r11,r9,310
	r11.u64 = ctx.r9.u64 | 310;
	// li r7,6448
	ctx.r7.s64 = 6448;
	// subf r9,r31,r11
	ctx.r9.s64 = r11.s64 - r31.s64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r11,r9,3,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x100;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// beq cr6,0x82bda024
	if (cr6.eq) goto loc_82BDA024;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BDA024:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDA048"))) PPC_WEAK_FUNC(sub_82BDA048);
PPC_FUNC_IMPL(__imp__sub_82BDA048) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,23980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23980);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda074
	if (cr0.eq) goto loc_82BDA074;
	// bl 0x82bd9dc0
	sub_82BD9DC0(ctx, base);
	// b 0x82bda0c0
	goto loc_82BDA0C0;
loc_82BDA074:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bda08c
	if (!cr6.gt) goto loc_82BDA08C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDA08C:
	// li r10,6212
	ctx.r10.s64 = 6212;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// bl 0x82bd9fa0
	sub_82BD9FA0(ctx, base);
loc_82BDA0C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDA0C8"))) PPC_WEAK_FUNC(sub_82BDA0C8);
PPC_FUNC_IMPL(__imp__sub_82BDA0C8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r11,23980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23980);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda108
	if (cr0.eq) goto loc_82BDA108;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd9dc0
	sub_82BD9DC0(ctx, base);
loc_82BDA108:
	// rlwinm. r27,r25,0,29,29
	r27.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82bda1d4
	if (cr0.eq) goto loc_82BDA1D4;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bda128
	if (!cr6.gt) goto loc_82BDA128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDA128:
	// li r11,6515
	r11.s64 = 6515;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,6500
	r11.s64 = 6500;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r22,0
	r22.s64 = 0;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r21,3
	r21.s64 = 3;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r20,6515
	r20.s64 = 6515;
	// li r19,0
	r19.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r17,256
	r17.s64 = 256;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// li r16,6226
	r16.s64 = 6226;
	// li r11,0
	r11.s64 = 0;
	// li r15,6200
	r15.s64 = 6200;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r9,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r14.u32 = ea;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r8,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r14.u32 = ea;
	// stwu r22,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r22.u32);
	r14.u32 = ea;
	// stwu r10,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r14.u32 = ea;
	// stwu r21,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r21.u32);
	r14.u32 = ea;
	// stwu r20,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r20.u32);
	r14.u32 = ea;
	// stwu r19,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r19.u32);
	r14.u32 = ea;
	// stwu r18,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r18.u32);
	r14.u32 = ea;
	// stwu r17,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r17.u32);
	r14.u32 = ea;
	// stwu r16,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r16.u32);
	r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r11.u32);
	r14.u32 = ea;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r15,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r15.u32);
	r14.u32 = ea;
	// stwu r11,4(r14)
	ea = 4 + r14.u32;
	PPC_STORE_U32(ea, r11.u32);
	r14.u32 = ea;
	// stw r14,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r14.u32);
	// bl 0x82bf3420
	sub_82BF3420(ctx, base);
loc_82BDA1D4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd9fa0
	sub_82BD9FA0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bda1f8
	if (!cr6.gt) goto loc_82BDA1F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDA1F8:
	// rlwinm r11,r26,12,20,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0xFFF;
	// li r10,6212
	ctx.r10.s64 = 6212;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r26,3
	ctx.r10.u64 = r26.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// beq cr6,0x82bda278
	if (cr6.eq) goto loc_82BDA278;
	// li r10,6200
	ctx.r10.s64 = 6200;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r8,15360
	ctx.r10.u64 = ctx.r8.u64 | 15360;
	// li r8,6515
	ctx.r8.s64 = 6515;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,256
	ctx.r4.s64 = 256;
	// li r3,6226
	ctx.r3.s64 = 6226;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_82BDA278:
	// rlwinm. r10,r25,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x82bda294
	if (cr0.eq) goto loc_82BDA294;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd9a88
	sub_82BD9A88(ctx, base);
loc_82BDA294:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82BDA2A8"))) PPC_WEAK_FUNC(sub_82BDA2A8);
PPC_FUNC_IMPL(__imp__sub_82BDA2A8) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82bd9dc0
	sub_82BD9DC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDA2B0"))) PPC_WEAK_FUNC(sub_82BDA2B0);
PPC_FUNC_IMPL(__imp__sub_82BDA2B0) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r11,16560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16560);
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,16560(r31)
	PPC_STORE_U32(r31.u32 + 16560, r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r5,24
	ctx.r5.s64 = 24;
	// xori r23,r11,1
	r23.u64 = r11.u64 ^ 1;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,13608(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13608);
	// lwz r29,132(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r10,r29,26
	ctx.r10.u64 = r29.u32 & 0x3F;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x82bda314
	if (!cr6.eq) goto loc_82BDA314;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82bda320
	goto loc_82BDA320;
loc_82BDA314:
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82bda328
	if (!cr6.eq) goto loc_82BDA328;
	// li r10,27
	ctx.r10.s64 = 27;
loc_82BDA320:
	// rlwimi r29,r10,1,26,31
	r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3F) | (r29.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
loc_82BDA328:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r30,r11,15,17,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7FFF;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r31,14844
	ctx.r3.s64 = r31.s64 + 14844;
	// rlwimi r10,r30,0,19,30
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0x1FFE) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE001);
	// rlwimi r9,r11,25,22,29
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r30,r10,0,0,30
	r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (r30.u64 & 0xFFFFFFFF00000001);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r30,2,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x2;
	// lwz r10,13612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13612);
	// clrlwi r8,r9,19
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFF;
	// lwz r7,21632(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 21632);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r6,r29,0,0,19
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// clrlwi r5,r29,26
	ctx.r5.u64 = r29.u32 & 0x3F;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// mr r29,r24
	r29.u64 = r24.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// beq cr6,0x82bda414
	if (cr6.eq) goto loc_82BDA414;
	// lwz r10,21624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21624);
	// lwz r11,21628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21628);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bge cr6,0x82bda414
	if (!cr6.lt) goto loc_82BDA414;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10896);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r24.u32);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10896);
	// lwz r11,21628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21628);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r24.u32);
	// lwz r11,21628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21628);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lwz r11,10896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10896);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82befb78
	sub_82BEFB78(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82BDA414:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82bda454
	if (cr6.eq) goto loc_82BDA454;
	// addi r10,r31,13640
	ctx.r10.s64 = r31.s64 + 13640;
	// mr r11,r26
	r11.u64 = r26.u64;
	// addi r8,r26,28
	ctx.r8.s64 = r26.s64 + 28;
loc_82BDA428:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bda448
	if (!cr0.eq) goto loc_82BDA448;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82bda428
	if (!cr6.eq) goto loc_82BDA428;
loc_82BDA448:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r27,1
	r27.s64 = 1;
	// bne 0x82bda458
	if (!cr0.eq) goto loc_82BDA458;
loc_82BDA454:
	// mr r27,r24
	r27.u64 = r24.u64;
loc_82BDA458:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x82bda4ac
	if (cr6.eq) goto loc_82BDA4AC;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,-2132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2132);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82bda48c
	if (cr6.eq) goto loc_82BDA48C;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bda488
	if (!cr6.gt) goto loc_82BDA488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDA488:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82BDA48C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82bda4a0
	if (cr6.eq) goto loc_82BDA4A0;
	// lwz r11,23956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23956);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,23956(r31)
	PPC_STORE_U32(r31.u32 + 23956, r11.u32);
loc_82BDA4A0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf5b90
	sub_82BF5B90(ctx, base);
loc_82BDA4AC:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8324b60c
	__imp__VdGetSystemCommandBuffer(ctx, base);
	// lwz r11,21532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21532);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bda4d4
	if (cr6.eq) goto loc_82BDA4D4;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10896);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82bda524
	goto loc_82BDA524;
loc_82BDA4D4:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bec190
	sub_82BEC190(ctx, base);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r11,10896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10896);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8324b5fc
	__imp__VdSwap(ctx, base);
	// addi r11,r30,256
	r11.s64 = r30.s64 + 256;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82BDA524:
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r11,23348(r31)
	PPC_STORE_U32(r31.u32 + 23348, r11.u32);
	// beq cr6,0x82bda564
	if (cr6.eq) goto loc_82BDA564;
	// lwz r11,21628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21628);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10896);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82befb78
	sub_82BEFB78(ctx, base);
	// lwz r11,21628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21628);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,21628(r31)
	PPC_STORE_U32(r31.u32 + 21628, r11.u32);
loc_82BDA564:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bda574
	if (cr6.eq) goto loc_82BDA574;
	// stw r11,23976(r31)
	PPC_STORE_U32(r31.u32 + 23976, r11.u32);
loc_82BDA574:
	// lwz r30,16708(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16708);
	// stw r24,16708(r31)
	PPC_STORE_U32(r31.u32 + 16708, r24.u32);
	// rlwinm. r11,r30,0,28,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda59c
	if (cr0.eq) goto loc_82BDA59C;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r31,13544
	ctx.r4.s64 = r31.s64 + 13544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bed600
	sub_82BED600(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDA59C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82bda5c0
	if (cr6.eq) goto loc_82BDA5C0;
	// addi r3,r31,13640
	ctx.r3.s64 = r31.s64 + 13640;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf3650
	sub_82BF3650(ctx, base);
loc_82BDA5C0:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r26,r11,r10
	r26.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x82bda6ac
	if (cr6.eq) goto loc_82BDA6AC;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x82bda6ac
	if (!cr6.eq) goto loc_82BDA6AC;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r31,13668
	ctx.r3.s64 = r31.s64 + 13668;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// lis r28,10280
	r28.s64 = 673710080;
	// bne cr6,0x82bda614
	if (!cr6.eq) goto loc_82BDA614;
	// ori r28,r28,310
	r28.u64 = r28.u64 | 310;
	// b 0x82bda618
	goto loc_82BDA618;
loc_82BDA614:
	// ori r28,r28,262
	r28.u64 = r28.u64 | 262;
loc_82BDA618:
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bda674
	if (cr6.eq) goto loc_82BDA674;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,56
	ctx.r8.s64 = r11.s64 + 56;
loc_82BDA630:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bda650
	if (!cr0.eq) goto loc_82BDA650;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82bda630
	if (!cr6.eq) goto loc_82BDA630;
loc_82BDA650:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bda674
	if (cr0.eq) goto loc_82BDA674;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lbz r11,10942(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10942);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,10942(r31)
	PPC_STORE_U8(r31.u32 + 10942, r11.u8);
	// b 0x82bda690
	goto loc_82BDA690;
loc_82BDA674:
	// lbz r11,10942(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10942);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda694
	if (cr0.eq) goto loc_82BDA694;
	// lwz r11,352(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bda694
	if (!cr6.eq) goto loc_82BDA694;
	// addi r29,r31,13724
	r29.s64 = r31.s64 + 13724;
loc_82BDA690:
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
loc_82BDA694:
	// lbz r11,10943(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bda6a4
	if (!cr0.eq) goto loc_82BDA6A4;
	// ori r30,r30,3
	r30.u64 = r30.u64 | 3;
loc_82BDA6A4:
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// b 0x82bda6f8
	goto loc_82BDA6F8;
loc_82BDA6AC:
	// lbz r11,10942(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10942);
	// addi r29,r31,13724
	r29.s64 = r31.s64 + 13724;
	// lwz r28,13608(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 13608);
	// addi r27,r31,15004
	r27.s64 = r31.s64 + 15004;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda6e4
	if (cr0.eq) goto loc_82BDA6E4;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,13668
	ctx.r3.s64 = r31.s64 + 13668;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lbz r11,10942(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10942);
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,10942(r31)
	PPC_STORE_U8(r31.u32 + 10942, r11.u8);
loc_82BDA6E4:
	// lbz r11,10943(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bda6f4
	if (cr0.eq) goto loc_82BDA6F4;
	// ori r30,r30,3
	r30.u64 = r30.u64 | 3;
loc_82BDA6F4:
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_82BDA6F8:
	// stb r11,10943(r31)
	PPC_STORE_U8(r31.u32 + 10943, r11.u8);
	// lis r11,-31943
	r11.s64 = -2093416448;
	// lwz r11,-2092(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -2092);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82bda718
	if (!cr6.eq) goto loc_82BDA718;
	// lbz r11,10941(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda71c
	if (cr0.eq) goto loc_82BDA71C;
loc_82BDA718:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82BDA71C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82bda74c
	if (cr6.eq) goto loc_82BDA74C;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82bda0c8
	sub_82BDA0C8(ctx, base);
	// b 0x82bda758
	goto loc_82BDA758;
loc_82BDA74C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82bda048
	sub_82BDA048(ctx, base);
loc_82BDA758:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf13c0
	sub_82BF13C0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda800
	if (cr0.eq) goto loc_82BDA800;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x82bda800
	if (cr6.eq) goto loc_82BDA800;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bda7a8
	if (!cr6.gt) goto loc_82BDA7A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDA7A8:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// li r10,7758
	ctx.r10.s64 = 7758;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r24
	r11.u64 = r24.u64;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// std r24,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, r24.u64);
	// stw r24,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r24.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// bl 0x8324b5ec
	__imp__VdPersistDisplay(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82bda800
	if (cr0.eq) goto loc_82BDA800;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8324b5dc
	__imp__MmFreePhysicalMemory(ctx, base);
loc_82BDA800:
	// lwz r30,10908(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 10908);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,10928(r31)
	PPC_STORE_U32(r31.u32 + 10928, r30.u32);
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf3680
	sub_82BF3680(ctx, base);
	// lwz r11,14912(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14912);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82bebba8
	sub_82BEBBA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,14940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 14940);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beb670
	sub_82BEB670(ctx, base);
	// lwz r11,23980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23980);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bda894
	if (cr0.eq) goto loc_82BDA894;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bd92f8
	sub_82BD92F8(ctx, base);
loc_82BDA864:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bd9408
	sub_82BD9408(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bda888
	if (cr0.eq) goto loc_82BDA888;
	// lwz r11,16568(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16568);
	// lwz r10,16560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16560);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bge cr6,0x82bda864
	if (!cr6.lt) goto loc_82BDA864;
loc_82BDA888:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bd9328
	sub_82BD9328(ctx, base);
	// b 0x82bda898
	goto loc_82BDA898;
loc_82BDA894:
	// stw r30,14940(r31)
	PPC_STORE_U32(r31.u32 + 14940, r30.u32);
loc_82BDA898:
	// lbz r11,10941(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10941);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,10941(r31)
	PPC_STORE_U8(r31.u32 + 10941, r11.u8);
	// bl 0x82bf1668
	sub_82BF1668(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdd560
	sub_82BDD560(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82BDA8C0"))) PPC_WEAK_FUNC(sub_82BDA8C0);
PPC_FUNC_IMPL(__imp__sub_82BDA8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,12648
	ctx.r4.s64 = r31.s64 + 12648;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,12676(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12676);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,12680(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12680);
	// lwz r8,12684(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12684);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12688(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12688);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,14832(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 14832);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bl 0x82bdd9f0
	sub_82BDD9F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bd9dc0
	sub_82BD9DC0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r6,14828(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 14828);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lfs f1,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vrlimi128 v62,v63,4,3
	simde_mm_store_ps(v62.f32, simde_mm_blend_ps(simde_mm_load_ps(v62.f32), simde_mm_permute_ps(simde_mm_load_ps(v63.f32), 57), 4));
	// lvlx128 v61,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,0
	ctx.r9.s64 = 0;
	// lvlx128 v60,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v60,v61,4,3
	simde_mm_store_ps(v60.f32, simde_mm_blend_ps(simde_mm_load_ps(v60.f32), simde_mm_permute_ps(simde_mm_load_ps(v61.f32), 57), 4));
	// vrlimi128 v60,v62,3,2
	simde_mm_store_ps(v60.f32, simde_mm_blend_ps(simde_mm_load_ps(v60.f32), simde_mm_permute_ps(simde_mm_load_ps(v62.f32), 78), 3));
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82bf6400
	sub_82BF6400(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82bdd940
	sub_82BDD940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82bdcfb0
	sub_82BDCFB0(ctx, base);
	// addi r5,r31,13640
	ctx.r5.s64 = r31.s64 + 13640;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,14828(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 14828);
	// bl 0x82bda2b0
	sub_82BDA2B0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDA9F0"))) PPC_WEAK_FUNC(sub_82BDA9F0);
PPC_FUNC_IMPL(__imp__sub_82BDA9F0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bdaa28
	if (!cr6.gt) goto loc_82BDAA28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDAA28:
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdaa3c
	if (cr0.eq) goto loc_82BDAA3C;
	// li r11,1
	r11.s64 = 1;
	// b 0x82bdaacc
	goto loc_82BDAACC;
loc_82BDAA3C:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdaac4
	if (cr0.eq) goto loc_82BDAAC4;
	// lwz r11,12440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12728);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdaa5c
	if (cr6.eq) goto loc_82BDAA5C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdaac4
	if (!cr6.eq) goto loc_82BDAAC4;
loc_82BDAA5C:
	// lwz r11,12444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12732);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdaa74
	if (cr6.eq) goto loc_82BDAA74;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdaac4
	if (!cr6.eq) goto loc_82BDAAC4;
loc_82BDAA74:
	// lwz r11,12448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12736);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdaa8c
	if (cr6.eq) goto loc_82BDAA8C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdaac4
	if (!cr6.eq) goto loc_82BDAAC4;
loc_82BDAA8C:
	// lwz r11,12452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12740);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdaaa4
	if (cr6.eq) goto loc_82BDAAA4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdaac4
	if (!cr6.eq) goto loc_82BDAAC4;
loc_82BDAAA4:
	// lwz r11,12456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12744);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdaabc
	if (cr6.eq) goto loc_82BDAABC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdaac4
	if (!cr6.eq) goto loc_82BDAAC4;
loc_82BDAABC:
	// li r11,1
	r11.s64 = 1;
	// b 0x82bdaac8
	goto loc_82BDAAC8;
loc_82BDAAC4:
	// li r11,0
	r11.s64 = 0;
loc_82BDAAC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82BDAACC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x82bdab10
	if (!cr0.eq) goto loc_82BDAB10;
	// lis r11,2
	r11.s64 = 131072;
	// rlwinm r9,r24,16,2,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0x3FFF0000;
	// ori r11,r11,8320
	r11.u64 = r11.u64 | 8320;
	// rlwinm r8,r22,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0x3FFF0000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r25,18
	r11.u64 = r25.u32 & 0x3FFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r9,r23,18
	ctx.r9.u64 = r23.u32 & 0x3FFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// b 0x82bdacd4
	goto loc_82BDACD4;
loc_82BDAB10:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r11,r11,24832
	r11.u64 = r11.u64 | 24832;
	// li r27,0
	r27.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,24576
	r26.u64 = ctx.r9.u64 | 24576;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,12748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12748);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82bdac54
	if (!cr6.gt) goto loc_82BDAC54;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,12756
	r30.s64 = r31.s64 + 12756;
	// addi r28,r31,12996
	r28.s64 = r31.s64 + 12996;
loc_82BDAB48:
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r6,-4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(r25.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82bdab64
	if (cr6.gt) goto loc_82BDAB64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82BDAB64:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(r24.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82bdab78
	if (cr6.gt) goto loc_82BDAB78;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82BDAB78:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r23,r9
	cr6.compare<int32_t>(r23.s32, ctx.r9.s32, xer);
	// bge cr6,0x82bdab88
	if (!cr6.lt) goto loc_82BDAB88;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_82BDAB88:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r22,r10
	cr6.compare<int32_t>(r22.s32, ctx.r10.s32, xer);
	// bge cr6,0x82bdab98
	if (!cr6.lt) goto loc_82BDAB98;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82BDAB98:
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bge cr6,0x82bdaba8
	if (!cr6.lt) goto loc_82BDABA8;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x82bdabb8
	if (cr6.lt) goto loc_82BDABB8;
loc_82BDABA8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82BDABB8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// lis r4,-16381
	ctx.r4.s64 = -1073545216;
	// slw r3,r3,r29
	ctx.r3.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// ori r4,r4,11521
	ctx.r4.u64 = ctx.r4.u64 | 11521;
	// lis r21,4
	r21.s64 = 262144;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// ori r21,r21,128
	r21.u64 = r21.u64 | 128;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// rlwinm r5,r5,16,1,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF0000;
	// clrlwi r6,r6,17
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r7,r7,18
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFF;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// rlwinm r10,r10,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ble cr6,0x82bdac38
	if (!cr6.gt) goto loc_82BDAC38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BDAC38:
	// lwz r10,12748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12748);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82bdab48
	if (cr6.lt) goto loc_82BDAB48;
loc_82BDAC54:
	// lbz r10,10943(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdacb4
	if (cr0.eq) goto loc_82BDACB4;
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdacb4
	if (cr0.eq) goto loc_82BDACB4;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r10,r8,11521
	ctx.r10.u64 = ctx.r8.u64 | 11521;
	// ori r8,r7,129
	ctx.r8.u64 = ctx.r7.u64 | 129;
	// rlwinm r7,r24,16,2,15
	ctx.r7.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0x3FFF0000;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// clrlwi r6,r25,18
	ctx.r6.u64 = r25.u32 & 0x3FFF;
	// rlwinm r5,r22,16,2,15
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0x3FFF0000;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// clrlwi r9,r23,18
	ctx.r9.u64 = r23.u32 & 0x3FFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_82BDACB4:
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,12708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12708);
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,12712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12712);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_82BDACD4:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82BDACE0"))) PPC_WEAK_FUNC(sub_82BDACE0);
PPC_FUNC_IMPL(__imp__sub_82BDACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAD00"))) PPC_WEAK_FUNC(sub_82BDAD00);
PPC_FUNC_IMPL(__imp__sub_82BDAD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAD10"))) PPC_WEAK_FUNC(sub_82BDAD10);
PPC_FUNC_IMPL(__imp__sub_82BDAD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,3,21,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x7F8) | (r11.u64 & 0xFFFFFFFFFFFFF807);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAD30"))) PPC_WEAK_FUNC(sub_82BDAD30);
PPC_FUNC_IMPL(__imp__sub_82BDAD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAD40"))) PPC_WEAK_FUNC(sub_82BDAD40);
PPC_FUNC_IMPL(__imp__sub_82BDAD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,3,28,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAD68"))) PPC_WEAK_FUNC(sub_82BDAD68);
PPC_FUNC_IMPL(__imp__sub_82BDAD68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAD78"))) PPC_WEAK_FUNC(sub_82BDAD78);
PPC_FUNC_IMPL(__imp__sub_82BDAD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,31,0,0
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82bdadb0
	if (!cr0.eq) goto loc_82BDADB0;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_82BDADB0:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82bdadc0
	if (!cr6.eq) goto loc_82BDADC0;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_82BDADC0:
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDADF8"))) PPC_WEAK_FUNC(sub_82BDADF8);
PPC_FUNC_IMPL(__imp__sub_82BDADF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAE08"))) PPC_WEAK_FUNC(sub_82BDAE08);
PPC_FUNC_IMPL(__imp__sub_82BDAE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82bdae4c
	if (!cr0.eq) goto loc_82BDAE4C;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_82BDAE4C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAE88"))) PPC_WEAK_FUNC(sub_82BDAE88);
PPC_FUNC_IMPL(__imp__sub_82BDAE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAE98"))) PPC_WEAK_FUNC(sub_82BDAE98);
PPC_FUNC_IMPL(__imp__sub_82BDAE98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82bdaedc
	if (!cr0.eq) goto loc_82BDAEDC;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_82BDAEDC:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAF18"))) PPC_WEAK_FUNC(sub_82BDAF18);
PPC_FUNC_IMPL(__imp__sub_82BDAF18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAF28"))) PPC_WEAK_FUNC(sub_82BDAF28);
PPC_FUNC_IMPL(__imp__sub_82BDAF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne 0x82bdaf6c
	if (!cr0.eq) goto loc_82BDAF6C;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_82BDAF6C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAFA8"))) PPC_WEAK_FUNC(sub_82BDAFA8);
PPC_FUNC_IMPL(__imp__sub_82BDAFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDAFB8"))) PPC_WEAK_FUNC(sub_82BDAFB8);
PPC_FUNC_IMPL(__imp__sub_82BDAFB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB018"))) PPC_WEAK_FUNC(sub_82BDB018);
PPC_FUNC_IMPL(__imp__sub_82BDB018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB028"))) PPC_WEAK_FUNC(sub_82BDB028);
PPC_FUNC_IMPL(__imp__sub_82BDB028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB088"))) PPC_WEAK_FUNC(sub_82BDB088);
PPC_FUNC_IMPL(__imp__sub_82BDB088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,11848(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB098"))) PPC_WEAK_FUNC(sub_82BDB098);
PPC_FUNC_IMPL(__imp__sub_82BDB098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,11848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,11848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11848, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB0F8"))) PPC_WEAK_FUNC(sub_82BDB0F8);
PPC_FUNC_IMPL(__imp__sub_82BDB0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,11848(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11848);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB108"))) PPC_WEAK_FUNC(sub_82BDB108);
PPC_FUNC_IMPL(__imp__sub_82BDB108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwimi r11,r4,30,1,1
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// lwz r11,11848(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11848);
	// bne cr6,0x82bdb144
	if (!cr6.eq) goto loc_82BDB144;
	// andi. r9,r11,4112
	ctx.r9.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
loc_82BDB144:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82bdb154
	if (!cr6.eq) goto loc_82BDB154;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_82BDB154:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB190"))) PPC_WEAK_FUNC(sub_82BDB190);
PPC_FUNC_IMPL(__imp__sub_82BDB190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB1A0"))) PPC_WEAK_FUNC(sub_82BDB1A0);
PPC_FUNC_IMPL(__imp__sub_82BDB1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-24904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24904);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,10500(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10500, temp.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB1D8"))) PPC_WEAK_FUNC(sub_82BDB1D8);
PPC_FUNC_IMPL(__imp__sub_82BDB1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,-12552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12552);
	f0.f64 = double(temp.f32);
	// lfs f13,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB200"))) PPC_WEAK_FUNC(sub_82BDB200);
PPC_FUNC_IMPL(__imp__sub_82BDB200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB220"))) PPC_WEAK_FUNC(sub_82BDB220);
PPC_FUNC_IMPL(__imp__sub_82BDB220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB230"))) PPC_WEAK_FUNC(sub_82BDB230);
PPC_FUNC_IMPL(__imp__sub_82BDB230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm r11,r4,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// lfs f0,-24904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r12,15
	r12.s64 = 15;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,10472(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10472, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f11,10468(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10468, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,10464(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10464, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,10476(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10476, temp.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB2C0"))) PPC_WEAK_FUNC(sub_82BDB2C0);
PPC_FUNC_IMPL(__imp__sub_82BDB2C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f11,10472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-12552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12552);
	f0.f64 = double(temp.f32);
	// lfs f13,-22120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22120);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-4(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB330"))) PPC_WEAK_FUNC(sub_82BDB330);
PPC_FUNC_IMPL(__imp__sub_82BDB330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10680, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB358"))) PPC_WEAK_FUNC(sub_82BDB358);
PPC_FUNC_IMPL(__imp__sub_82BDB358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB368"))) PPC_WEAK_FUNC(sub_82BDB368);
PPC_FUNC_IMPL(__imp__sub_82BDB368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,52,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,5576(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5576);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10606, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB3A8"))) PPC_WEAK_FUNC(sub_82BDB3A8);
PPC_FUNC_IMPL(__imp__sub_82BDB3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r11,10606(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-16564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16564);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB3D8"))) PPC_WEAK_FUNC(sub_82BDB3D8);
PPC_FUNC_IMPL(__imp__sub_82BDB3D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,23980(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23980);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bdb3ec
	if (cr6.eq) goto loc_82BDB3EC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x82bdb3f0
	goto loc_82BDB3F0;
loc_82BDB3EC:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82BDB3F0:
	// stw r11,23980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 23980, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB3F8"))) PPC_WEAK_FUNC(sub_82BDB3F8);
PPC_FUNC_IMPL(__imp__sub_82BDB3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,23980(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23980);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB408"))) PPC_WEAK_FUNC(sub_82BDB408);
PPC_FUNC_IMPL(__imp__sub_82BDB408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12456(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// stw r4,11876(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11876, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdb41c
	if (!cr6.eq) goto loc_82BDB41C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BDB41C:
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,1,30,30
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x2) | (r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB440"))) PPC_WEAK_FUNC(sub_82BDB440);
PPC_FUNC_IMPL(__imp__sub_82BDB440) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11876(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11876);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB448"))) PPC_WEAK_FUNC(sub_82BDB448);
PPC_FUNC_IMPL(__imp__sub_82BDB448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,2,29,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB468"))) PPC_WEAK_FUNC(sub_82BDB468);
PPC_FUNC_IMPL(__imp__sub_82BDB468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB478"))) PPC_WEAK_FUNC(sub_82BDB478);
PPC_FUNC_IMPL(__imp__sub_82BDB478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,4,25,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB4A0"))) PPC_WEAK_FUNC(sub_82BDB4A0);
PPC_FUNC_IMPL(__imp__sub_82BDB4A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB4B0"))) PPC_WEAK_FUNC(sub_82BDB4B0);
PPC_FUNC_IMPL(__imp__sub_82BDB4B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12456(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// stw r4,11880(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11880, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdb4c4
	if (!cr6.eq) goto loc_82BDB4C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BDB4C4:
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,0,31,31
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1) | (r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB4E8"))) PPC_WEAK_FUNC(sub_82BDB4E8);
PPC_FUNC_IMPL(__imp__sub_82BDB4E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11880);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB4F0"))) PPC_WEAK_FUNC(sub_82BDB4F0);
PPC_FUNC_IMPL(__imp__sub_82BDB4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB518"))) PPC_WEAK_FUNC(sub_82BDB518);
PPC_FUNC_IMPL(__imp__sub_82BDB518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB528"))) PPC_WEAK_FUNC(sub_82BDB528);
PPC_FUNC_IMPL(__imp__sub_82BDB528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,8,21,23
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB548"))) PPC_WEAK_FUNC(sub_82BDB548);
PPC_FUNC_IMPL(__imp__sub_82BDB548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB558"))) PPC_WEAK_FUNC(sub_82BDB558);
PPC_FUNC_IMPL(__imp__sub_82BDB558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,11,18,20
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB580"))) PPC_WEAK_FUNC(sub_82BDB580);
PPC_FUNC_IMPL(__imp__sub_82BDB580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB590"))) PPC_WEAK_FUNC(sub_82BDB590);
PPC_FUNC_IMPL(__imp__sub_82BDB590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,17,12,14
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB5B8"))) PPC_WEAK_FUNC(sub_82BDB5B8);
PPC_FUNC_IMPL(__imp__sub_82BDB5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB5C8"))) PPC_WEAK_FUNC(sub_82BDB5C8);
PPC_FUNC_IMPL(__imp__sub_82BDB5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,14,15,17
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB5E8"))) PPC_WEAK_FUNC(sub_82BDB5E8);
PPC_FUNC_IMPL(__imp__sub_82BDB5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB5F8"))) PPC_WEAK_FUNC(sub_82BDB5F8);
PPC_FUNC_IMPL(__imp__sub_82BDB5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB618"))) PPC_WEAK_FUNC(sub_82BDB618);
PPC_FUNC_IMPL(__imp__sub_82BDB618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB628"))) PPC_WEAK_FUNC(sub_82BDB628);
PPC_FUNC_IMPL(__imp__sub_82BDB628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB650"))) PPC_WEAK_FUNC(sub_82BDB650);
PPC_FUNC_IMPL(__imp__sub_82BDB650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB660"))) PPC_WEAK_FUNC(sub_82BDB660);
PPC_FUNC_IMPL(__imp__sub_82BDB660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,29,0,2
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB688"))) PPC_WEAK_FUNC(sub_82BDB688);
PPC_FUNC_IMPL(__imp__sub_82BDB688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB698"))) PPC_WEAK_FUNC(sub_82BDB698);
PPC_FUNC_IMPL(__imp__sub_82BDB698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,26,3,5
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB6B8"))) PPC_WEAK_FUNC(sub_82BDB6B8);
PPC_FUNC_IMPL(__imp__sub_82BDB6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB6C8"))) PPC_WEAK_FUNC(sub_82BDB6C8);
PPC_FUNC_IMPL(__imp__sub_82BDB6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10499(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10499, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB6E0"))) PPC_WEAK_FUNC(sub_82BDB6E0);
PPC_FUNC_IMPL(__imp__sub_82BDB6E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB6E8"))) PPC_WEAK_FUNC(sub_82BDB6E8);
PPC_FUNC_IMPL(__imp__sub_82BDB6E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10498(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10498, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB700"))) PPC_WEAK_FUNC(sub_82BDB700);
PPC_FUNC_IMPL(__imp__sub_82BDB700) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB708"))) PPC_WEAK_FUNC(sub_82BDB708);
PPC_FUNC_IMPL(__imp__sub_82BDB708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10497, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB720"))) PPC_WEAK_FUNC(sub_82BDB720);
PPC_FUNC_IMPL(__imp__sub_82BDB720) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB728"))) PPC_WEAK_FUNC(sub_82BDB728);
PPC_FUNC_IMPL(__imp__sub_82BDB728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB740"))) PPC_WEAK_FUNC(sub_82BDB740);
PPC_FUNC_IMPL(__imp__sub_82BDB740) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB748"))) PPC_WEAK_FUNC(sub_82BDB748);
PPC_FUNC_IMPL(__imp__sub_82BDB748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB760"))) PPC_WEAK_FUNC(sub_82BDB760);
PPC_FUNC_IMPL(__imp__sub_82BDB760) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB768"))) PPC_WEAK_FUNC(sub_82BDB768);
PPC_FUNC_IMPL(__imp__sub_82BDB768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB780"))) PPC_WEAK_FUNC(sub_82BDB780);
PPC_FUNC_IMPL(__imp__sub_82BDB780) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB788"))) PPC_WEAK_FUNC(sub_82BDB788);
PPC_FUNC_IMPL(__imp__sub_82BDB788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz r11,10564(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// li r12,1
	r12.s64 = 1;
	// rlwinm r11,r11,0,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// stw r11,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, r11.u32);
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB7C8"))) PPC_WEAK_FUNC(sub_82BDB7C8);
PPC_FUNC_IMPL(__imp__sub_82BDB7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10564(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB7D8"))) PPC_WEAK_FUNC(sub_82BDB7D8);
PPC_FUNC_IMPL(__imp__sub_82BDB7D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11856(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB7E0"))) PPC_WEAK_FUNC(sub_82BDB7E0);
PPC_FUNC_IMPL(__imp__sub_82BDB7E0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-24684(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24684);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82bdb814
	if (!cr6.eq) goto loc_82BDB814;
	// lfs f12,10836(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x82bdb818
	if (cr6.eq) goto loc_82BDB818;
loc_82BDB814:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BDB818:
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// rlwimi r11,r10,11,20,20
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// bne cr6,0x82bdb83c
	if (!cr6.eq) goto loc_82BDB83C;
	// lfs f12,10844(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10844);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x82bdb840
	if (cr6.eq) goto loc_82BDB840;
loc_82BDB83C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BDB840:
	// li r12,1
	r12.s64 = 1;
	// stfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10832, temp.u32);
	// rlwimi r11,r10,12,19,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10840(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10840, temp.u32);
	// rldicr r12,r12,45,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// rldicr r12,r12,43,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB888"))) PPC_WEAK_FUNC(sub_82BDB888);
PPC_FUNC_IMPL(__imp__sub_82BDB888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-7096(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7096);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB8A8"))) PPC_WEAK_FUNC(sub_82BDB8A8);
PPC_FUNC_IMPL(__imp__sub_82BDB8A8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x82bdb8d0
	if (!cr6.eq) goto loc_82BDB8D0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82bdb8d4
	if (cr6.eq) goto loc_82BDB8D4;
loc_82BDB8D0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BDB8D4:
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// lfs f12,10840(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// rlwimi r11,r10,11,20,20
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// bne cr6,0x82bdb8f8
	if (!cr6.eq) goto loc_82BDB8F8;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82bdb8fc
	if (cr6.eq) goto loc_82BDB8FC;
loc_82BDB8F8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82BDB8FC:
	// li r12,1
	r12.s64 = 1;
	// stfs f13,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10836, temp.u32);
	// rlwimi r11,r10,12,19,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10844(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10844, temp.u32);
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// rldicr r12,r12,42,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB940"))) PPC_WEAK_FUNC(sub_82BDB940);
PPC_FUNC_IMPL(__imp__sub_82BDB940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB950"))) PPC_WEAK_FUNC(sub_82BDB950);
PPC_FUNC_IMPL(__imp__sub_82BDB950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,15,16,16
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB970"))) PPC_WEAK_FUNC(sub_82BDB970);
PPC_FUNC_IMPL(__imp__sub_82BDB970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB980"))) PPC_WEAK_FUNC(sub_82BDB980);
PPC_FUNC_IMPL(__imp__sub_82BDB980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10752, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB998"))) PPC_WEAK_FUNC(sub_82BDB998);
PPC_FUNC_IMPL(__imp__sub_82BDB998) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB9A0"))) PPC_WEAK_FUNC(sub_82BDB9A0);
PPC_FUNC_IMPL(__imp__sub_82BDB9A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12440);
	// stw r4,11860(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11860, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdb9b4
	if (!cr6.eq) goto loc_82BDB9B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BDB9B4:
	// lwz r11,10460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB9D8"))) PPC_WEAK_FUNC(sub_82BDB9D8);
PPC_FUNC_IMPL(__imp__sub_82BDB9D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11860(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11860);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDB9E0"))) PPC_WEAK_FUNC(sub_82BDB9E0);
PPC_FUNC_IMPL(__imp__sub_82BDB9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12444(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// stw r4,11864(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11864, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdb9f4
	if (!cr6.eq) goto loc_82BDB9F4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BDB9F4:
	// lwz r11,10460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,4,24,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBA18"))) PPC_WEAK_FUNC(sub_82BDBA18);
PPC_FUNC_IMPL(__imp__sub_82BDBA18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11864(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11864);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBA20"))) PPC_WEAK_FUNC(sub_82BDBA20);
PPC_FUNC_IMPL(__imp__sub_82BDBA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12448(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// stw r4,11868(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11868, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdba34
	if (!cr6.eq) goto loc_82BDBA34;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BDBA34:
	// lwz r11,10460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,8,20,23
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBA58"))) PPC_WEAK_FUNC(sub_82BDBA58);
PPC_FUNC_IMPL(__imp__sub_82BDBA58) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11868(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11868);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBA60"))) PPC_WEAK_FUNC(sub_82BDBA60);
PPC_FUNC_IMPL(__imp__sub_82BDBA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12452(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// stw r4,11872(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11872, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdba74
	if (!cr6.eq) goto loc_82BDBA74;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82BDBA74:
	// lwz r11,10460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10460);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBA98"))) PPC_WEAK_FUNC(sub_82BDBA98);
PPC_FUNC_IMPL(__imp__sub_82BDBA98) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11872(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11872);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBAA0"))) PPC_WEAK_FUNC(sub_82BDBAA0);
PPC_FUNC_IMPL(__imp__sub_82BDBAA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11884(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11884, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBAA8"))) PPC_WEAK_FUNC(sub_82BDBAA8);
PPC_FUNC_IMPL(__imp__sub_82BDBAA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11884(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11884);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBAB0"))) PPC_WEAK_FUNC(sub_82BDBAB0);
PPC_FUNC_IMPL(__imp__sub_82BDBAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// stfs f0,11892(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11892, temp.u32);
	// lfs f13,5576(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5576);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,10598(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10598, r11.u16);
	// sth r11,10596(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10596, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBAF8"))) PPC_WEAK_FUNC(sub_82BDBAF8);
PPC_FUNC_IMPL(__imp__sub_82BDBAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11892(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11892);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBB08"))) PPC_WEAK_FUNC(sub_82BDBB08);
PPC_FUNC_IMPL(__imp__sub_82BDBB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// stfs f0,11896(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11896, temp.u32);
	// lfs f13,-24684(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24684);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10602(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10602, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBB48"))) PPC_WEAK_FUNC(sub_82BDBB48);
PPC_FUNC_IMPL(__imp__sub_82BDBB48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11896(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11896);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBB58"))) PPC_WEAK_FUNC(sub_82BDBB58);
PPC_FUNC_IMPL(__imp__sub_82BDBB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// stfs f0,11900(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11900, temp.u32);
	// lfs f13,-24684(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24684);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10600(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10600, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBB98"))) PPC_WEAK_FUNC(sub_82BDBB98);
PPC_FUNC_IMPL(__imp__sub_82BDBB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11900(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11900);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBBA8"))) PPC_WEAK_FUNC(sub_82BDBBA8);
PPC_FUNC_IMPL(__imp__sub_82BDBBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBBC8"))) PPC_WEAK_FUNC(sub_82BDBBC8);
PPC_FUNC_IMPL(__imp__sub_82BDBBC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBBF0"))) PPC_WEAK_FUNC(sub_82BDBBF0);
PPC_FUNC_IMPL(__imp__sub_82BDBBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBC18"))) PPC_WEAK_FUNC(sub_82BDBC18);
PPC_FUNC_IMPL(__imp__sub_82BDBC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBC40"))) PPC_WEAK_FUNC(sub_82BDBC40);
PPC_FUNC_IMPL(__imp__sub_82BDBC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBC68"))) PPC_WEAK_FUNC(sub_82BDBC68);
PPC_FUNC_IMPL(__imp__sub_82BDBC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBC90"))) PPC_WEAK_FUNC(sub_82BDBC90);
PPC_FUNC_IMPL(__imp__sub_82BDBC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBCB8"))) PPC_WEAK_FUNC(sub_82BDBCB8);
PPC_FUNC_IMPL(__imp__sub_82BDBCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwimi r11,r4,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10540, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBCD8"))) PPC_WEAK_FUNC(sub_82BDBCD8);
PPC_FUNC_IMPL(__imp__sub_82BDBCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBCF8"))) PPC_WEAK_FUNC(sub_82BDBCF8);
PPC_FUNC_IMPL(__imp__sub_82BDBCF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBD20"))) PPC_WEAK_FUNC(sub_82BDBD20);
PPC_FUNC_IMPL(__imp__sub_82BDBD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,24,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBD48"))) PPC_WEAK_FUNC(sub_82BDBD48);
PPC_FUNC_IMPL(__imp__sub_82BDBD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBD70"))) PPC_WEAK_FUNC(sub_82BDBD70);
PPC_FUNC_IMPL(__imp__sub_82BDBD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBD98"))) PPC_WEAK_FUNC(sub_82BDBD98);
PPC_FUNC_IMPL(__imp__sub_82BDBD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBDC0"))) PPC_WEAK_FUNC(sub_82BDBDC0);
PPC_FUNC_IMPL(__imp__sub_82BDBDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r11,r11,0,8,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBDE8"))) PPC_WEAK_FUNC(sub_82BDBDE8);
PPC_FUNC_IMPL(__imp__sub_82BDBDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwimi r11,r4,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10544, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE08"))) PPC_WEAK_FUNC(sub_82BDBE08);
PPC_FUNC_IMPL(__imp__sub_82BDBE08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE18"))) PPC_WEAK_FUNC(sub_82BDBE18);
PPC_FUNC_IMPL(__imp__sub_82BDBE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE28"))) PPC_WEAK_FUNC(sub_82BDBE28);
PPC_FUNC_IMPL(__imp__sub_82BDBE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE38"))) PPC_WEAK_FUNC(sub_82BDBE38);
PPC_FUNC_IMPL(__imp__sub_82BDBE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE48"))) PPC_WEAK_FUNC(sub_82BDBE48);
PPC_FUNC_IMPL(__imp__sub_82BDBE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10540(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE58"))) PPC_WEAK_FUNC(sub_82BDBE58);
PPC_FUNC_IMPL(__imp__sub_82BDBE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE68"))) PPC_WEAK_FUNC(sub_82BDBE68);
PPC_FUNC_IMPL(__imp__sub_82BDBE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10540(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE78"))) PPC_WEAK_FUNC(sub_82BDBE78);
PPC_FUNC_IMPL(__imp__sub_82BDBE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10540(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE88"))) PPC_WEAK_FUNC(sub_82BDBE88);
PPC_FUNC_IMPL(__imp__sub_82BDBE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBE98"))) PPC_WEAK_FUNC(sub_82BDBE98);
PPC_FUNC_IMPL(__imp__sub_82BDBE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBEA8"))) PPC_WEAK_FUNC(sub_82BDBEA8);
PPC_FUNC_IMPL(__imp__sub_82BDBEA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBEB8"))) PPC_WEAK_FUNC(sub_82BDBEB8);
PPC_FUNC_IMPL(__imp__sub_82BDBEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBEC8"))) PPC_WEAK_FUNC(sub_82BDBEC8);
PPC_FUNC_IMPL(__imp__sub_82BDBEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10544(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBED8"))) PPC_WEAK_FUNC(sub_82BDBED8);
PPC_FUNC_IMPL(__imp__sub_82BDBED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBEE8"))) PPC_WEAK_FUNC(sub_82BDBEE8);
PPC_FUNC_IMPL(__imp__sub_82BDBEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10544(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10544);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBEF8"))) PPC_WEAK_FUNC(sub_82BDBEF8);
PPC_FUNC_IMPL(__imp__sub_82BDBEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10544(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBF08"))) PPC_WEAK_FUNC(sub_82BDBF08);
PPC_FUNC_IMPL(__imp__sub_82BDBF08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,1087
	r11.s64 = 1087;
	// bne cr6,0x82bdbf18
	if (!cr6.eq) goto loc_82BDBF18;
	// li r11,1024
	r11.s64 = 1024;
loc_82BDBF18:
	// stw r11,10572(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10572, r11.u32);
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10564(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBF48"))) PPC_WEAK_FUNC(sub_82BDBF48);
PPC_FUNC_IMPL(__imp__sub_82BDBF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10572(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBF58"))) PPC_WEAK_FUNC(sub_82BDBF58);
PPC_FUNC_IMPL(__imp__sub_82BDBF58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12440);
	// stw r4,12028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12028, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10372(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10372);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82bdbf90
	if (cr6.eq) goto loc_82BDBF90;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82bdbf90
	if (cr6.eq) goto loc_82BDBF90;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82bdbf90
	if (cr6.eq) goto loc_82BDBF90;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BDBF90:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10372, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBFE8"))) PPC_WEAK_FUNC(sub_82BDBFE8);
PPC_FUNC_IMPL(__imp__sub_82BDBFE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12028(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12028);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDBFF0"))) PPC_WEAK_FUNC(sub_82BDBFF0);
PPC_FUNC_IMPL(__imp__sub_82BDBFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12444(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12444);
	// stw r4,12032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12032, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10380(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10380);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82bdc028
	if (cr6.eq) goto loc_82BDC028;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82bdc028
	if (cr6.eq) goto loc_82BDC028;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82bdc028
	if (cr6.eq) goto loc_82BDC028;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BDC028:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10380, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC080"))) PPC_WEAK_FUNC(sub_82BDC080);
PPC_FUNC_IMPL(__imp__sub_82BDC080) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12032);
	// blr 
	return;
}

