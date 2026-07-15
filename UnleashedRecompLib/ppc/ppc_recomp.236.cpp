#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83142568"))) PPC_WEAK_FUNC(sub_83142568);
PPC_FUNC_IMPL(__imp__sub_83142568) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// bge cr6,0x831425b8
	if (!cr6.lt) goto loc_831425B8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x83142650
	goto loc_83142650;
loc_831425B8:
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83142290
	sub_83142290(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x831425e4
	if (!cr0.eq) goto loc_831425E4;
loc_831425DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83142650
	goto loc_83142650;
loc_831425E4:
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// extsh. r11,r11
	r11.s64 = r11.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// ble 0x831425dc
	if (!cr0.gt) goto loc_831425DC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stb r9,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r9.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stb r7,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r7.u8);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stb r10,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r10.u8);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_83142650:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83142658"))) PPC_WEAK_FUNC(sub_83142658);
PPC_FUNC_IMPL(__imp__sub_83142658) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r31,24
	ctx.r8.s64 = r31.s64 + 24;
	// li r11,1
	r11.s64 = 1;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// addi r30,r31,14
	r30.s64 = r31.s64 + 14;
	// addi r29,r31,15
	r29.s64 = r31.s64 + 15;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
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
	// bl 0x83142568
	sub_83142568(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831426c4
	if (!cr0.lt) goto loc_831426C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314273c
	goto loc_8314273C;
loc_831426C4:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
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
	// lwz r30,116(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
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
	// sth r4,152(r31)
	PPC_STORE_U16(r31.u32 + 152, ctx.r4.u16);
	// sth r30,156(r31)
	PPC_STORE_U16(r31.u32 + 156, r30.u16);
loc_8314273C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83142748"))) PPC_WEAK_FUNC(sub_83142748);
PPC_FUNC_IMPL(__imp__sub_83142748) {
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
	// bne cr6,0x8314289c
	if (!cr6.eq) goto loc_8314289C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8314289c
	if (!cr0.eq) goto loc_8314289C;
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
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x831427b4
	if (!cr6.gt) goto loc_831427B4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_831427B4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x831427c4
	if (!cr6.gt) goto loc_831427C4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_831427C4:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bne cr6,0x83142844
	if (!cr6.eq) goto loc_83142844;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// ble cr6,0x8314287c
	if (!cr6.gt) goto loc_8314287C;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_83142800:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sthx r7,r6,r10
	PPC_STORE_U16(ctx.r6.u32 + ctx.r10.u32, ctx.r7.u16);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rotlwi r5,r7,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// rlwinm r7,r7,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// or r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83142800
	if (!cr0.eq) goto loc_83142800;
	// b 0x8314287c
	goto loc_8314287C;
loc_83142844:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8314287c
	if (!cr6.gt) goto loc_8314287C;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// subf r7,r8,r29
	ctx.r7.s64 = r29.s64 - ctx.r8.s64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83142858:
	// lhzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r8,r8,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x83142858
	if (!cr0.eq) goto loc_83142858;
loc_8314287C:
	// lbz r11,14(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r9.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
loc_8314289C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x831428c8
	if (!cr6.eq) goto loc_831428C8;
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
loc_831428C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831428D0"))) PPC_WEAK_FUNC(sub_831428D0);
PPC_FUNC_IMPL(__imp__sub_831428D0) {
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
	// bne cr6,0x831429fc
	if (!cr6.eq) goto loc_831429FC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x831429fc
	if (!cr0.eq) goto loc_831429FC;
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
	// ble cr6,0x8314293c
	if (!cr6.gt) goto loc_8314293C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8314293C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x8314294c
	if (!cr6.gt) goto loc_8314294C;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_8314294C:
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
	// bne cr6,0x831429b4
	if (!cr6.eq) goto loc_831429B4;
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
	// ble cr6,0x831429e0
	if (!cr6.gt) goto loc_831429E0;
	// subf r8,r29,r7
	ctx.r8.s64 = ctx.r7.s64 - r29.s64;
	// subf r7,r29,r9
	ctx.r7.s64 = ctx.r9.s64 - r29.s64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_8314298C:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// sthx r6,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u16);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// sthx r6,r7,r10
	PPC_STORE_U16(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x8314298c
	if (!cr0.eq) goto loc_8314298C;
	// b 0x831429e0
	goto loc_831429E0;
loc_831429B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831429e0
	if (!cr6.gt) goto loc_831429E0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_831429C4:
	// lbzx r8,r10,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r29.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// blt cr6,0x831429c4
	if (cr6.lt) goto loc_831429C4;
loc_831429E0:
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
	// stw r10,148(r30)
	PPC_STORE_U32(r30.u32 + 148, ctx.r10.u32);
loc_831429FC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83142a28
	if (!cr6.eq) goto loc_83142A28;
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
loc_83142A28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83142A30"))) PPC_WEAK_FUNC(sub_83142A30);
PPC_FUNC_IMPL(__imp__sub_83142A30) {
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
	// bne cr6,0x83142b78
	if (!cr6.eq) goto loc_83142B78;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83142b78
	if (!cr0.eq) goto loc_83142B78;
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
	// ble cr6,0x83142a9c
	if (!cr6.gt) goto loc_83142A9C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83142A9C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x83142aac
	if (!cr6.gt) goto loc_83142AAC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_83142AAC:
	// lbz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x83142b24
	if (!cr6.eq) goto loc_83142B24;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// ble cr6,0x83142b5c
	if (!cr6.gt) goto loc_83142B5C;
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// subf r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// subf r7,r29,r7
	ctx.r7.s64 = ctx.r7.s64 - r29.s64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r8,r8,25928
	ctx.r8.s64 = ctx.r8.s64 + 25928;
loc_83142AF4:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lhzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// sthx r5,r7,r11
	PPC_STORE_U16(ctx.r7.u32 + r11.u32, ctx.r5.u16);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r5,r5,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lhzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r8.u32);
	// sthx r5,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + r11.u32, ctx.r5.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x83142af4
	if (!cr0.eq) goto loc_83142AF4;
	// b 0x83142b5c
	goto loc_83142B5C;
loc_83142B24:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x83142b5c
	if (!cr6.gt) goto loc_83142B5C;
	// lis r8,-31947
	ctx.r8.s64 = -2093678592;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r8,r8,25928
	ctx.r8.s64 = ctx.r8.s64 + 25928;
loc_83142B3C:
	// lbzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// lhzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// blt cr6,0x83142b3c
	if (cr6.lt) goto loc_83142B3C;
loc_83142B5C:
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
loc_83142B78:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83142ba4
	if (!cr6.eq) goto loc_83142BA4;
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
loc_83142BA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83142BB0"))) PPC_WEAK_FUNC(sub_83142BB0);
PPC_FUNC_IMPL(__imp__sub_83142BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lha r11,156(r3)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 156));
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83142bc0
	if (!cr6.eq) goto loc_83142BC0;
	// b 0x83142a30
	sub_83142A30(ctx, base);
	return;
loc_83142BC0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83142bcc
	if (!cr6.eq) goto loc_83142BCC;
	// b 0x831428d0
	sub_831428D0(ctx, base);
	return;
loc_83142BCC:
	// b 0x83142748
	sub_83142748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83142BD0"))) PPC_WEAK_FUNC(sub_83142BD0);
PPC_FUNC_IMPL(__imp__sub_83142BD0) {
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
	// mflr r12
	// bl 0x831b0b20
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r8,19794
	ctx.r8.s64 = 1297219584;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r29,1(r3)
	r29.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r28,0(r3)
	r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// ori r30,r8,20294
	r30.u64 = ctx.r8.u64 | 20294;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r27,0(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// li r31,0
	r31.s64 = 0;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// lbz r29,2(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 | r28.u64;
	// lbz r28,1(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r30,2(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r29,1(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// lbz r28,0(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// or r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 | r30.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | r27.u64;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | r29.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 | r28.u64;
	// bne cr6,0x83142ed4
	if (!cr6.eq) goto loc_83142ED4;
	// lis r30,17990
	r30.s64 = 1178992640;
	// ori r30,r30,18753
	r30.u64 = r30.u64 | 18753;
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// bne cr6,0x83142ed4
	if (!cr6.eq) goto loc_83142ED4;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// srawi r30,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r30.s64 = ctx.r10.s32 >> 8;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r30,r9,8,0,15
	r30.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r9,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 24;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// rlwimi r10,r9,0,24,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF00);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r30,r10,-4
	r30.s64 = ctx.r10.s64 + -4;
	// b 0x83142ec8
	goto loc_83142EC8;
loc_83142CB0:
	// lis r9,17486
	ctx.r9.s64 = 1145962496;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r28,1(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// ori r29,r9,21331
	r29.u64 = ctx.r9.u64 | 21331;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r27,0(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// lbz r28,2(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r26,0(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 | r27.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r27,1(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 | r27.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | r26.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// srawi r28,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	r28.s64 = ctx.r10.s32 >> 8;
	// rlwimi r29,r10,16,0,15
	r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r28,r29,8,0,15
	r28.u64 = (__builtin_rotateleft32(r29.u32, 8) & 0xFFFF0000) | (r28.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r29,r10,24
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFF) != 0);
	r29.s64 = ctx.r10.s32 >> 24;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwimi r10,r29,0,24,31
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF00);
	// beq cr6,0x83142e68
	if (cr6.eq) goto loc_83142E68;
	// lis r29,19789
	r29.s64 = 1296891904;
	// ori r29,r29,20291
	r29.u64 = r29.u64 | 20291;
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// beq cr6,0x83142d54
	if (cr6.eq) goto loc_83142D54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x83142ec8
	goto loc_83142EC8;
loc_83142D54:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83142ec8
	if (!cr6.eq) goto loc_83142EC8;
	// cmpwi cr6,r10,18
	cr6.compare<int32_t>(ctx.r10.s32, 18, xer);
	// blt cr6,0x83142ed4
	if (cr6.lt) goto loc_83142ED4;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// li r8,1
	ctx.r8.s64 = 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r29,r10,8
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r28,1(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r27,0(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// or r11,r29,r9
	r11.u64 = r29.u64 | ctx.r9.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r27
	r11.u64 = r11.u64 | r27.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// srawi r29,r11,24
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFF) != 0);
	r29.s64 = r11.s32 >> 24;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// srawi r11,r11,8
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFF) != 0);
	r11.s64 = r11.s32 >> 8;
	// rlwinm r9,r9,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r11,r11,0,16,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// rlwimi r29,r9,8,0,23
	r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (r29.u64 & 0xFFFFFFFF000000FF);
	// or r11,r29,r11
	r11.u64 = r29.u64 | r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r29,0(r10)
	r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r10,r9,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | r29.u64;
	// rlwinm r29,r10,8,8,23
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFF00;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r29,r29,16
	r29.u64 = r29.u32 & 0xFFFF;
	// or r10,r29,r10
	ctx.r10.u64 = r29.u64 | ctx.r10.u64;
	// subfic r10,r10,16398
	xer.ca = ctx.r10.u32 <= 16398;
	ctx.r10.s64 = 16398 - ctx.r10.s64;
	// clrlwi r29,r10,16
	r29.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r9,r9,8,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF00;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// srw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// b 0x83142ec4
	goto loc_83142EC4;
loc_83142E68:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x83142ec8
	if (!cr6.eq) goto loc_83142EC8;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// li r31,1
	r31.s64 = 1;
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r29,0(r11)
	r29.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r9,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r3,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_83142EC4:
	// bne cr6,0x83142ed8
	if (!cr6.eq) goto loc_83142ED8;
loc_83142EC8:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// blt cr6,0x83142cb0
	if (cr6.lt) goto loc_83142CB0;
	// b 0x83142ed8
	goto loc_83142ED8;
loc_83142ED4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83142ED8:
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83142EE0"))) PPC_WEAK_FUNC(sub_83142EE0);
PPC_FUNC_IMPL(__imp__sub_83142EE0) {
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
	// addi r10,r10,15604
	ctx.r10.s64 = ctx.r10.s64 + 15604;
loc_83142EF0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83142f10
	if (!cr0.eq) goto loc_83142F10;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83142ef0
	if (!cr6.eq) goto loc_83142EF0;
loc_83142F10:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83142f54
	if (!cr0.eq) goto loc_83142F54;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r10,15596
	ctx.r10.s64 = ctx.r10.s64 + 15596;
loc_83142F28:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x83142f48
	if (!cr0.eq) goto loc_83142F48;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x83142f28
	if (!cr6.eq) goto loc_83142F28;
loc_83142F48:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr 
	if (cr0.eq) return;
loc_83142F54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83142F60"))) PPC_WEAK_FUNC(sub_83142F60);
PPC_FUNC_IMPL(__imp__sub_83142F60) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// cmpwi cr6,r4,4096
	cr6.compare<int32_t>(ctx.r4.s32, 4096, xer);
	// bge cr6,0x83142fb0
	if (!cr6.lt) goto loc_83142FB0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x83143044
	goto loc_83143044;
loc_83142FB0:
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83142bd0
	sub_83142BD0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x83142fd8
	if (!cr0.eq) goto loc_83142FD8;
loc_83142FD0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83143044
	goto loc_83143044;
loc_83142FD8:
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// extsh. r11,r11
	r11.s64 = r11.s16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// ble 0x83142fd0
	if (!cr0.gt) goto loc_83142FD0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r10,0(r28)
	PPC_STORE_U8(r28.u32 + 0, ctx.r10.u8);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stb r9,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r9.u8);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stb r7,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r7.u8);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// lbz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stb r10,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r10.u8);
	// lwz r10,252(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_83143044:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83143050"))) PPC_WEAK_FUNC(sub_83143050);
PPC_FUNC_IMPL(__imp__sub_83143050) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,1
	r26.s64 = 1;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// addi r30,r31,14
	r30.s64 = r31.s64 + 14;
	// addi r29,r31,15
	r29.s64 = r31.s64 + 15;
	// addi r28,r31,13
	r28.s64 = r31.s64 + 13;
	// sth r26,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r26.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x83142f60
	sub_83142F60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x831430b8
	if (!cr0.lt) goto loc_831430B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83143140
	goto loc_83143140;
loc_831430B8:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lbz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
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
	// lbz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// sth r11,28(r31)
	PPC_STORE_U16(r31.u32 + 28, r11.u16);
	// sth r11,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r11.u16);
	// cmplwi cr6,r4,8
	cr6.compare<uint32_t>(ctx.r4.u32, 8, xer);
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
	// sth r3,152(r31)
	PPC_STORE_U16(r31.u32 + 152, ctx.r3.u16);
	// bne cr6,0x83143138
	if (!cr6.eq) goto loc_83143138;
	// sth r26,156(r31)
	PPC_STORE_U16(r31.u32 + 156, r26.u16);
	// b 0x8314313c
	goto loc_8314313C;
loc_83143138:
	// sth r11,156(r31)
	PPC_STORE_U16(r31.u32 + 156, r11.u16);
loc_8314313C:
	// lha r3,96(r1)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 96));
loc_83143140:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83143148"))) PPC_WEAK_FUNC(sub_83143148);
PPC_FUNC_IMPL(__imp__sub_83143148) {
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
	// bne cr6,0x8314326c
	if (!cr6.eq) goto loc_8314326C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8314326c
	if (!cr0.eq) goto loc_8314326C;
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
	// ble cr6,0x831431b4
	if (!cr6.gt) goto loc_831431B4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_831431B4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x831431c4
	if (!cr6.gt) goto loc_831431C4;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_831431C4:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,14(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 14);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bne cr6,0x83143224
	if (!cr6.eq) goto loc_83143224;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble cr6,0x8314324c
	if (!cr6.gt) goto loc_8314324C;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_83143200:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sthx r6,r7,r9
	PPC_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r6.u16);
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x83143200
	if (!cr0.eq) goto loc_83143200;
	// b 0x8314324c
	goto loc_8314324C;
loc_83143224:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8314324c
	if (!cr6.gt) goto loc_8314324C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// subf r8,r8,r29
	ctx.r8.s64 = r29.s64 - ctx.r8.s64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_83143238:
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x83143238
	if (!cr0.eq) goto loc_83143238;
loc_8314324C:
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
loc_8314326C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83143298
	if (!cr6.eq) goto loc_83143298;
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
loc_83143298:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831432A0"))) PPC_WEAK_FUNC(sub_831432A0);
PPC_FUNC_IMPL(__imp__sub_831432A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,156(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x831432b0
	if (!cr6.eq) goto loc_831432B0;
	// b 0x831428d0
	sub_831428D0(ctx, base);
	return;
loc_831432B0:
	// b 0x83143148
	sub_83143148(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831432B8"))) PPC_WEAK_FUNC(sub_831432B8);
PPC_FUNC_IMPL(__imp__sub_831432B8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r30,2
	r30.s64 = 2;
	// li r31,1
	r31.s64 = 1;
	// li r29,16
	r29.s64 = 16;
	// lbz r4,7(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 7);
	// rotlwi r4,r4,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 4);
	// sth r4,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r4.u16);
	// lbz r5,9(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// lhz r5,42(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x83143368
	if (cr6.lt) goto loc_83143368;
	// beq cr6,0x83143340
	if (cr6.eq) goto loc_83143340;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bge cr6,0x8314339c
	if (!cr6.lt) goto loc_8314339C;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r30.u16);
	// b 0x8314339c
	goto loc_8314339C;
loc_83143340:
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r31,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r31.u16);
	// b 0x8314339c
	goto loc_8314339C;
loc_83143368:
	// stb r29,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r29.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r9,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r9.u8);
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// srawi r9,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
loc_8314339C:
	// stb r30,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r30.u8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stb r29,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, r29.u8);
	// stb r10,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r10.u8);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831433C8"))) PPC_WEAK_FUNC(sub_831433C8);
PPC_FUNC_IMPL(__imp__sub_831433C8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r31,156
	ctx.r9.s64 = r31.s64 + 156;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// addi r30,r31,14
	r30.s64 = r31.s64 + 14;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r8,r31,15
	ctx.r8.s64 = r31.s64 + 15;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r7,r31,13
	ctx.r7.s64 = r31.s64 + 13;
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x831432b8
	sub_831432B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x83143430
	if (!cr0.lt) goto loc_83143430;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831434a0
	goto loc_831434A0;
loc_83143430:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
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
	// sth r4,152(r31)
	PPC_STORE_U16(r31.u32 + 152, ctx.r4.u16);
loc_831434A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831434A8"))) PPC_WEAK_FUNC(sub_831434A8);
PPC_FUNC_IMPL(__imp__sub_831434A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,15612
	r11.s64 = r11.s64 + 15612;
loc_831434B4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x831434d4
	if (!cr0.eq) goto loc_831434D4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r3,r9
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, xer);
	// bne cr6,0x831434b4
	if (!cr6.eq) goto loc_831434B4;
loc_831434D4:
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831434E0"))) PPC_WEAK_FUNC(sub_831434E0);
PPC_FUNC_IMPL(__imp__sub_831434E0) {
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
	// mflr r12
	// bl 0x831b0b0c
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lha r29,0(r6)
	r29.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 0));
	// lha r23,2(r6)
	r23.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 2));
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x83143624
	if (!cr6.gt) goto loc_83143624;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r21,r11,15624
	r21.s64 = r11.s64 + 15624;
loc_83143508:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// rlwinm. r30,r11,0,0,16
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x83143630
	if (!cr0.eq) goto loc_83143630;
	// lha r30,0(r9)
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 0));
	// extsh r11,r11
	r11.s64 = r11.s16;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// mr r28,r30
	r28.u64 = r30.u64;
	// xor r11,r30,r11
	r11.u64 = r30.u64 ^ r11.u64;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// mullw r30,r28,r30
	r30.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsh r26,r8
	r26.s64 = ctx.r8.s16;
	// lha r28,86(r1)
	r28.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 86));
	// extsh r25,r7
	r25.s64 = ctx.r7.s16;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// li r22,16
	r22.s64 = 16;
	// extsh r24,r11
	r24.s64 = r11.s16;
	// clrlwi r30,r30,17
	r30.u64 = r30.u32 & 0x7FFF;
	// sth r30,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, r30.u16);
loc_83143558:
	// mullw r28,r26,r23
	r28.s64 = int64_t(r26.s32) * int64_t(r23.s32);
	// lbz r30,0(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mullw r11,r25,r29
	r11.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// srawi r11,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	r11.s64 = r11.s32 >> 12;
	// srawi r28,r30,4
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r28.s64 = r30.s32 >> 4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mullw r28,r28,r24
	r28.s64 = int64_t(r28.s32) * int64_t(r24.s32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x83143590
	if (cr6.gt) goto loc_83143590;
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x831435ac
	if (!cr6.lt) goto loc_831435AC;
loc_83143590:
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x831435a0
	if (!cr6.lt) goto loc_831435A0;
	// li r11,-32768
	r11.s64 = -32768;
	// b 0x831435ac
	goto loc_831435AC;
loc_831435A0:
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x831435ac
	if (!cr6.gt) goto loc_831435AC;
	// li r11,32767
	r11.s64 = 32767;
loc_831435AC:
	// rlwinm r30,r30,2,26,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3C;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// addi r27,r5,2
	r27.s64 = ctx.r5.s64 + 2;
	// mullw r28,r25,r11
	r28.s64 = int64_t(r25.s32) * int64_t(r11.s32);
	// lwzx r30,r30,r21
	r30.u64 = PPC_LOAD_U32(r30.u32 + r21.u32);
	// mullw r5,r26,r29
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// add r5,r28,r5
	ctx.r5.u64 = r28.u64 + ctx.r5.u64;
	// mullw r30,r30,r24
	r30.s64 = int64_t(r30.s32) * int64_t(r24.s32);
	// srawi r5,r5,12
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 12;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// cmpwi cr6,r5,32767
	cr6.compare<int32_t>(ctx.r5.s32, 32767, xer);
	// bgt cr6,0x831435e4
	if (cr6.gt) goto loc_831435E4;
	// cmpwi cr6,r5,-32768
	cr6.compare<int32_t>(ctx.r5.s32, -32768, xer);
	// bge cr6,0x83143600
	if (!cr6.lt) goto loc_83143600;
loc_831435E4:
	// cmpwi cr6,r5,-32768
	cr6.compare<int32_t>(ctx.r5.s32, -32768, xer);
	// bge cr6,0x831435f4
	if (!cr6.lt) goto loc_831435F4;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// b 0x83143600
	goto loc_83143600;
loc_831435F4:
	// cmpwi cr6,r5,32767
	cr6.compare<int32_t>(ctx.r5.s32, 32767, xer);
	// ble cr6,0x83143600
	if (!cr6.gt) goto loc_83143600;
	// li r5,32767
	ctx.r5.s64 = 32767;
loc_83143600:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// sth r5,0(r27)
	PPC_STORE_U16(r27.u32 + 0, ctx.r5.u16);
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// mr r23,r11
	r23.u64 = r11.u64;
	// addi r5,r27,2
	ctx.r5.s64 = r27.s64 + 2;
	// bne 0x83143558
	if (!cr0.eq) goto loc_83143558;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r4
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, xer);
	// blt cr6,0x83143508
	if (cr6.lt) goto loc_83143508;
loc_83143624:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r29,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r29.u16);
	// sth r23,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, r23.u16);
loc_83143630:
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_83143638"))) PPC_WEAK_FUNC(sub_83143638);
PPC_FUNC_IMPL(__imp__sub_83143638) {
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0af0
	// li r25,0
	r25.s64 = 0;
	// lha r21,2(r6)
	r21.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 2));
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r11.s64 = ctx.r4.s32 >> 1;
	// lha r23,0(r8)
	r23.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 0));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lha r3,0(r6)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 0));
	// addze. r14,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r14.s64 = temp.s64;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// lha r22,2(r8)
	r22.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 2));
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r25,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r25.u32);
	// ble 0x83143910
	if (!cr0.gt) goto loc_83143910;
	// lis r31,-32231
	r31.s64 = -2112290816;
	// lwz r17,84(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r15,r31,15624
	r15.s64 = r31.s64 + 15624;
	// b 0x83143684
	goto loc_83143684;
loc_83143680:
	// lwz r25,-160(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
loc_83143684:
	// lhz r31,0(r30)
	r31.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwinm. r29,r31,0,0,16
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x83143928
	if (!cr0.eq) goto loc_83143928;
	// lha r27,0(r17)
	r27.s64 = int16_t(PPC_LOAD_U16(r17.u32 + 0));
	// extsh r31,r31
	r31.s64 = r31.s16;
	// lha r29,94(r1)
	r29.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 94));
	// mr r26,r27
	r26.u64 = r27.u64;
	// lha r28,102(r1)
	r28.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 102));
	// xor r31,r26,r31
	r31.u64 = r26.u64 ^ r31.u64;
	// clrlwi r31,r31,19
	r31.u64 = r31.u32 & 0x1FFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// extsh r26,r31
	r26.s64 = r31.s16;
	// mullw r31,r27,r29
	r31.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// clrlwi r31,r31,17
	r31.u64 = r31.u32 & 0x7FFF;
	// sth r31,0(r17)
	PPC_STORE_U16(r17.u32 + 0, r31.u16);
	// lhz r27,18(r30)
	r27.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// rlwinm. r24,r27,0,0,16
	r24.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x83143928
	if (!cr0.eq) goto loc_83143928;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// addi r20,r30,2
	r20.s64 = r30.s64 + 2;
	// mullw r30,r31,r29
	r30.s64 = int64_t(r31.s32) * int64_t(r29.s32);
	// extsh r25,r27
	r25.s64 = r27.s16;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// xor r25,r25,r31
	r25.u64 = r25.u64 ^ r31.u64;
	// clrlwi r30,r30,17
	r30.u64 = r30.u32 & 0x7FFF;
	// clrlwi r31,r25,19
	r31.u64 = r25.u32 & 0x1FFF;
	// extsh r19,r26
	r19.s64 = r26.s16;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// extsh r27,r10
	r27.s64 = ctx.r10.s16;
	// extsh r26,r9
	r26.s64 = ctx.r9.s16;
	// sth r30,0(r17)
	PPC_STORE_U16(r17.u32 + 0, r30.u16);
	// li r16,16
	r16.s64 = 16;
	// extsh r18,r31
	r18.s64 = r31.s16;
loc_8314370C:
	// lbz r30,18(r20)
	r30.u64 = PPC_LOAD_U8(r20.u32 + 18);
	// mullw r31,r26,r11
	r31.s64 = int64_t(r26.s32) * int64_t(r11.s32);
	// extsb r25,r30
	r25.s64 = r30.s8;
	// lbz r29,0(r20)
	r29.u64 = PPC_LOAD_U8(r20.u32 + 0);
	// mullw r30,r27,r21
	r30.s64 = int64_t(r27.s32) * int64_t(r21.s32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// extsb r24,r29
	r24.s64 = r29.s8;
	// srawi r28,r25,4
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	r28.s64 = r25.s32 >> 4;
	// srawi r31,r31,12
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFF) != 0);
	r31.s64 = r31.s32 >> 12;
	// srawi r30,r24,4
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r30.s64 = r24.s32 >> 4;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// mullw r30,r30,r19
	r30.s64 = int64_t(r30.s32) * int64_t(r19.s32);
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// cmpwi cr6,r31,32767
	cr6.compare<int32_t>(r31.s32, 32767, xer);
	// bgt cr6,0x83143750
	if (cr6.gt) goto loc_83143750;
	// cmpwi cr6,r31,-32768
	cr6.compare<int32_t>(r31.s32, -32768, xer);
	// bge cr6,0x8314376c
	if (!cr6.lt) goto loc_8314376C;
loc_83143750:
	// cmpwi cr6,r31,-32768
	cr6.compare<int32_t>(r31.s32, -32768, xer);
	// bge cr6,0x83143760
	if (!cr6.lt) goto loc_83143760;
	// li r31,-32768
	r31.s64 = -32768;
	// b 0x8314376c
	goto loc_8314376C;
loc_83143760:
	// cmpwi cr6,r31,32767
	cr6.compare<int32_t>(r31.s32, 32767, xer);
	// ble cr6,0x8314376c
	if (!cr6.gt) goto loc_8314376C;
	// li r31,32767
	r31.s64 = 32767;
loc_8314376C:
	// mullw r29,r27,r22
	r29.s64 = int64_t(r27.s32) * int64_t(r22.s32);
	// mullw r30,r26,r23
	r30.s64 = int64_t(r26.s32) * int64_t(r23.s32);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// mullw r29,r18,r28
	r29.s64 = int64_t(r18.s32) * int64_t(r28.s32);
	// srawi r30,r30,12
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	r30.s64 = r30.s32 >> 12;
	// mr r28,r11
	r28.u64 = r11.u64;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x83143798
	if (cr6.gt) goto loc_83143798;
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x831437b4
	if (!cr6.lt) goto loc_831437B4;
loc_83143798:
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x831437a8
	if (!cr6.lt) goto loc_831437A8;
	// li r11,-32768
	r11.s64 = -32768;
	// b 0x831437b4
	goto loc_831437B4;
loc_831437A8:
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x831437b4
	if (!cr6.gt) goto loc_831437B4;
	// li r11,32767
	r11.s64 = 32767;
loc_831437B4:
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// mr r22,r11
	r22.u64 = r11.u64;
	// mulli r30,r30,7
	r30.s64 = r30.s64 * 7;
	// divw r11,r30,r3
	r11.s32 = r30.s32 / ctx.r3.s32;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x831437d4
	if (cr6.gt) goto loc_831437D4;
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x831437f0
	if (!cr6.lt) goto loc_831437F0;
loc_831437D4:
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x831437e4
	if (!cr6.lt) goto loc_831437E4;
	// li r11,-32768
	r11.s64 = -32768;
	// b 0x831437f0
	goto loc_831437F0;
loc_831437E4:
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x831437f0
	if (!cr6.gt) goto loc_831437F0;
	// li r11,32767
	r11.s64 = 32767;
loc_831437F0:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// rlwinm r24,r24,2,26,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0x3C;
	// mullw r29,r27,r28
	r29.s64 = int64_t(r27.s32) * int64_t(r28.s32);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, r11.u16);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// lwzx r11,r24,r15
	r11.u64 = PPC_LOAD_U32(r24.u32 + r15.u32);
	// mullw r30,r26,r31
	r30.s64 = int64_t(r26.s32) * int64_t(r31.s32);
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// rlwinm r29,r25,2,26,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3C;
	// mullw r11,r11,r19
	r11.s64 = int64_t(r11.s32) * int64_t(r19.s32);
	// lwzx r29,r29,r15
	r29.u64 = PPC_LOAD_U32(r29.u32 + r15.u32);
	// srawi r30,r30,12
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFFF) != 0);
	r30.s64 = r30.s32 >> 12;
	// addi r28,r7,2
	r28.s64 = ctx.r7.s64 + 2;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r25,r5,2
	r25.s64 = ctx.r5.s64 + 2;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x8314383c
	if (cr6.gt) goto loc_8314383C;
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x83143858
	if (!cr6.lt) goto loc_83143858;
loc_8314383C:
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x8314384c
	if (!cr6.lt) goto loc_8314384C;
	// li r11,-32768
	r11.s64 = -32768;
	// b 0x83143858
	goto loc_83143858;
loc_8314384C:
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x83143858
	if (!cr6.gt) goto loc_83143858;
	// li r11,32767
	r11.s64 = 32767;
loc_83143858:
	// mullw r5,r27,r23
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(r23.s32);
	// mullw r7,r26,r22
	ctx.r7.s64 = int64_t(r26.s32) * int64_t(r22.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r5,r18,r29
	ctx.r5.s64 = int64_t(r18.s32) * int64_t(r29.s32);
	// srawi r7,r7,12
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 12;
	// mr r21,r31
	r21.u64 = r31.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmpwi cr6,r7,32767
	cr6.compare<int32_t>(ctx.r7.s32, 32767, xer);
	// bgt cr6,0x83143884
	if (cr6.gt) goto loc_83143884;
	// cmpwi cr6,r7,-32768
	cr6.compare<int32_t>(ctx.r7.s32, -32768, xer);
	// bge cr6,0x831438a0
	if (!cr6.lt) goto loc_831438A0;
loc_83143884:
	// cmpwi cr6,r7,-32768
	cr6.compare<int32_t>(ctx.r7.s32, -32768, xer);
	// bge cr6,0x83143894
	if (!cr6.lt) goto loc_83143894;
	// li r7,-32768
	ctx.r7.s64 = -32768;
	// b 0x831438a0
	goto loc_831438A0;
loc_83143894:
	// cmpwi cr6,r7,32767
	cr6.compare<int32_t>(ctx.r7.s32, 32767, xer);
	// ble cr6,0x831438a0
	if (!cr6.gt) goto loc_831438A0;
	// li r7,32767
	ctx.r7.s64 = 32767;
loc_831438A0:
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + r11.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mulli r5,r5,7
	ctx.r5.s64 = ctx.r5.s64 * 7;
	// divw r5,r5,r3
	ctx.r5.s32 = ctx.r5.s32 / ctx.r3.s32;
	// cmpwi cr6,r5,32767
	cr6.compare<int32_t>(ctx.r5.s32, 32767, xer);
	// bgt cr6,0x831438c0
	if (cr6.gt) goto loc_831438C0;
	// cmpwi cr6,r5,-32768
	cr6.compare<int32_t>(ctx.r5.s32, -32768, xer);
	// bge cr6,0x831438dc
	if (!cr6.lt) goto loc_831438DC;
loc_831438C0:
	// cmpwi cr6,r5,-32768
	cr6.compare<int32_t>(ctx.r5.s32, -32768, xer);
	// bge cr6,0x831438d0
	if (!cr6.lt) goto loc_831438D0;
	// li r5,-32768
	ctx.r5.s64 = -32768;
	// b 0x831438dc
	goto loc_831438DC;
loc_831438D0:
	// cmpwi cr6,r5,32767
	cr6.compare<int32_t>(ctx.r5.s32, 32767, xer);
	// ble cr6,0x831438dc
	if (!cr6.gt) goto loc_831438DC;
	// li r5,32767
	ctx.r5.s64 = 32767;
loc_831438DC:
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// addi r7,r28,2
	ctx.r7.s64 = r28.s64 + 2;
	// sth r5,0(r28)
	PPC_STORE_U16(r28.u32 + 0, ctx.r5.u16);
	// sth r5,0(r25)
	PPC_STORE_U16(r25.u32 + 0, ctx.r5.u16);
	// addi r5,r25,2
	ctx.r5.s64 = r25.s64 + 2;
	// bne 0x8314370c
	if (!cr0.eq) goto loc_8314370C;
	// lwz r31,-160(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r30,r20,18
	r30.s64 = r20.s64 + 18;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r14
	cr6.compare<int32_t>(r31.s32, r14.s32, xer);
	// stw r31,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// blt cr6,0x83143680
	if (cr6.lt) goto loc_83143680;
loc_83143910:
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r11.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r21,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, r21.u16);
	// sth r23,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, r23.u16);
	// sth r22,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, r22.u16);
loc_83143924:
	// b 0x831b0b40
	return;
loc_83143928:
	// rlwinm r3,r25,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83143924
	goto loc_83143924;
}

__attribute__((alias("__imp__sub_83143930"))) PPC_WEAK_FUNC(sub_83143930);
PPC_FUNC_IMPL(__imp__sub_83143930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	// mflr r12
	// bl 0x831b0af4
	// srawi r11,r4,1
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r11.s64 = ctx.r4.s32 >> 1;
	// lha r31,0(r6)
	r31.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 0));
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lha r30,2(r6)
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r6.u32 + 2));
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// lha r21,2(r8)
	r21.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 2));
	// lha r7,0(r8)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 0));
	// addze. r15,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r15.s64 = temp.s64;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// ble 0x83143b78
	if (!cr0.gt) goto loc_83143B78;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r17,84(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r16,r11,15624
	r16.s64 = r11.s64 + 15624;
loc_8314396C:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// rlwinm. r28,r11,0,0,16
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x83143b90
	if (!cr0.eq) goto loc_83143B90;
	// lha r28,0(r17)
	r28.s64 = int16_t(PPC_LOAD_U16(r17.u32 + 0));
	// extsh r11,r11
	r11.s64 = r11.s16;
	// lha r27,94(r1)
	r27.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 94));
	// mr r25,r28
	r25.u64 = r28.u64;
	// lha r26,102(r1)
	r26.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 102));
	// xor r11,r25,r11
	r11.u64 = r25.u64 ^ r11.u64;
	// clrlwi r11,r11,19
	r11.u64 = r11.u32 & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsh r25,r11
	r25.s64 = r11.s16;
	// mullw r11,r28,r27
	r11.s64 = int64_t(r28.s32) * int64_t(r27.s32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// sth r11,0(r17)
	PPC_STORE_U16(r17.u32 + 0, r11.u16);
	// lhz r28,18(r29)
	r28.u64 = PPC_LOAD_U16(r29.u32 + 18);
	// rlwinm. r24,r28,0,0,16
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFF8000;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x83143b90
	if (!cr0.eq) goto loc_83143B90;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// extsh r24,r28
	r24.s64 = r28.s16;
	// mullw r27,r11,r27
	r27.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// extsh r22,r25
	r22.s64 = r25.s16;
	// xor r25,r24,r11
	r25.u64 = r24.u64 ^ r11.u64;
	// add r27,r27,r26
	r27.u64 = r27.u64 + r26.u64;
	// clrlwi r11,r25,19
	r11.u64 = r25.u32 & 0x1FFF;
	// clrlwi r27,r27,17
	r27.u64 = r27.u32 & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r23,r29,2
	r23.s64 = r29.s64 + 2;
	// extsh r29,r10
	r29.s64 = ctx.r10.s16;
	// extsh r28,r9
	r28.s64 = ctx.r9.s16;
	// li r18,16
	r18.s64 = 16;
	// sth r27,0(r17)
	PPC_STORE_U16(r17.u32 + 0, r27.u16);
	// extsh r19,r11
	r19.s64 = r11.s16;
loc_831439F4:
	// lbz r27,18(r23)
	r27.u64 = PPC_LOAD_U8(r23.u32 + 18);
	// mullw r30,r29,r30
	r30.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// mullw r11,r28,r31
	r11.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// lbz r26,0(r23)
	r26.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// extsb r25,r27
	r25.s64 = r27.s8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// extsb r24,r26
	r24.s64 = r26.s8;
	// srawi r26,r25,4
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	r26.s64 = r25.s32 >> 4;
	// srawi r11,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	r11.s64 = r11.s32 >> 12;
	// srawi r30,r24,4
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0xF) != 0);
	r30.s64 = r24.s32 >> 4;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// mullw r30,r30,r22
	r30.s64 = int64_t(r30.s32) * int64_t(r22.s32);
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// cmpwi cr6,r30,32767
	cr6.compare<int32_t>(r30.s32, 32767, xer);
	// bgt cr6,0x83143a38
	if (cr6.gt) goto loc_83143A38;
	// cmpwi cr6,r30,-32768
	cr6.compare<int32_t>(r30.s32, -32768, xer);
	// bge cr6,0x83143a54
	if (!cr6.lt) goto loc_83143A54;
loc_83143A38:
	// cmpwi cr6,r30,-32768
	cr6.compare<int32_t>(r30.s32, -32768, xer);
	// bge cr6,0x83143a48
	if (!cr6.lt) goto loc_83143A48;
	// li r30,-32768
	r30.s64 = -32768;
	// b 0x83143a54
	goto loc_83143A54;
loc_83143A48:
	// cmpwi cr6,r30,32767
	cr6.compare<int32_t>(r30.s32, 32767, xer);
	// ble cr6,0x83143a54
	if (!cr6.gt) goto loc_83143A54;
	// li r30,32767
	r30.s64 = 32767;
loc_83143A54:
	// mullw r27,r29,r21
	r27.s64 = int64_t(r29.s32) * int64_t(r21.s32);
	// mullw r11,r28,r7
	r11.s64 = int64_t(r28.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// mullw r26,r19,r26
	r26.s64 = int64_t(r19.s32) * int64_t(r26.s32);
	// srawi r11,r11,12
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFF) != 0);
	r11.s64 = r11.s32 >> 12;
	// mr r27,r31
	r27.u64 = r31.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// bgt cr6,0x83143a80
	if (cr6.gt) goto loc_83143A80;
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x83143a9c
	if (!cr6.lt) goto loc_83143A9C;
loc_83143A80:
	// cmpwi cr6,r11,-32768
	cr6.compare<int32_t>(r11.s32, -32768, xer);
	// bge cr6,0x83143a90
	if (!cr6.lt) goto loc_83143A90;
	// li r11,-32768
	r11.s64 = -32768;
	// b 0x83143a9c
	goto loc_83143A9C;
loc_83143A90:
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x83143a9c
	if (!cr6.gt) goto loc_83143A9C;
	// li r11,32767
	r11.s64 = 32767;
loc_83143A9C:
	// rlwinm r24,r24,2,26,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0x3C;
	// sth r30,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r30.u16);
	// sth r11,0(r20)
	PPC_STORE_U16(r20.u32 + 0, r11.u16);
	// mullw r27,r29,r27
	r27.s64 = int64_t(r29.s32) * int64_t(r27.s32);
	// lwzx r26,r24,r16
	r26.u64 = PPC_LOAD_U32(r24.u32 + r16.u32);
	// mullw r31,r28,r30
	r31.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// mullw r27,r26,r22
	r27.s64 = int64_t(r26.s32) * int64_t(r22.s32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// rlwinm r7,r25,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3C;
	// srawi r31,r31,12
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFF) != 0);
	r31.s64 = r31.s32 >> 12;
	// addi r25,r5,2
	r25.s64 = ctx.r5.s64 + 2;
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// addi r24,r20,2
	r24.s64 = r20.s64 + 2;
	// lwzx r7,r7,r16
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r16.u32);
	// cmpwi cr6,r31,32767
	cr6.compare<int32_t>(r31.s32, 32767, xer);
	// bgt cr6,0x83143ae8
	if (cr6.gt) goto loc_83143AE8;
	// cmpwi cr6,r31,-32768
	cr6.compare<int32_t>(r31.s32, -32768, xer);
	// bge cr6,0x83143b04
	if (!cr6.lt) goto loc_83143B04;
loc_83143AE8:
	// cmpwi cr6,r31,-32768
	cr6.compare<int32_t>(r31.s32, -32768, xer);
	// bge cr6,0x83143af8
	if (!cr6.lt) goto loc_83143AF8;
	// li r31,-32768
	r31.s64 = -32768;
	// b 0x83143b04
	goto loc_83143B04;
loc_83143AF8:
	// cmpwi cr6,r31,32767
	cr6.compare<int32_t>(r31.s32, 32767, xer);
	// ble cr6,0x83143b04
	if (!cr6.gt) goto loc_83143B04;
	// li r31,32767
	r31.s64 = 32767;
loc_83143B04:
	// mullw r5,r28,r11
	ctx.r5.s64 = int64_t(r28.s32) * int64_t(r11.s32);
	// mullw r27,r29,r26
	r27.s64 = int64_t(r29.s32) * int64_t(r26.s32);
	// add r27,r5,r27
	r27.u64 = ctx.r5.u64 + r27.u64;
	// mullw r5,r19,r7
	ctx.r5.s64 = int64_t(r19.s32) * int64_t(ctx.r7.s32);
	// srawi r7,r27,12
	xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFFF) != 0);
	ctx.r7.s64 = r27.s32 >> 12;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmpwi cr6,r7,32767
	cr6.compare<int32_t>(ctx.r7.s32, 32767, xer);
	// bgt cr6,0x83143b2c
	if (cr6.gt) goto loc_83143B2C;
	// cmpwi cr6,r7,-32768
	cr6.compare<int32_t>(ctx.r7.s32, -32768, xer);
	// bge cr6,0x83143b48
	if (!cr6.lt) goto loc_83143B48;
loc_83143B2C:
	// cmpwi cr6,r7,-32768
	cr6.compare<int32_t>(ctx.r7.s32, -32768, xer);
	// bge cr6,0x83143b3c
	if (!cr6.lt) goto loc_83143B3C;
	// li r7,-32768
	ctx.r7.s64 = -32768;
	// b 0x83143b48
	goto loc_83143B48;
loc_83143B3C:
	// cmpwi cr6,r7,32767
	cr6.compare<int32_t>(ctx.r7.s32, 32767, xer);
	// ble cr6,0x83143b48
	if (!cr6.gt) goto loc_83143B48;
	// li r7,32767
	ctx.r7.s64 = 32767;
loc_83143B48:
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// sth r31,0(r25)
	PPC_STORE_U16(r25.u32 + 0, r31.u16);
	// addic. r18,r18,-1
	xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// mr r21,r11
	r21.u64 = r11.u64;
	// addi r5,r25,2
	ctx.r5.s64 = r25.s64 + 2;
	// addi r20,r24,2
	r20.s64 = r24.s64 + 2;
	// sth r27,0(r24)
	PPC_STORE_U16(r24.u32 + 0, r27.u16);
	// bne 0x831439f4
	if (!cr0.eq) goto loc_831439F4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r29,r23,18
	r29.s64 = r23.s64 + 18;
	// cmpw cr6,r3,r15
	cr6.compare<int32_t>(ctx.r3.s32, r15.s32, xer);
	// blt cr6,0x8314396c
	if (cr6.lt) goto loc_8314396C;
loc_83143B78:
	// sth r31,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, r31.u16);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r30,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, r30.u16);
	// sth r7,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// sth r21,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, r21.u16);
loc_83143B8C:
	// b 0x831b0b44
	return;
loc_83143B90:
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x83143b8c
	goto loc_83143B8C;
}

__attribute__((alias("__imp__sub_83143B98"))) PPC_WEAK_FUNC(sub_83143B98);
PPC_FUNC_IMPL(__imp__sub_83143B98) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// lwz r11,-30684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30684);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lhz r11,214(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 214);
	// bne cr6,0x83143bd4
	if (!cr6.eq) goto loc_83143BD4;
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// lhz r11,206(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 206);
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, r11.u16);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83143930
	sub_83143930(ctx, base);
	// b 0x83143bec
	goto loc_83143BEC;
loc_83143BD4:
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// lhz r11,206(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 206);
	// sth r11,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, r11.u16);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x83143638
	sub_83143638(ctx, base);
loc_83143BEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143C00"))) PPC_WEAK_FUNC(sub_83143C00);
PPC_FUNC_IMPL(__imp__sub_83143C00) {
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
	// addi r9,r11,17812
	ctx.r9.s64 = r11.s64 + 17812;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83143c38
	if (cr6.eq) goto loc_83143C38;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83143C38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143C50"))) PPC_WEAK_FUNC(sub_83143C50);
PPC_FUNC_IMPL(__imp__sub_83143C50) {
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
	// addi r5,r11,17836
	ctx.r5.s64 = r11.s64 + 17836;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83143ca0
	if (cr6.eq) goto loc_83143CA0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83143CA0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,17824
	ctx.r4.s64 = r11.s64 + 17824;
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

__attribute__((alias("__imp__sub_83143CC8"))) PPC_WEAK_FUNC(sub_83143CC8);
PPC_FUNC_IMPL(__imp__sub_83143CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r8,r9,17852
	ctx.r8.s64 = ctx.r9.s64 + 17852;
	// stw r6,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f0,2244(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
loc_83143D04:
	// stw r11,-32(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32, r11.u32);
	// stfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x83143d04
	if (cr6.lt) goto loc_83143D04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143D28"))) PPC_WEAK_FUNC(sub_83143D28);
PPC_FUNC_IMPL(__imp__sub_83143D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83143ed4
	if (!cr6.eq) goto loc_83143ED4;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x83143d60
	if (!cr6.eq) goto loc_83143D60;
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83143D50:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83143d50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83143D50;
	// blr 
	return;
loc_83143D60:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x83143d98
	if (!cr6.eq) goto loc_83143D98;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,8
	r11.s64 = 8;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// blr 
	return;
loc_83143D98:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x83143dd4
	if (!cr6.eq) goto loc_83143DD4;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r8,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// blr 
	return;
loc_83143DD4:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x83143e14
	if (!cr6.eq) goto loc_83143E14;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// blr 
	return;
loc_83143E14:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x83143e58
	if (!cr6.eq) goto loc_83143E58;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// blr 
	return;
loc_83143E58:
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x83143ea0
	if (!cr6.eq) goto loc_83143EA0;
	// li r11,8
	r11.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// blr 
	return;
loc_83143EA0:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x83143eb0
	if (cr6.eq) goto loc_83143EB0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_83143EB0:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x83143f1c
	goto loc_83143F1C;
loc_83143ED4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83143efc
	if (!cr6.eq) goto loc_83143EFC;
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83143EEC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83143eec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83143EEC;
	// blr 
	return;
loc_83143EFC:
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r5,60(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
loc_83143F1C:
	// stw r4,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r4.u32);
	// stw r5,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r5.u32);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// stw r7,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// stw r8,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83143F40"))) PPC_WEAK_FUNC(sub_83143F40);
PPC_FUNC_IMPL(__imp__sub_83143F40) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4384(r1)
	ea = -4384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r26,0
	r26.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// lfs f0,-9876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_83143F8C:
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
	// blt cr6,0x83143f8c
	if (cr6.lt) goto loc_83143F8C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83143fcc
	if (cr6.eq) goto loc_83143FCC;
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
loc_83143FCC:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// bl 0x83143d28
	sub_83143D28(ctx, base);
	// mr r30,r26
	r30.u64 = r26.u64;
	// lwz r24,64(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x83144158
	if (cr6.eq) goto loc_83144158;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r31,68
	r29.s64 = r31.s64 + 68;
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r31,r27,80
	r31.s64 = r27.s64 + 80;
	// li r25,1
	r25.s64 = 1;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_83144004:
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x83144020
	if (cr6.lt) goto loc_83144020;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x83144028
	goto loc_83144028;
loc_83144020:
	// lwz r4,72(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_83144028:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83144134
	if (cr6.eq) goto loc_83144134;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x83144134
	if (!cr6.gt) goto loc_83144134;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8314405c
	if (cr6.lt) goto loc_8314405C;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// b 0x8314406c
	goto loc_8314406C;
loc_8314405C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_8314406C:
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// blt cr6,0x83144078
	if (cr6.lt) goto loc_83144078;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_83144078:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// blt cr6,0x831440e0
	if (cr6.lt) goto loc_831440E0;
	// addi r11,r7,-4
	r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r5,12
	ctx.r10.s64 = ctx.r5.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// subf r6,r3,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r3.s64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_831440A0:
	// lfs f13,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,-4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfsx f11,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f9,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(f0.f64 * ctx.f7.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x831440a0
	if (!cr0.eq) goto loc_831440A0;
loc_831440E0:
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bge cr6,0x83144114
	if (!cr6.lt) goto loc_83144114;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r7
	r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r8,r3,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r3.s64;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
loc_831440FC:
	// lfsx f13,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x831440fc
	if (!cr0.eq) goto loc_831440FC;
loc_83144114:
	// subf r10,r9,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r9.s64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stbx r25,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r25.u8);
	// b 0x83144144
	goto loc_83144144;
loc_83144134:
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stbx r26,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r26.u8);
loc_83144144:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(r30.u32, r24.u32, xer);
	// blt cr6,0x83144004
	if (cr6.lt) goto loc_83144004;
loc_83144158:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r24,68(r27)
	PPC_STORE_U32(r27.u32 + 68, r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83144188
	if (cr6.eq) goto loc_83144188;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_83144170:
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r26.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83144170
	if (cr6.lt) goto loc_83144170;
loc_83144188:
	// addi r1,r1,4384
	ctx.r1.s64 = ctx.r1.s64 + 4384;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83144198"))) PPC_WEAK_FUNC(sub_83144198);
PPC_FUNC_IMPL(__imp__sub_83144198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r10,17860
	ctx.r9.s64 = ctx.r10.s64 + 17860;
	// li r5,128
	ctx.r5.s64 = 128;
	// lfd f31,-3744(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + -3744);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfd f31,16(r31)
	PPC_STORE_U64(r31.u32 + 16, f31.u64);
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stfd f31,296(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r31.u32 + 296, f31.u64);
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
	// addi r11,r31,312
	r11.s64 = r31.s64 + 312;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// lfd f0,-8872(r8)
	f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -8872);
	// stfd f0,8(r31)
	PPC_STORE_U64(r31.u32 + 8, f0.u64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314421C:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8314421c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314421C;
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// addi r11,r31,384
	r11.s64 = r31.s64 + 384;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83144238:
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x83144238
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83144238;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144268"))) PPC_WEAK_FUNC(sub_83144268);
PPC_FUNC_IMPL(__imp__sub_83144268) {
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
	// addi r9,r11,17860
	ctx.r9.s64 = r11.s64 + 17860;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8314429c
	if (cr6.eq) goto loc_8314429C;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314429C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831442B0"))) PPC_WEAK_FUNC(sub_831442B0);
PPC_FUNC_IMPL(__imp__sub_831442B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f31,f3
	f31.f64 = ctx.f3.f64;
	// bl 0x83144198
	sub_83144198(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// bge cr6,0x831442f8
	if (!cr6.lt) goto loc_831442F8;
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
loc_831442F8:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f0,-22120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fmuls f0,f29,f0
	f0.f64 = double(float(f29.f64 * f0.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x83144310
	if (!cr6.gt) goto loc_83144310;
	// fsubs f31,f0,f13
	f31.f64 = double(float(f0.f64 - ctx.f13.f64));
loc_83144310:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x8314f380
	sub_8314F380(ctx, base);
	// lwz r11,384(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lfd f0,376(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// lwz r10,456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// ble cr6,0x83144350
	if (!cr6.gt) goto loc_83144350;
loc_83144348:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831443d8
	goto loc_831443D8;
loc_83144350:
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x83144348
	if (cr6.gt) goto loc_83144348;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83144390
	if (cr6.eq) goto loc_83144390;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
loc_8314436C:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314436c
	if (cr6.lt) goto loc_8314436C;
loc_83144390:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x831443cc
	if (!cr6.gt) goto loc_831443CC;
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
loc_831443A8:
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x831443a8
	if (cr6.lt) goto loc_831443A8;
loc_831443CC:
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_831443D8:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
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

__attribute__((alias("__imp__sub_831443F8"))) PPC_WEAK_FUNC(sub_831443F8);
PPC_FUNC_IMPL(__imp__sub_831443F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,17868
	ctx.r7.s64 = ctx.r9.s64 + 17868;
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f0,-9876(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -9876);
	f0.f64 = double(temp.f32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r9,r11,96
	ctx.r9.s64 = r11.s64 + 96;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stfs f0,144(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stw r6,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r6.u32);
	// stw r10,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r10.u32);
	// stw r5,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r5.u32);
loc_8314444C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r9,r9,516
	ctx.r9.s64 = ctx.r9.s64 + 516;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314444c
	if (cr6.lt) goto loc_8314444C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144470"))) PPC_WEAK_FUNC(sub_83144470);
PPC_FUNC_IMPL(__imp__sub_83144470) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831444c0
	if (!cr6.eq) goto loc_831444C0;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r29,68
	ctx.r4.s64 = r29.s64 + 68;
	// stw r24,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r24.u32);
	// stw r4,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r4.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831444c0
	if (cr6.eq) goto loc_831444C0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831444C0:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r31,r24
	r31.u64 = r24.u64;
	// lwz r27,68(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83144554
	if (cr6.eq) goto loc_83144554;
	// mr r28,r25
	r28.u64 = r25.u64;
	// addi r30,r29,36
	r30.s64 = r29.s64 + 36;
	// addi r26,r25,80
	r26.s64 = r25.s64 + 80;
loc_831444E0:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x831444fc
	if (cr6.lt) goto loc_831444FC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x83144504
	goto loc_83144504;
loc_831444FC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_83144504:
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8314451c
	if (cr6.lt) goto loc_8314451C;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x83144524
	goto loc_83144524;
loc_8314451C:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_83144524:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 80);
	// stbx r10,r26,r31
	PPC_STORE_U8(r26.u32 + r31.u32, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x831444e0
	if (cr6.lt) goto loc_831444E0;
loc_83144554:
	// stw r27,68(r25)
	PPC_STORE_U32(r25.u32 + 68, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r11.u32);
	// bl 0x8314ebf0
	sub_8314EBF0(ctx, base);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x83144580
	if (!cr6.eq) goto loc_83144580;
	// stw r24,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r24.u32);
	// stw r24,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r24.u32);
loc_83144580:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83144588"))) PPC_WEAK_FUNC(sub_83144588);
PPC_FUNC_IMPL(__imp__sub_83144588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f24{};
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
	// bl 0x831b1428
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfs f12,17948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17948);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfs f0,2240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lis r4,-32237
	ctx.r4.s64 = -2112684032;
	// lfs f10,2440(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2440);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f9,17944(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17944);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lfs f8,29928(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 29928);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lfs f7,21320(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21320);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lfs f6,22496(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22496);
	ctx.f6.f64 = double(temp.f32);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lfs f5,17940(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17940);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,17936(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17936);
	ctx.f4.f64 = double(temp.f32);
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lfs f3,17932(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17932);
	ctx.f3.f64 = double(temp.f32);
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// lfs f2,17928(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17928);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f1,17924(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17924);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lfs f31,17920(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17920);
	f31.f64 = double(temp.f32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lfs f30,17916(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17916);
	f30.f64 = double(temp.f32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lfs f29,17912(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 17912);
	f29.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f28,17908(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17908);
	f28.f64 = double(temp.f32);
	// lfs f27,17904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17904);
	f27.f64 = double(temp.f32);
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lfs f26,17900(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17900);
	f26.f64 = double(temp.f32);
	// lfs f25,17896(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17896);
	f25.f64 = double(temp.f32);
	// lfs f24,17892(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17892);
	f24.f64 = double(temp.f32);
	// lfs f13,-7208(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -7208);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,1996(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1996, temp.u32);
	// stfs f11,1800(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1800, temp.u32);
	// stfs f0,1796(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1796, temp.u32);
	// stfs f10,1808(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1808, temp.u32);
	// stfs f0,1812(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1812, temp.u32);
	// stfs f9,1848(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1848, temp.u32);
	// stfs f0,1816(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1816, temp.u32);
	// stfs f8,1852(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1852, temp.u32);
	// stfs f0,1820(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1820, temp.u32);
	// stfs f7,1856(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1856, temp.u32);
	// stfs f0,1824(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1824, temp.u32);
	// stfs f6,1860(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1860, temp.u32);
	// stfs f0,1828(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1828, temp.u32);
	// stfs f5,1864(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1864, temp.u32);
	// stfs f0,1832(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1832, temp.u32);
	// stfs f4,1868(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1868, temp.u32);
	// stfs f0,1836(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1836, temp.u32);
	// stfs f3,1872(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1872, temp.u32);
	// stfs f0,1840(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1840, temp.u32);
	// stfs f12,1876(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1876, temp.u32);
	// stfs f0,1844(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1844, temp.u32);
	// stfs f2,1880(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1880, temp.u32);
	// stfs f1,1920(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1920, temp.u32);
	// stfs f31,1924(r3)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1924, temp.u32);
	// stfs f30,1928(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1928, temp.u32);
	// stfs f29,1932(r3)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1932, temp.u32);
	// stfs f28,1936(r3)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1936, temp.u32);
	// stfs f27,1940(r3)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1940, temp.u32);
	// stfs f26,1944(r3)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1944, temp.u32);
	// stfs f25,1948(r3)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1948, temp.u32);
	// stfs f24,1952(r3)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1952, temp.u32);
	// stfs f13,1956(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1956, temp.u32);
	// stfs f13,1960(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1960, temp.u32);
	// stfs f13,1964(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1964, temp.u32);
	// stfs f13,1968(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1968, temp.u32);
	// stfs f13,1972(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1972, temp.u32);
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// lfs f0,17888(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17888);
	f0.f64 = double(temp.f32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stfs f0,1976(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1976, temp.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lfs f0,17884(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 17884);
	f0.f64 = double(temp.f32);
	// lfs f13,17880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17880);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17876);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,13788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13788);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,1980(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1980, temp.u32);
	// stfs f13,1984(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1984, temp.u32);
	// stfs f12,1988(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1988, temp.u32);
	// stfs f11,1992(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1992, temp.u32);
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x831b1474
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144728"))) PPC_WEAK_FUNC(sub_83144728);
PPC_FUNC_IMPL(__imp__sub_83144728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r8,r11,26440
	ctx.r8.s64 = r11.s64 + 26440;
	// lfs f13,26440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f12,17952(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17952);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,1920(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1920, temp.u32);
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f2,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f9,1924(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1924, temp.u32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f13,f2,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f7,1928(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1928, temp.u32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f13,f2,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f5,1932(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1932, temp.u32);
	// lfs f13,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f4,f13,f2,f0
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f3,1936(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1936, temp.u32);
	// lfs f13,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f13,f2,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f13,1940(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1940, temp.u32);
	// lfs f13,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f2,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,1944(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1944, temp.u32);
	// lfs f13,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f2,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f8,1948(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1948, temp.u32);
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f13,f2,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + f0.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f6,1952(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1952, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831447D8"))) PPC_WEAK_FUNC(sub_831447D8);
PPC_FUNC_IMPL(__imp__sub_831447D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,26476
	ctx.r9.s64 = r11.s64 + 26476;
	// lfs f13,26476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26476);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// fmadds f13,f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,1812(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1812, temp.u32);
	// lfs f13,26476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26476);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f4,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f10,1848(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1848, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f3,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f8,1816(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1816, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f13,f4,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f6,f7,f2
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// stfs f6,1852(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1852, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f13,f3,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f13,f5,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f13,1820(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1820, temp.u32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f4,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f11,1856(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1856, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f3,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// stfs f9,1824(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1824, temp.u32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f13,f4,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// stfs f7,1860(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1860, temp.u32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f13,f3,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f5,1828(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1828, temp.u32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f12,1864(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1864, temp.u32);
	// lfs f13,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f3,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f10,1832(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1832, temp.u32);
	// lfs f13,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f4,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// stfs f8,1868(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1868, temp.u32);
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f13,f3,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f6,1836(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1836, temp.u32);
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f5,f13,f4,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f13,1872(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1872, temp.u32);
	// lfs f13,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f3,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,1840(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1840, temp.u32);
	// lfs f13,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f4,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f9,1876(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1876, temp.u32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f13,f3,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + f0.f64));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f7,1844(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1844, temp.u32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f13,f4,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + f0.f64));
	// fmuls f5,f6,f2
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// stfs f5,1880(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1880, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144910"))) PPC_WEAK_FUNC(sub_83144910);
PPC_FUNC_IMPL(__imp__sub_83144910) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,17860
	ctx.r9.s64 = r11.s64 + 17860;
	// addi r8,r10,17864
	ctx.r8.s64 = ctx.r10.s64 + 17864;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// beq cr6,0x8314495c
	if (cr6.eq) goto loc_8314495C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8314495C:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83144974
	if (cr6.eq) goto loc_83144974;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83144974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144990"))) PPC_WEAK_FUNC(sub_83144990);
PPC_FUNC_IMPL(__imp__sub_83144990) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831449c4
	if (cr6.eq) goto loc_831449C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831449C4:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83144db4
	if (cr6.eq) goto loc_83144DB4;
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x831449e8
	if (cr6.gt) goto loc_831449E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x831449f0
	goto loc_831449F0;
loc_831449E8:
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_831449F0:
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x83144bec
	if (!cr6.gt) goto loc_83144BEC;
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83144bec
	if (cr6.eq) goto loc_83144BEC;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x83144b68
	if (cr6.lt) goto loc_83144B68;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83144A2C:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	f0.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfsx f12,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// stfsx f11,r3,r29
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + r29.u32, temp.u32);
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f10,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - r29.s64;
	// addi r29,r8,1
	r29.s64 = ctx.r8.s64 + 1;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r29,r29,r3
	r29.u64 = r29.u64 & ctx.r3.u64;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r3,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
	// fmadds f7,f9,f8,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f10.f64));
	// stfsx f7,r29,r7
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r29.u32 + ctx.r7.u32, temp.u32);
	// stfs f8,-4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - r29.s64;
	// addi r29,r8,1
	r29.s64 = ctx.r8.s64 + 1;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r29,r29,r7
	r29.u64 = r29.u64 & ctx.r7.u64;
	// and r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r7,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f4.f64 = double(temp.f32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// fmadds f3,f5,f4,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f6.f64));
	// stfsx f3,r29,r3
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r29.u32 + ctx.r3.u32, temp.u32);
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lfs f2,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// extsw r8,r7
	ctx.r8.s64 = ctx.r7.s32;
	// subf r8,r28,r8
	ctx.r8.s64 = ctx.r8.s64 - r28.s64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + r29.u32);
	f0.f64 = double(temp.f32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// fmadds f13,f1,f0,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f2.f64));
	// stfsx f13,r8,r29
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + r29.u32, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x83144a2c
	if (!cr0.eq) goto loc_83144A2C;
loc_83144B68:
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x83144da8
	if (!cr6.lt) goto loc_83144DA8;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r9,r6,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_83144B80:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// and r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 & ctx.r6.u64;
	// and r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 & ctx.r6.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// stfsx f11,r4,r5
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x83144b80
	if (!cr0.eq) goto loc_83144B80;
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r30)
	PPC_STORE_U8(r30.u32 + 80, r11.u8);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83144BEC:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// blt cr6,0x83144d3c
	if (cr6.lt) goto loc_83144D3C;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_83144C10:
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r7,r3,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r3.s64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// and r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 & ctx.r3.u64;
	// and r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ctx.r3.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfsx f12,r3,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + r29.u32, temp.u32);
	// stfs f13,-8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r28,20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// subf r8,r29,r8
	ctx.r8.s64 = ctx.r8.s64 - r29.s64;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & r28.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r29,r7,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfsx f9,r29,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r29.u32 + ctx.r3.u32, temp.u32);
	// stfs f10,-4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 & ctx.r7.u64;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r3,r29
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfsx f6,r7,r29
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + r29.u32, temp.u32);
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lfs f5,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r7,r29
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r29.u32);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// stfsx f3,r3,r29
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + r29.u32, temp.u32);
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x83144c10
	if (!cr0.eq) goto loc_83144C10;
loc_83144D3C:
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bge cr6,0x83144da8
	if (!cr6.lt) goto loc_83144DA8;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,28
	r11.s64 = r31.s64 + 28;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_83144D54:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// and r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 & ctx.r6.u64;
	// and r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 & ctx.r6.u64;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfsx f12,r4,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// stfs f13,0(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x83144d54
	if (!cr0.eq) goto loc_83144D54;
loc_83144DA8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,80(r30)
	PPC_STORE_U8(r30.u32 + 80, r11.u8);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
loc_83144DB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83144DC0"))) PPC_WEAK_FUNC(sub_83144DC0);
PPC_FUNC_IMPL(__imp__sub_83144DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,17976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17976);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x83144e38
	if (!cr6.lt) goto loc_83144E38;
loc_83144DF0:
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r11,r3,72
	r11.s64 = ctx.r3.s64 + 72;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r5,72(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// ble cr6,0x83144e30
	if (!cr6.gt) goto loc_83144E30;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_83144E18:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x83144e18
	if (cr6.lt) goto loc_83144E18;
loc_83144E30:
	// add r11,r8,r3
	r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stb r6,80(r11)
	PPC_STORE_U8(r11.u32 + 80, ctx.r6.u8);
loc_83144E38:
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// blt cr6,0x83144df0
	if (cr6.lt) goto loc_83144DF0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83144E50"))) PPC_WEAK_FUNC(sub_83144E50);
PPC_FUNC_IMPL(__imp__sub_83144E50) {
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
	// li r9,8
	ctx.r9.s64 = 8;
	// li r27,0
	r27.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// lfs f0,-9876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r11,r27
	r11.u64 = r27.u64;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_83144E98:
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
	// blt cr6,0x83144e98
	if (cr6.lt) goto loc_83144E98;
	// lwz r28,64(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// lwz r24,68(r30)
	r24.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x83144edc
	if (cr6.eq) goto loc_83144EDC;
	// addi r11,r30,80
	r11.s64 = r30.s64 + 80;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
loc_83144ED0:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x83144ed0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83144ED0;
loc_83144EDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83144dc0
	sub_83144DC0(ctx, base);
	// lwz r26,8(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x83145164
	if (cr6.eq) goto loc_83145164;
	// li r25,1
	r25.s64 = 1;
loc_83144EF4:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83144f14
	if (cr6.eq) goto loc_83144F14;
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
loc_83144F14:
	// lwz r29,148(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x83144f24
	if (cr6.lt) goto loc_83144F24;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_83144F24:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8314514c
	if (cr6.eq) goto loc_8314514C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,80
	ctx.r5.s64 = r30.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r31,r30,r11
	r31.s64 = r11.s64 - r30.s64;
	// subfic r3,r30,-80
	xer.ca = r30.u32 <= 4294967216;
	ctx.r3.s64 = -80 - r30.s64;
loc_83144F40:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r11,r3,r5
	r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// bge cr6,0x83144f58
	if (!cr6.lt) goto loc_83144F58;
	// lwzx r10,r31,r4
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + ctx.r4.u32);
loc_83144F58:
	// lwz r9,64(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83144f70
	if (cr6.lt) goto loc_83144F70;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x83144f78
	goto loc_83144F78;
loc_83144F70:
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83144F78:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83145128
	if (cr6.eq) goto loc_83145128;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83145128
	if (cr6.eq) goto loc_83145128;
	// lbzx r9,r31,r5
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + ctx.r5.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83145128
	if (cr6.eq) goto loc_83145128;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83145120
	if (cr6.eq) goto loc_83145120;
loc_83144FA0:
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// ble cr6,0x83145080
	if (!cr6.gt) goto loc_83145080;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lfs f7,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// blt cr6,0x83144fa0
	if (cr6.lt) goto loc_83144FA0;
	// stb r25,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r25.u8);
	// b 0x83145138
	goto loc_83145138;
loc_83145080:
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// blt cr6,0x831450f4
	if (cr6.lt) goto loc_831450F4;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
loc_831450A4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x831450a4
	if (!cr0.eq) goto loc_831450A4;
loc_831450F4:
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x83145120
	if (!cr6.lt) goto loc_83145120;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
loc_83145100:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x83145100
	if (!cr0.eq) goto loc_83145100;
loc_83145120:
	// stb r25,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r25.u8);
	// b 0x83145138
	goto loc_83145138;
loc_83145128:
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lbzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + ctx.r5.u32);
	// or r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 | r11.u64;
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
loc_83145138:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// add r11,r3,r5
	r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x83144f40
	if (cr6.lt) goto loc_83144F40;
loc_8314514C:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// ble cr6,0x83145158
	if (!cr6.gt) goto loc_83145158;
	// mr r24,r29
	r24.u64 = r29.u64;
loc_83145158:
	// lwz r26,4(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x83144ef4
	if (!cr6.eq) goto loc_83144EF4;
loc_83145164:
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r27
	r11.u64 = r27.u64;
	// stw r24,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r24.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83145194
	if (cr6.eq) goto loc_83145194;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8314517C:
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314517c
	if (cr6.lt) goto loc_8314517C;
loc_83145194:
	// addi r1,r1,4384
	ctx.r1.s64 = ctx.r1.s64 + 4384;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_831451A0"))) PPC_WEAK_FUNC(sub_831451A0);
PPC_FUNC_IMPL(__imp__sub_831451A0) {
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831451d8
	if (cr6.eq) goto loc_831451D8;
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
loc_831451D8:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831451f4
	if (cr6.eq) goto loc_831451F4;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
loc_831451F4:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145210
	if (cr6.eq) goto loc_83145210;
	// lwz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
loc_83145210:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314522c
	if (cr6.eq) goto loc_8314522C;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_8314522C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314525c
	if (cr6.eq) goto loc_8314525C;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
loc_8314525C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145278
	if (cr6.eq) goto loc_83145278;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
loc_83145278:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314529c
	if (cr6.eq) goto loc_8314529C;
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_8314529C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831452c0
	if (cr6.eq) goto loc_831452C0;
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
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
loc_831452C0:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831452e4
	if (cr6.eq) goto loc_831452E4;
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
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
loc_831452E4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145308
	if (cr6.eq) goto loc_83145308;
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
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
loc_83145308:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314532c
	if (cr6.eq) goto loc_8314532C;
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
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
loc_8314532C:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145350
	if (cr6.eq) goto loc_83145350;
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
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
loc_83145350:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145374
	if (cr6.eq) goto loc_83145374;
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
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_83145374:
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

__attribute__((alias("__imp__sub_831453A8"))) PPC_WEAK_FUNC(sub_831453A8);
PPC_FUNC_IMPL(__imp__sub_831453A8) {
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831453d0
	if (cr6.eq) goto loc_831453D0;
	// bl 0x8314fa58
	sub_8314FA58(ctx, base);
loc_831453D0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831453e8
	if (cr6.eq) goto loc_831453E8;
	// bl 0x831451a0
	sub_831451A0(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_831453E8:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831453fc
	if (cr6.eq) goto loc_831453FC;
	// bl 0x831501e0
	sub_831501E0(ctx, base);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_831453FC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314541c
	if (cr6.eq) goto loc_8314541C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_8314541C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145430
	if (cr6.eq) goto loc_83145430;
	// bl 0x83168748
	sub_83168748(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_83145430:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145444
	if (cr6.eq) goto loc_83145444;
	// bl 0x83168748
	sub_83168748(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_83145444:
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145478"))) PPC_WEAK_FUNC(sub_83145478);
PPC_FUNC_IMPL(__imp__sub_83145478) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83168760
	sub_83168760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145480"))) PPC_WEAK_FUNC(sub_83145480);
PPC_FUNC_IMPL(__imp__sub_83145480) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83168778
	sub_83168778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145488"))) PPC_WEAK_FUNC(sub_83145488);
PPC_FUNC_IMPL(__imp__sub_83145488) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x83168760
	sub_83168760(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145490"))) PPC_WEAK_FUNC(sub_83145490);
PPC_FUNC_IMPL(__imp__sub_83145490) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x83168778
	sub_83168778(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83145498"))) PPC_WEAK_FUNC(sub_83145498);
PPC_FUNC_IMPL(__imp__sub_83145498) {
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
	// addi r9,r11,17988
	ctx.r9.s64 = r11.s64 + 17988;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x831454d0
	if (cr6.eq) goto loc_831454D0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831454D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831454E8"))) PPC_WEAK_FUNC(sub_831454E8);
PPC_FUNC_IMPL(__imp__sub_831454E8) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145518
	if (cr6.eq) goto loc_83145518;
	// bl 0x831522f8
	sub_831522F8(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_83145518:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145538
	if (cr6.eq) goto loc_83145538;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_83145538:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314554c
	if (cr6.eq) goto loc_8314554C;
	// bl 0x83168240
	sub_83168240(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
loc_8314554C:
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83145564
	if (cr6.eq) goto loc_83145564;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_83145564:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145578
	if (cr6.eq) goto loc_83145578;
	// bl 0x83168748
	sub_83168748(ctx, base);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
loc_83145578:
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

__attribute__((alias("__imp__sub_831455A8"))) PPC_WEAK_FUNC(sub_831455A8);
PPC_FUNC_IMPL(__imp__sub_831455A8) {
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
	// addi r9,r11,18012
	ctx.r9.s64 = r11.s64 + 18012;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x831455e0
	if (cr6.eq) goto loc_831455E0;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_831455E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831455F8"))) PPC_WEAK_FUNC(sub_831455F8);
PPC_FUNC_IMPL(__imp__sub_831455F8) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_83145650"))) PPC_WEAK_FUNC(sub_83145650);
PPC_FUNC_IMPL(__imp__sub_83145650) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314567c
	if (cr6.eq) goto loc_8314567C;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314567c
	if (cr6.eq) goto loc_8314567C;
	// bl 0x8314eb88
	sub_8314EB88(ctx, base);
loc_8314567C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831456dc
	if (cr6.eq) goto loc_831456DC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831456dc
	if (cr6.eq) goto loc_831456DC;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r30,20(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831456b8
	if (cr6.eq) goto loc_831456B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
loc_831456B8:
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831456dc
	if (cr6.eq) goto loc_831456DC;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x831456dc
	if (cr6.eq) goto loc_831456DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314ecf8
	sub_8314ECF8(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
loc_831456DC:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831456f0
	if (cr6.eq) goto loc_831456F0;
	// bl 0x831598c0
	sub_831598C0(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
loc_831456F0:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145708
	if (cr6.eq) goto loc_83145708;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
loc_83145708:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145728
	if (cr6.eq) goto loc_83145728;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
loc_83145728:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145748
	if (cr6.eq) goto loc_83145748;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
loc_83145748:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145768
	if (cr6.eq) goto loc_83145768;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
loc_83145768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83145770"))) PPC_WEAK_FUNC(sub_83145770);
PPC_FUNC_IMPL(__imp__sub_83145770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-4400(r1)
	ea = -4400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r23,0
	r23.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r23,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r23.u32);
	// lfs f0,-9876(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// mr r11,r23
	r11.u64 = r23.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_831457C0:
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
	// blt cr6,0x831457c0
	if (cr6.lt) goto loc_831457C0;
	// stw r23,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r23.u32);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83145810
	if (cr6.eq) goto loc_83145810;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83145810:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// bl 0x83151938
	sub_83151938(ctx, base);
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x831458e4
	if (cr6.eq) goto loc_831458E4;
loc_8314583C:
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145860
	if (cr6.eq) goto loc_83145860;
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
loc_83145860:
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x831458d8
	if (cr6.eq) goto loc_831458D8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r24
	r31.u64 = r24.u64;
	// subf r28,r24,r11
	r28.s64 = r11.s64 - r24.s64;
loc_8314587C:
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lbzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x831458b4
	if (!cr6.eq) goto loc_831458B4;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x831458a0
	if (!cr6.lt) goto loc_831458A0;
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
loc_831458A0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x831458c8
	goto loc_831458C8;
loc_831458B4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_831458C8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// blt cr6,0x8314587c
	if (cr6.lt) goto loc_8314587C;
loc_831458D8:
	// addi r27,r27,128
	r27.s64 = r27.s64 + 128;
	// cmplw cr6,r27,r22
	cr6.compare<uint32_t>(r27.u32, r22.u32, xer);
	// blt cr6,0x8314583c
	if (cr6.lt) goto loc_8314583C;
loc_831458E4:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,48(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 48);
	// bl 0x83153cd0
	sub_83153CD0(ctx, base);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,52(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83145920
	if (cr6.eq) goto loc_83145920;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83145920:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r23
	r11.u64 = r23.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83145960
	if (cr6.eq) goto loc_83145960;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_83145948:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r23,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x83145948
	if (cr6.lt) goto loc_83145948;
loc_83145960:
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_83145968"))) PPC_WEAK_FUNC(sub_83145968);
PPC_FUNC_IMPL(__imp__sub_83145968) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// bl 0x83144588
	sub_83144588(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
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

__attribute__((alias("__imp__sub_831459D0"))) PPC_WEAK_FUNC(sub_831459D0);
PPC_FUNC_IMPL(__imp__sub_831459D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,56(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f31,1808(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1808, temp.u32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83145A40"))) PPC_WEAK_FUNC(sub_83145A40);
PPC_FUNC_IMPL(__imp__sub_83145A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r11,0
	r11.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// bl 0x83144728
	sub_83144728(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145AC8"))) PPC_WEAK_FUNC(sub_83145AC8);
PPC_FUNC_IMPL(__imp__sub_83145AC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1438
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r11,0
	r11.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// bl 0x831447d8
	sub_831447D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1484
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145B60"))) PPC_WEAK_FUNC(sub_83145B60);
PPC_FUNC_IMPL(__imp__sub_83145B60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,56(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r5,8(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stfs f31,1996(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 1996, temp.u32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83145BD0"))) PPC_WEAK_FUNC(sub_83145BD0);
PPC_FUNC_IMPL(__imp__sub_83145BD0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bl 0x8314faa0
	sub_8314FAA0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
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

__attribute__((alias("__imp__sub_83145C48"))) PPC_WEAK_FUNC(sub_83145C48);
PPC_FUNC_IMPL(__imp__sub_83145C48) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// bl 0x8314faa8
	sub_8314FAA8(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83145CB8"))) PPC_WEAK_FUNC(sub_83145CB8);
PPC_FUNC_IMPL(__imp__sub_83145CB8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x83153320
	sub_83153320(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_83145D28"))) PPC_WEAK_FUNC(sub_83145D28);
PPC_FUNC_IMPL(__imp__sub_83145D28) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83145D98"))) PPC_WEAK_FUNC(sub_83145D98);
PPC_FUNC_IMPL(__imp__sub_83145D98) {
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
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

__attribute__((alias("__imp__sub_83145DF8"))) PPC_WEAK_FUNC(sub_83145DF8);
PPC_FUNC_IMPL(__imp__sub_83145DF8) {
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
	// addi r5,r11,18116
	ctx.r5.s64 = r11.s64 + 18116;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145e48
	if (cr6.eq) goto loc_83145E48;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83143cc8
	sub_83143CC8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83145e60
	if (!cr6.eq) goto loc_83145E60;
loc_83145E48:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18104
	ctx.r4.s64 = r11.s64 + 18104;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_83145E60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83145E68"))) PPC_WEAK_FUNC(sub_83145E68);
PPC_FUNC_IMPL(__imp__sub_83145E68) {
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
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83145ea4
	if (cr6.eq) goto loc_83145EA4;
	// li r4,132
	ctx.r4.s64 = 132;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83145EA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145EC0"))) PPC_WEAK_FUNC(sub_83145EC0);
PPC_FUNC_IMPL(__imp__sub_83145EC0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145ef0
	if (cr6.eq) goto loc_83145EF0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83145EF0:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
loc_83145EFC:
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x83145f14
	if (!cr6.lt) goto loc_83145F14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x83145efc
	if (cr6.lt) goto loc_83145EFC;
loc_83145F14:
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168678
	sub_83168678(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83145f58
	if (!cr6.eq) goto loc_83145F58;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18124
	ctx.r4.s64 = r11.s64 + 18124;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83145F58:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83145F80"))) PPC_WEAK_FUNC(sub_83145F80);
PPC_FUNC_IMPL(__imp__sub_83145F80) {
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
	// addi r10,r11,17864
	ctx.r10.s64 = r11.s64 + 17864;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83145fc0
	if (cr6.eq) goto loc_83145FC0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83145FC0:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83145fd8
	if (cr6.eq) goto loc_83145FD8;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83145FD8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83145FF0"))) PPC_WEAK_FUNC(sub_83145FF0);
PPC_FUNC_IMPL(__imp__sub_83145FF0) {
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
	// addi r5,r11,18148
	ctx.r5.s64 = r11.s64 + 18148;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,4292
	ctx.r3.s64 = 4292;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83146040
	if (cr6.eq) goto loc_83146040;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x831443f8
	sub_831443F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314605c
	if (!cr6.eq) goto loc_8314605C;
loc_83146040:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18136
	ctx.r4.s64 = r11.s64 + 18136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x831460a0
	goto loc_831460A0;
loc_8314605C:
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r7,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r7.u32);
	// stw r6,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
loc_831460A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831460B8"))) PPC_WEAK_FUNC(sub_831460B8);
PPC_FUNC_IMPL(__imp__sub_831460B8) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r9,r31,68
	ctx.r9.s64 = r31.s64 + 68;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x83146108
	if (!cr6.gt) goto loc_83146108;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_831460F0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x831460f0
	if (cr6.lt) goto loc_831460F0;
loc_83146108:
	// stw r8,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r8.u32);
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
	// beq cr6,0x83146130
	if (cr6.eq) goto loc_83146130;
	// li r4,4292
	ctx.r4.s64 = 4292;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83146130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146148"))) PPC_WEAK_FUNC(sub_83146148);
PPC_FUNC_IMPL(__imp__sub_83146148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lis r31,-32256
	r31.s64 = -2113929216;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r9,r11,18156
	ctx.r9.s64 = r11.s64 + 18156;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 + 28;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lfs f0,2240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 2240);
	f0.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r11,r7,108
	r11.s64 = ctx.r7.s64 + 108;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r6,r9,17860
	ctx.r6.s64 = ctx.r9.s64 + 17860;
	// addi r5,r8,17956
	ctx.r5.s64 = ctx.r8.s64 + 17956;
loc_83146198:
	// stfs f0,-84(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -84, temp.u32);
	// stw r10,-100(r11)
	PPC_STORE_U32(r11.u32 + -100, ctx.r10.u32);
	// stw r10,-104(r11)
	PPC_STORE_U32(r11.u32 + -104, ctx.r10.u32);
	// addi r9,r11,-64
	ctx.r9.s64 = r11.s64 + -64;
	// stw r10,-96(r11)
	PPC_STORE_U32(r11.u32 + -96, ctx.r10.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r10,-92(r11)
	PPC_STORE_U32(r11.u32 + -92, ctx.r10.u32);
	// stw r10,-88(r11)
	PPC_STORE_U32(r11.u32 + -88, ctx.r10.u32);
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stw r10,-68(r11)
	PPC_STORE_U32(r11.u32 + -68, ctx.r10.u32);
	// stw r6,-80(r11)
	PPC_STORE_U32(r11.u32 + -80, ctx.r6.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_831461CC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x831461cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831461CC;
	// addi r9,r11,-32
	ctx.r9.s64 = r11.s64 + -32;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_831461E4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x831461e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831461E4;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_831461FC:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x831461fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831461FC;
	// addi r9,r11,36
	ctx.r9.s64 = r11.s64 + 36;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83146214:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x83146214
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83146214;
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r7,r7,176
	ctx.r7.s64 = ctx.r7.s64 + 176;
	// addi r11,r11,176
	r11.s64 = r11.s64 + 176;
	// bge 0x83146198
	if (!cr0.lt) goto loc_83146198;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stfs f0,1636(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1636, temp.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stfs f0,1640(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1640, temp.u32);
	// addi r8,r11,17864
	ctx.r8.s64 = r11.s64 + 17864;
	// stfs f0,1668(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1668, temp.u32);
	// addi r7,r9,17864
	ctx.r7.s64 = ctx.r9.s64 + 17864;
	// stfs f0,1672(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1672, temp.u32);
	// stfs f0,1700(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1700, temp.u32);
	// stw r10,1620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1620, ctx.r10.u32);
	// stfs f0,1704(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1704, temp.u32);
	// stw r10,1616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1616, ctx.r10.u32);
	// stfs f0,1732(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1732, temp.u32);
	// stw r10,1624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1624, ctx.r10.u32);
	// stfs f0,1736(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1736, temp.u32);
	// stw r10,1628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1628, ctx.r10.u32);
	// stfs f0,1764(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1764, temp.u32);
	// stw r10,1632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1632, ctx.r10.u32);
	// stfs f0,1768(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1768, temp.u32);
	// stw r8,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r8.u32);
	// stw r10,1652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1652, ctx.r10.u32);
	// stw r10,1648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1648, ctx.r10.u32);
	// stw r10,1656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1656, ctx.r10.u32);
	// stw r10,1660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1660, ctx.r10.u32);
	// stw r10,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r10.u32);
	// stw r8,1644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1644, ctx.r8.u32);
	// stw r10,1684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1684, ctx.r10.u32);
	// stw r10,1680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1680, ctx.r10.u32);
	// stw r10,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r10.u32);
	// stw r10,1692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1692, ctx.r10.u32);
	// stw r10,1696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1696, ctx.r10.u32);
	// stw r8,1676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1676, ctx.r8.u32);
	// stw r10,1716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1716, ctx.r10.u32);
	// stw r10,1712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1712, ctx.r10.u32);
	// stw r10,1720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1720, ctx.r10.u32);
	// stw r10,1724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1724, ctx.r10.u32);
	// stw r10,1728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1728, ctx.r10.u32);
	// stw r8,1708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1708, ctx.r8.u32);
	// stw r10,1748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1748, ctx.r10.u32);
	// stw r10,1744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1744, ctx.r10.u32);
	// stw r10,1752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1752, ctx.r10.u32);
	// stw r10,1756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1756, ctx.r10.u32);
	// stw r10,1760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1760, ctx.r10.u32);
	// stw r8,1740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1740, ctx.r8.u32);
	// stw r7,1772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1772, ctx.r7.u32);
	// stw r10,1780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1780, ctx.r10.u32);
	// stw r10,1776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1776, ctx.r10.u32);
	// stw r10,1784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1784, ctx.r10.u32);
	// stw r10,1788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1788, ctx.r10.u32);
	// stw r10,1792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1792, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146300"))) PPC_WEAK_FUNC(sub_83146300);
PPC_FUNC_IMPL(__imp__sub_83146300) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83146338
	if (cr6.eq) goto loc_83146338;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83146338:
	// lwz r11,2000(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 2000);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x83146448
	if (cr6.eq) goto loc_83146448;
	// lwz r11,64(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 64);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83146358
	if (cr6.eq) goto loc_83146358;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
loc_83146358:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// ble cr6,0x83146368
	if (!cr6.gt) goto loc_83146368;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_83146368:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// li r31,0
	r31.s64 = 0;
	// ble cr6,0x83146378
	if (!cr6.gt) goto loc_83146378;
	// lwz r31,8(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 8);
loc_83146378:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x8314638c
	if (cr6.gt) goto loc_8314638C;
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// b 0x83146394
	goto loc_83146394;
loc_8314638C:
	// lwz r30,72(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
loc_83146394:
	// lbz r8,80(r25)
	ctx.r8.u64 = PPC_LOAD_U8(r25.u32 + 80);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x831463ec
	if (!cr6.eq) goto loc_831463EC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8314642c
	if (cr6.eq) goto loc_8314642C;
	// subf r29,r31,r11
	r29.s64 = r11.s64 - r31.s64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// subf r28,r31,r10
	r28.s64 = ctx.r10.s64 - r31.s64;
	// subf r27,r31,r9
	r27.s64 = ctx.r9.s64 - r31.s64;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_831463BC:
	// add r9,r29,r31
	ctx.r9.u64 = r29.u64 + r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// add r7,r28,r31
	ctx.r7.u64 = r28.u64 + r31.u64;
	// add r6,r27,r31
	ctx.r6.u64 = r27.u64 + r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83154100
	sub_83154100(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x831463bc
	if (!cr0.eq) goto loc_831463BC;
	// b 0x8314642c
	goto loc_8314642C;
loc_831463EC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8314642c
	if (cr6.eq) goto loc_8314642C;
	// subf r28,r31,r11
	r28.s64 = r11.s64 - r31.s64;
	// subf r27,r31,r10
	r27.s64 = ctx.r10.s64 - r31.s64;
	// subf r29,r31,r9
	r29.s64 = ctx.r9.s64 - r31.s64;
loc_83146400:
	// add r6,r31,r29
	ctx.r6.u64 = r31.u64 + r29.u64;
	// lfsx f1,r31,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + r29.u32);
	ctx.f1.f64 = double(temp.f32);
	// add r9,r31,r28
	ctx.r9.u64 = r31.u64 + r28.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// add r7,r31,r27
	ctx.r7.u64 = r31.u64 + r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x83154100
	sub_83154100(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x83146400
	if (!cr0.eq) goto loc_83146400;
loc_8314642C:
	// li r11,1
	r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,80(r25)
	PPC_STORE_U8(r25.u32 + 80, r11.u8);
	// stb r11,81(r25)
	PPC_STORE_U8(r25.u32 + 81, r11.u8);
	// stb r11,82(r25)
	PPC_STORE_U8(r25.u32 + 82, r11.u8);
	// stb r11,83(r25)
	PPC_STORE_U8(r25.u32 + 83, r11.u8);
	// stw r10,68(r25)
	PPC_STORE_U32(r25.u32 + 68, ctx.r10.u32);
loc_83146448:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83146458"))) PPC_WEAK_FUNC(sub_83146458);
PPC_FUNC_IMPL(__imp__sub_83146458) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r29,r11,17864
	r29.s64 = r11.s64 + 17864;
	// lwz r3,1776(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 1776);
	// stw r29,1772(r27)
	PPC_STORE_U32(r27.u32 + 1772, r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314648c
	if (cr6.eq) goto loc_8314648C;
	// lwz r11,1780(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 1780);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_8314648C:
	// addi r31,r27,1772
	r31.s64 = r27.s64 + 1772;
	// li r30,4
	r30.s64 = 4;
loc_83146494:
	// addi r31,r31,-32
	r31.s64 = r31.s64 + -32;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831464b4
	if (cr6.eq) goto loc_831464B4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_831464B4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x83146494
	if (!cr0.lt) goto loc_83146494;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r31,r27,1612
	r31.s64 = r27.s64 + 1612;
	// li r28,8
	r28.s64 = 8;
	// addi r30,r11,17860
	r30.s64 = r11.s64 + 17860;
loc_831464CC:
	// addi r31,r31,-176
	r31.s64 = r31.s64 + -176;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831464f0
	if (cr6.eq) goto loc_831464F0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_831464F0:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x831464cc
	if (!cr0.lt) goto loc_831464CC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83146508"))) PPC_WEAK_FUNC(sub_83146508);
PPC_FUNC_IMPL(__imp__sub_83146508) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r28,1772
	ctx.r3.s64 = r28.s64 + 1772;
	// lfs f31,1804(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1804);
	f31.f64 = double(temp.f32);
	// lwz r27,24(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lfs f0,1808(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 1808);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// lfs f30,-21804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21804);
	f30.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83145ec0
	sub_83145EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83146578
	if (!cr6.eq) goto loc_83146578;
loc_83146560:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
loc_83146578:
	// li r29,0
	r29.s64 = 0;
	// addi r30,r28,56
	r30.s64 = r28.s64 + 56;
	// addi r31,r28,1812
	r31.s64 = r28.s64 + 1812;
loc_83146584:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f3,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x831442b0
	sub_831442B0(ctx, base);
	// lfs f0,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 108);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// li r11,3
	r11.s64 = 3;
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// ble cr6,0x831465f0
	if (!cr6.gt) goto loc_831465F0;
loc_831465C4:
	// divwu r9,r5,r11
	ctx.r9.u32 = ctx.r5.u32 / r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// subf. r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x831465e4
	if (!cr0.eq) goto loc_831465E4;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// li r11,3
	r11.s64 = 3;
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_831465E4:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x831465c4
	if (cr6.lt) goto loc_831465C4;
loc_831465F0:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 72);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stfs f0,-4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -4, temp.u32);
	// addi r3,r30,-28
	ctx.r3.s64 = r30.s64 + -28;
	// bl 0x83145ec0
	sub_83145EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83146560
	if (cr6.eq) goto loc_83146560;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,176
	r30.s64 = r30.s64 + 176;
	// cmplwi cr6,r29,9
	cr6.compare<uint32_t>(r29.u32, 9, xer);
	// blt cr6,0x83146584
	if (cr6.lt) goto loc_83146584;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r28,1956
	r31.s64 = r28.s64 + 1956;
	// addi r30,r28,1636
	r30.s64 = r28.s64 + 1636;
	// lfs f29,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f29.f64 = double(temp.f32);
loc_83146634:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// li r11,3
	r11.s64 = 3;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fctidz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// ble cr6,0x8314668c
	if (!cr6.gt) goto loc_8314668C;
loc_83146660:
	// divwu r9,r5,r11
	ctx.r9.u32 = ctx.r5.u32 / r11.u32;
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// subf. r7,r8,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x83146680
	if (!cr0.eq) goto loc_83146680;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// li r11,3
	r11.s64 = 3;
	// rlwinm r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_83146680:
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83146660
	if (cr6.lt) goto loc_83146660;
loc_8314668C:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fnmsubs f13,f0,f0,f29
	ctx.f13.f64 = double(float(-(f0.f64 * f0.f64 - f29.f64)));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r3,r30,-24
	ctx.r3.s64 = r30.s64 + -24;
	// bl 0x83145ec0
	sub_83145EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83146560
	if (cr6.eq) goto loc_83146560;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(r29.u32, 5, xer);
	// blt cr6,0x83146634
	if (cr6.lt) goto loc_83146634;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831466E0"))) PPC_WEAK_FUNC(sub_831466E0);
PPC_FUNC_IMPL(__imp__sub_831466E0) {
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
	// bl 0x83146458
	sub_83146458(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314671c
	if (cr6.eq) goto loc_8314671C;
	// li r4,2004
	ctx.r4.s64 = 2004;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314671C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146738"))) PPC_WEAK_FUNC(sub_83146738);
PPC_FUNC_IMPL(__imp__sub_83146738) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f11,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,52(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,-21804(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21804);
	f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83145ec0
	sub_83145EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831467a4
	if (!cr6.eq) goto loc_831467A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,18164
	ctx.r4.s64 = r11.s64 + 18164;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// b 0x831467ac
	goto loc_831467AC;
loc_831467A4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
loc_831467AC:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
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

__attribute__((alias("__imp__sub_831467C8"))) PPC_WEAK_FUNC(sub_831467C8);
PPC_FUNC_IMPL(__imp__sub_831467C8) {
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
	// addi r10,r11,17864
	ctx.r10.s64 = r11.s64 + 17864;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83146808
	if (cr6.eq) goto loc_83146808;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168618
	sub_83168618(ctx, base);
loc_83146808:
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
	// beq cr6,0x8314682c
	if (cr6.eq) goto loc_8314682C;
	// li r4,72
	ctx.r4.s64 = 72;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314682C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146848"))) PPC_WEAK_FUNC(sub_83146848);
PPC_FUNC_IMPL(__imp__sub_83146848) {
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
	// addi r5,r11,18220
	ctx.r5.s64 = r11.s64 + 18220;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831468b0
	if (cr6.eq) goto loc_831468B0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// addi r9,r10,17968
	ctx.r9.s64 = ctx.r10.s64 + 17968;
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
	// b 0x831468c8
	goto loc_831468C8;
loc_831468B0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18208
	ctx.r4.s64 = r11.s64 + 18208;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_831468C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831468E0"))) PPC_WEAK_FUNC(sub_831468E0);
PPC_FUNC_IMPL(__imp__sub_831468E0) {
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
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314691c
	if (cr6.eq) goto loc_8314691C;
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314691C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146938"))) PPC_WEAK_FUNC(sub_83146938);
PPC_FUNC_IMPL(__imp__sub_83146938) {
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
	// bl 0x8314eaa0
	sub_8314EAA0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83146974
	if (cr6.eq) goto loc_83146974;
	// li r4,84
	ctx.r4.s64 = 84;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83146974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146990"))) PPC_WEAK_FUNC(sub_83146990);
PPC_FUNC_IMPL(__imp__sub_83146990) {
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
	PPCRegister f0{};
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
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
	// addi r5,r11,18264
	ctx.r5.s64 = r11.s64 + 18264;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83146a54
	if (cr6.eq) goto loc_83146A54;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,18012
	ctx.r8.s64 = ctx.r9.s64 + 18012;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stfs f31,12(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x831688a0
	sub_831688A0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83146a78
	if (!cr6.eq) goto loc_83146A78;
loc_83146A30:
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
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
loc_83146A54:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18252
	ctx.r4.s64 = r11.s64 + 18252;
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
loc_83146A78:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,18236
	ctx.r5.s64 = r11.s64 + 18236;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83146a30
	if (cr6.eq) goto loc_83146A30;
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x831681d0
	sub_831681D0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83146a30
	if (cr6.eq) goto loc_83146A30;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83150fc8
	sub_83150FC8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83146a30
	if (cr6.eq) goto loc_83146A30;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,18228
	ctx.r4.s64 = r11.s64 + 18228;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83152f40
	sub_83152F40(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83146a30
	if (cr6.eq) goto loc_83146A30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_83146B18"))) PPC_WEAK_FUNC(sub_83146B18);
PPC_FUNC_IMPL(__imp__sub_83146B18) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,18476
	ctx.r5.s64 = r11.s64 + 18476;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83146bc4
	if (cr6.eq) goto loc_83146BC4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r10,r11,18024
	ctx.r10.s64 = r11.s64 + 18024;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83146bec
	if (!cr6.eq) goto loc_83146BEC;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,18432
	ctx.r4.s64 = ctx.r10.s64 + 18432;
	// b 0x83146ca8
	goto loc_83146CA8;
loc_83146BC4:
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18420
	ctx.r4.s64 = ctx.r10.s64 + 18420;
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
loc_83146BEC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83146ca0
	if (cr6.eq) goto loc_83146CA0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x83146ca0
	if (cr6.gt) goto loc_83146CA0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x83146c94
	if (!cr6.gt) goto loc_83146C94;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lfs f13,-9876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9876);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x83146c94
	if (cr6.gt) goto loc_83146C94;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83146c3c
	if (!cr6.eq) goto loc_83146C3C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,18368
	ctx.r4.s64 = ctx.r10.s64 + 18368;
	// b 0x83146ca8
	goto loc_83146CA8;
loc_83146C3C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83146c88
	if (!cr6.eq) goto loc_83146C88;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83146C88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83146C94:
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,18328
	ctx.r4.s64 = ctx.r10.s64 + 18328;
	// b 0x83146ca8
	goto loc_83146CA8;
loc_83146CA0:
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,18276
	ctx.r4.s64 = ctx.r10.s64 + 18276;
loc_83146CA8:
	// li r11,-2
	r11.s64 = -2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83146CC8"))) PPC_WEAK_FUNC(sub_83146CC8);
PPC_FUNC_IMPL(__imp__sub_83146CC8) {
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
	// addi r9,r11,17812
	ctx.r9.s64 = r11.s64 + 17812;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83146d00
	if (cr6.eq) goto loc_83146D00;
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83146D00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83146D18"))) PPC_WEAK_FUNC(sub_83146D18);
PPC_FUNC_IMPL(__imp__sub_83146D18) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,9
	r30.s64 = 9;
	// addi r31,r29,1884
	r31.s64 = r29.s64 + 1884;
	// lfd f31,18536(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + 18536);
loc_83146D3C:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f13,1996(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f2,f0,f13
	ctx.f2.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x831b3f58
	sub_831B3F58(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x83146d3c
	if (!cr0.eq) goto loc_83146D3C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83146508
	sub_83146508(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83146d94
	if (!cr6.eq) goto loc_83146D94;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,18488
	ctx.r4.s64 = r11.s64 + 18488;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,2000(r29)
	PPC_STORE_U32(r29.u32 + 2000, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
loc_83146D94:
	// li r11,1
	r11.s64 = 1;
	// stw r11,2000(r29)
	PPC_STORE_U32(r29.u32 + 2000, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83146DA8"))) PPC_WEAK_FUNC(sub_83146DA8);
PPC_FUNC_IMPL(__imp__sub_83146DA8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,18556
	ctx.r5.s64 = r11.s64 + 18556;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83146e7c
	if (cr6.eq) goto loc_83146E7C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r7,r10,17960
	ctx.r7.s64 = ctx.r10.s64 + 17960;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// addi r6,r8,17864
	ctx.r6.s64 = ctx.r8.s64 + 17864;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lfs f0,2240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r6,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r6.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// lfs f0,-9876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// bl 0x83146738
	sub_83146738(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83146e9c
	if (!cr6.eq) goto loc_83146E9C;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83146E7C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18544
	ctx.r4.s64 = r11.s64 + 18544;
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
loc_83146E9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83146EA8"))) PPC_WEAK_FUNC(sub_83146EA8);
PPC_FUNC_IMPL(__imp__sub_83146EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r3,64(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// stfs f31,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// bl 0x83146738
	sub_83146738(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83146F20"))) PPC_WEAK_FUNC(sub_83146F20);
PPC_FUNC_IMPL(__imp__sub_83146F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r3,64(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// stfs f31,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// bl 0x83146738
	sub_83146738(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83146F98"))) PPC_WEAK_FUNC(sub_83146F98);
PPC_FUNC_IMPL(__imp__sub_83146F98) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r3,56(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// bl 0x83146d18
	sub_83146D18(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
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

__attribute__((alias("__imp__sub_83147000"))) PPC_WEAK_FUNC(sub_83147000);
PPC_FUNC_IMPL(__imp__sub_83147000) {
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
	// addi r5,r11,18576
	ctx.r5.s64 = r11.s64 + 18576;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,2004
	ctx.r3.s64 = 2004;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147054
	if (cr6.eq) goto loc_83147054;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83146148
	sub_83146148(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83147070
	if (!cr6.eq) goto loc_83147070;
loc_83147054:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18564
	ctx.r4.s64 = r11.s64 + 18564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83147098
	goto loc_83147098;
loc_83147070:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,2000(r31)
	PPC_STORE_U32(r31.u32 + 2000, ctx.r10.u32);
	// lfs f0,-9876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -9876);
	f0.f64 = double(temp.f32);
	// stfs f0,1804(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1804, temp.u32);
	// bl 0x83144588
	sub_83144588(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83146d18
	sub_83146D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83147098:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831470B0"))) PPC_WEAK_FUNC(sub_831470B0);
PPC_FUNC_IMPL(__imp__sub_831470B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r11,18688
	ctx.r5.s64 = r11.s64 + 18688;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83147178
	if (cr6.eq) goto loc_83147178;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r9,r10,17980
	ctx.r9.s64 = ctx.r10.s64 + 17980;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
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
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r11,18676
	ctx.r4.s64 = r11.s64 + 18676;
	// bl 0x83146848
	sub_83146848(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83147198
	if (!cr6.eq) goto loc_83147198;
loc_83147164:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83147168:
	// bl 0x831451a0
	sub_831451A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83147178:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
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
loc_83147198:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18648
	ctx.r4.s64 = r11.s64 + 18648;
	// bl 0x83145ff0
	sub_83145FF0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18632
	ctx.r4.s64 = r11.s64 + 18632;
	// bl 0x83145ff0
	sub_83145FF0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// li r11,1
	r11.s64 = 1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,18620
	ctx.r4.s64 = ctx.r10.s64 + 18620;
	// bl 0x83147000
	sub_83147000(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18608
	ctx.r4.s64 = r11.s64 + 18608;
	// bl 0x83146da8
	sub_83146DA8(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18596
	ctx.r4.s64 = r11.s64 + 18596;
	// bl 0x83146848
	sub_83146848(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,18584
	ctx.r4.s64 = r11.s64 + 18584;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83145df8
	sub_83145DF8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,100(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f0,104(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 104, temp.u32);
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f0,108(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 108, temp.u32);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f0,112(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 112, temp.u32);
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lfs f0,2240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 116, temp.u32);
	// lwz r5,80(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f0,120(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 120, temp.u32);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f0,124(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 124, temp.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stfs f0,128(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147164
	if (cr6.eq) goto loc_83147164;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x83147168
	if (cr6.eq) goto loc_83147168;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x83157920
	sub_83157920(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x83157928
	sub_83157928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83147368"))) PPC_WEAK_FUNC(sub_83147368);
PPC_FUNC_IMPL(__imp__sub_83147368) {
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
	// addi r5,r11,18744
	ctx.r5.s64 = r11.s64 + 18744;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83147408
	if (cr6.eq) goto loc_83147408;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r9,r10,17988
	ctx.r9.s64 = ctx.r10.s64 + 17988;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// bl 0x831688a0
	sub_831688A0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83147428
	if (!cr6.eq) goto loc_83147428;
loc_831473E8:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83147408:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,18732
	ctx.r4.s64 = r11.s64 + 18732;
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
loc_83147428:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831688a0
	sub_831688A0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831473e8
	if (cr6.eq) goto loc_831473E8;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83154f40
	sub_83154F40(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831473e8
	if (cr6.eq) goto loc_831473E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18720
	ctx.r4.s64 = r11.s64 + 18720;
	// bl 0x83150338
	sub_83150338(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x831473e8
	if (cr6.eq) goto loc_831473E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,18700
	ctx.r4.s64 = r11.s64 + 18700;
	// bl 0x831470b0
	sub_831470B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x831473e8
	if (cr6.eq) goto loc_831473E8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8314fa00
	sub_8314FA00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831474A8"))) PPC_WEAK_FUNC(sub_831474A8);
PPC_FUNC_IMPL(__imp__sub_831474A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	r11.s64 = 2;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83146b18
	sub_83146B18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831474E8"))) PPC_WEAK_FUNC(sub_831474E8);
PPC_FUNC_IMPL(__imp__sub_831474E8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,18904
	ctx.r4.s64 = ctx.r10.s64 + 18904;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x83147368
	sub_83147368(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83147570
	if (!cr6.eq) goto loc_83147570;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18892
	ctx.r4.s64 = ctx.r10.s64 + 18892;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_83147570:
	// lwz r27,28(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f31.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83154a58
	sub_83154A58(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x83159478
	sub_83159478(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r4,r11,18868
	ctx.r4.s64 = r11.s64 + 18868;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// bl 0x83146990
	sub_83146990(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne cr6,0x831475fc
	if (!cr6.eq) goto loc_831475FC;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18856
	ctx.r4.s64 = ctx.r10.s64 + 18856;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_831475FC:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r11,18840
	ctx.r5.s64 = r11.s64 + 18840;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83143c50
	sub_83143C50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// bne cr6,0x8314765c
	if (!cr6.eq) goto loc_8314765C;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18828
	ctx.r4.s64 = ctx.r10.s64 + 18828;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_8314765C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18804
	ctx.r4.s64 = r11.s64 + 18804;
	// bl 0x83153c50
	sub_83153C50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// bne cr6,0x831476b8
	if (!cr6.eq) goto loc_831476B8;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18792
	ctx.r4.s64 = ctx.r10.s64 + 18792;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_831476B8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r28,20(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83147718
	if (!cr6.eq) goto loc_83147718;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18780
	ctx.r4.s64 = ctx.r10.s64 + 18780;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_83147718:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8314ec38
	sub_8314EC38(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314776c
	if (!cr6.eq) goto loc_8314776C;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18768
	ctx.r4.s64 = ctx.r10.s64 + 18768;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_8314776C:
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8314eb50
	sub_8314EB50(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83153fb0
	sub_83153FB0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831477c8
	if (!cr6.eq) goto loc_831477C8;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,18756
	ctx.r4.s64 = ctx.r10.s64 + 18756;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,76(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
loc_831477C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831477D8"))) PPC_WEAK_FUNC(sub_831477D8);
PPC_FUNC_IMPL(__imp__sub_831477D8) {
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r31,-31947
	r31.s64 = -2093678592;
	// lfs f0,26524(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 26524);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8314780c
	if (!cr6.lt) goto loc_8314780C;
	// fmr f31,f0
	f31.f64 = f0.f64;
loc_8314780C:
	// lis r11,-31947
	r11.s64 = -2093678592;
	// lfs f1,26520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26520);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f31,f1
	cr6.compare(f31.f64, ctx.f1.f64);
	// ble cr6,0x83147820
	if (!cr6.gt) goto loc_83147820;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_83147820:
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// lfs f0,26524(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 26524);
	f0.f64 = double(temp.f32);
	// frsp f30,f1
	f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f31,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f31.f64 = double(temp.f32);
	// fdivs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 / f0.f64));
	// fsubs f30,f13,f31
	f30.f64 = double(float(ctx.f13.f64 - f31.f64));
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// lfs f0,26524(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 26524);
	f0.f64 = double(temp.f32);
	// frsp f29,f1
	f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
	// bl 0x831b6d80
	sub_831B6D80(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f0,12864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12864);
	f0.f64 = double(temp.f32);
	// fdivs f11,f29,f12
	ctx.f11.f64 = double(float(f29.f64 / ctx.f12.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fdivs f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 / f30.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x8314788c
	if (cr6.gt) goto loc_8314788C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// b 0x831478a0
	goto loc_831478A0;
loc_8314788C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f0,18968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18968);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x831478a0
	if (cr6.lt) goto loc_831478A0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_831478A0:
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

__attribute__((alias("__imp__sub_831478C0"))) PPC_WEAK_FUNC(sub_831478C0);
PPC_FUNC_IMPL(__imp__sub_831478C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r5,936
	ctx.r5.s64 = 936;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r31,204
	r11.s64 = r31.s64 + 204;
	// stw r7,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r7.u32);
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// lfs f13,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f13.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,2244(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83147920:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83147920
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83147920;
	// addi r11,r31,788
	r11.s64 = r31.s64 + 788;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314793C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314793c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314793C;
	// li r11,2
	r11.s64 = 2;
	// stfs f0,860(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 860, temp.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// stfs f13,856(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 856, temp.u32);
	// stfs f0,868(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 868, temp.u32);
	// stb r11,108(r31)
	PPC_STORE_U8(r31.u32 + 108, r11.u8);
	// stfs f13,864(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 864, temp.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stfs f0,876(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 876, temp.u32);
	// stb r11,140(r31)
	PPC_STORE_U8(r31.u32 + 140, r11.u8);
	// stfs f13,872(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 872, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f13,884(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 884, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831479C0"))) PPC_WEAK_FUNC(sub_831479C0);
PPC_FUNC_IMPL(__imp__sub_831479C0) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,216(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8314ad18
	sub_8314AD18(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,192(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 192);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_83147A28"))) PPC_WEAK_FUNC(sub_83147A28);
PPC_FUNC_IMPL(__imp__sub_83147A28) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x83157fa0
	sub_83157FA0(ctx, base);
	// stw r3,1912(r31)
	PPC_STORE_U32(r31.u32 + 1912, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83147a8c
	if (!cr6.eq) goto loc_83147A8C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,19172
	ctx.r4.s64 = r11.s64 + 19172;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,216(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 216);
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
loc_83147A8C:
	// stw r31,928(r31)
	PPC_STORE_U32(r31.u32 + 928, r31.u32);
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

__attribute__((alias("__imp__sub_83147AA8"))) PPC_WEAK_FUNC(sub_83147AA8);
PPC_FUNC_IMPL(__imp__sub_83147AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,1896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147AB8"))) PPC_WEAK_FUNC(sub_83147AB8);
PPC_FUNC_IMPL(__imp__sub_83147AB8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// bne cr6,0x83147b00
	if (!cr6.eq) goto loc_83147B00;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19240
	ctx.r4.s64 = r11.s64 + 19240;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83147B00:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83147b38
	if (!cr6.eq) goto loc_83147B38;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,19216
	ctx.r4.s64 = r11.s64 + 19216;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83147B38:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83147b4c
	if (cr6.eq) goto loc_83147B4C;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x83147ba4
	if (cr6.eq) goto loc_83147BA4;
loc_83147B4C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30660(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30660);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-30660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30660, r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83147b84
	if (!cr6.eq) goto loc_83147B84;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stw r11,-30660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30660, r11.u32);
loc_83147B84:
	// stw r11,1908(r31)
	PPC_STORE_U32(r31.u32 + 1908, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,1920(r31)
	PPC_STORE_U32(r31.u32 + 1920, r28.u32);
loc_83147BA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83147BB0"))) PPC_WEAK_FUNC(sub_83147BB0);
PPC_FUNC_IMPL(__imp__sub_83147BB0) {
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
	// li r29,0
	r29.s64 = 0;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x83147bf4
	if (!cr6.eq) goto loc_83147BF4;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,19264
	ctx.r4.s64 = ctx.r10.s64 + 19264;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_83147BF4:
	// stw r29,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r29.u32);
	// addi r30,r31,960
	r30.s64 = r31.s64 + 960;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,936
	ctx.r5.s64 = 936;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,1912(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1912);
	// stw r3,1852(r31)
	PPC_STORE_U32(r31.u32 + 1852, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r29,1860(r31)
	PPC_STORE_U32(r31.u32 + 1860, r29.u32);
	// stw r11,1896(r31)
	PPC_STORE_U32(r31.u32 + 1896, r11.u32);
	// stw r29,1916(r31)
	PPC_STORE_U32(r31.u32 + 1916, r29.u32);
	// stw r11,1920(r31)
	PPC_STORE_U32(r31.u32 + 1920, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83147C88"))) PPC_WEAK_FUNC(sub_83147C88);
PPC_FUNC_IMPL(__imp__sub_83147C88) {
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
	// li r29,0
	r29.s64 = 0;
	// stw r29,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x83147cc4
	if (!cr6.eq) goto loc_83147CC4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19292
	ctx.r4.s64 = r11.s64 + 19292;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_83147CC4:
	// stw r29,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r29.u32);
	// addi r30,r31,960
	r30.s64 = r31.s64 + 960;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,936
	ctx.r5.s64 = 936;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,1912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1912);
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
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1936(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1936);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83147d68
	if (cr6.eq) goto loc_83147D68;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83147d68
	if (cr6.eq) goto loc_83147D68;
loc_83147D34:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x83147d48
	if (!cr6.eq) goto loc_83147D48;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_83147D48:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83147d34
	if (!cr6.eq) goto loc_83147D34;
loc_83147D68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83147D70"))) PPC_WEAK_FUNC(sub_83147D70);
PPC_FUNC_IMPL(__imp__sub_83147D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83147D88"))) PPC_WEAK_FUNC(sub_83147D88);
PPC_FUNC_IMPL(__imp__sub_83147D88) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r30,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// lwz r11,1896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1896);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x83147e2c
	if (cr6.gt) goto loc_83147E2C;
	// lis r12,-31980
	r12.s64 = -2095841280;
	// addi r12,r12,32204
	r12.s64 = r12.s64 + 32204;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83147DE0;
	case 1:
		goto loc_83147DE0;
	case 2:
		goto loc_83147DE0;
	case 3:
		goto loc_83147E28;
	case 4:
		goto loc_83147E1C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,32224(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + 32224);
	// lwz r24,32224(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + 32224);
	// lwz r24,32224(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + 32224);
	// lwz r24,32296(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + 32296);
	// lwz r24,32284(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + 32284);
loc_83147DE0:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x83147e04
	if (cr6.lt) goto loc_83147E04;
	// bne cr6,0x83147e10
	if (!cr6.eq) goto loc_83147E10;
	// lwz r4,1904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1904);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1900);
	// bl 0x83158758
	sub_83158758(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,1916(r31)
	PPC_STORE_U32(r31.u32 + 1916, r11.u32);
	// b 0x83147e2c
	goto loc_83147E2C;
loc_83147E04:
	// lwz r4,1904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1904);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1900);
	// bl 0x83158860
	sub_83158860(ctx, base);
loc_83147E10:
	// li r11,1
	r11.s64 = 1;
	// stw r11,1916(r31)
	PPC_STORE_U32(r31.u32 + 1916, r11.u32);
	// b 0x83147e2c
	goto loc_83147E2C;
loc_83147E1C:
	// lwz r4,1904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1904);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1900);
	// bl 0x83159228
	sub_83159228(ctx, base);
loc_83147E28:
	// stw r30,1896(r31)
	PPC_STORE_U32(r31.u32 + 1896, r30.u32);
loc_83147E2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147E48"))) PPC_WEAK_FUNC(sub_83147E48);
PPC_FUNC_IMPL(__imp__sub_83147E48) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r4,1904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1904);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1900);
	// bl 0x83158990
	sub_83158990(ctx, base);
	// stw r30,912(r31)
	PPC_STORE_U32(r31.u32 + 912, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EA0"))) PPC_WEAK_FUNC(sub_83147EA0);
PPC_FUNC_IMPL(__imp__sub_83147EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,912(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 912);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EB0"))) PPC_WEAK_FUNC(sub_83147EB0);
PPC_FUNC_IMPL(__imp__sub_83147EB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stfs f1,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f0,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147ED0"))) PPC_WEAK_FUNC(sub_83147ED0);
PPC_FUNC_IMPL(__imp__sub_83147ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f2,60(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147EE8"))) PPC_WEAK_FUNC(sub_83147EE8);
PPC_FUNC_IMPL(__imp__sub_83147EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F08"))) PPC_WEAK_FUNC(sub_83147F08);
PPC_FUNC_IMPL(__imp__sub_83147F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f2,68(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147F20"))) PPC_WEAK_FUNC(sub_83147F20);
PPC_FUNC_IMPL(__imp__sub_83147F20) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lfs f31,2240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x83147f6c
	if (!cr6.eq) goto loc_83147F6C;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// bne cr6,0x83147f6c
	if (!cr6.eq) goto loc_83147F6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lfs f30,19320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 19320);
	f30.f64 = double(temp.f32);
loc_83147F6C:
	// bl 0x831477d8
	sub_831477D8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x831477d8
	sub_831477D8(ctx, base);
	// stfs f29,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// stfs f31,144(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f1,148(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_83147FB0"))) PPC_WEAK_FUNC(sub_83147FB0);
PPC_FUNC_IMPL(__imp__sub_83147FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stfs f1,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f2,144(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FC8"))) PPC_WEAK_FUNC(sub_83147FC8);
PPC_FUNC_IMPL(__imp__sub_83147FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stfs f1,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f2,152(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83147FE0"))) PPC_WEAK_FUNC(sub_83147FE0);
PPC_FUNC_IMPL(__imp__sub_83147FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83147FF8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83147ff8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83147FF8;
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r10,r9,172
	ctx.r10.s64 = ctx.r9.s64 + 172;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83148014:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83148014
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148014;
	// addi r10,r9,204
	ctx.r10.s64 = ctx.r9.s64 + 204;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83148038:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83148038
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148038;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148050"))) PPC_WEAK_FUNC(sub_83148050);
PPC_FUNC_IMPL(__imp__sub_83148050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,43
	ctx.r10.s64 = ctx.r4.s64 + 43;
	// addi r9,r4,51
	ctx.r9.s64 = ctx.r4.s64 + 51;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,2244(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stfsx f1,r7,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, temp.u32);
	// stfsx f0,r5,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148080"))) PPC_WEAK_FUNC(sub_83148080);
PPC_FUNC_IMPL(__imp__sub_83148080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r4,43
	ctx.r10.s64 = ctx.r4.s64 + 43;
	// addi r9,r4,51
	ctx.r9.s64 = ctx.r4.s64 + 51;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stfsx f1,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// stfsx f2,r6,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831480A8"))) PPC_WEAK_FUNC(sub_831480A8);
PPC_FUNC_IMPL(__imp__sub_831480A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,172
	ctx.r8.s64 = ctx.r9.s64 + 172;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_831480C8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831480c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831480C8;
	// addi r10,r9,204
	ctx.r10.s64 = ctx.r9.s64 + 204;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_831480EC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x831480ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_831480EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148108"))) PPC_WEAK_FUNC(sub_83148108);
PPC_FUNC_IMPL(__imp__sub_83148108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r9,236
	ctx.r5.s64 = ctx.r9.s64 + 236;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_83148130:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83148130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148130;
	// addi r10,r9,492
	ctx.r10.s64 = ctx.r9.s64 + 492;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_83148154:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x83148154
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148154;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148170"))) PPC_WEAK_FUNC(sub_83148170);
PPC_FUNC_IMPL(__imp__sub_83148170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r11,r5
	ctx.r10.u64 = r11.u64 + ctx.r5.u64;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// addi r9,r10,59
	ctx.r9.s64 = ctx.r10.s64 + 59;
	// addi r7,r10,123
	ctx.r7.s64 = ctx.r10.s64 + 123;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, temp.u32);
	// stfsx f2,r5,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481A0"))) PPC_WEAK_FUNC(sub_831481A0);
PPC_FUNC_IMPL(__imp__sub_831481A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,189
	ctx.r10.s64 = ctx.r4.s64 + 189;
	// addi r9,r4,197
	ctx.r9.s64 = ctx.r4.s64 + 197;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,2244(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stfsx f1,r7,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, temp.u32);
	// stfsx f0,r5,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481D0"))) PPC_WEAK_FUNC(sub_831481D0);
PPC_FUNC_IMPL(__imp__sub_831481D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r10,r4,189
	ctx.r10.s64 = ctx.r4.s64 + 189;
	// addi r9,r4,197
	ctx.r9.s64 = ctx.r4.s64 + 197;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stfsx f1,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + r11.u32, temp.u32);
	// stfsx f2,r6,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831481F8"))) PPC_WEAK_FUNC(sub_831481F8);
PPC_FUNC_IMPL(__imp__sub_831481F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stfs f1,888(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 888, temp.u32);
	// stfs f2,892(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 892, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148210"))) PPC_WEAK_FUNC(sub_83148210);
PPC_FUNC_IMPL(__imp__sub_83148210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stfs f1,896(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 896, temp.u32);
	// stfs f2,900(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 900, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148228"))) PPC_WEAK_FUNC(sub_83148228);
PPC_FUNC_IMPL(__imp__sub_83148228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// stfs f1,880(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 880, temp.u32);
	// stfs f2,884(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 884, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148240"))) PPC_WEAK_FUNC(sub_83148240);
PPC_FUNC_IMPL(__imp__sub_83148240) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314828c
	if (!cr6.eq) goto loc_8314828C;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,19324
	ctx.r4.s64 = ctx.r10.s64 + 19324;
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
loc_8314828C:
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831482A0"))) PPC_WEAK_FUNC(sub_831482A0);
PPC_FUNC_IMPL(__imp__sub_831482A0) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831482ec
	if (!cr6.eq) goto loc_831482EC;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,19352
	ctx.r4.s64 = ctx.r10.s64 + 19352;
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
loc_831482EC:
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148300"))) PPC_WEAK_FUNC(sub_83148300);
PPC_FUNC_IMPL(__imp__sub_83148300) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314834c
	if (!cr6.eq) goto loc_8314834C;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,19380
	ctx.r4.s64 = ctx.r10.s64 + 19380;
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
loc_8314834C:
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148360"))) PPC_WEAK_FUNC(sub_83148360);
PPC_FUNC_IMPL(__imp__sub_83148360) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x831483ac
	if (!cr6.eq) goto loc_831483AC;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,19408
	ctx.r4.s64 = ctx.r10.s64 + 19408;
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
loc_831483AC:
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831483C0"))) PPC_WEAK_FUNC(sub_831483C0);
PPC_FUNC_IMPL(__imp__sub_831483C0) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// addi r30,r11,-23007
	r30.s64 = r11.s64 + -23007;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83148414
	if (cr6.eq) goto loc_83148414;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r30,32(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83148414:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314845c
	if (cr6.eq) goto loc_8314845C;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_83148428:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8314844c
	if (cr6.eq) goto loc_8314844C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x83148428
	if (cr6.eq) goto loc_83148428;
loc_8314844C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8314845c
	if (!cr6.eq) goto loc_8314845C;
	// cmplw cr6,r3,r27
	cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, xer);
	// beq cr6,0x831484e0
	if (cr6.eq) goto loc_831484E0;
loc_8314845C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// lwz r11,-30660(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30660);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-30660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30660, r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83148494
	if (!cr6.eq) goto loc_83148494;
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r11,-30660(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30660, r11.u32);
loc_83148494:
	// stw r11,1908(r31)
	PPC_STORE_U32(r31.u32 + 1908, r11.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x831597c0
	sub_831597C0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x831484dc
	if (!cr6.eq) goto loc_831484DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,19436
	ctx.r4.s64 = r11.s64 + 19436;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_831484DC:
	// stw r26,1920(r31)
	PPC_STORE_U32(r31.u32 + 1920, r26.u32);
loc_831484E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831484E8"))) PPC_WEAK_FUNC(sub_831484E8);
PPC_FUNC_IMPL(__imp__sub_831484E8) {
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
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// bl 0x831478c0
	sub_831478C0(ctx, base);
	// stw r31,928(r31)
	PPC_STORE_U32(r31.u32 + 928, r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148528"))) PPC_WEAK_FUNC(sub_83148528);
PPC_FUNC_IMPL(__imp__sub_83148528) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83148568
	if (!cr6.eq) goto loc_83148568;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,19472
	ctx.r4.s64 = r11.s64 + 19472;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83148568:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
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

__attribute__((alias("__imp__sub_831485A0"))) PPC_WEAK_FUNC(sub_831485A0);
PPC_FUNC_IMPL(__imp__sub_831485A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1932(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831485b8
	if (!cr6.gt) goto loc_831485B8;
	// li r11,4
	r11.s64 = 4;
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, r11.u32);
	// blr 
	return;
loc_831485B8:
	// lwz r11,1924(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831485d0
	if (!cr6.gt) goto loc_831485D0;
	// li r11,1
	r11.s64 = 1;
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, r11.u32);
	// blr 
	return;
loc_831485D0:
	// lwz r11,1928(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x831485e8
	if (!cr6.gt) goto loc_831485E8;
	// li r11,2
	r11.s64 = 2;
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, r11.u32);
	// blr 
	return;
loc_831485E8:
	// lwz r11,1896(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1896);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831485fc
	if (cr6.eq) goto loc_831485FC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_831485FC:
	// lwz r11,1916(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1916);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x83148618
	if (!cr6.eq) goto loc_83148618;
	// li r11,0
	r11.s64 = 0;
	// stw r11,1916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1916, r11.u32);
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, r11.u32);
	// blr 
	return;
loc_83148618:
	// li r11,3
	r11.s64 = 3;
	// stw r11,1896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1896, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148628"))) PPC_WEAK_FUNC(sub_83148628);
PPC_FUNC_IMPL(__imp__sub_83148628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148638"))) PPC_WEAK_FUNC(sub_83148638);
PPC_FUNC_IMPL(__imp__sub_83148638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148648"))) PPC_WEAK_FUNC(sub_83148648);
PPC_FUNC_IMPL(__imp__sub_83148648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,64(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f12,68(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,72(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f10,76(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148688"))) PPC_WEAK_FUNC(sub_83148688);
PPC_FUNC_IMPL(__imp__sub_83148688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r4,1904(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// lwz r3,1900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// b 0x83158c80
	sub_83158C80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831486A0"))) PPC_WEAK_FUNC(sub_831486A0);
PPC_FUNC_IMPL(__imp__sub_831486A0) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x831486e0
	if (!cr6.eq) goto loc_831486E0;
loc_831486C8:
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
loc_831486E0:
	// lwz r11,1920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1920);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831486c8
	if (cr6.eq) goto loc_831486C8;
	// lwz r11,1896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x831486c8
	if (cr6.eq) goto loc_831486C8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,1908(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 1908);
	// lwz r4,1904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 1904);
	// lwz r3,1900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1900);
	// bl 0x83158cc8
	sub_83158CC8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314872c
	if (!cr6.eq) goto loc_8314872C;
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
loc_8314872C:
	// lwz r11,1916(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1916);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x831486c8
	if (cr6.eq) goto loc_831486C8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_83148770"))) PPC_WEAK_FUNC(sub_83148770);
PPC_FUNC_IMPL(__imp__sub_83148770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r4,904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 904, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148780"))) PPC_WEAK_FUNC(sub_83148780);
PPC_FUNC_IMPL(__imp__sub_83148780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148790"))) PPC_WEAK_FUNC(sub_83148790);
PPC_FUNC_IMPL(__imp__sub_83148790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x831487b8
	if (cr6.eq) goto loc_831487B8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_831487B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831487C0"))) PPC_WEAK_FUNC(sub_831487C0);
PPC_FUNC_IMPL(__imp__sub_831487C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831487D0"))) PPC_WEAK_FUNC(sub_831487D0);
PPC_FUNC_IMPL(__imp__sub_831487D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r20{};
	PPCRegister r24{};
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x83148838
	if (cr6.gt) goto loc_83148838;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,-30732
	r12.s64 = r12.s64 + -30732;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8314880C;
	case 1:
		goto loc_8314881C;
	case 2:
		goto loc_8314881C;
	case 3:
		goto loc_8314881C;
	case 4:
		goto loc_83148838;
	case 5:
		goto loc_8314882C;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-30708(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30708);
	// lwz r24,-30692(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30692);
	// lwz r24,-30692(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30692);
	// lwz r24,-30692(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30692);
	// lwz r24,-30664(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30664);
	// lwz r24,-30676(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30676);
loc_8314880C:
	// lwz r11,1924(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1924, r11.u32);
	// b 0x83148838
	goto loc_83148838;
loc_8314881C:
	// lwz r11,1928(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, r11.u32);
	// b 0x83148838
	goto loc_83148838;
loc_8314882C:
	// lwz r11,1932(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, r11.u32);
loc_83148838:
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x831488a0
	if (cr6.gt) goto loc_831488A0;
	// lis r12,-31979
	r12.s64 = -2095775744;
	// addi r12,r12,-30628
	r12.s64 = r12.s64 + -30628;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_83148874;
	case 1:
		goto loc_83148884;
	case 2:
		goto loc_83148884;
	case 3:
		goto loc_83148884;
	case 4:
		goto loc_831488A0;
	case 5:
		goto loc_83148894;
	default:
		__builtin_unreachable();
	}
	// lwz r24,-30604(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30604);
	// lwz r24,-30588(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30588);
	// lwz r24,-30588(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30588);
	// lwz r24,-30588(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30588);
	// lwz r24,-30560(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30560);
	// lwz r24,-30572(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -30572);
loc_83148874:
	// lwz r11,1924(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1924);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1924, r11.u32);
	// b 0x831488a0
	goto loc_831488A0;
loc_83148884:
	// lwz r11,1928(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1928, r11.u32);
	// b 0x831488a0
	goto loc_831488A0;
loc_83148894:
	// lwz r11,1932(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,1932(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1932, r11.u32);
loc_831488A0:
	// b 0x831485a0
	sub_831485A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_831488A8"))) PPC_WEAK_FUNC(sub_831488A8);
PPC_FUNC_IMPL(__imp__sub_831488A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831488B0"))) PPC_WEAK_FUNC(sub_831488B0);
PPC_FUNC_IMPL(__imp__sub_831488B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831488B8"))) PPC_WEAK_FUNC(sub_831488B8);
PPC_FUNC_IMPL(__imp__sub_831488B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831488C0"))) PPC_WEAK_FUNC(sub_831488C0);
PPC_FUNC_IMPL(__imp__sub_831488C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831488D8"))) PPC_WEAK_FUNC(sub_831488D8);
PPC_FUNC_IMPL(__imp__sub_831488D8) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83148918
	if (cr6.eq) goto loc_83148918;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8314891c
	if (cr6.eq) goto loc_8314891C;
loc_83148918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314891C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148930"))) PPC_WEAK_FUNC(sub_83148930);
PPC_FUNC_IMPL(__imp__sub_83148930) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x831489c4
	if (cr6.eq) goto loc_831489C4;
	// lwz r11,1936(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x831489c4
	if (cr6.eq) goto loc_831489C4;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831489c4
	if (cr6.eq) goto loc_831489C4;
loc_83148960:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x83148974
	if (!cr6.eq) goto loc_83148974;
	// li r30,0
	r30.s64 = 0;
loc_83148974:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8314898C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x831489b0
	if (cr6.eq) goto loc_831489B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8314898c
	if (cr6.eq) goto loc_8314898C;
loc_831489B0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x831489d0
	if (cr6.eq) goto loc_831489D0;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83148960
	if (!cr6.eq) goto loc_83148960;
loc_831489C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_831489D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_831489E0"))) PPC_WEAK_FUNC(sub_831489E0);
PPC_FUNC_IMPL(__imp__sub_831489E0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83148a48
	if (cr6.eq) goto loc_83148A48;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83148a34
	if (!cr6.eq) goto loc_83148A34;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83148a34
	if (!cr6.eq) goto loc_83148A34;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_83148A34:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,18940
	ctx.r4.s64 = r11.s64 + 18940;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83148A44:
	// b 0x83148a44
	goto loc_83148A44;
loc_83148A48:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83148a6c
	if (cr6.eq) goto loc_83148A6C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19516
	ctx.r4.s64 = r11.s64 + 19516;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83148A68:
	// b 0x83148a68
	goto loc_83148A68;
loc_83148A6C:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148A80"))) PPC_WEAK_FUNC(sub_83148A80);
PPC_FUNC_IMPL(__imp__sub_83148A80) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83148aa8
	if (!cr6.eq) goto loc_83148AA8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83148AA4:
	// b 0x83148aa4
	goto loc_83148AA4;
loc_83148AA8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83148abc
	if (!cr6.eq) goto loc_83148ABC;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_83148ABC:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x83148ad0
	if (!cr6.eq) goto loc_83148AD0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_83148AD0:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83148ae4
	if (cr6.eq) goto loc_83148AE4;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_83148AE4:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83148af8
	if (cr6.eq) goto loc_83148AF8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_83148AF8:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148B18"))) PPC_WEAK_FUNC(sub_83148B18);
PPC_FUNC_IMPL(__imp__sub_83148B18) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,172
	r11.s64 = r31.s64 + 172;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83148B3C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83148b3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148B3C;
	// addi r11,r31,204
	r11.s64 = r31.s64 + 204;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83148B58:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83148b58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148B58;
	// addi r11,r31,236
	r11.s64 = r31.s64 + 236;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83148B74:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83148b74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148B74;
	// addi r11,r31,492
	r11.s64 = r31.s64 + 492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83148B90:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83148b90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148B90;
	// addi r11,r31,756
	r11.s64 = r31.s64 + 756;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83148BAC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83148bac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148BAC;
	// addi r11,r31,788
	r11.s64 = r31.s64 + 788;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_83148BC8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x83148bc8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83148BC8;
	// li r5,912
	ctx.r5.s64 = 912;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
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

__attribute__((alias("__imp__sub_83148C00"))) PPC_WEAK_FUNC(sub_83148C00);
PPC_FUNC_IMPL(__imp__sub_83148C00) {
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
	// addi r9,r11,18976
	ctx.r9.s64 = r11.s64 + 18976;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83148c38
	if (cr6.eq) goto loc_83148C38;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83148C38:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148C50"))) PPC_WEAK_FUNC(sub_83148C50);
PPC_FUNC_IMPL(__imp__sub_83148C50) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r10,r11,19576
	ctx.r10.s64 = r11.s64 + 19576;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r28.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// bl 0x83148b18
	sub_83148B18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831478c0
	sub_831478C0(ctx, base);
	// addi r29,r31,960
	r29.s64 = r31.s64 + 960;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
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
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// stw r30,1896(r31)
	PPC_STORE_U32(r31.u32 + 1896, r30.u32);
	// lwz r9,48(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// stw r9,1900(r31)
	PPC_STORE_U32(r31.u32 + 1900, ctx.r9.u32);
	// lwz r11,-30680(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30680);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-30680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30680, r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x83148ce4
	if (!cr6.eq) goto loc_83148CE4;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r11,-30680(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30680, r11.u32);
loc_83148CE4:
	// stw r11,1904(r31)
	PPC_STORE_U32(r31.u32 + 1904, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,1908(r31)
	PPC_STORE_U32(r31.u32 + 1908, r30.u32);
	// stw r30,1912(r31)
	PPC_STORE_U32(r31.u32 + 1912, r30.u32);
	// stw r30,1916(r31)
	PPC_STORE_U32(r31.u32 + 1916, r30.u32);
	// stw r30,1920(r31)
	PPC_STORE_U32(r31.u32 + 1920, r30.u32);
	// stw r30,1924(r31)
	PPC_STORE_U32(r31.u32 + 1924, r30.u32);
	// stw r30,1928(r31)
	PPC_STORE_U32(r31.u32 + 1928, r30.u32);
	// stw r30,1932(r31)
	PPC_STORE_U32(r31.u32 + 1932, r30.u32);
	// stw r30,1936(r31)
	PPC_STORE_U32(r31.u32 + 1936, r30.u32);
	// stw r30,1940(r31)
	PPC_STORE_U32(r31.u32 + 1940, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83148D18"))) PPC_WEAK_FUNC(sub_83148D18);
PPC_FUNC_IMPL(__imp__sub_83148D18) {
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
	// addi r9,r11,18976
	ctx.r9.s64 = r11.s64 + 18976;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x83148d50
	if (cr6.eq) goto loc_83148D50;
	// li r4,1944
	ctx.r4.s64 = 1944;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_83148D50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83148D68"))) PPC_WEAK_FUNC(sub_83148D68);
PPC_FUNC_IMPL(__imp__sub_83148D68) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r5,r10,19808
	ctx.r5.s64 = ctx.r10.s64 + 19808;
	// li r3,1944
	ctx.r3.s64 = 1944;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83148db8
	if (cr6.eq) goto loc_83148DB8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83148c50
	sub_83148C50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x83148de0
	if (!cr6.eq) goto loc_83148DE0;
loc_83148DB8:
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,19796
	ctx.r4.s64 = ctx.r10.s64 + 19796;
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
loc_83148DE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83148e24
	if (!cr6.eq) goto loc_83148E24;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 192);
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
loc_83148E24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314ad00
	sub_8314AD00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_83148E40"))) PPC_WEAK_FUNC(sub_83148E40);
PPC_FUNC_IMPL(__imp__sub_83148E40) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,4
	r27.s64 = 4;
	// li r28,1
	r28.s64 = 1;
	// li r29,2
	r29.s64 = 2;
	// li r31,3
	r31.s64 = 3;
loc_83148E78:
	// lwz r3,1900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1900);
	// bl 0x83158ff0
	sub_83158FF0(ctx, base);
	// lwz r11,1932(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1932);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83148e94
	if (!cr6.gt) goto loc_83148E94;
	// stw r27,1896(r30)
	PPC_STORE_U32(r30.u32 + 1896, r27.u32);
	// b 0x83148e78
	goto loc_83148E78;
loc_83148E94:
	// lwz r11,1924(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1924);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83148ea8
	if (!cr6.gt) goto loc_83148EA8;
	// stw r28,1896(r30)
	PPC_STORE_U32(r30.u32 + 1896, r28.u32);
	// b 0x83148e78
	goto loc_83148E78;
loc_83148EA8:
	// lwz r11,1928(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1928);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x83148ebc
	if (!cr6.gt) goto loc_83148EBC;
	// stw r29,1896(r30)
	PPC_STORE_U32(r30.u32 + 1896, r29.u32);
	// b 0x83148e78
	goto loc_83148E78;
loc_83148EBC:
	// lwz r11,1896(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1896);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83148ed4
	if (cr6.eq) goto loc_83148ED4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x83148ee8
	if (!cr6.eq) goto loc_83148EE8;
loc_83148ED4:
	// lwz r11,1916(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1916);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x83148ef4
	if (cr6.eq) goto loc_83148EF4;
	// stw r31,1896(r30)
	PPC_STORE_U32(r30.u32 + 1896, r31.u32);
	// b 0x83148e78
	goto loc_83148E78;
loc_83148EE8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83148e78
	if (!cr6.eq) goto loc_83148E78;
	// b 0x83148efc
	goto loc_83148EFC;
loc_83148EF4:
	// stw r26,1896(r30)
	PPC_STORE_U32(r30.u32 + 1896, r26.u32);
	// stw r26,1916(r30)
	PPC_STORE_U32(r30.u32 + 1916, r26.u32);
loc_83148EFC:
	// lwz r11,1936(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1936);
	// addi r29,r30,1936
	r29.s64 = r30.s64 + 1936;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83148fa8
	if (cr6.eq) goto loc_83148FA8;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83148fa8
	if (cr6.eq) goto loc_83148FA8;
loc_83148F18:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x83148f2c
	if (!cr6.eq) goto loc_83148F2C;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_83148F2C:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x83148fe8
	if (cr0.eq) goto loc_83148FE8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83148f48
	if (!cr6.eq) goto loc_83148F48;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_83148F48:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x83148f5c
	if (!cr6.eq) goto loc_83148F5C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
loc_83148F5C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83148f70
	if (cr6.eq) goto loc_83148F70;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_83148F70:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83148f84
	if (cr6.eq) goto loc_83148F84;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_83148F84:
	// stw r26,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r26.u32);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
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
	// bne cr6,0x83148f18
	if (!cr6.eq) goto loc_83148F18;
loc_83148FA8:
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83148fc8
	if (cr6.eq) goto loc_83148FC8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,1912(r30)
	PPC_STORE_U32(r30.u32 + 1912, r26.u32);
loc_83148FC8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_83148FE8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19544
	ctx.r4.s64 = r11.s64 + 19544;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_83148FF8:
	// b 0x83148ff8
	goto loc_83148FF8;
}

__attribute__((alias("__imp__sub_83149000"))) PPC_WEAK_FUNC(sub_83149000);
PPC_FUNC_IMPL(__imp__sub_83149000) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x831490b8
	if (cr6.eq) goto loc_831490B8;
loc_83149058:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831490b8
	if (cr6.eq) goto loc_831490B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8314c300
	sub_8314C300(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x831490a4
	if (cr6.eq) goto loc_831490A4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x83149058
	if (cr6.lt) goto loc_83149058;
	// b 0x831490b8
	goto loc_831490B8;
loc_831490A4:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831483c0
	sub_831483C0(ctx, base);
loc_831490B8:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x831490dc
	if (!cr6.eq) goto loc_831490DC;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r11,19816
	ctx.r4.s64 = r11.s64 + 19816;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_831490DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831490E8"))) PPC_WEAK_FUNC(sub_831490E8);
PPC_FUNC_IMPL(__imp__sub_831490E8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x83149134
	if (!cr6.eq) goto loc_83149134;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19880
	ctx.r4.s64 = r11.s64 + 19880;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_83149134:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c300
	sub_8314C300(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314917c
	if (!cr6.eq) goto loc_8314917C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831483c0
	sub_831483C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8314917C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,19848
	ctx.r4.s64 = r11.s64 + 19848;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831491A0"))) PPC_WEAK_FUNC(sub_831491A0);
PPC_FUNC_IMPL(__imp__sub_831491A0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x83149258
	if (cr6.eq) goto loc_83149258;
loc_831491F8:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x83149258
	if (cr6.eq) goto loc_83149258;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8314c418
	sub_8314C418(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83149244
	if (cr6.eq) goto loc_83149244;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x831491f8
	if (cr6.lt) goto loc_831491F8;
	// b 0x83149258
	goto loc_83149258;
loc_83149244:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831483c0
	sub_831483C0(ctx, base);
loc_83149258:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// bne cr6,0x8314927c
	if (!cr6.eq) goto loc_8314927C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r11,19932
	ctx.r4.s64 = r11.s64 + 19932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
loc_8314927C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_83149288"))) PPC_WEAK_FUNC(sub_83149288);
PPC_FUNC_IMPL(__imp__sub_83149288) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x831492d4
	if (!cr6.eq) goto loc_831492D4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,19996
	ctx.r4.s64 = r11.s64 + 19996;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_831492D4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c418
	sub_8314C418(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314931c
	if (!cr6.eq) goto loc_8314931C;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831483c0
	sub_831483C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8314931C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,19964
	ctx.r4.s64 = r11.s64 + 19964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83149340"))) PPC_WEAK_FUNC(sub_83149340);
PPC_FUNC_IMPL(__imp__sub_83149340) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x831493e4
	if (cr6.eq) goto loc_831493E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8314c380
	sub_8314C380(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x831493c8
	if (!cr6.eq) goto loc_831493C8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831483c0
	sub_831483C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_831493C8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,20048
	ctx.r4.s64 = r11.s64 + 20048;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_831493E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831493F0"))) PPC_WEAK_FUNC(sub_831493F0);
PPC_FUNC_IMPL(__imp__sub_831493F0) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x8314943c
	if (!cr6.eq) goto loc_8314943C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20120
	ctx.r4.s64 = r11.s64 + 20120;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8314943C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c380
	sub_8314C380(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x83149484
	if (!cr6.eq) goto loc_83149484;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831483c0
	sub_831483C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_83149484:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,20084
	ctx.r4.s64 = r11.s64 + 20084;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_831494A8"))) PPC_WEAK_FUNC(sub_831494A8);
PPC_FUNC_IMPL(__imp__sub_831494A8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r29,r28,1936
	r29.s64 = r28.s64 + 1936;
	// stw r26,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r26.u32);
	// lwz r11,1936(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1936);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83149558
	if (cr6.eq) goto loc_83149558;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83149558
	if (cr6.eq) goto loc_83149558;
loc_831494E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x831494f4
	if (!cr6.eq) goto loc_831494F4;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_831494F4:
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83149534
	if (!cr6.eq) goto loc_83149534;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
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
	// b 0x8314954c
	goto loc_8314954C;
loc_83149534:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314954C:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x831494e0
	if (!cr6.eq) goto loc_831494E0;
loc_83149558:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83149598
	if (cr6.eq) goto loc_83149598;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83149594
	if (!cr6.eq) goto loc_83149594;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83149594:
	// stw r26,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r26.u32);
loc_83149598:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_831495A0"))) PPC_WEAK_FUNC(sub_831495A0);
PPC_FUNC_IMPL(__imp__sub_831495A0) {
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
	// li r11,0
	r11.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83148930
	sub_83148930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83149604
	if (cr6.eq) goto loc_83149604;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
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
	// b 0x831496a8
	goto loc_831496A8;
loc_83149604:
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83149680
	if (cr6.eq) goto loc_83149680;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83149660
	if (cr6.eq) goto loc_83149660;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83149680
	if (cr6.eq) goto loc_83149680;
loc_83149660:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,20172
	ctx.r4.s64 = r11.s64 + 20172;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
loc_83149680:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x83158170
	sub_83158170(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831496a8
	if (cr6.eq) goto loc_831496A8;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,1936
	ctx.r3.s64 = r30.s64 + 1936;
	// bl 0x831489e0
	sub_831489E0(ctx, base);
loc_831496A8:
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83149714
	if (!cr6.gt) goto loc_83149714;
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,44(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83149714:
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831497b8
	if (!cr6.eq) goto loc_831497B8;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x831497b8
	if (!cr6.eq) goto loc_831497B8;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831497B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_831497C8"))) PPC_WEAK_FUNC(sub_831497C8);
PPC_FUNC_IMPL(__imp__sub_831497C8) {
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
	// li r11,0
	r11.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x83148930
	sub_83148930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x831498b0
	if (!cr6.eq) goto loc_831498B0;
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83149884
	if (cr6.eq) goto loc_83149884;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x83149860
	if (cr6.eq) goto loc_83149860;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x83149884
	if (cr6.eq) goto loc_83149884;
loc_83149860:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,20212
	ctx.r4.s64 = r11.s64 + 20212;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
loc_83149884:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x83158170
	sub_83158170(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x831498cc
	if (cr6.eq) goto loc_831498CC;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,1936
	ctx.r3.s64 = r30.s64 + 1936;
	// bl 0x831489e0
	sub_831489E0(ctx, base);
loc_831498B0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831498CC:
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83149938
	if (!cr6.gt) goto loc_83149938;
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,44(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83149938:
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x831499dc
	if (!cr6.eq) goto loc_831499DC;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,12(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x831499dc
	if (!cr6.eq) goto loc_831499DC;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_831499DC:
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

__attribute__((alias("__imp__sub_831499F0"))) PPC_WEAK_FUNC(sub_831499F0);
PPC_FUNC_IMPL(__imp__sub_831499F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83149a44
	if (!cr6.eq) goto loc_83149A44;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,20292
	ctx.r4.s64 = r11.s64 + 20292;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_83149A44:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83148930
	sub_83148930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,1912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1912);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// beq cr6,0x83149ac4
	if (cr6.eq) goto loc_83149AC4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fadds f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + f31.f64));
	// b 0x83149b0c
	goto loc_83149B0C;
loc_83149AC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
loc_83149B0C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x83149b34
	if (!cr6.eq) goto loc_83149B34;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,20252
	ctx.r4.s64 = r11.s64 + 20252;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,2240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
loc_83149B34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_83149B40"))) PPC_WEAK_FUNC(sub_83149B40);
PPC_FUNC_IMPL(__imp__sub_83149B40) {
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// ble cr6,0x83149b8c
	if (!cr6.gt) goto loc_83149B8C;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,20404
	ctx.r4.s64 = ctx.r10.s64 + 20404;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
loc_83149B8C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x83149ccc
	if (cr6.eq) goto loc_83149CCC;
loc_83149BB0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83149ccc
	if (cr6.eq) goto loc_83149CCC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8314c498
	sub_8314C498(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x83149bf8
	if (!cr6.eq) goto loc_83149BF8;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// blt cr6,0x83149bb0
	if (cr6.lt) goto loc_83149BB0;
	// b 0x83149ccc
	goto loc_83149CCC;
loc_83149BF8:
	// lwz r3,1912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1912);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bne cr6,0x83149c28
	if (!cr6.eq) goto loc_83149C28;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,20364
	ctx.r4.s64 = ctx.r10.s64 + 20364;
	// b 0x83149cdc
	goto loc_83149CDC;
loc_83149C28:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83148930
	sub_83148930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x83149ccc
	if (cr6.eq) goto loc_83149CCC;
	// lwz r11,1912(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1912);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1912);
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x83149ccc
	if (!cr6.gt) goto loc_83149CCC;
	// lwz r11,1912(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1912);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1912);
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83149CCC:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// bne cr6,0x83149cf0
	if (!cr6.eq) goto loc_83149CF0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r10,20332
	ctx.r4.s64 = ctx.r10.s64 + 20332;
loc_83149CDC:
	// li r11,-1
	r11.s64 = -1;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
loc_83149CF0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_83149CF8"))) PPC_WEAK_FUNC(sub_83149CF8);
PPC_FUNC_IMPL(__imp__sub_83149CF8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// ble cr6,0x83149d3c
	if (!cr6.gt) goto loc_83149D3C;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,20444
	ctx.r4.s64 = ctx.r10.s64 + 20444;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83149D3C:
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83148930
	sub_83148930(ctx, base);
	// lwz r9,1912(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x83149f30
	if (cr6.eq) goto loc_83149F30;
	// lwz r11,1912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x83149e20
	if (!cr6.gt) goto loc_83149E20;
	// lwz r11,1912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1912);
	// lwz r9,36(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,44(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_83149E20:
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83149f30
	if (!cr6.eq) goto loc_83149F30;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,12(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83149f08
	if (cr6.eq) goto loc_83149F08;
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
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x83149f30
	if (!cr6.eq) goto loc_83149F30;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r7,44(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
loc_83149F08:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x83149f30
	if (!cr6.eq) goto loc_83149F30;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,1936
	ctx.r3.s64 = r30.s64 + 1936;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
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
loc_83149F30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_83149F38"))) PPC_WEAK_FUNC(sub_83149F38);
PPC_FUNC_IMPL(__imp__sub_83149F38) {
	PPC_FUNC_PROLOGUE();
	// b 0x83148d68
	sub_83148D68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83149F40"))) PPC_WEAK_FUNC(sub_83149F40);
PPC_FUNC_IMPL(__imp__sub_83149F40) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r11,20648
	ctx.r10.s64 = r11.s64 + 20648;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r5,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r5.u32);
	// stw r4,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// stw r6,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r6.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// stw r31,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r31.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r31.u32);
	// stw r31,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r31.u32);
	// stw r7,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r7.u32);
	// stw r31,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r31.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r31.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r31.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r6,-31941
	ctx.r6.s64 = -2093285376;
	// stw r3,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r3.u32);
	// addi r5,r7,20504
	ctx.r5.s64 = ctx.r7.s64 + 20504;
	// stw r31,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r5,-30676(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30676, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83149FE8"))) PPC_WEAK_FUNC(sub_83149FE8);
PPC_FUNC_IMPL(__imp__sub_83149FE8) {
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
	// li r29,0
	r29.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314a08c
	if (!cr6.eq) goto loc_8314A08C;
loc_8314A038:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,40(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8314a038
	if (cr6.eq) goto loc_8314A038;
loc_8314A08C:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314a0ac
	if (cr6.eq) goto loc_8314A0AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
loc_8314A0AC:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8314a0c4
	if (cr6.eq) goto loc_8314A0C4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
loc_8314A0C4:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314a0e8
	if (cr6.eq) goto loc_8314A0E8;
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
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
loc_8314A0E8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a134
	if (cr6.eq) goto loc_8314A134;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314a134
	if (cr6.eq) goto loc_8314A134;
loc_8314A100:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// bne cr6,0x8314a114
	if (!cr6.eq) goto loc_8314A114;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8314A114:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8314a100
	if (!cr6.eq) goto loc_8314A100;
loc_8314A134:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314a148
	if (cr6.eq) goto loc_8314A148;
	// bl 0x83158d58
	sub_83158D58(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
loc_8314A148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314A150"))) PPC_WEAK_FUNC(sub_8314A150);
PPC_FUNC_IMPL(__imp__sub_8314A150) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,-30672(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a1b8
	if (cr6.eq) goto loc_8314A1B8;
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314a1b8
	if (cr6.eq) goto loc_8314A1B8;
loc_8314A18C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a1b8
	if (cr6.eq) goto loc_8314A1B8;
	// addic. r31,r11,-16
	xer.ca = r11.u32 > 15;
	r31.s64 = r11.s64 + -16;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8314a18c
	if (!cr0.eq) goto loc_8314A18C;
loc_8314A1B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314A1D0"))) PPC_WEAK_FUNC(sub_8314A1D0);
PPC_FUNC_IMPL(__imp__sub_8314A1D0) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-30672(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a268
	if (cr6.eq) goto loc_8314A268;
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8314a268
	if (cr6.eq) goto loc_8314A268;
loc_8314A1FC:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a254
	if (cr6.eq) goto loc_8314A254;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314a254
	if (cr6.eq) goto loc_8314A254;
loc_8314A214:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831488c0
	sub_831488C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314a240
	if (cr6.eq) goto loc_8314A240;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314A240:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a254
	if (cr6.eq) goto loc_8314A254;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8314a214
	if (!cr0.eq) goto loc_8314A214;
loc_8314A254:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a268
	if (cr6.eq) goto loc_8314A268;
	// addic. r30,r11,-16
	xer.ca = r11.u32 > 15;
	r30.s64 = r11.s64 + -16;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8314a1fc
	if (!cr0.eq) goto loc_8314A1FC;
loc_8314A268:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314A270"))) PPC_WEAK_FUNC(sub_8314A270);
PPC_FUNC_IMPL(__imp__sub_8314A270) {
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
	// lis r11,-31941
	r11.s64 = -2093285376;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,-30672(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -30672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a308
	if (cr6.eq) goto loc_8314A308;
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8314a308
	if (cr6.eq) goto loc_8314A308;
loc_8314A29C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a2f4
	if (cr6.eq) goto loc_8314A2F4;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314a2f4
	if (cr6.eq) goto loc_8314A2F4;
loc_8314A2B4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831488d8
	sub_831488D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314a2e0
	if (cr6.eq) goto loc_8314A2E0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314A2E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a2f4
	if (cr6.eq) goto loc_8314A2F4;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8314a2b4
	if (!cr0.eq) goto loc_8314A2B4;
loc_8314A2F4:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a308
	if (cr6.eq) goto loc_8314A308;
	// addic. r30,r11,-16
	xer.ca = r11.u32 > 15;
	r30.s64 = r11.s64 + -16;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8314a29c
	if (!cr0.eq) goto loc_8314A29C;
loc_8314A308:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314A310"))) PPC_WEAK_FUNC(sub_8314A310);
PPC_FUNC_IMPL(__imp__sub_8314A310) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r5,36(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8314a368
	if (!cr6.eq) goto loc_8314A368;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20792
	ctx.r4.s64 = r11.s64 + 20792;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
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
loc_8314A368:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a3bc
	if (cr6.eq) goto loc_8314A3BC;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_8314A374:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8314a3e4
	if (cr6.eq) goto loc_8314A3E4;
	// lwz r8,40(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314a374
	if (cr6.lt) goto loc_8314A374;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a3bc
	if (cr6.eq) goto loc_8314A3BC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8314A3A0:
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x8314a3a0
	if (!cr0.eq) goto loc_8314A3A0;
loc_8314A3BC:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314A3E4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20712
	ctx.r4.s64 = r11.s64 + 20712;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
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

__attribute__((alias("__imp__sub_8314A410"))) PPC_WEAK_FUNC(sub_8314A410);
PPC_FUNC_IMPL(__imp__sub_8314A410) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a524
	if (cr6.eq) goto loc_8314A524;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314a524
	if (cr6.eq) goto loc_8314A524;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r29,r11,20920
	r29.s64 = r11.s64 + 20920;
loc_8314A450:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83148790
	sub_83148790(ctx, base);
	// cmplw cr6,r3,r26
	cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, xer);
	// bne cr6,0x8314a510
	if (!cr6.eq) goto loc_8314A510;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8314a48c
	if (cr6.eq) goto loc_8314A48C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8314a4f8
	if (!cr6.eq) goto loc_8314A4F8;
loc_8314A48C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
loc_8314A498:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8314a4dc
	if (cr6.eq) goto loc_8314A4DC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8314a4f8
	if (!cr6.eq) goto loc_8314A4F8;
loc_8314A4DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8314a498
	goto loc_8314A498;
loc_8314A4F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314A510:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a524
	if (cr6.eq) goto loc_8314A524;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8314a450
	if (!cr0.eq) goto loc_8314A450;
loc_8314A524:
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314a558
	if (cr6.eq) goto loc_8314A558;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_8314A538:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, r26.u32, xer);
	// beq cr6,0x8314a558
	if (cr6.eq) goto loc_8314A558;
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314a538
	if (cr6.lt) goto loc_8314A538;
loc_8314A558:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8314a580
	if (!cr6.eq) goto loc_8314A580;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,20880
	ctx.r4.s64 = r11.s64 + 20880;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
loc_8314A580:
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r28.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r9.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8314a5c4
	if (!cr6.lt) goto loc_8314A5C4;
loc_8314A5A0:
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8314a5a0
	if (cr6.lt) goto loc_8314A5A0;
loc_8314A5C4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// bl 0x83159110
	sub_83159110(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8314A5D8"))) PPC_WEAK_FUNC(sub_8314A5D8);
PPC_FUNC_IMPL(__imp__sub_8314A5D8) {
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
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r28.u32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8314a630
	if (!cr6.gt) goto loc_8314A630;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8314A604:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x83159110
	sub_83159110(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r28,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r28.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r29,r9
	cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, xer);
	// blt cr6,0x8314a604
	if (cr6.lt) goto loc_8314A604;
loc_8314A630:
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314A640"))) PPC_WEAK_FUNC(sub_8314A640);
PPC_FUNC_IMPL(__imp__sub_8314A640) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// blt cr6,0x8314a69c
	if (cr6.lt) goto loc_8314A69C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,20996
	ctx.r4.s64 = r11.s64 + 20996;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_8314A69C:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314A6C0"))) PPC_WEAK_FUNC(sub_8314A6C0);
PPC_FUNC_IMPL(__imp__sub_8314A6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314A6D0"))) PPC_WEAK_FUNC(sub_8314A6D0);
PPC_FUNC_IMPL(__imp__sub_8314A6D0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8314a72c
	if (!cr6.eq) goto loc_8314A72C;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314A72C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314A748"))) PPC_WEAK_FUNC(sub_8314A748);
PPC_FUNC_IMPL(__imp__sub_8314A748) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8314a7a4
	if (!cr6.eq) goto loc_8314A7A4;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314A7A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314A7C0"))) PPC_WEAK_FUNC(sub_8314A7C0);
PPC_FUNC_IMPL(__imp__sub_8314A7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8314A7E8"))) PPC_WEAK_FUNC(sub_8314A7E8);
PPC_FUNC_IMPL(__imp__sub_8314A7E8) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// bne cr6,0x8314a80c
	if (!cr6.eq) goto loc_8314A80C;
	// li r30,1
	r30.s64 = 1;
loc_8314A80C:
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a854
	if (cr6.eq) goto loc_8314A854;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314a854
	if (cr6.eq) goto loc_8314A854;
loc_8314A824:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a854
	if (cr6.eq) goto loc_8314A854;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8314a824
	if (!cr0.eq) goto loc_8314A824;
loc_8314A854:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314A860"))) PPC_WEAK_FUNC(sub_8314A860);
PPC_FUNC_IMPL(__imp__sub_8314A860) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8314a904
	if (cr6.eq) goto loc_8314A904;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8314a904
	if (cr6.eq) goto loc_8314A904;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a8fc
	if (cr6.eq) goto loc_8314A8FC;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314a8fc
	if (cr6.eq) goto loc_8314A8FC;
loc_8314A8C0:
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8314a904
	if (cr6.eq) goto loc_8314A904;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8314a904
	if (cr6.eq) goto loc_8314A904;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a8fc
	if (cr6.eq) goto loc_8314A8FC;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8314a8c0
	if (!cr0.eq) goto loc_8314A8C0;
loc_8314A8FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314a908
	goto loc_8314A908;
loc_8314A904:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8314A908:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314A920"))) PPC_WEAK_FUNC(sub_8314A920);
PPC_FUNC_IMPL(__imp__sub_8314A920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x83158d30
	sub_83158D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314A930"))) PPC_WEAK_FUNC(sub_8314A930);
PPC_FUNC_IMPL(__imp__sub_8314A930) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a994
	if (cr6.eq) goto loc_8314A994;
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314a994
	if (cr6.eq) goto loc_8314A994;
loc_8314A964:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314a994
	if (cr6.eq) goto loc_8314A994;
	// addic. r31,r11,-4
	xer.ca = r11.u32 > 3;
	r31.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8314a964
	if (!cr0.eq) goto loc_8314A964;
loc_8314A994:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314A9A0"))) PPC_WEAK_FUNC(sub_8314A9A0);
PPC_FUNC_IMPL(__imp__sub_8314A9A0) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// bl 0x83158ff0
	sub_83158FF0(ctx, base);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,28(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// bl 0x83155380
	sub_83155380(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x83153d20
	sub_83153D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x831598f8
	sub_831598F8(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314aa80
	if (cr6.eq) goto loc_8314AA80;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314aa80
	if (cr6.eq) goto loc_8314AA80;
loc_8314AA5C:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,-4
	r31.s64 = r11.s64 + -4;
	// bne cr6,0x8314aa70
	if (!cr6.eq) goto loc_8314AA70;
	// li r31,0
	r31.s64 = 0;
loc_8314AA70:
	// bl 0x831485a0
	sub_831485A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8314aa5c
	if (!cr6.eq) goto loc_8314AA5C;
loc_8314AA80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314AA98"))) PPC_WEAK_FUNC(sub_8314AA98);
PPC_FUNC_IMPL(__imp__sub_8314AA98) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314a150
	sub_8314A150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AAA0"))) PPC_WEAK_FUNC(sub_8314AAA0);
PPC_FUNC_IMPL(__imp__sub_8314AAA0) {
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
	// addi r9,r11,20588
	ctx.r9.s64 = r11.s64 + 20588;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8314aad8
	if (cr6.eq) goto loc_8314AAD8;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314AAD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314AAF0"))) PPC_WEAK_FUNC(sub_8314AAF0);
PPC_FUNC_IMPL(__imp__sub_8314AAF0) {
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
	// addi r9,r11,20588
	ctx.r9.s64 = r11.s64 + 20588;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8314ab28
	if (cr6.eq) goto loc_8314AB28;
	// li r4,64
	ctx.r4.s64 = 64;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314AB28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314AB40"))) PPC_WEAK_FUNC(sub_8314AB40);
PPC_FUNC_IMPL(__imp__sub_8314AB40) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// bl 0x831585b0
	sub_831585B0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314ab98
	if (!cr6.eq) goto loc_8314AB98;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,21080
	ctx.r4.s64 = ctx.r10.s64 + 21080;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
loc_8314AB84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83149fe8
	sub_83149FE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8314AB98:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83149f38
	sub_83149F38(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ab84
	if (cr6.eq) goto loc_8314AB84;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r10,21064
	ctx.r5.s64 = ctx.r10.s64 + 21064;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// bne cr6,0x8314ac08
	if (!cr6.eq) goto loc_8314AC08;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,21052
	ctx.r4.s64 = ctx.r10.s64 + 21052;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83149fe8
	sub_83149FE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8314AC08:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8314ac38
	if (!cr6.gt) goto loc_8314AC38;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8314AC1C:
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314ac1c
	if (cr6.lt) goto loc_8314AC1C;
loc_8314AC38:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83159a58
	sub_83159A58(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314ac78
	if (!cr6.eq) goto loc_8314AC78;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,21040
	ctx.r4.s64 = ctx.r10.s64 + 21040;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83149fe8
	sub_83149FE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8314AC78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314AC88"))) PPC_WEAK_FUNC(sub_8314AC88);
PPC_FUNC_IMPL(__imp__sub_8314AC88) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bne cr6,0x8314acb4
	if (!cr6.eq) goto loc_8314ACB4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8314ACB4:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r3,r11,-30672
	ctx.r3.s64 = r11.s64 + -30672;
	// bl 0x83148a80
	sub_83148A80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83149fe8
	sub_83149FE8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314ace8
	if (cr6.eq) goto loc_8314ACE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314ACE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314AD00"))) PPC_WEAK_FUNC(sub_8314AD00);
PPC_FUNC_IMPL(__imp__sub_8314AD00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x8314ad10
	if (!cr6.eq) goto loc_8314AD10;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8314AD10:
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x831489e0
	sub_831489E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AD18"))) PPC_WEAK_FUNC(sub_8314AD18);
PPC_FUNC_IMPL(__imp__sub_8314AD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x8314ad28
	if (!cr6.eq) goto loc_8314AD28;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8314AD28:
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x83148a80
	sub_83148A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AD30"))) PPC_WEAK_FUNC(sub_8314AD30);
PPC_FUNC_IMPL(__imp__sub_8314AD30) {
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r10,21104
	ctx.r5.s64 = ctx.r10.s64 + 21104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ad98
	if (cr6.eq) goto loc_8314AD98;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83149f40
	sub_83149F40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8314adc0
	if (!cr6.eq) goto loc_8314ADC0;
loc_8314AD98:
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,21092
	ctx.r4.s64 = ctx.r10.s64 + 21092;
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
loc_8314ADC0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314ab40
	sub_8314AB40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314adf8
	if (!cr6.eq) goto loc_8314ADF8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
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
loc_8314ADF8:
	// lis r11,-31941
	r11.s64 = -2093285376;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r11,-30672
	ctx.r3.s64 = r11.s64 + -30672;
	// bl 0x831489e0
	sub_831489E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8314AE18"))) PPC_WEAK_FUNC(sub_8314AE18);
PPC_FUNC_IMPL(__imp__sub_8314AE18) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314ad30
	sub_8314AD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314AE20"))) PPC_WEAK_FUNC(sub_8314AE20);
PPC_FUNC_IMPL(__imp__sub_8314AE20) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
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

__attribute__((alias("__imp__sub_8314AE70"))) PPC_WEAK_FUNC(sub_8314AE70);
PPC_FUNC_IMPL(__imp__sub_8314AE70) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x831699e0
	sub_831699E0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314aed8
	if (!cr6.eq) goto loc_8314AED8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,21120
	ctx.r4.s64 = r11.s64 + 21120;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
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
loc_8314AED8:
	// bl 0x83168938
	sub_83168938(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8314AEF8"))) PPC_WEAK_FUNC(sub_8314AEF8);
PPC_FUNC_IMPL(__imp__sub_8314AEF8) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314af28
	if (cr6.eq) goto loc_8314AF28;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x8314af2c
	goto loc_8314AF2C;
loc_8314AF28:
	// li r11,0
	r11.s64 = 0;
loc_8314AF2C:
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

__attribute__((alias("__imp__sub_8314AF48"))) PPC_WEAK_FUNC(sub_8314AF48);
PPC_FUNC_IMPL(__imp__sub_8314AF48) {
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
	// addi r9,r11,21132
	ctx.r9.s64 = r11.s64 + 21132;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8314af80
	if (cr6.eq) goto loc_8314AF80;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314AF80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314AF98"))) PPC_WEAK_FUNC(sub_8314AF98);
PPC_FUNC_IMPL(__imp__sub_8314AF98) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8314afc8
	if (cr6.lt) goto loc_8314AFC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8314AFC8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831688c0
	sub_831688C0(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// ble cr6,0x8314b02c
	if (!cr6.gt) goto loc_8314B02C;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// b 0x8314b034
	goto loc_8314B034;
loc_8314B02C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
loc_8314B034:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168940
	sub_83168940(ctx, base);
	// stb r3,16(r29)
	PPC_STORE_U8(r29.u32 + 16, ctx.r3.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314B058"))) PPC_WEAK_FUNC(sub_8314B058);
PPC_FUNC_IMPL(__imp__sub_8314B058) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8314b088
	if (cr6.lt) goto loc_8314B088;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8314B088:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stw r9,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314B0E8"))) PPC_WEAK_FUNC(sub_8314B0E8);
PPC_FUNC_IMPL(__imp__sub_8314B0E8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831694d8
	sub_831694D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314b058
	sub_8314B058(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314B140"))) PPC_WEAK_FUNC(sub_8314B140);
PPC_FUNC_IMPL(__imp__sub_8314B140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314B15C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8314b15c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B15C;
	// addi r10,r3,176
	ctx.r10.s64 = ctx.r3.s64 + 176;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314B174:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8314b174
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B174;
	// addi r10,r3,216
	ctx.r10.s64 = ctx.r3.s64 + 216;
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, r11.u32);
	// stw r11,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314B194:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8314b194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B194;
	// addi r10,r3,248
	ctx.r10.s64 = ctx.r3.s64 + 248;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314B1AC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8314b1ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B1AC;
	// addi r10,r3,284
	ctx.r10.s64 = ctx.r3.s64 + 284;
	// stw r11,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, r11.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314B1C8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8314b1c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B1C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314B1D8"))) PPC_WEAK_FUNC(sub_8314B1D8);
PPC_FUNC_IMPL(__imp__sub_8314B1D8) {
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
	// bl 0x831b1434
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8314b218
	if (cr6.lt) goto loc_8314B218;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1480
	// b 0x831b0b70
	return;
loc_8314B218:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,-21804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -21804);
	f31.f64 = double(temp.f32);
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// li r5,7
	ctx.r5.s64 = 7;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f7,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// li r5,9
	ctx.r5.s64 = 9;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// li r5,10
	ctx.r5.s64 = 10;
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,32(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	f0.f64 = double(ctx.f1.s64);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r5,12
	ctx.r5.s64 = 12;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// li r5,13
	ctx.r5.s64 = 13;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// li r5,14
	ctx.r5.s64 = 14;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,20
	ctx.r5.s64 = 20;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f3,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r3.u32);
	// li r5,21
	ctx.r5.s64 = 21;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r26,0
	r26.s64 = 0;
	// lfs f30,-24904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24904);
	f30.f64 = double(temp.f32);
	// stw r3,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_8314B438:
	// addi r5,r28,22
	ctx.r5.s64 = r28.s64 + 22;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// blt cr6,0x8314b438
	if (cr6.lt) goto loc_8314B438;
	// li r5,30
	ctx.r5.s64 = 30;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r27,r31,216
	r27.s64 = r31.s64 + 216;
loc_8314B490:
	// addi r5,r28,31
	ctx.r5.s64 = r28.s64 + 31;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// blt cr6,0x8314b490
	if (cr6.lt) goto loc_8314B490;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r27,r31,284
	r27.s64 = r31.s64 + 284;
loc_8314B4D4:
	// addi r5,r28,39
	ctx.r5.s64 = r28.s64 + 39;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// blt cr6,0x8314b4d4
	if (cr6.lt) goto loc_8314B4D4;
	// li r5,47
	ctx.r5.s64 = 47;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,49
	ctx.r5.s64 = 49;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
	// li r5,50
	ctx.r5.s64 = 50;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// li r5,51
	ctx.r5.s64 = 51;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,132(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a40
	sub_83168A40(ctx, base);
	// stb r3,136(r31)
	PPC_STORE_U8(r31.u32 + 136, ctx.r3.u8);
	// stw r26,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r26.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x831688c0
	sub_831688C0(ctx, base);
	// cmplwi cr6,r3,52
	cr6.compare<uint32_t>(ctx.r3.u32, 52, xer);
	// bgt cr6,0x8314b6b4
	if (cr6.gt) goto loc_8314B6B4;
	// addi r11,r31,176
	r11.s64 = r31.s64 + 176;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314B59C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314b59c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B59C;
	// addi r11,r31,248
	r11.s64 = r31.s64 + 248;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314B5B8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314b5b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314B5B8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r26,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r26.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r28,2
	r28.s64 = 2;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r28,84(r31)
	PPC_STORE_U8(r31.u32 + 84, r28.u8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f29,f11
	f29.f64 = double(float(ctx.f11.f64));
	// lfs f28,2244(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2244);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	cr6.compare(f30.f64, f29.f64);
	// beq cr6,0x8314b66c
	if (cr6.eq) goto loc_8314B66C;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x831477d8
	sub_831477D8(ctx, base);
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x831477d8
	sub_831477D8(ctx, base);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// b 0x8314b674
	goto loc_8314B674;
loc_8314B66C:
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// stfs f28,100(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
loc_8314B674:
	// stfs f28,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stb r28,116(r31)
	PPC_STORE_U8(r31.u32 + 116, r28.u8);
	// stfs f28,104(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f28,112(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f31,316(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 316, temp.u32);
	// stfs f31,320(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 320, temp.u32);
	// stfs f31,324(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 324, temp.u32);
	// stfs f31,328(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 328, temp.u32);
	// stfs f31,332(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// stfs f31,336(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 336, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1480
	// b 0x831b0b70
	return;
loc_8314B6B4:
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r27,r31,176
	r27.s64 = r31.s64 + 176;
loc_8314B6BC:
	// addi r5,r28,58
	ctx.r5.s64 = r28.s64 + 58;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// blt cr6,0x8314b6bc
	if (cr6.lt) goto loc_8314B6BC;
	// mr r28,r26
	r28.u64 = r26.u64;
	// addi r27,r31,248
	r27.s64 = r31.s64 + 248;
loc_8314B700:
	// addi r5,r28,66
	ctx.r5.s64 = r28.s64 + 66;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// blt cr6,0x8314b700
	if (cr6.lt) goto loc_8314B700;
	// li r5,74
	ctx.r5.s64 = 74;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,75
	ctx.r5.s64 = 75;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,76
	ctx.r5.s64 = 76;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f30,2240(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2240);
	f30.f64 = double(temp.f32);
	// li r5,77
	ctx.r5.s64 = 77;
	// lfs f29,2244(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2244);
	f29.f64 = double(temp.f32);
	// stfs f30,68(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f29,72(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f7,64(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,78
	ctx.r5.s64 = 78;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * f31.f64));
	// stfs f3,76(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// li r9,2
	ctx.r9.s64 = 2;
	// frsp f0,f1
	f0.f64 = double(float(ctx.f1.f64));
	// li r8,5
	ctx.r8.s64 = 5;
	// stb r9,84(r31)
	PPC_STORE_U8(r31.u32 + 84, ctx.r9.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// li r5,17
	ctx.r5.s64 = 17;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// fmuls f28,f10,f31
	f28.f64 = double(float(ctx.f10.f64 * f31.f64));
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// fcmpu cr6,f28,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f28.f64, f30.f64);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f27,f7,f31
	f27.f64 = double(float(ctx.f7.f64 * f31.f64));
	// bne cr6,0x8314b940
	if (!cr6.eq) goto loc_8314B940;
	// fcmpu cr6,f27,f30
	cr6.compare(f27.f64, f30.f64);
	// bne cr6,0x8314b940
	if (!cr6.eq) goto loc_8314B940;
	// li r5,80
	ctx.r5.s64 = 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,81
	ctx.r5.s64 = 81;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,92(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r5,82
	ctx.r5.s64 = 82;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f7,96(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// li r5,83
	ctx.r5.s64 = 83;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * f31.f64));
	// stfs f3,100(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168a48
	sub_83168A48(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f2,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// b 0x8314b960
	goto loc_8314B960;
loc_8314B940:
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x831477d8
	sub_831477D8(ctx, base);
	// stfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// stfs f29,96(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// bl 0x831477d8
	sub_831477D8(ctx, base);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f29,104(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
loc_8314B960:
	// stfs f30,108(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 108, temp.u32);
	// li r5,19
	ctx.r5.s64 = 19;
	// stfs f29,112(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 112, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168940
	sub_83168940(ctx, base);
	// stb r3,116(r31)
	PPC_STORE_U8(r31.u32 + 116, ctx.r3.u8);
	// li r5,52
	ctx.r5.s64 = 52;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// li r5,53
	ctx.r5.s64 = 53;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f11,316(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 316, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// li r5,54
	ctx.r5.s64 = 54;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f7,320(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 320, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// li r5,55
	ctx.r5.s64 = 55;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f6,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,324(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 324, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f3,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fmuls f0,f1,f31
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,328(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 328, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r5,57
	ctx.r5.s64 = 57;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f10,332(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 332, temp.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83168b68
	sub_83168B68(ctx, base);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * f31.f64));
	// stfs f6,336(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 336, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x831b1480
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_8314BA98"))) PPC_WEAK_FUNC(sub_8314BA98);
PPC_FUNC_IMPL(__imp__sub_8314BA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314bad8
	if (cr6.eq) goto loc_8314BAD8;
loc_8314BAB0:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x8314bae0
	if (cr6.eq) goto loc_8314BAE0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x8314bac8
	if (!cr6.eq) goto loc_8314BAC8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8314BAC8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8314bab0
	if (!cr6.eq) goto loc_8314BAB0;
loc_8314BAD8:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x8314bb1c
	if (cr6.lt) goto loc_8314BB1C;
loc_8314BAE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314bb1c
	if (cr6.eq) goto loc_8314BB1C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8314BAF0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stbx r10,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x8314bb10
	if (cr6.eq) goto loc_8314BB10;
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// blt cr6,0x8314baf0
	if (cr6.lt) goto loc_8314BAF0;
loc_8314BB10:
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r8,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u8);
	// blr 
	return;
loc_8314BB1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r8,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314BB28"))) PPC_WEAK_FUNC(sub_8314BB28);
PPC_FUNC_IMPL(__imp__sub_8314BB28) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8314bb58
	if (cr6.lt) goto loc_8314BB58;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8314BB58:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168940
	sub_83168940(ctx, base);
	// stb r3,20(r30)
	PPC_STORE_U8(r30.u32 + 20, ctx.r3.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168940
	sub_83168940(ctx, base);
	// stb r3,21(r30)
	PPC_STORE_U8(r30.u32 + 21, ctx.r3.u8);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831688c0
	sub_831688C0(ctx, base);
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// ble cr6,0x8314bc14
	if (!cr6.gt) goto loc_8314BC14;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8314BC14:
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314BC28"))) PPC_WEAK_FUNC(sub_8314BC28);
PPC_FUNC_IMPL(__imp__sub_8314BC28) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8314bc58
	if (cr6.lt) goto loc_8314BC58;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8314BC58:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83169378
	sub_83169378(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831688c0
	sub_831688C0(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x8314bce4
	if (cr6.gt) goto loc_8314BCE4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_8314BCE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83168940
	sub_83168940(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,-24904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314BD28"))) PPC_WEAK_FUNC(sub_8314BD28);
PPC_FUNC_IMPL(__imp__sub_8314BD28) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831694d8
	sub_831694D8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8314bd68
	if (cr6.lt) goto loc_8314BD68;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8314BD68:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168de8
	sub_83168DE8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83168b70
	sub_83168B70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314BDA0"))) PPC_WEAK_FUNC(sub_8314BDA0);
PPC_FUNC_IMPL(__imp__sub_8314BDA0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r5,r11,21508
	ctx.r5.s64 = r11.s64 + 21508;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,332
	ctx.r3.s64 = 332;
	// bl 0x83168690
	sub_83168690(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314be80
	if (cr6.eq) goto loc_8314BE80;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r10,r11,21296
	ctx.r10.s64 = r11.s64 + 21296;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stb r30,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r30.u8);
	// bl 0x8316f870
	sub_8316F870(ctx, base);
	// stw r3,320(r31)
	PPC_STORE_U32(r31.u32 + 320, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314bea8
	if (!cr6.eq) goto loc_8314BEA8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,21460
	ctx.r4.s64 = r11.s64 + 21460;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,136(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 136);
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
loc_8314BE80:
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,21448
	ctx.r4.s64 = ctx.r10.s64 + 21448;
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
loc_8314BEA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314BEB8"))) PPC_WEAK_FUNC(sub_8314BEB8);
PPC_FUNC_IMPL(__imp__sub_8314BEB8) {
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
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq cr6,0x8314bef0
	if (cr6.eq) goto loc_8314BEF0;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x8314bef4
	goto loc_8314BEF4;
loc_8314BEF0:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
loc_8314BEF4:
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314bf24
	if (cr6.eq) goto loc_8314BF24;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31941
	ctx.r10.s64 = -2093285376;
	// addi r4,r10,-29624
	ctx.r4.s64 = ctx.r10.s64 + -29624;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
loc_8314BF24:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 136);
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

__attribute__((alias("__imp__sub_8314BF58"))) PPC_WEAK_FUNC(sub_8314BF58);
PPC_FUNC_IMPL(__imp__sub_8314BF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8314BF88"))) PPC_WEAK_FUNC(sub_8314BF88);
PPC_FUNC_IMPL(__imp__sub_8314BF88) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x8314bfd4
	if (!cr6.eq) goto loc_8314BFD4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21684
	ctx.r4.s64 = r11.s64 + 21684;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r10,-2
	ctx.r10.s64 = -2;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8314BFD4:
	// lwz r11,324(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8314c000
	if (!cr6.eq) goto loc_8314C000;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,21636
	ctx.r4.s64 = ctx.r10.s64 + 21636;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8314C000:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314c024
	if (cr6.eq) goto loc_8314C024;
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
loc_8314C024:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314c050
	if (cr6.eq) goto loc_8314C050;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,21596
	ctx.r4.s64 = ctx.r10.s64 + 21596;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8314C050:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// ble cr6,0x8314c154
	if (!cr6.gt) goto loc_8314C154;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8314c154
	if (!cr6.eq) goto loc_8314C154;
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r9,r11,7
	ctx.r9.s64 = r11.s64 + 7;
	// addi r5,r10,21580
	ctx.r5.s64 = ctx.r10.s64 + 21580;
	// rlwinm r29,r9,0,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x83167fd8
	sub_83167FD8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8314c0d8
	if (!cr6.eq) goto loc_8314C0D8;
	// li r11,-3
	r11.s64 = -3;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r10,21564
	ctx.r4.s64 = ctx.r10.s64 + 21564;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8314C0D8:
	// lwz r3,320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 320);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r6,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// extsw r7,r29
	ctx.r7.s64 = r29.s32;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8314c144
	if (cr6.eq) goto loc_8314C144;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21520
	ctx.r4.s64 = r11.s64 + 21520;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,20(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8314C144:
	// li r11,1
	r11.s64 = 1;
	// stw r11,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_8314C154:
	// li r11,-1
	r11.s64 = -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,324(r31)
	PPC_STORE_U32(r31.u32 + 324, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8314C170"))) PPC_WEAK_FUNC(sub_8314C170);
PPC_FUNC_IMPL(__imp__sub_8314C170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8314C1A0"))) PPC_WEAK_FUNC(sub_8314C1A0);
PPC_FUNC_IMPL(__imp__sub_8314C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C1C0"))) PPC_WEAK_FUNC(sub_8314C1C0);
PPC_FUNC_IMPL(__imp__sub_8314C1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C1D0"))) PPC_WEAK_FUNC(sub_8314C1D0);
PPC_FUNC_IMPL(__imp__sub_8314C1D0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r29,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// bne cr6,0x8314c200
	if (!cr6.eq) goto loc_8314C200;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,-23007
	ctx.r4.s64 = r11.s64 + -23007;
loc_8314C200:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8314C204:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8314c204
	if (!cr6.eq) goto loc_8314C204;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// ble cr6,0x8314c248
	if (!cr6.gt) goto loc_8314C248;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,21728
	ctx.r4.s64 = ctx.r10.s64 + 21728;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_8314C248:
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x831b4fa0
	sub_831B4FA0(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stb r29,319(r31)
	PPC_STORE_U8(r31.u32 + 319, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_8314C268"))) PPC_WEAK_FUNC(sub_8314C268);
PPC_FUNC_IMPL(__imp__sub_8314C268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C280"))) PPC_WEAK_FUNC(sub_8314C280);
PPC_FUNC_IMPL(__imp__sub_8314C280) {
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
	// lwz r31,36(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8314c2c0
	if (!cr6.eq) goto loc_8314C2C0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21772
	ctx.r4.s64 = r11.s64 + 21772;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314c2e8
	goto loc_8314C2E8;
loc_8314C2C0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831694d8
	sub_831694D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314bb28
	sub_8314BB28(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
loc_8314C2E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C300"))) PPC_WEAK_FUNC(sub_8314C300);
PPC_FUNC_IMPL(__imp__sub_8314C300) {
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
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8314c340
	if (!cr6.eq) goto loc_8314C340;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,21892
	ctx.r4.s64 = r11.s64 + 21892;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314c368
	goto loc_8314C368;
loc_8314C340:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831694d8
	sub_831694D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314af98
	sub_8314AF98(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
loc_8314C368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C380"))) PPC_WEAK_FUNC(sub_8314C380);
PPC_FUNC_IMPL(__imp__sub_8314C380) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314c3c8
	if (!cr6.eq) goto loc_8314C3C8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,21996
	ctx.r4.s64 = r11.s64 + 21996;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
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
loc_8314C3C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8314af98
	sub_8314AF98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314c400
	if (!cr6.eq) goto loc_8314C400;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,21944
	ctx.r4.s64 = r11.s64 + 21944;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
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
loc_8314C400:
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

__attribute__((alias("__imp__sub_8314C418"))) PPC_WEAK_FUNC(sub_8314C418);
PPC_FUNC_IMPL(__imp__sub_8314C418) {
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
	// lwz r31,28(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8314c458
	if (!cr6.eq) goto loc_8314C458;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22048
	ctx.r4.s64 = r11.s64 + 22048;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314c480
	goto loc_8314C480;
loc_8314C458:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831695e8
	sub_831695E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314af98
	sub_8314AF98(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
loc_8314C480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C498"))) PPC_WEAK_FUNC(sub_8314C498);
PPC_FUNC_IMPL(__imp__sub_8314C498) {
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
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8314c514
	if (!cr6.gt) goto loc_8314C514;
	// li r31,0
	r31.s64 = 0;
loc_8314C4C0:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_8314C4D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8314c4f8
	if (cr6.eq) goto loc_8314C4F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8314c4d4
	if (cr6.eq) goto loc_8314C4D4;
loc_8314C4F8:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8314c520
	if (cr6.eq) goto loc_8314C520;
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8314c4c0
	if (cr6.lt) goto loc_8314C4C0;
loc_8314C514:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_8314C520:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314C538"))) PPC_WEAK_FUNC(sub_8314C538);
PPC_FUNC_IMPL(__imp__sub_8314C538) {
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
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bne cr6,0x8314c570
	if (!cr6.eq) goto loc_8314C570;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8314C570:
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314c5a0
	if (!cr6.eq) goto loc_8314C5A0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,22152
	ctx.r4.s64 = r11.s64 + 22152;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8314C5A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8314bd28
	sub_8314BD28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x8314c5b8
	if (cr6.eq) goto loc_8314C5B8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8314C5B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C5C8"))) PPC_WEAK_FUNC(sub_8314C5C8);
PPC_FUNC_IMPL(__imp__sub_8314C5C8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c300
	sub_8314C300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314c624
	if (!cr6.eq) goto loc_8314C624;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314C624:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
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

__attribute__((alias("__imp__sub_8314C640"))) PPC_WEAK_FUNC(sub_8314C640);
PPC_FUNC_IMPL(__imp__sub_8314C640) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c300
	sub_8314C300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314c698
	if (!cr6.eq) goto loc_8314C698;
	// li r11,-1
	r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8314c6b4
	goto loc_8314C6B4;
loc_8314C698:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8314C6B4:
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

__attribute__((alias("__imp__sub_8314C6D0"))) PPC_WEAK_FUNC(sub_8314C6D0);
PPC_FUNC_IMPL(__imp__sub_8314C6D0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x831694d8
	sub_831694D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8314c714
	if (!cr6.eq) goto loc_8314C714;
	// li r11,-1
	r11.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8314C714:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C728"))) PPC_WEAK_FUNC(sub_8314C728);
PPC_FUNC_IMPL(__imp__sub_8314C728) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C75C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c75c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C75C;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C774:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c774
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C774;
	// addi r11,r1,296
	r11.s64 = ctx.r1.s64 + 296;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C78C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c78c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C78C;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C7A4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c7a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C7A4;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C7BC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c7bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C7BC;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314c7e8
	if (!cr6.eq) goto loc_8314C7E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,21836
	ctx.r4.s64 = r11.s64 + 21836;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x8314c7f8
	goto loc_8314C7F8;
loc_8314C7E8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314c818
	if (!cr6.eq) goto loc_8314C818;
loc_8314C7F8:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8314C800:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314C818:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8314c800
	if (cr6.lt) goto loc_8314C800;
	// bne cr6,0x8314c7f8
	if (!cr6.eq) goto loc_8314C7F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C840"))) PPC_WEAK_FUNC(sub_8314C840);
PPC_FUNC_IMPL(__imp__sub_8314C840) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C87C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c87c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C87C;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C898:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C898;
	// addi r11,r1,296
	r11.s64 = ctx.r1.s64 + 296;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C8B4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c8b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C8B4;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C8D0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c8d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C8D0;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C8EC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c8ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C8EC;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314c924
	if (!cr6.eq) goto loc_8314C924;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,21836
	ctx.r4.s64 = r11.s64 + 21836;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8314c978
	goto loc_8314C978;
loc_8314C924:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314c940
	if (!cr6.eq) goto loc_8314C940;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8314c978
	goto loc_8314C978;
loc_8314C940:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8314c978
	if (cr6.eq) goto loc_8314C978;
loc_8314C958:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x8314c964
	if (!cr6.eq) goto loc_8314C964;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_8314C964:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8314c958
	if (!cr6.eq) goto loc_8314C958;
loc_8314C978:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314C990"))) PPC_WEAK_FUNC(sub_8314C990);
PPC_FUNC_IMPL(__imp__sub_8314C990) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C9C4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c9c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C9C4;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C9DC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c9dc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C9DC;
	// addi r11,r1,296
	r11.s64 = ctx.r1.s64 + 296;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314C9F4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314c9f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314C9F4;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CA0C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314ca0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CA0C;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CA24:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314ca24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CA24;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314ca70
	if (!cr6.eq) goto loc_8314CA70;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,21836
	ctx.r4.s64 = r11.s64 + 21836;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314CA70:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314caa4
	if (!cr6.eq) goto loc_8314CAA4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314CAA4:
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314CAC0"))) PPC_WEAK_FUNC(sub_8314CAC0);
PPC_FUNC_IMPL(__imp__sub_8314CAC0) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CAF4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314caf4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CAF4;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CB0C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cb0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CB0C;
	// addi r11,r1,296
	r11.s64 = ctx.r1.s64 + 296;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CB24:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cb24
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CB24;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CB3C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cb3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CB3C;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CB54:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cb54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CB54;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314cba0
	if (!cr6.eq) goto loc_8314CBA0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,21836
	ctx.r4.s64 = r11.s64 + 21836;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314CBA0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314cbd4
	if (!cr6.eq) goto loc_8314CBD4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314CBD4:
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314CBF0"))) PPC_WEAK_FUNC(sub_8314CBF0);
PPC_FUNC_IMPL(__imp__sub_8314CBF0) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CC38:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cc38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CC38;
	// addi r11,r1,288
	r11.s64 = ctx.r1.s64 + 288;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CC54:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cc54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CC54;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CC70:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cc70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CC70;
	// addi r11,r1,360
	r11.s64 = ctx.r1.s64 + 360;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CC8C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cc8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CC8C;
	// addi r11,r1,396
	r11.s64 = ctx.r1.s64 + 396;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CCA8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cca8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CCA8;
	// lwz r3,32(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314cce0
	if (!cr6.eq) goto loc_8314CCE0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,21836
	ctx.r4.s64 = r11.s64 + 21836;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b74
	return;
loc_8314CCE0:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314cd00
	if (!cr6.eq) goto loc_8314CD00;
loc_8314CCF0:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b74
	return;
loc_8314CD00:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8314ccf0
	if (!cr6.eq) goto loc_8314CCF0;
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r31.u8);
	// stb r31,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, r31.u8);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// bl 0x8314c280
	sub_8314C280(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314cd64
	if (!cr6.eq) goto loc_8314CD64;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,22200
	ctx.r4.s64 = r11.s64 + 22200;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b74
	return;
loc_8314CD64:
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_8314CD88"))) PPC_WEAK_FUNC(sub_8314CD88);
PPC_FUNC_IMPL(__imp__sub_8314CD88) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314ce10
	if (cr6.eq) goto loc_8314CE10;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8314cdfc
	if (!cr6.gt) goto loc_8314CDFC;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8314CDBC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8314cde8
	if (cr6.eq) goto loc_8314CDE8;
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
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stwx r29,r30,r9
	PPC_STORE_U32(r30.u32 + ctx.r9.u32, r29.u32);
loc_8314CDE8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8314cdbc
	if (cr6.lt) goto loc_8314CDBC;
loc_8314CDFC:
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
loc_8314CE10:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ce30
	if (cr6.eq) goto loc_8314CE30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r29.u32);
loc_8314CE30:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ce50
	if (cr6.eq) goto loc_8314CE50;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
loc_8314CE50:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ce70
	if (cr6.eq) goto loc_8314CE70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
loc_8314CE70:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ce90
	if (cr6.eq) goto loc_8314CE90;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
loc_8314CE90:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ceb0
	if (cr6.eq) goto loc_8314CEB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
loc_8314CEB0:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8314ced0
	if (cr6.eq) goto loc_8314CED0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
loc_8314CED0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314CED8"))) PPC_WEAK_FUNC(sub_8314CED8);
PPC_FUNC_IMPL(__imp__sub_8314CED8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x83169c28
	sub_83169C28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8314cf14
	if (!cr6.eq) goto loc_8314CF14;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,22240
	ctx.r4.s64 = r11.s64 + 22240;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314cf2c
	goto loc_8314CF2C;
loc_8314CF14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831688b0
	sub_831688B0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83169308
	sub_83169308(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8314CF2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314CF48"))) PPC_WEAK_FUNC(sub_8314CF48);
PPC_FUNC_IMPL(__imp__sub_8314CF48) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r25.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CF84:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cf84
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CF84;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CFA0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cfa0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CFA0;
	// addi r11,r1,296
	r11.s64 = ctx.r1.s64 + 296;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CFBC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cfbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CFBC;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CFD8:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cfd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CFD8;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8314CFF4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314cff4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314CFF4;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314d030
	if (!cr6.eq) goto loc_8314D030;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r11,21836
	ctx.r4.s64 = r11.s64 + 21836;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b68
	return;
loc_8314D030:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d054
	if (!cr6.eq) goto loc_8314D054;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b68
	return;
loc_8314D054:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8314d180
	if (cr6.lt) goto loc_8314D180;
	// beq cr6,0x8314d078
	if (cr6.eq) goto loc_8314D078;
loc_8314D064:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b68
	return;
loc_8314D078:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8314d0b0
	if (cr6.eq) goto loc_8314D0B0;
loc_8314D0A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b68
	return;
loc_8314D0B0:
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8314d150
	if (cr6.eq) goto loc_8314D150;
loc_8314D0C4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8314d0a4
	if (!cr6.eq) goto loc_8314D0A4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8314d0a4
	if (!cr6.eq) goto loc_8314D0A4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314cf48
	sub_8314CF48(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8314d0a4
	if (!cr6.eq) goto loc_8314D0A4;
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, xer);
	// bge cr6,0x8314d140
	if (!cr6.lt) goto loc_8314D140;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8314D140:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x8314d0c4
	if (cr6.lt) goto loc_8314D0C4;
loc_8314D150:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8314d174
	if (cr6.lt) goto loc_8314D174;
	// beq cr6,0x8314d168
	if (cr6.eq) goto loc_8314D168;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8314d064
	if (!cr6.lt) goto loc_8314D064;
loc_8314D168:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b68
	return;
loc_8314D174:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b68
	return;
loc_8314D180:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_8314D190"))) PPC_WEAK_FUNC(sub_8314D190);
PPC_FUNC_IMPL(__imp__sub_8314D190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D1A0"))) PPC_WEAK_FUNC(sub_8314D1A0);
PPC_FUNC_IMPL(__imp__sub_8314D1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,328(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 328);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// stw r3,328(r10)
	PPC_STORE_U32(ctx.r10.u32 + 328, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D1B8"))) PPC_WEAK_FUNC(sub_8314D1B8);
PPC_FUNC_IMPL(__imp__sub_8314D1B8) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,22292
	ctx.r6.s64 = r11.s64 + 22292;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314d258
	if (cr6.eq) goto loc_8314D258;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,21132
	ctx.r9.s64 = ctx.r10.s64 + 21132;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d278
	if (!cr6.eq) goto loc_8314D278;
loc_8314D234:
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
	// b 0x831b0b78
	return;
loc_8314D258:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22280
	ctx.r4.s64 = r11.s64 + 22280;
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
loc_8314D278:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83169898
	sub_83169898(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314d234
	if (cr6.eq) goto loc_8314D234;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314D2A0"))) PPC_WEAK_FUNC(sub_8314D2A0);
PPC_FUNC_IMPL(__imp__sub_8314D2A0) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,22316
	ctx.r6.s64 = r11.s64 + 22316;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314d340
	if (cr6.eq) goto loc_8314D340;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,21132
	ctx.r9.s64 = ctx.r10.s64 + 21132;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d360
	if (!cr6.eq) goto loc_8314D360;
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
	// b 0x831b0b78
	return;
loc_8314D340:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22304
	ctx.r4.s64 = r11.s64 + 22304;
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
loc_8314D360:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314D370"))) PPC_WEAK_FUNC(sub_8314D370);
PPC_FUNC_IMPL(__imp__sub_8314D370) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,22340
	ctx.r6.s64 = r11.s64 + 22340;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314d410
	if (cr6.eq) goto loc_8314D410;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,21132
	ctx.r9.s64 = ctx.r10.s64 + 21132;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d430
	if (!cr6.eq) goto loc_8314D430;
loc_8314D3EC:
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
	// b 0x831b0b78
	return;
loc_8314D410:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22328
	ctx.r4.s64 = r11.s64 + 22328;
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
loc_8314D430:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83169898
	sub_83169898(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314d3ec
	if (cr6.eq) goto loc_8314D3EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314D458"))) PPC_WEAK_FUNC(sub_8314D458);
PPC_FUNC_IMPL(__imp__sub_8314D458) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,22364
	ctx.r6.s64 = r11.s64 + 22364;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314d4f8
	if (cr6.eq) goto loc_8314D4F8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,21132
	ctx.r9.s64 = ctx.r10.s64 + 21132;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d518
	if (!cr6.eq) goto loc_8314D518;
loc_8314D4D4:
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
	// b 0x831b0b78
	return;
loc_8314D4F8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22352
	ctx.r4.s64 = r11.s64 + 22352;
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
loc_8314D518:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83169898
	sub_83169898(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314d4d4
	if (cr6.eq) goto loc_8314D4D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314D540"))) PPC_WEAK_FUNC(sub_8314D540);
PPC_FUNC_IMPL(__imp__sub_8314D540) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,22388
	ctx.r6.s64 = r11.s64 + 22388;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314d5e0
	if (cr6.eq) goto loc_8314D5E0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,21132
	ctx.r9.s64 = ctx.r10.s64 + 21132;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d600
	if (!cr6.eq) goto loc_8314D600;
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
	// b 0x831b0b78
	return;
loc_8314D5E0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22376
	ctx.r4.s64 = r11.s64 + 22376;
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
loc_8314D600:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314D610"))) PPC_WEAK_FUNC(sub_8314D610);
PPC_FUNC_IMPL(__imp__sub_8314D610) {
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
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r11,22412
	ctx.r6.s64 = r11.s64 + 22412;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x831685b0
	sub_831685B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8314d6b0
	if (cr6.eq) goto loc_8314D6B0;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,21132
	ctx.r9.s64 = ctx.r10.s64 + 21132;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d6d0
	if (!cr6.eq) goto loc_8314D6D0;
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
	// b 0x831b0b78
	return;
loc_8314D6B0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22400
	ctx.r4.s64 = r11.s64 + 22400;
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
loc_8314D6D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314D6E0"))) PPC_WEAK_FUNC(sub_8314D6E0);
PPC_FUNC_IMPL(__imp__sub_8314D6E0) {
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
	// addi r9,r11,21152
	ctx.r9.s64 = r11.s64 + 21152;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8314d718
	if (cr6.eq) goto loc_8314D718;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314D718:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D730"))) PPC_WEAK_FUNC(sub_8314D730);
PPC_FUNC_IMPL(__imp__sub_8314D730) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314bda0
	sub_8314BDA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8314D738"))) PPC_WEAK_FUNC(sub_8314D738);
PPC_FUNC_IMPL(__imp__sub_8314D738) {
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
	// addi r9,r11,21152
	ctx.r9.s64 = r11.s64 + 21152;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8314d770
	if (cr6.eq) goto loc_8314D770;
	// li r4,332
	ctx.r4.s64 = 332;
	// bl 0x83168618
	sub_83168618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8314D770:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D788"))) PPC_WEAK_FUNC(sub_8314D788);
PPC_FUNC_IMPL(__imp__sub_8314D788) {
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
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8314d7d0
	if (!cr6.eq) goto loc_8314D7D0;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,22484
	ctx.r4.s64 = ctx.r10.s64 + 22484;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x8314d820
	goto loc_8314D820;
loc_8314D7D0:
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8314d7f4
	if (!cr6.gt) goto loc_8314D7F4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,22436
	ctx.r4.s64 = r11.s64 + 22436;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314a270
	sub_8314A270(ctx, base);
loc_8314D7F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159350
	sub_83159350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83168100
	sub_83168100(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
loc_8314D820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D838"))) PPC_WEAK_FUNC(sub_8314D838);
PPC_FUNC_IMPL(__imp__sub_8314D838) {
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
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314d880
	if (cr6.eq) goto loc_8314D880;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,22572
	ctx.r4.s64 = ctx.r10.s64 + 22572;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// b 0x8314d8bc
	goto loc_8314D8BC;
loc_8314D880:
	// lwz r11,328(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 328);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8314d8a4
	if (!cr6.gt) goto loc_8314D8A4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,22524
	ctx.r4.s64 = r11.s64 + 22524;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314a270
	sub_8314A270(ctx, base);
loc_8314D8A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x83159350
	sub_83159350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
loc_8314D8BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314D8D8"))) PPC_WEAK_FUNC(sub_8314D8D8);
PPC_FUNC_IMPL(__imp__sub_8314D8D8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c380
	sub_8314C380(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d934
	if (!cr6.eq) goto loc_8314D934;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314D934:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8314D950"))) PPC_WEAK_FUNC(sub_8314D950);
PPC_FUNC_IMPL(__imp__sub_8314D950) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c380
	sub_8314C380(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314d9ac
	if (!cr6.eq) goto loc_8314D9AC;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314D9AC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_8314D9C8"))) PPC_WEAK_FUNC(sub_8314D9C8);
PPC_FUNC_IMPL(__imp__sub_8314D9C8) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314da24
	if (cr6.eq) goto loc_8314DA24;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8314da24
	if (!cr6.lt) goto loc_8314DA24;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314da3c
	if (!cr6.eq) goto loc_8314DA3C;
loc_8314DA04:
	// li r11,-1
	r11.s64 = -1;
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
loc_8314DA24:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,22100
	ctx.r4.s64 = r11.s64 + 22100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x8314da04
	goto loc_8314DA04;
loc_8314DA3C:
	// bl 0x8315cf68
	sub_8315CF68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314DA58"))) PPC_WEAK_FUNC(sub_8314DA58);
PPC_FUNC_IMPL(__imp__sub_8314DA58) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314dab8
	if (cr6.eq) goto loc_8314DAB8;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8314dab8
	if (!cr6.lt) goto loc_8314DAB8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314dad0
	if (!cr6.eq) goto loc_8314DAD0;
loc_8314DA9C:
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
loc_8314DAB8:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r4,r11,22100
	ctx.r4.s64 = r11.s64 + 22100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// b 0x8314da9c
	goto loc_8314DA9C;
loc_8314DAD0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x83156ae8
	sub_83156AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314DAF0"))) PPC_WEAK_FUNC(sub_8314DAF0);
PPC_FUNC_IMPL(__imp__sub_8314DAF0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c300
	sub_8314C300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314db4c
	if (!cr6.eq) goto loc_8314DB4C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314DB4C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
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

__attribute__((alias("__imp__sub_8314DB68"))) PPC_WEAK_FUNC(sub_8314DB68);
PPC_FUNC_IMPL(__imp__sub_8314DB68) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c418
	sub_8314C418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314dbc4
	if (!cr6.eq) goto loc_8314DBC4;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314DBC4:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
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

__attribute__((alias("__imp__sub_8314DBE0"))) PPC_WEAK_FUNC(sub_8314DBE0);
PPC_FUNC_IMPL(__imp__sub_8314DBE0) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c300
	sub_8314C300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314dc3c
	if (!cr6.eq) goto loc_8314DC3C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314DC3C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_8314DC58"))) PPC_WEAK_FUNC(sub_8314DC58);
PPC_FUNC_IMPL(__imp__sub_8314DC58) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c418
	sub_8314C418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314dcb4
	if (!cr6.eq) goto loc_8314DCB4;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8314DCB4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_8314DCD0"))) PPC_WEAK_FUNC(sub_8314DCD0);
PPC_FUNC_IMPL(__imp__sub_8314DCD0) {
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8314c380
	sub_8314C380(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314dd28
	if (!cr6.eq) goto loc_8314DD28;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
loc_8314DD28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314DD58"))) PPC_WEAK_FUNC(sub_8314DD58);
PPC_FUNC_IMPL(__imp__sub_8314DD58) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// bl 0x8314c300
	sub_8314C300(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314dda8
	if (!cr6.eq) goto loc_8314DDA8;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8314ddb4
	goto loc_8314DDB4;
loc_8314DDA8:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
loc_8314DDB4:
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

__attribute__((alias("__imp__sub_8314DDD0"))) PPC_WEAK_FUNC(sub_8314DDD0);
PPC_FUNC_IMPL(__imp__sub_8314DDD0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// bl 0x8314c418
	sub_8314C418(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314de20
	if (!cr6.eq) goto loc_8314DE20;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8314de2c
	goto loc_8314DE2C;
loc_8314DE20:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
loc_8314DE2C:
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

__attribute__((alias("__imp__sub_8314DE48"))) PPC_WEAK_FUNC(sub_8314DE48);
PPC_FUNC_IMPL(__imp__sub_8314DE48) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8314de94
	if (cr6.eq) goto loc_8314DE94;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314dea0
	goto loc_8314DEA0;
loc_8314DE94:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314cf48
	sub_8314CF48(ctx, base);
loc_8314DEA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314DEB8"))) PPC_WEAK_FUNC(sub_8314DEB8);
PPC_FUNC_IMPL(__imp__sub_8314DEB8) {
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
	// lwz r31,32(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8314def8
	if (!cr6.eq) goto loc_8314DEF8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22608
	ctx.r4.s64 = r11.s64 + 22608;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8314df20
	goto loc_8314DF20;
loc_8314DEF8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x831694d8
	sub_831694D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
loc_8314DF20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8314DF38"))) PPC_WEAK_FUNC(sub_8314DF38);
PPC_FUNC_IMPL(__imp__sub_8314DF38) {
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
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314DF74:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314df74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314DF74;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314DF8C:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314df8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314DF8C;
	// addi r11,r1,296
	r11.s64 = ctx.r1.s64 + 296;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314DFA4:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314dfa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314DFA4;
	// addi r11,r1,328
	r11.s64 = ctx.r1.s64 + 328;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314DFBC:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314dfbc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314DFBC;
	// addi r11,r1,364
	r11.s64 = ctx.r1.s64 + 364;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8314DFD4:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8314dfd4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8314DFD4;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314e010
	if (!cr6.eq) goto loc_8314E010;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,21836
	ctx.r4.s64 = r11.s64 + 21836;
	// bl 0x831684c0
	sub_831684C0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831b0b78
	return;
loc_8314E010:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8314b1d8
	sub_8314B1D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314e038
	if (!cr6.eq) goto loc_8314E038;
loc_8314E024:
	// li r11,-1
	r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831b0b78
	return;
loc_8314E038:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8314b140
	sub_8314B140(ctx, base);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8314ba98
	sub_8314BA98(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8314e080
	if (!cr6.eq) goto loc_8314E080;
	// li r11,-1
	r11.s64 = -1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r10,22664
	ctx.r4.s64 = ctx.r10.s64 + 22664;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x831684d0
	sub_831684D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831b0b78
	return;
loc_8314E080:
	// addi r5,r1,576
	ctx.r5.s64 = ctx.r1.s64 + 576;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314deb8
	sub_8314DEB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8314e024
	if (cr6.eq) goto loc_8314E024;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_8314E0A8"))) PPC_WEAK_FUNC(sub_8314E0A8);
PPC_FUNC_IMPL(__imp__sub_8314E0A8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8314e0e8
	if (cr6.eq) goto loc_8314E0E8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,23216
	ctx.r4.s64 = r11.s64 + 23216;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E0E8:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8314d2a0
	sub_8314D2A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8314e124
	if (!cr6.eq) goto loc_8314E124;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,23172
	ctx.r4.s64 = r11.s64 + 23172;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E124:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// addi r5,r11,23168
	ctx.r5.s64 = r11.s64 + 23168;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// bl 0x831694d8
	sub_831694D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314b058
	sub_8314B058(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314e1d0
	if (!cr6.eq) goto loc_8314E1D0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8314d1b8
	sub_8314D1B8(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314e1d0
	if (!cr6.eq) goto loc_8314E1D0;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,23124
	ctx.r4.s64 = r11.s64 + 23124;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E1D0:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23116
	ctx.r4.s64 = r11.s64 + 23116;
	// bl 0x8314b0e8
	sub_8314B0E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314e22c
	if (!cr6.eq) goto loc_8314E22C;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8314d370
	sub_8314D370(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314e22c
	if (!cr6.eq) goto loc_8314E22C;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,23072
	ctx.r4.s64 = r11.s64 + 23072;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E22C:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,23056
	ctx.r4.s64 = r11.s64 + 23056;
	// bl 0x8314b0e8
	sub_8314B0E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314e288
	if (!cr6.eq) goto loc_8314E288;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8314d458
	sub_8314D458(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314e288
	if (!cr6.eq) goto loc_8314E288;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,23012
	ctx.r4.s64 = r11.s64 + 23012;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E288:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,22992
	ctx.r4.s64 = r11.s64 + 22992;
	// bl 0x8314b0e8
	sub_8314B0E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314e2e4
	if (!cr6.eq) goto loc_8314E2E4;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8314d610
	sub_8314D610(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8314e2e4
	if (!cr6.eq) goto loc_8314E2E4;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// addi r4,r11,22936
	ctx.r4.s64 = r11.s64 + 22936;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E2E4:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,22928
	ctx.r4.s64 = r11.s64 + 22928;
	// bl 0x8314b0e8
	sub_8314B0E8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8314e460
	if (!cr6.eq) goto loc_8314E460;
	// lwz r5,156(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8314d540
	sub_8314D540(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// bne cr6,0x8314e344
	if (!cr6.eq) goto loc_8314E344;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22880
	ctx.r4.s64 = r11.s64 + 22880;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E344:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// beq cr6,0x8314e460
	if (cr6.eq) goto loc_8314E460;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r5,r10,22864
	ctx.r5.s64 = ctx.r10.s64 + 22864;
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83168098
	sub_83168098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x8314e3a8
	if (!cr6.eq) goto loc_8314E3A8;
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r5,-3
	ctx.r5.s64 = -3;
	// addi r4,r11,22848
	ctx.r4.s64 = r11.s64 + 22848;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831684d8
	sub_831684D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E3A8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8314e3d8
	if (!cr6.gt) goto loc_8314E3D8;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8314E3BC:
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8314e3bc
	if (cr6.lt) goto loc_8314E3BC;
loc_8314E3D8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8314e460
	if (!cr6.gt) goto loc_8314E460;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_8314E3F4:
	// stfs f31,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r30.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8314bc28
	sub_8314BC28(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8314e498
	if (!cr6.eq) goto loc_8314E498;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x83157da8
	sub_83157DA8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stwx r3,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r3.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8314e470
	if (cr6.eq) goto loc_8314E470;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8314e3f4
	if (cr6.lt) goto loc_8314E3F4;
loc_8314E460:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E470:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22788
	ctx.r4.s64 = r11.s64 + 22788;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
loc_8314E498:
	// lis r11,-32231
	r11.s64 = -2112290816;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,22736
	ctx.r4.s64 = r11.s64 + 22736;
	// bl 0x831684b0
	sub_831684B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314cd88
	sub_8314CD88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

