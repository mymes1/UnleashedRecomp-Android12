#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EA1318"))) PPC_WEAK_FUNC(sub_82EA1318);
PPC_FUNC_IMPL(__imp__sub_82EA1318) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2320
	ctx.r4.s64 = r11.s64 + -2320;
	// li r5,903
	ctx.r5.s64 = 903;
	// li r3,152
	ctx.r3.s64 = 152;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// li r19,0
	r19.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea1360
	if (cr0.eq) goto loc_82EA1360;
	// bl 0x82ea3280
	sub_82EA3280(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82ea1364
	goto loc_82EA1364;
loc_82EA1360:
	// mr r31,r19
	r31.u64 = r19.u64;
loc_82EA1364:
	// stw r31,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r31.u32);
	// addi r30,r16,4
	r30.s64 = r16.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9f2a0
	sub_82E9F2A0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// addi r31,r11,32
	r31.s64 = r11.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lbz r11,20(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea16ec
	if (!cr0.eq) goto loc_82EA16EC;
	// lwz r25,16(r17)
	r25.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// lwz r23,0(r17)
	r23.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r22,40(r17)
	r22.u64 = PPC_LOAD_U32(r17.u32 + 40);
	// lwz r29,8(r17)
	r29.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r27,12(r17)
	r27.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// bl 0x82ea6fc0
	sub_82EA6FC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ea6fe0
	sub_82EA6FE0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r24,r29
	r24.u64 = r29.u64;
	// mr r21,r27
	r21.u64 = r27.u64;
	// bl 0x82be77b0
	sub_82BE77B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(r26.u32, r22.u32, xer);
	// ble cr6,0x82ea16e0
	if (!cr6.gt) goto loc_82EA16E0;
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// divwu r10,r9,r28
	ctx.r10.u32 = ctx.r9.u32 / r28.u32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r10,r28
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// divwu r10,r9,r30
	ctx.r10.u32 = ctx.r9.u32 / r30.u32;
	// addi r9,r11,31
	ctx.r9.s64 = r11.s64 + 31;
	// mullw r11,r10,r30
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r20,r9,0,0,26
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r24,r11,0,0,26
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// twllei r28,0
	// twllei r30,0
	// mr r21,r20
	r21.u64 = r20.u64;
	// bl 0x82be77b0
	sub_82BE77B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(r26.u32, r22.u32, xer);
	// bgt cr6,0x82ea14dc
	if (cr6.gt) goto loc_82EA14DC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
	// std r19,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r19.u64);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82ea0e00
	sub_82EA0E00(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r10,r29,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r27,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r27.u32);
	// b 0x82ea16e0
	goto loc_82EA16E0;
loc_82EA14DC:
	// li r18,3
	r18.s64 = 3;
	// addi r10,r27,2
	ctx.r10.s64 = r27.s64 + 2;
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// divwu r10,r10,r18
	ctx.r10.u32 = ctx.r10.u32 / r18.u32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// add r11,r10,r28
	r11.u64 = ctx.r10.u64 + r28.u64;
	// divwu r10,r9,r30
	ctx.r10.u32 = ctx.r9.u32 / r30.u32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// mullw r11,r10,r30
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// divwu r10,r9,r28
	ctx.r10.u32 = ctx.r9.u32 / r28.u32;
	// addi r9,r11,31
	ctx.r9.s64 = r11.s64 + 31;
	// mullw r11,r10,r28
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r24,r9,0,0,26
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r21,r11,0,0,26
	r21.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// twllei r30,0
	// twllei r28,0
	// bl 0x82be77b0
	sub_82BE77B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(r26.u32, r22.u32, xer);
	// bgt cr6,0x82ea15d8
	if (cr6.gt) goto loc_82EA15D8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
	// std r19,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r19.u64);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82ea0e00
	sub_82EA0E00(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// divwu r10,r27,r18
	ctx.r10.u32 = r27.u32 / r18.u32;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r9,r9,r18
	ctx.r9.u32 = ctx.r9.u32 / r18.u32;
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r29,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r29.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r27,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r27.u32);
	// b 0x82ea16e0
	goto loc_82EA16E0;
loc_82EA15D8:
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r21,r20
	r21.u64 = r20.u64;
	// divwu r11,r11,r30
	r11.u32 = r11.u32 / r30.u32;
	// twllei r30,0
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r24,r11,0,0,26
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82be77b0
	sub_82BE77B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r22
	cr6.compare<uint32_t>(r26.u32, r22.u32, xer);
	// bgt cr6,0x82ea16e0
	if (cr6.gt) goto loc_82EA16E0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// std r19,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r19.u64);
	// std r19,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r19.u64);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82ea0e00
	sub_82EA0E00(ctx, base);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm r11,r29,30,2,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r27,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r27.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, r19.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r27,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r27.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, r19.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r27,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r27.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r19,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r19.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r29,56(r11)
	PPC_STORE_U32(r11.u32 + 56, r29.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r27,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r27.u32);
loc_82EA16E0:
	// stw r26,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r26.u32);
	// stw r24,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r24.u32);
	// stw r21,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r21.u32);
loc_82EA16EC:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// lwz r10,4(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// stw r10,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r10.u32);
	// stw r19,96(r11)
	PPC_STORE_U32(r11.u32 + 96, r19.u32);
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// stw r19,104(r11)
	PPC_STORE_U32(r11.u32 + 104, r19.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// stw r10,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_82EA1730"))) PPC_WEAK_FUNC(sub_82EA1730);
PPC_FUNC_IMPL(__imp__sub_82EA1730) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r4,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r4.u32);
	// bl 0x82e9c3a8
	sub_82E9C3A8(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// bl 0x82bdd330
	sub_82BDD330(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82be96f0
	sub_82BE96F0(ctx, base);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r31,0
	r31.s64 = 0;
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// li r26,1
	r26.s64 = 1;
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r26.u8);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82ea1318
	sub_82EA1318(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r29,r30,24
	r29.s64 = r30.s64 + 24;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea1804
	if (cr6.eq) goto loc_82EA1804;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA1804:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r28.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stb r26,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r26.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82ea3320
	sub_82EA3320(ctx, base);
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r11.u32);
	// stw r10,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r10.u32);
	// bl 0x82bdd2f0
	sub_82BDD2F0(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82ea18f4
	if (cr0.eq) goto loc_82EA18F4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82be96f0
	sub_82BE96F0(ctx, base);
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,212(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lwz r8,216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,220(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r26,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r26.u8);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82ea1318
	sub_82EA1318(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea18d8
	if (cr6.eq) goto loc_82EA18D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA18D8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r27.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stb r26,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r26.u8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82ea3320
	sub_82EA3320(ctx, base);
loc_82EA18F4:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2320
	ctx.r4.s64 = r11.s64 + -2320;
	// li r5,156
	ctx.r5.s64 = 156;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea1920
	if (cr0.eq) goto loc_82EA1920;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea68e8
	sub_82EA68E8(ctx, base);
	// b 0x82ea1924
	goto loc_82EA1924;
loc_82EA1920:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82EA1924:
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// stw r3,212(r30)
	PPC_STORE_U32(r30.u32 + 212, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea194c
	if (cr6.eq) goto loc_82EA194C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EA194C:
	// lis r11,-32238
	r11.s64 = -2112749568;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// addi r4,r11,-2356
	ctx.r4.s64 = r11.s64 + -2356;
	// bl 0x82e17760
	sub_82E17760(ctx, base);
	// stb r26,684(r30)
	PPC_STORE_U8(r30.u32 + 684, r26.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA1970"))) PPC_WEAK_FUNC(sub_82EA1970);
PPC_FUNC_IMPL(__imp__sub_82EA1970) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,684(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 684);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea19b8
	if (cr0.eq) goto loc_82EA19B8;
	// addi r5,r31,24
	ctx.r5.s64 = r31.s64 + 24;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ea64a8
	sub_82EA64A8(ctx, base);
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82ea5fc0
	sub_82EA5FC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9fc30
	sub_82E9FC30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f500
	sub_82E9F500(ctx, base);
loc_82EA19B8:
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// beq cr6,0x82ea19d8
	if (cr6.eq) goto loc_82EA19D8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA19D8:
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// beq cr6,0x82ea19f4
	if (cr6.eq) goto loc_82EA19F4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA19F4:
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea1a18
	if (cr6.eq) goto loc_82EA1A18;
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
loc_82EA1A18:
	// addi r29,r31,40
	r29.s64 = r31.s64 + 40;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r28,r31,184
	r28.s64 = r31.s64 + 184;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// beq cr6,0x82ea1a70
	if (cr6.eq) goto loc_82EA1A70;
loc_82EA1A38:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bc2e30
	sub_82BC2E30(ctx, base);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82ea1a38
	if (!cr6.eq) goto loc_82EA1A38;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea1a60
	if (cr6.eq) goto loc_82EA1A60;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA1A60:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea1a70
	if (cr6.eq) goto loc_82EA1A70;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA1A70:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82e1bcc8
	sub_82E1BCC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e1bc68
	sub_82E1BC68(ctx, base);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// ld r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82ea0d28
	sub_82EA0D28(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// li r11,1024
	r11.s64 = 1024;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r30.u32);
	// stb r30,685(r31)
	PPC_STORE_U8(r31.u32 + 685, r30.u8);
	// stb r30,686(r31)
	PPC_STORE_U8(r31.u32 + 686, r30.u8);
	// stb r30,684(r31)
	PPC_STORE_U8(r31.u32 + 684, r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA1B00"))) PPC_WEAK_FUNC(sub_82EA1B00);
PPC_FUNC_IMPL(__imp__sub_82EA1B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// bl 0x82ea1318
	sub_82EA1318(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82ea1b58
	if (cr6.eq) goto loc_82EA1B58;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EA1B3C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea1b3c
	if (!cr0.eq) goto loc_82EA1B3C;
loc_82EA1B58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e9ce78
	sub_82E9CE78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea1b74
	if (cr6.eq) goto loc_82EA1B74;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA1B74:
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

__attribute__((alias("__imp__sub_82EA1B90"))) PPC_WEAK_FUNC(sub_82EA1B90);
PPC_FUNC_IMPL(__imp__sub_82EA1B90) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// bl 0x82ea6ed8
	sub_82EA6ED8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// bl 0x82e9f048
	sub_82E9F048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea1b00
	sub_82EA1B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EA1C20"))) PPC_WEAK_FUNC(sub_82EA1C20);
PPC_FUNC_IMPL(__imp__sub_82EA1C20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x82e9ee48
	sub_82E9EE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ea1b90
	sub_82EA1B90(ctx, base);
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

__attribute__((alias("__imp__sub_82EA1C78"))) PPC_WEAK_FUNC(sub_82EA1C78);
PPC_FUNC_IMPL(__imp__sub_82EA1C78) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bl 0x82e9f048
	sub_82E9F048(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea1b00
	sub_82EA1B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EA1D08"))) PPC_WEAK_FUNC(sub_82EA1D08);
PPC_FUNC_IMPL(__imp__sub_82EA1D08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x82e9ee48
	sub_82E9EE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82ea1c78
	sub_82EA1C78(ctx, base);
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

__attribute__((alias("__imp__sub_82EA1D60"))) PPC_WEAK_FUNC(sub_82EA1D60);
PPC_FUNC_IMPL(__imp__sub_82EA1D60) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r10,r31,40
	ctx.r10.s64 = r31.s64 + 40;
	// li r9,8
	ctx.r9.s64 = 8;
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
loc_82EA1D98:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bge 0x82ea1d98
	if (!cr0.lt) goto loc_82EA1D98;
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// addi r10,r31,216
	ctx.r10.s64 = r31.s64 + 216;
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
loc_82EA1DCC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bge 0x82ea1dcc
	if (!cr0.lt) goto loc_82EA1DCC;
	// addi r10,r31,344
	ctx.r10.s64 = r31.s64 + 344;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r8,2
	ctx.r8.s64 = 2;
loc_82EA1DEC:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bge 0x82ea1dec
	if (!cr0.lt) goto loc_82EA1DEC;
	// stw r11,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,668(r31)
	PPC_STORE_U32(r31.u32 + 668, r11.u32);
	// stw r11,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r11.u32);
	// stw r11,676(r31)
	PPC_STORE_U32(r31.u32 + 676, r11.u32);
	// stb r11,684(r31)
	PPC_STORE_U8(r31.u32 + 684, r11.u8);
	// addi r11,r31,664
	r11.s64 = r31.s64 + 664;
	// bl 0x82ea1970
	sub_82EA1970(ctx, base);
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

__attribute__((alias("__imp__sub_82EA1E48"))) PPC_WEAK_FUNC(sub_82EA1E48);
PPC_FUNC_IMPL(__imp__sub_82EA1E48) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ea1e90
	if (cr6.eq) goto loc_82EA1E90;
loc_82EA1E70:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ea1e84
	if (cr6.eq) goto loc_82EA1E84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea0ef0
	sub_82EA0EF0(ctx, base);
loc_82EA1E84:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x82ea1e70
	if (!cr0.eq) goto loc_82EA1E70;
loc_82EA1E90:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EA1EA0"))) PPC_WEAK_FUNC(sub_82EA1EA0);
PPC_FUNC_IMPL(__imp__sub_82EA1EA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r6
	cr6.compare<uint32_t>(r27.u32, ctx.r6.u32, xer);
	// beq cr6,0x82ea1f18
	if (cr6.eq) goto loc_82EA1F18;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, xer);
	// beq cr6,0x82ea1ef0
	if (cr6.eq) goto loc_82EA1EF0;
loc_82EA1ED4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea0f88
	sub_82EA0F88(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82ea1ed4
	if (!cr6.eq) goto loc_82EA1ED4;
loc_82EA1EF0:
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x82ea1f14
	if (cr6.eq) goto loc_82EA1F14;
loc_82EA1F00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9c9d0
	sub_82E9C9D0(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82ea1f00
	if (!cr6.eq) goto loc_82EA1F00;
loc_82EA1F14:
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
loc_82EA1F18:
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA1F28"))) PPC_WEAK_FUNC(sub_82EA1F28);
PPC_FUNC_IMPL(__imp__sub_82EA1F28) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// bl 0x82ea0ef0
	sub_82EA0EF0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea1f60
	if (!cr6.eq) goto loc_82EA1F60;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82ea1f6c
	goto loc_82EA1F6C;
loc_82EA1F60:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r8,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r8.s64 = r11.s32 >> 4;
loc_82EA1F6C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82ea2280
	if (cr6.eq) goto loc_82EA2280;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea1f84
	if (!cr6.eq) goto loc_82EA1F84;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ea1f90
	goto loc_82EA1F90;
loc_82EA1F84:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
loc_82EA1F90:
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82ea1fac
	if (!cr6.lt) goto loc_82EA1FAC;
	// bl 0x82e706c8
	sub_82E706C8(ctx, base);
	// b 0x82ea2280
	goto loc_82EA2280;
loc_82EA1FAC:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea1fbc
	if (!cr6.eq) goto loc_82EA1FBC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ea1fc8
	goto loc_82EA1FC8;
loc_82EA1FBC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
loc_82EA1FC8:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x82ea2150
	if (!cr6.lt) goto loc_82EA2150;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82ea1fec
	if (!cr6.lt) goto loc_82EA1FEC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ea1ff0
	goto loc_82EA1FF0;
loc_82EA1FEC:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82EA1FF0:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea2000
	if (!cr6.eq) goto loc_82EA2000;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ea200c
	goto loc_82EA200C;
loc_82EA2000:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
loc_82EA200C:
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ea2038
	if (!cr6.lt) goto loc_82EA2038;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea2028
	if (!cr6.eq) goto loc_82EA2028;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ea2034
	goto loc_82EA2034;
loc_82EA2028:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
loc_82EA2034:
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
loc_82EA2038:
	// rlwinm r24,r11,4,0,27
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r25,-31946
	r25.s64 = -2093613056;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r4,r11,2300
	ctx.r4.s64 = r11.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x82ea2084
	goto loc_82EA2084;
loc_82EA2068:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ea207c
	if (cr6.eq) goto loc_82EA207C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea0ef0
	sub_82EA0EF0(ctx, base);
loc_82EA207C:
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
loc_82EA2084:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bne cr6,0x82ea2068
	if (!cr6.eq) goto loc_82EA2068;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea1e48
	sub_82EA1E48(ctx, base);
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82ea20d8
	if (cr6.eq) goto loc_82EA20D8;
	// subf r28,r30,r26
	r28.s64 = r26.s64 - r30.s64;
loc_82EA20B4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ea20c8
	if (cr6.eq) goto loc_82EA20C8;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea0ef0
	sub_82EA0EF0(ctx, base);
loc_82EA20C8:
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// add r11,r28,r30
	r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82ea20b4
	if (!cr6.eq) goto loc_82EA20B4;
loc_82EA20D8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea20ec
	if (!cr6.eq) goto loc_82EA20EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ea20f8
	goto loc_82EA20F8;
loc_82EA20EC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
loc_82EA20F8:
	// add r28,r10,r23
	r28.u64 = ctx.r10.u64 + r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea2134
	if (cr6.eq) goto loc_82EA2134;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82ea2128
	if (cr6.eq) goto loc_82EA2128;
loc_82EA2114:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9c9d0
	sub_82E9C9D0(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82ea2114
	if (!cr6.eq) goto loc_82EA2114;
loc_82EA2128:
	// lwz r3,6512(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 6512);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82EA2134:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// add r10,r24,r27
	ctx.r10.u64 = r24.u64 + r27.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82ea2280
	goto loc_82EA2280;
loc_82EA2150:
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r26,r30
	r11.s64 = r30.s64 - r26.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// bge cr6,0x82ea21f0
	if (!cr6.lt) goto loc_82EA21F0;
	// rlwinm r29,r23,4,0,27
	r29.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// add r28,r29,r26
	r28.u64 = r29.u64 + r26.u64;
	// beq cr6,0x82ea219c
	if (cr6.eq) goto loc_82EA219C;
	// subf r27,r29,r28
	r27.s64 = r28.s64 - r29.s64;
loc_82EA2178:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ea218c
	if (cr6.eq) goto loc_82EA218C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ea0ef0
	sub_82EA0EF0(ctx, base);
loc_82EA218C:
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82ea2178
	if (!cr6.eq) goto loc_82EA2178;
loc_82EA219C:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r26,r4
	r11.s64 = ctx.r4.s64 - r26.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// subf r5,r11,r23
	ctx.r5.s64 = r23.s64 - r11.s64;
	// bl 0x82ea1e48
	sub_82EA1E48(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82ea2280
	if (cr6.eq) goto loc_82EA2280;
loc_82EA21D4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ea0f88
	sub_82EA0F88(ctx, base);
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82ea21d4
	if (!cr6.eq) goto loc_82EA21D4;
	// b 0x82ea2280
	goto loc_82EA2280;
loc_82EA21F0:
	// rlwinm r25,r23,4,0,27
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r30
	r28.u64 = r30.u64;
	// subf r29,r25,r30
	r29.s64 = r30.s64 - r25.s64;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// beq cr6,0x82ea222c
	if (cr6.eq) goto loc_82EA222C;
loc_82EA2208:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ea221c
	if (cr6.eq) goto loc_82EA221C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ea0ef0
	sub_82EA0EF0(ctx, base);
loc_82EA221C:
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r27,r30
	cr6.compare<uint32_t>(r27.u32, r30.u32, xer);
	// bne cr6,0x82ea2208
	if (!cr6.eq) goto loc_82EA2208;
loc_82EA222C:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(r26.u32, r29.u32, xer);
	// beq cr6,0x82ea2258
	if (cr6.eq) goto loc_82EA2258;
	// subf r30,r29,r30
	r30.s64 = r30.s64 - r29.s64;
loc_82EA2240:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x82ea0f88
	sub_82EA0F88(ctx, base);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x82ea2240
	if (!cr6.eq) goto loc_82EA2240;
loc_82EA2258:
	// add r30,r25,r26
	r30.u64 = r25.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// beq cr6,0x82ea2280
	if (cr6.eq) goto loc_82EA2280;
loc_82EA2268:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea0f88
	sub_82EA0F88(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82ea2268
	if (!cr6.eq) goto loc_82EA2268;
loc_82EA2280:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9c9d0
	sub_82E9C9D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EA2290"))) PPC_WEAK_FUNC(sub_82EA2290);
PPC_FUNC_IMPL(__imp__sub_82EA2290) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea22bc
	if (!cr6.eq) goto loc_82EA22BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ea22c8
	goto loc_82EA22C8;
loc_82EA22BC:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
loc_82EA22C8:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea22f8
	if (!cr6.lt) goto loc_82EA22F8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea22e4
	if (cr6.eq) goto loc_82EA22E4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
loc_82EA22E4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// bl 0x82ea1f28
	sub_82EA1F28(ctx, base);
	// b 0x82ea2328
	goto loc_82EA2328;
loc_82EA22F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea2328
	if (cr6.eq) goto loc_82EA2328;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ea2328
	if (!cr6.lt) goto loc_82EA2328;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea1ea0
	sub_82EA1EA0(ctx, base);
loc_82EA2328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9c9d0
	sub_82E9C9D0(ctx, base);
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

__attribute__((alias("__imp__sub_82EA2348"))) PPC_WEAK_FUNC(sub_82EA2348);
PPC_FUNC_IMPL(__imp__sub_82EA2348) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2320
	ctx.r4.s64 = r11.s64 + -2320;
	// li r5,1025
	ctx.r5.s64 = 1025;
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea2390
	if (cr0.eq) goto loc_82EA2390;
	// bl 0x82ea2e58
	sub_82EA2E58(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ea2394
	goto loc_82EA2394;
loc_82EA2390:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82EA2394:
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
	// addi r23,r28,4
	r23.s64 = r28.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82e9f2a0
	sub_82E9F2A0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r10,r11,88
	ctx.r10.s64 = r11.s64 + 88;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,104(r11)
	PPC_STORE_U32(r11.u32 + 104, r31.u32);
	// stw r31,108(r11)
	PPC_STORE_U32(r11.u32 + 108, r31.u32);
	// stw r31,100(r11)
	PPC_STORE_U32(r11.u32 + 100, r31.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r10.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// stw r31,108(r11)
	PPC_STORE_U32(r11.u32 + 108, r31.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea2438
	if (!cr6.eq) goto loc_82EA2438;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82ea7090
	sub_82EA7090(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r3,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r3.u32);
loc_82EA2438:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea258c
	if (!cr6.eq) goto loc_82EA258C;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r19,20(r30)
	r19.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r21,72(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// bl 0x82ea2290
	sub_82EA2290(ctx, base);
	// mr r24,r31
	r24.u64 = r31.u64;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82ea258c
	if (cr6.eq) goto loc_82EA258C;
	// mr r20,r31
	r20.u64 = r31.u64;
loc_82EA247C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// add r26,r11,r20
	r26.u64 = r11.u64 + r20.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82e1d178
	sub_82E1D178(ctx, base);
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82ea257c
	if (cr6.eq) goto loc_82EA257C;
	// mr r25,r31
	r25.u64 = r31.u64;
loc_82EA24B0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// bl 0x82ea6ed8
	sub_82EA6ED8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bl 0x82e9f048
	sub_82E9F048(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea1318
	sub_82EA1318(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// bl 0x822d0190
	sub_822D0190(ctx, base);
	// stw r27,116(r29)
	PPC_STORE_U32(r29.u32 + 116, r27.u32);
	// stw r24,120(r29)
	PPC_STORE_U32(r29.u32 + 120, r24.u32);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82ea256c
	if (cr6.eq) goto loc_82EA256C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA256C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmplw cr6,r27,r21
	cr6.compare<uint32_t>(r27.u32, r21.u32, xer);
	// bne cr6,0x82ea24b0
	if (!cr6.eq) goto loc_82EA24B0;
loc_82EA257C:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r20,r20,16
	r20.s64 = r20.s64 + 16;
	// cmplw cr6,r24,r19
	cr6.compare<uint32_t>(r24.u32, r19.u32, xer);
	// bne cr6,0x82ea247c
	if (!cr6.eq) goto loc_82EA247C;
loc_82EA258C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b54
	return;
}

__attribute__((alias("__imp__sub_82EA2598"))) PPC_WEAK_FUNC(sub_82EA2598);
PPC_FUNC_IMPL(__imp__sub_82EA2598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// bl 0x82ea2348
	sub_82EA2348(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82ea25f0
	if (cr6.eq) goto loc_82EA25F0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EA25D4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea25d4
	if (!cr0.eq) goto loc_82EA25D4;
loc_82EA25F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82e9ce78
	sub_82E9CE78(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea260c
	if (cr6.eq) goto loc_82EA260C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA260C:
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

__attribute__((alias("__imp__sub_82EA2628"))) PPC_WEAK_FUNC(sub_82EA2628);
PPC_FUNC_IMPL(__imp__sub_82EA2628) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-2320
	ctx.r4.s64 = r11.s64 + -2320;
	// li r5,288
	ctx.r5.s64 = 288;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82dfa0b0
	sub_82DFA0B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea266c
	if (cr0.eq) goto loc_82EA266C;
	// bl 0x82ea2a28
	sub_82EA2A28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82ea2670
	goto loc_82EA2670;
loc_82EA266C:
	// li r30,0
	r30.s64 = 0;
loc_82EA2670:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9f2a0
	sub_82E9F2A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c0000
	sub_822C0000(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ea2598
	sub_82EA2598(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea26d4
	if (cr6.eq) goto loc_82EA26D4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA26D4:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2718
	if (cr6.eq) goto loc_82EA2718;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA2718:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea1b00
	sub_82EA1B00(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r30,12
	ctx.r10.s64 = r30.s64 + 12;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2760
	if (cr6.eq) goto loc_82EA2760;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA2760:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x822d0190
	sub_822D0190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EA2790"))) PPC_WEAK_FUNC(sub_82EA2790);
PPC_FUNC_IMPL(__imp__sub_82EA2790) {
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
	// lwz r30,244(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// li r11,0
	r11.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// bl 0x82ea2598
	sub_82EA2598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA27E8"))) PPC_WEAK_FUNC(sub_82EA27E8);
PPC_FUNC_IMPL(__imp__sub_82EA27E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9ee48
	sub_82E9EE48(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82ea2598
	sub_82EA2598(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EA2878"))) PPC_WEAK_FUNC(sub_82EA2878);
PPC_FUNC_IMPL(__imp__sub_82EA2878) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9ee48
	sub_82E9EE48(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bl 0x82ea2628
	sub_82EA2628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EA2908"))) PPC_WEAK_FUNC(sub_82EA2908);
PPC_FUNC_IMPL(__imp__sub_82EA2908) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82ea3320
	sub_82EA3320(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA2910"))) PPC_WEAK_FUNC(sub_82EA2910);
PPC_FUNC_IMPL(__imp__sub_82EA2910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2940"))) PPC_WEAK_FUNC(sub_82EA2940);
PPC_FUNC_IMPL(__imp__sub_82EA2940) {
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
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r30,1
	r30.s64 = 1;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82EA2960:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2974
	if (cr6.eq) goto loc_82EA2974;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA2974:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82ea2960
	if (!cr0.lt) goto loc_82EA2960;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2998"))) PPC_WEAK_FUNC(sub_82EA2998);
PPC_FUNC_IMPL(__imp__sub_82EA2998) {
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
	// addi r11,r11,-2268
	r11.s64 = r11.s64 + -2268;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea29c8
	if (cr6.eq) goto loc_82EA29C8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA29C8:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82ea2940
	sub_82EA2940(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA29E8"))) PPC_WEAK_FUNC(sub_82EA29E8);
PPC_FUNC_IMPL(__imp__sub_82EA29E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EA2A04:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea2a04
	if (!cr0.eq) goto loc_82EA2A04;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2A28"))) PPC_WEAK_FUNC(sub_82EA2A28);
PPC_FUNC_IMPL(__imp__sub_82EA2A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,-2268
	ctx.r9.s64 = ctx.r10.s64 + -2268;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA2A40:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82ea2a40
	if (!cr0.lt) goto loc_82EA2A40;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2A60"))) PPC_WEAK_FUNC(sub_82EA2A60);
PPC_FUNC_IMPL(__imp__sub_82EA2A60) {
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
	// bl 0x82ea2998
	sub_82EA2998(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea2a90
	if (cr0.eq) goto loc_82EA2A90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82EA2A90:
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

__attribute__((alias("__imp__sub_82EA2AB0"))) PPC_WEAK_FUNC(sub_82EA2AB0);
PPC_FUNC_IMPL(__imp__sub_82EA2AB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2AB8"))) PPC_WEAK_FUNC(sub_82EA2AB8);
PPC_FUNC_IMPL(__imp__sub_82EA2AB8) {
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2ae4
	if (cr6.eq) goto loc_82EA2AE4;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82EA2AE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea3310
	sub_82EA3310(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2B00"))) PPC_WEAK_FUNC(sub_82EA2B00);
PPC_FUNC_IMPL(__imp__sub_82EA2B00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// rlwinm r11,r6,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EA2B34:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea2b34
	if (!cr0.eq) goto loc_82EA2B34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2B58"))) PPC_WEAK_FUNC(sub_82EA2B58);
PPC_FUNC_IMPL(__imp__sub_82EA2B58) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,192(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 192);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea2c4c
	if (cr0.eq) goto loc_82EA2C4C;
	// bl 0x82ea32d8
	sub_82EA32D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ea36a8
	sub_82EA36A8(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,52(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r28,60(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r27,76(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r26,56(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// lwz r25,72(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r24,64(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r23,28(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82ea6f98
	sub_82EA6F98(ctx, base);
	// mullw r10,r3,r28
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(r28.s32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82cd7a10
	sub_82CD7A10(ctx, base);
	// lis r11,9250
	r11.s64 = 606208000;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,43865
	r11.u64 = r11.u64 | 43865;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82ea2c28
	if (!cr6.eq) goto loc_82EA2C28;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r10,49
	ctx.r10.s64 = 49;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// rlwimi r9,r10,13,13,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 13) & 0x7E000) | (ctx.r9.u64 & 0xFFFFFFFFFFF81FFF);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
loc_82EA2C28:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r4,r11,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x82cd7ae0
	sub_82CD7AE0(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2c4c
	if (cr6.eq) goto loc_82EA2C4C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA2C4C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EA2C58"))) PPC_WEAK_FUNC(sub_82EA2C58);
PPC_FUNC_IMPL(__imp__sub_82EA2C58) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3540
	sub_82EA3540(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	r31.u64 = ctx.r10.u64 ^ 1;
	// beq cr6,0x82ea2c98
	if (cr6.eq) goto loc_82EA2C98;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA2C98:
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

__attribute__((alias("__imp__sub_82EA2CB0"))) PPC_WEAK_FUNC(sub_82EA2CB0);
PPC_FUNC_IMPL(__imp__sub_82EA2CB0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x82ea2cfc
	if (!cr0.eq) goto loc_82EA2CFC;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82ea2d00
	if (!cr6.eq) goto loc_82EA2D00;
loc_82EA2CFC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EA2D00:
	// lbz r9,192(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 192);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82ea2d14
	if (cr0.eq) goto loc_82EA2D14;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82EA2D14:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea2d40
	if (cr0.eq) goto loc_82EA2D40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82ea2598
	sub_82EA2598(ctx, base);
	// b 0x82ea2d48
	goto loc_82EA2D48;
loc_82EA2D40:
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_82EA2D48:
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

__attribute__((alias("__imp__sub_82EA2D68"))) PPC_WEAK_FUNC(sub_82EA2D68);
PPC_FUNC_IMPL(__imp__sub_82EA2D68) {
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
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ea2db0
	if (cr6.eq) goto loc_82EA2DB0;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x82ea2d98
	goto loc_82EA2D98;
loc_82EA2D8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9c9d0
	sub_82E9C9D0(ctx, base);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
loc_82EA2D98:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82ea2d8c
	if (!cr6.eq) goto loc_82EA2D8C;
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82EA2DB0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA2DC8"))) PPC_WEAK_FUNC(sub_82EA2DC8);
PPC_FUNC_IMPL(__imp__sub_82EA2DC8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-2264
	r11.s64 = r11.s64 + -2264;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e627b0
	sub_82E627B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea2e34
	if (cr0.eq) goto loc_82EA2E34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e9ef30
	sub_82E9EF30(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2e34
	if (cr6.eq) goto loc_82EA2E34;
	// lbz r11,192(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 192);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea2e28
	if (cr0.eq) goto loc_82EA2E28;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
	// b 0x82ea2e2c
	goto loc_82EA2E2C;
loc_82EA2E28:
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_82EA2E2C:
	// li r11,0
	r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82EA2E34:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82ea2d68
	sub_82EA2D68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea3328
	sub_82EA3328(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2E58"))) PPC_WEAK_FUNC(sub_82EA2E58);
PPC_FUNC_IMPL(__imp__sub_82EA2E58) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ea33a8
	sub_82EA33A8(ctx, base);
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-2264
	ctx.r9.s64 = ctx.r10.s64 + -2264;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r10,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lfs f13,2244(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lfs f0,2240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2240);
	f0.f64 = double(temp.f32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r9,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// stw r10,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r10,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// stb r11,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r11.u8);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// stfs f0,176(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 176, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2F70"))) PPC_WEAK_FUNC(sub_82EA2F70);
PPC_FUNC_IMPL(__imp__sub_82EA2F70) {
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
	// bl 0x82ea2dc8
	sub_82EA2DC8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea2fa0
	if (cr0.eq) goto loc_82EA2FA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82EA2FA0:
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

__attribute__((alias("__imp__sub_82EA2FC0"))) PPC_WEAK_FUNC(sub_82EA2FC0);
PPC_FUNC_IMPL(__imp__sub_82EA2FC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2FC8"))) PPC_WEAK_FUNC(sub_82EA2FC8);
PPC_FUNC_IMPL(__imp__sub_82EA2FC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2FD0"))) PPC_WEAK_FUNC(sub_82EA2FD0);
PPC_FUNC_IMPL(__imp__sub_82EA2FD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA2FD8"))) PPC_WEAK_FUNC(sub_82EA2FD8);
PPC_FUNC_IMPL(__imp__sub_82EA2FD8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r29,108(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// bne cr6,0x82ea3030
	if (!cr6.eq) goto loc_82EA3030;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,112(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82ea3034
	if (cr6.eq) goto loc_82EA3034;
loc_82EA3030:
	// li r11,0
	r11.s64 = 0;
loc_82EA3034:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA3040"))) PPC_WEAK_FUNC(sub_82EA3040);
PPC_FUNC_IMPL(__imp__sub_82EA3040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,52(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea3088
	if (!cr0.eq) goto loc_82EA3088;
	// lbz r11,52(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea3088
	if (!cr0.eq) goto loc_82EA3088;
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// lwz r9,72(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea3080
	if (!cr6.lt) goto loc_82EA3080;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82ea3088
	if (cr6.lt) goto loc_82EA3088;
loc_82EA3080:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EA3088:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3090"))) PPC_WEAK_FUNC(sub_82EA3090);
PPC_FUNC_IMPL(__imp__sub_82EA3090) {
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
	// bl 0x82ea36a8
	sub_82EA36A8(ctx, base);
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

__attribute__((alias("__imp__sub_82EA30C0"))) PPC_WEAK_FUNC(sub_82EA30C0);
PPC_FUNC_IMPL(__imp__sub_82EA30C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea30d8
	if (cr6.eq) goto loc_82EA30D8;
	// lwz r10,136(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
loc_82EA30D8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA30E8"))) PPC_WEAK_FUNC(sub_82EA30E8);
PPC_FUNC_IMPL(__imp__sub_82EA30E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x822d0190
	sub_822D0190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3108"))) PPC_WEAK_FUNC(sub_82EA3108);
PPC_FUNC_IMPL(__imp__sub_82EA3108) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-2228
	r11.s64 = r11.s64 + -2228;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e627b0
	sub_82E627B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3174
	if (cr0.eq) goto loc_82EA3174;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e627e0
	sub_82E627E0(ctx, base);
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e9ef28
	sub_82E9EF28(ctx, base);
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea3160
	if (!cr0.eq) goto loc_82EA3160;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_82EA3160:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea3174
	if (cr6.eq) goto loc_82EA3174;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
loc_82EA3174:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82e02fe8
	sub_82E02FE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea3328
	sub_82EA3328(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA31A0"))) PPC_WEAK_FUNC(sub_82EA31A0);
PPC_FUNC_IMPL(__imp__sub_82EA31A0) {
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
	// bl 0x82ea3108
	sub_82EA3108(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea31d0
	if (cr0.eq) goto loc_82EA31D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82EA31D0:
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

__attribute__((alias("__imp__sub_82EA31F0"))) PPC_WEAK_FUNC(sub_82EA31F0);
PPC_FUNC_IMPL(__imp__sub_82EA31F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
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
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3280"))) PPC_WEAK_FUNC(sub_82EA3280);
PPC_FUNC_IMPL(__imp__sub_82EA3280) {
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
	// bl 0x82ea33a8
	sub_82EA33A8(ctx, base);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-2228
	r11.s64 = r11.s64 + -2228;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ea31f0
	sub_82EA31F0(ctx, base);
	// stb r30,148(r31)
	PPC_STORE_U8(r31.u32 + 148, r30.u8);
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

__attribute__((alias("__imp__sub_82EA32D8"))) PPC_WEAK_FUNC(sub_82EA32D8);
PPC_FUNC_IMPL(__imp__sub_82EA32D8) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82ea04f0
	sub_82EA04F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3310"))) PPC_WEAK_FUNC(sub_82EA3310);
PPC_FUNC_IMPL(__imp__sub_82EA3310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3320"))) PPC_WEAK_FUNC(sub_82EA3320);
PPC_FUNC_IMPL(__imp__sub_82EA3320) {
	PPC_FUNC_PROLOGUE();
	// stb r4,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3328"))) PPC_WEAK_FUNC(sub_82EA3328);
PPC_FUNC_IMPL(__imp__sub_82EA3328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r11,-2212
	r11.s64 = r11.s64 + -2212;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82dfb148
	sub_82DFB148(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea3394
	if (cr6.eq) goto loc_82EA3394;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_82EA3360:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stwcx. r11,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x82ea3360
	if (!cr0.eq) goto loc_82EA3360;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ea3394
	if (!cr6.eq) goto loc_82EA3394;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EA3394:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA33A8"))) PPC_WEAK_FUNC(sub_82EA33A8);
PPC_FUNC_IMPL(__imp__sub_82EA33A8) {
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
	// addi r11,r11,-2212
	r11.s64 = r11.s64 + -2212;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x82dfae10
	sub_82DFAE10(ctx, base);
	// stb r30,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r30.u8);
	// stb r30,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82EA3410"))) PPC_WEAK_FUNC(sub_82EA3410);
PPC_FUNC_IMPL(__imp__sub_82EA3410) {
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
	// bl 0x82ea3328
	sub_82EA3328(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3440
	if (cr0.eq) goto loc_82EA3440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82EA3440:
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

__attribute__((alias("__imp__sub_82EA3468"))) PPC_WEAK_FUNC(sub_82EA3468);
PPC_FUNC_IMPL(__imp__sub_82EA3468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea34b0
	if (cr6.eq) goto loc_82EA34B0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// b 0x82ea34b8
	goto loc_82EA34B8;
loc_82EA34B0:
	// li r11,0
	r11.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82EA34B8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ea34d0
	if (!cr6.eq) goto loc_82EA34D0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x82ea34ec
	goto loc_82EA34EC;
loc_82EA34D0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e9c3d8
	sub_82E9C3D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ea34ec
	goto loc_82EA34EC;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
loc_82EA34EC:
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

__attribute__((alias("__imp__sub_82EA350C"))) PPC_WEAK_FUNC(sub_82EA350C);
PPC_FUNC_IMPL(__imp__sub_82EA350C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-112
	r31.s64 = r12.s64 + -112;
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lis r3,-32022
	ctx.r3.s64 = -2098593792;
	// addi r3,r3,13544
	ctx.r3.s64 = ctx.r3.s64 + 13544;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3540"))) PPC_WEAK_FUNC(sub_82EA3540);
PPC_FUNC_IMPL(__imp__sub_82EA3540) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82ea3468
	sub_82EA3468(ctx, base);
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

__attribute__((alias("__imp__sub_82EA3578"))) PPC_WEAK_FUNC(sub_82EA3578);
PPC_FUNC_IMPL(__imp__sub_82EA3578) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea35d8
	if (cr0.eq) goto loc_82EA35D8;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3468
	sub_82EA3468(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea3578
	sub_82EA3578(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea35d0
	if (cr6.eq) goto loc_82EA35D0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA35D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ea35e4
	goto loc_82EA35E4;
loc_82EA35D8:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82EA35E4:
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

__attribute__((alias("__imp__sub_82EA35F8"))) PPC_WEAK_FUNC(sub_82EA35F8);
PPC_FUNC_IMPL(__imp__sub_82EA35F8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3658
	if (cr0.eq) goto loc_82EA3658;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3468
	sub_82EA3468(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82ea35f8
	sub_82EA35F8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea3650
	if (cr6.eq) goto loc_82EA3650;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA3650:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ea3694
	goto loc_82EA3694;
loc_82EA3658:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bne 0x82ea3690
	if (!cr0.eq) goto loc_82EA3690;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea3690
	if (cr0.eq) goto loc_82EA3690;
	// lbz r11,21(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea3690
	if (cr0.eq) goto loc_82EA3690;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82e9eeb8
	sub_82E9EEB8(ctx, base);
loc_82EA3690:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_82EA3694:
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

__attribute__((alias("__imp__sub_82EA36A8"))) PPC_WEAK_FUNC(sub_82EA36A8);
PPC_FUNC_IMPL(__imp__sub_82EA36A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3468
	sub_82EA3468(ctx, base);
	// b 0x82ea371c
	goto loc_82EA371C;
loc_82EA36D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82ea3760
	if (cr6.eq) goto loc_82EA3760;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ea3468
	sub_82EA3468(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea371c
	if (cr6.eq) goto loc_82EA371C;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA371C:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82ea36d0
	if (!cr6.eq) goto loc_82EA36D0;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// beq cr6,0x82ea3744
	if (cr6.eq) goto loc_82EA3744;
loc_82EA3740:
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA3744:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
loc_82EA3760:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82ea3744
	if (cr6.eq) goto loc_82EA3744;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82EA3778:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea3778
	if (!cr0.eq) goto loc_82EA3778;
	// b 0x82ea3740
	goto loc_82EA3740;
}

__attribute__((alias("__imp__sub_82EA3798"))) PPC_WEAK_FUNC(sub_82EA3798);
PPC_FUNC_IMPL(__imp__sub_82EA3798) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea37b8
	if (!cr6.eq) goto loc_82EA37B8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82EA37B8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea37d8
	if (!cr6.eq) goto loc_82EA37D8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82ea37f4
	goto loc_82EA37F4;
loc_82EA37D8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea37f0
	if (!cr6.eq) goto loc_82EA37F0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82ea37f4
	goto loc_82EA37F4;
loc_82EA37F0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82EA37F4:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3800"))) PPC_WEAK_FUNC(sub_82EA3800);
PPC_FUNC_IMPL(__imp__sub_82EA3800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,65(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea3820
	if (!cr6.eq) goto loc_82EA3820;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82EA3820:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3840
	if (!cr6.eq) goto loc_82EA3840;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82ea385c
	goto loc_82EA385C;
loc_82EA3840:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3858
	if (!cr6.eq) goto loc_82EA3858;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// b 0x82ea385c
	goto loc_82EA385C;
loc_82EA3858:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_82EA385C:
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3868"))) PPC_WEAK_FUNC(sub_82EA3868);
PPC_FUNC_IMPL(__imp__sub_82EA3868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea38c4
	if (!cr6.eq) goto loc_82EA38C4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82ea3898
	goto loc_82EA3898;
loc_82EA3890:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82EA3898:
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea3890
	if (cr6.eq) goto loc_82EA3890;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82EA38AC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea38d4
	if (!cr6.eq) goto loc_82EA38D4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82EA38C4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea38ac
	if (cr6.eq) goto loc_82EA38AC;
loc_82EA38D4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA38E0"))) PPC_WEAK_FUNC(sub_82EA38E0);
PPC_FUNC_IMPL(__imp__sub_82EA38E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea38f8
	if (cr6.eq) goto loc_82EA38F8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82ea3964
	goto loc_82EA3964;
loc_82EA38F8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,65(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea3944
	if (!cr6.eq) goto loc_82EA3944;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82ea3918
	goto loc_82EA3918;
loc_82EA3910:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82EA3918:
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea3910
	if (cr6.eq) goto loc_82EA3910;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82EA392C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3954
	if (!cr6.eq) goto loc_82EA3954;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82EA3944:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea392c
	if (cr6.eq) goto loc_82EA392C;
loc_82EA3954:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,65(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82EA3964:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3970"))) PPC_WEAK_FUNC(sub_82EA3970);
PPC_FUNC_IMPL(__imp__sub_82EA3970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea3988
	if (cr6.eq) goto loc_82EA3988;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82ea39f4
	goto loc_82EA39F4;
loc_82EA3988:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea39d4
	if (!cr6.eq) goto loc_82EA39D4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82ea39a8
	goto loc_82EA39A8;
loc_82EA39A0:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82EA39A8:
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea39a0
	if (cr6.eq) goto loc_82EA39A0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82EA39BC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea39e4
	if (!cr6.eq) goto loc_82EA39E4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82EA39D4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea39bc
	if (cr6.eq) goto loc_82EA39BC;
loc_82EA39E4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,73(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82EA39F4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3A00"))) PPC_WEAK_FUNC(sub_82EA3A00);
PPC_FUNC_IMPL(__imp__sub_82EA3A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,73(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea3a20
	if (!cr6.eq) goto loc_82EA3A20;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82EA3A20:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3a40
	if (!cr6.eq) goto loc_82EA3A40;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82ea3a5c
	goto loc_82EA3A5C;
loc_82EA3A40:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3a58
	if (!cr6.eq) goto loc_82EA3A58;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82ea3a5c
	goto loc_82EA3A5C;
loc_82EA3A58:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82EA3A5C:
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3A68"))) PPC_WEAK_FUNC(sub_82EA3A68);
PPC_FUNC_IMPL(__imp__sub_82EA3A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82ea3ab8
	goto loc_82EA3AB8;
loc_82EA3A74:
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r7,r11,52
	ctx.r7.s64 = r11.s64 + 52;
loc_82EA3A80:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea3aa0
	if (!cr0.eq) goto loc_82EA3AA0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ea3a80
	if (!cr6.eq) goto loc_82EA3A80;
loc_82EA3AA0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea3ab0
	if (!cr0.lt) goto loc_82EA3AB0;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82ea3ab8
	goto loc_82EA3AB8;
loc_82EA3AB0:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82EA3AB8:
	// lbz r11,73(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea3a74
	if (cr6.eq) goto loc_82EA3A74;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3AC8"))) PPC_WEAK_FUNC(sub_82EA3AC8);
PPC_FUNC_IMPL(__imp__sub_82EA3AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82ea3b18
	goto loc_82EA3B18;
loc_82EA3AD4:
	// addi r11,r9,12
	r11.s64 = ctx.r9.s64 + 12;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r7,r11,40
	ctx.r7.s64 = r11.s64 + 40;
loc_82EA3AE0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea3b00
	if (!cr0.eq) goto loc_82EA3B00;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x82ea3ae0
	if (!cr6.eq) goto loc_82EA3AE0;
loc_82EA3B00:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea3b10
	if (!cr0.lt) goto loc_82EA3B10;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82ea3b18
	goto loc_82EA3B18;
loc_82EA3B10:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_82EA3B18:
	// lbz r11,65(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea3ad4
	if (cr6.eq) goto loc_82EA3AD4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3B28"))) PPC_WEAK_FUNC(sub_82EA3B28);
PPC_FUNC_IMPL(__imp__sub_82EA3B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,65(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea3b84
	if (!cr6.eq) goto loc_82EA3B84;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82ea3b58
	goto loc_82EA3B58;
loc_82EA3B50:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82EA3B58:
	// lbz r9,65(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea3b50
	if (cr6.eq) goto loc_82EA3B50;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82EA3B6C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3b94
	if (!cr6.eq) goto loc_82EA3B94;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_82EA3B84:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea3b6c
	if (cr6.eq) goto loc_82EA3B6C;
loc_82EA3B94:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3BA0"))) PPC_WEAK_FUNC(sub_82EA3BA0);
PPC_FUNC_IMPL(__imp__sub_82EA3BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,65(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea3bc0
	if (!cr6.eq) goto loc_82EA3BC0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82EA3BC0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3be0
	if (!cr6.eq) goto loc_82EA3BE0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x82ea3bfc
	goto loc_82EA3BFC;
loc_82EA3BE0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea3bf8
	if (!cr6.eq) goto loc_82EA3BF8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82ea3bfc
	goto loc_82EA3BFC;
loc_82EA3BF8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_82EA3BFC:
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3C08"))) PPC_WEAK_FUNC(sub_82EA3C08);
PPC_FUNC_IMPL(__imp__sub_82EA3C08) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82ea3c60
	if (cr6.eq) goto loc_82EA3C60;
	// lis r29,-31946
	r29.s64 = -2093613056;
loc_82EA3C44:
	// lwz r3,6512(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 6512);
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ea3c44
	if (!cr6.eq) goto loc_82EA3C44;
loc_82EA3C60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA3C68"))) PPC_WEAK_FUNC(sub_82EA3C68);
PPC_FUNC_IMPL(__imp__sub_82EA3C68) {
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
	// lwz r29,0(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82ea3cc0
	if (cr6.eq) goto loc_82EA3CC0;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-31946
	ctx.r10.s64 = -2093613056;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r3,6512(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82EA3CC0:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA3CD0"))) PPC_WEAK_FUNC(sub_82EA3CD0);
PPC_FUNC_IMPL(__imp__sub_82EA3CD0) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea3d10
	if (cr0.eq) goto loc_82EA3D10;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82EA3D10:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3d1c
	if (cr0.eq) goto loc_82EA3D1C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82EA3D1C:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3d2c
	if (cr0.eq) goto loc_82EA3D2C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82EA3D2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA3D38"))) PPC_WEAK_FUNC(sub_82EA3D38);
PPC_FUNC_IMPL(__imp__sub_82EA3D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,76
	ctx.r6.s64 = 76;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ea3da4
	if (cr0.eq) goto loc_82EA3DA4;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r26,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r26.u8);
	// stb r11,73(r31)
	PPC_STORE_U8(r31.u32 + 73, r11.u8);
loc_82EA3DA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA3DB0"))) PPC_WEAK_FUNC(sub_82EA3DB0);
PPC_FUNC_IMPL(__imp__sub_82EA3DB0) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea3de4
	if (cr0.eq) goto loc_82EA3DE4;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
loc_82EA3DE4:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3df0
	if (cr0.eq) goto loc_82EA3DF0;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82EA3DF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3E00"))) PPC_WEAK_FUNC(sub_82EA3E00);
PPC_FUNC_IMPL(__imp__sub_82EA3E00) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,76
	ctx.r6.s64 = 76;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea3e38
	if (cr0.eq) goto loc_82EA3E38;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82EA3E38:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3e44
	if (cr0.eq) goto loc_82EA3E44;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82EA3E44:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3e50
	if (cr0.eq) goto loc_82EA3E50;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82EA3E50:
	// li r11,1
	r11.s64 = 1;
	// stb r10,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, ctx.r10.u8);
	// stb r11,72(r3)
	PPC_STORE_U8(ctx.r3.u32 + 72, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3E70"))) PPC_WEAK_FUNC(sub_82EA3E70);
PPC_FUNC_IMPL(__imp__sub_82EA3E70) {
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,68
	ctx.r6.s64 = 68;
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea3ea8
	if (cr0.eq) goto loc_82EA3EA8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82EA3EA8:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3eb4
	if (cr0.eq) goto loc_82EA3EB4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82EA3EB4:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea3ec0
	if (cr0.eq) goto loc_82EA3EC0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82EA3EC0:
	// li r11,1
	r11.s64 = 1;
	// stb r10,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r10.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA3EE0"))) PPC_WEAK_FUNC(sub_82EA3EE0);
PPC_FUNC_IMPL(__imp__sub_82EA3EE0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea3a68
	sub_82EA3A68(ctx, base);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x82ea3f50
	if (cr6.eq) goto loc_82EA3F50;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r8,r31,52
	ctx.r8.s64 = r31.s64 + 52;
loc_82EA3F20:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea3f40
	if (!cr0.eq) goto loc_82EA3F40;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea3f20
	if (!cr6.eq) goto loc_82EA3F20;
loc_82EA3F40:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82ea3f50
	if (cr0.lt) goto loc_82EA3F50;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// b 0x82ea3f58
	goto loc_82EA3F58;
loc_82EA3F50:
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82EA3F58:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA3F70"))) PPC_WEAK_FUNC(sub_82EA3F70);
PPC_FUNC_IMPL(__imp__sub_82EA3F70) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea3ac8
	sub_82EA3AC8(ctx, base);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x82ea3fe0
	if (cr6.eq) goto loc_82EA3FE0;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
loc_82EA3FB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea3fd0
	if (!cr0.eq) goto loc_82EA3FD0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea3fb0
	if (!cr6.eq) goto loc_82EA3FB0;
loc_82EA3FD0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82ea3fe0
	if (cr0.lt) goto loc_82EA3FE0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// b 0x82ea3fe8
	goto loc_82EA3FE8;
loc_82EA3FE0:
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82EA3FE8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA4000"))) PPC_WEAK_FUNC(sub_82EA4000);
PPC_FUNC_IMPL(__imp__sub_82EA4000) {
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
	// bl 0x82ea3e00
	sub_82EA3E00(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,73(r3)
	PPC_STORE_U8(ctx.r3.u32 + 73, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA4058"))) PPC_WEAK_FUNC(sub_82EA4058);
PPC_FUNC_IMPL(__imp__sub_82EA4058) {
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
	// bl 0x82ea3e70
	sub_82EA3E70(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA40B0"))) PPC_WEAK_FUNC(sub_82EA40B0);
PPC_FUNC_IMPL(__imp__sub_82EA40B0) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3f70
	sub_82EA3F70(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ea411c
	if (cr6.eq) goto loc_82EA411C;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea411c
	if (cr6.eq) goto loc_82EA411C;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r31,8(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// bl 0x82ea3c68
	sub_82EA3C68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82ea4128
	goto loc_82EA4128;
loc_82EA411C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82e9f8d8
	sub_82E9F8D8(ctx, base);
loc_82EA4128:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA4130"))) PPC_WEAK_FUNC(sub_82EA4130);
PPC_FUNC_IMPL(__imp__sub_82EA4130) {
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
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea417c
	if (!cr6.eq) goto loc_82EA417C;
	// lis r29,-31946
	r29.s64 = -2093613056;
loc_82EA4154:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ea4130
	sub_82EA4130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6512(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 6512);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4154
	if (cr6.eq) goto loc_82EA4154;
loc_82EA417C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA4188"))) PPC_WEAK_FUNC(sub_82EA4188);
PPC_FUNC_IMPL(__imp__sub_82EA4188) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ea4130
	sub_82EA4130(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA41E0"))) PPC_WEAK_FUNC(sub_82EA41E0);
PPC_FUNC_IMPL(__imp__sub_82EA41E0) {
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
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x82ea3c08
	sub_82EA3C08(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// beq 0x82ea422c
	if (cr0.eq) goto loc_82EA422C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82EA422C:
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

__attribute__((alias("__imp__sub_82EA4248"))) PPC_WEAK_FUNC(sub_82EA4248);
PPC_FUNC_IMPL(__imp__sub_82EA4248) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// lbz r11,73(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea42b4
	if (cr6.eq) goto loc_82EA42B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16264
	ctx.r4.s64 = r11.s64 + 16264;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c2ed0
	sub_822C2ED0(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16244
	r11.s64 = r11.s64 + 16244;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_82EA42B4:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// mr r26,r31
	r26.u64 = r31.u64;
	// bl 0x82ea3868
	sub_82EA3868(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// beq cr6,0x82ea42dc
	if (cr6.eq) goto loc_82EA42DC;
	// lwz r28,8(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x82ea4300
	goto loc_82EA4300;
loc_82EA42DC:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lbz r10,73(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea42f4
	if (cr6.eq) goto loc_82EA42F4;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x82ea4300
	goto loc_82EA4300;
loc_82EA42F4:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(r25.u32, r26.u32, xer);
	// bne cr6,0x82ea43d8
	if (!cr6.eq) goto loc_82EA43D8;
loc_82EA4300:
	// lbz r11,73(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 73);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea4314
	if (!cr6.eq) goto loc_82EA4314;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82EA4314:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82ea432c
	if (!cr6.eq) goto loc_82EA432C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x82ea4344
	goto loc_82EA4344;
loc_82EA432C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82ea4340
	if (!cr6.eq) goto loc_82EA4340;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82ea4344
	goto loc_82EA4344;
loc_82EA4340:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82EA4344:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82ea438c
	if (!cr6.eq) goto loc_82EA438C;
	// lbz r11,73(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4368
	if (cr6.eq) goto loc_82EA4368;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82ea4388
	goto loc_82EA4388;
loc_82EA4368:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82ea437c
	goto loc_82EA437C;
loc_82EA4374:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82EA437C:
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ea4374
	if (cr6.eq) goto loc_82EA4374;
loc_82EA4388:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82EA438C:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bne cr6,0x82ea446c
	if (!cr6.eq) goto loc_82EA446C;
	// lbz r11,73(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea43b0
	if (cr6.eq) goto loc_82EA43B0;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82ea43d0
	goto loc_82EA43D0;
loc_82EA43B0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82ea43c4
	goto loc_82EA43C4;
loc_82EA43BC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82EA43C4:
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ea43bc
	if (cr6.eq) goto loc_82EA43BC;
loc_82EA43D0:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82ea446c
	goto loc_82EA446C;
loc_82EA43D8:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82ea43f8
	if (!cr6.eq) goto loc_82EA43F8;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82ea4420
	goto loc_82EA4420;
loc_82EA43F8:
	// lbz r11,73(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 73);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea440c
	if (!cr6.eq) goto loc_82EA440C;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82EA440C:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_82EA4420:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82ea4438
	if (!cr6.eq) goto loc_82EA4438;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82ea4454
	goto loc_82EA4454;
loc_82EA4438:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x82ea4450
	if (!cr6.eq) goto loc_82EA4450;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x82ea4454
	goto loc_82EA4454;
loc_82EA4450:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_82EA4454:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r11,72(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 72);
	// lbz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 72);
	// stb r11,72(r25)
	PPC_STORE_U8(r25.u32 + 72, r11.u8);
	// stb r10,72(r26)
	PPC_STORE_U8(r26.u32 + 72, ctx.r10.u8);
loc_82EA446C:
	// lbz r11,72(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ea460c
	if (!cr6.eq) goto loc_82EA460C;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82ea4608
	if (cr6.eq) goto loc_82EA4608;
	// li r29,0
	r29.s64 = 0;
loc_82EA4490:
	// lbz r11,72(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 72);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ea4608
	if (!cr6.eq) goto loc_82EA4608;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82ea454c
	if (!cr6.eq) goto loc_82EA454C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea44d0
	if (!cr6.eq) goto loc_82EA44D0;
	// stb r30,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ea3a00
	sub_82EA3A00(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82EA44D0:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea45a0
	if (!cr6.eq) goto loc_82EA45A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea44fc
	if (!cr6.eq) goto loc_82EA44FC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82ea459c
	if (cr6.eq) goto loc_82EA459C;
loc_82EA44FC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea4528
	if (!cr6.eq) goto loc_82EA4528;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r30,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, r30.u8);
	// stb r29,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r29.u8);
	// bl 0x82ea3798
	sub_82EA3798(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82EA4528:
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,72(r11)
	PPC_STORE_U8(r11.u32 + 72, ctx.r10.u8);
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r30,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r30.u8);
	// bl 0x82ea3a00
	sub_82EA3A00(ctx, base);
	// b 0x82ea4608
	goto loc_82EA4608;
loc_82EA454C:
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea4570
	if (!cr6.eq) goto loc_82EA4570;
	// stb r30,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ea3798
	sub_82EA3798(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EA4570:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea45a0
	if (!cr6.eq) goto loc_82EA45A0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea45bc
	if (!cr6.eq) goto loc_82EA45BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea45bc
	if (!cr6.eq) goto loc_82EA45BC;
loc_82EA459C:
	// stb r29,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r29.u8);
loc_82EA45A0:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82ea4490
	if (!cr6.eq) goto loc_82EA4490;
	// b 0x82ea4608
	goto loc_82EA4608;
loc_82EA45BC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea45e8
	if (!cr6.eq) goto loc_82EA45E8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r30,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, r30.u8);
	// stb r29,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r29.u8);
	// bl 0x82ea3a00
	sub_82EA3A00(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EA45E8:
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,72(r11)
	PPC_STORE_U8(r11.u32 + 72, ctx.r10.u8);
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r30,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r30.u8);
	// bl 0x82ea3798
	sub_82EA3798(ctx, base);
loc_82EA4608:
	// stb r30,72(r28)
	PPC_STORE_U8(r28.u32 + 72, r30.u8);
loc_82EA460C:
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4630
	if (cr6.eq) goto loc_82EA4630;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_82EA4630:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EA4640"))) PPC_WEAK_FUNC(sub_82EA4640);
PPC_FUNC_IMPL(__imp__sub_82EA4640) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ea46ac
	if (!cr6.eq) goto loc_82EA46AC;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82ea46ac
	if (!cr6.eq) goto loc_82EA46AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea4188
	sub_82EA4188(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82ea46b8
	goto loc_82EA46B8;
loc_82EA468C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82ea3868
	sub_82EA3868(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea4248
	sub_82EA4248(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82EA46AC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82ea468c
	if (!cr6.eq) goto loc_82EA468C;
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
loc_82EA46B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA46C8"))) PPC_WEAK_FUNC(sub_82EA46C8);
PPC_FUNC_IMPL(__imp__sub_82EA46C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,1092
	r11.s64 = 71565312;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,17475
	r11.u64 = r11.u64 | 17475;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ea4740
	if (cr6.lt) goto loc_82EA4740;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23004
	ctx.r4.s64 = r11.s64 + -23004;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7380
	sub_822C7380(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-24916
	r11.s64 = r11.s64 + -24916;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_82EA4740:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea3d38
	sub_82EA3D38(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82ea478c
	if (!cr6.eq) goto loc_82EA478C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82ea47c4
	goto loc_82EA47C4;
loc_82EA478C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea47b0
	if (cr0.eq) goto loc_82EA47B0;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ea47c8
	if (!cr6.eq) goto loc_82EA47C8;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82ea47c8
	goto loc_82EA47C8;
loc_82EA47B0:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ea47c8
	if (!cr6.eq) goto loc_82EA47C8;
loc_82EA47C4:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82EA47C8:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea48d0
	if (!cr6.eq) goto loc_82EA48D0;
	// li r27,0
	r27.s64 = 0;
loc_82EA47E8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea484c
	if (!cr6.eq) goto loc_82EA484C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea485c
	if (cr6.eq) goto loc_82EA485C;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ea4824
	if (!cr6.eq) goto loc_82EA4824;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ea3a00
	sub_82EA3A00(ctx, base);
loc_82EA4824:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ea3798
	sub_82EA3798(ctx, base);
	// b 0x82ea48bc
	goto loc_82EA48BC;
loc_82EA484C:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea4880
	if (!cr6.eq) goto loc_82EA4880;
loc_82EA485C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,72(r9)
	PPC_STORE_U8(ctx.r9.u32 + 72, r29.u8);
	// stb r29,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82ea48bc
	goto loc_82EA48BC;
loc_82EA4880:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ea4898
	if (!cr6.eq) goto loc_82EA4898;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ea3798
	sub_82EA3798(ctx, base);
loc_82EA4898:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ea3a00
	sub_82EA3A00(ctx, base);
loc_82EA48BC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea47e8
	if (cr6.eq) goto loc_82EA47E8;
loc_82EA48D0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,72(r11)
	PPC_STORE_U8(r11.u32 + 72, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA48F0"))) PPC_WEAK_FUNC(sub_82EA48F0);
PPC_FUNC_IMPL(__imp__sub_82EA48F0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r11,20(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea4964
	if (!cr0.eq) goto loc_82EA4964;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82ea3ee0
	sub_82EA3EE0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea4944
	if (cr6.eq) goto loc_82EA4944;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_82EA4944:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bne 0x82ea4964
	if (!cr0.eq) goto loc_82EA4964;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea4248
	sub_82EA4248(ctx, base);
loc_82EA4964:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA4980"))) PPC_WEAK_FUNC(sub_82EA4980);
PPC_FUNC_IMPL(__imp__sub_82EA4980) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82ea4640
	sub_82EA4640(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82EA49D8"))) PPC_WEAK_FUNC(sub_82EA49D8);
PPC_FUNC_IMPL(__imp__sub_82EA49D8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x82ea4a50
	goto loc_82EA4A50;
loc_82EA4A04:
	// mr r31,r11
	r31.u64 = r11.u64;
	// addi r9,r11,12
	ctx.r9.s64 = r11.s64 + 12;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r8,r29,52
	ctx.r8.s64 = r29.s64 + 52;
loc_82EA4A14:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ea4a34
	if (!cr0.eq) goto loc_82EA4A34;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea4a14
	if (!cr6.eq) goto loc_82EA4A14;
loc_82EA4A34:
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82ea4a4c
	if (cr0.eq) goto loc_82EA4A4C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82ea4a50
	goto loc_82EA4A50;
loc_82EA4A4C:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82EA4A50:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea4a04
	if (cr6.eq) goto loc_82EA4A04;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq 0x82ea4ab0
	if (cr0.eq) goto loc_82EA4AB0;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ea4aa8
	if (!cr6.eq) goto loc_82EA4AA8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EA4A84:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82ea46c8
	sub_82EA46C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ea4afc
	goto loc_82EA4AFC;
loc_82EA4AA8:
	// bl 0x82ea3970
	sub_82EA3970(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA4AB0:
	// addi r11,r7,12
	r11.s64 = ctx.r7.s64 + 12;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r8,r11,52
	ctx.r8.s64 = r11.s64 + 52;
loc_82EA4ABC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea4adc
	if (!cr0.eq) goto loc_82EA4ADC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea4abc
	if (!cr6.eq) goto loc_82EA4ABC;
loc_82EA4ADC:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea4af0
	if (!cr0.lt) goto loc_82EA4AF0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82ea4a84
	goto loc_82EA4A84;
loc_82EA4AF0:
	// li r11,0
	r11.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
loc_82EA4AFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA4B08"))) PPC_WEAK_FUNC(sub_82EA4B08);
PPC_FUNC_IMPL(__imp__sub_82EA4B08) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4b74
	if (cr6.eq) goto loc_82EA4B74;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16264
	ctx.r4.s64 = r11.s64 + 16264;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c2ed0
	sub_822C2ED0(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16244
	r11.s64 = r11.s64 + 16244;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_82EA4B74:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// mr r27,r31
	r27.u64 = r31.u64;
	// bl 0x82ea3b28
	sub_82EA3B28(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,260(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// beq cr6,0x82ea4b9c
	if (cr6.eq) goto loc_82EA4B9C;
	// lwz r28,8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// b 0x82ea4bc0
	goto loc_82EA4BC0;
loc_82EA4B9C:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lbz r10,65(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea4bb4
	if (cr6.eq) goto loc_82EA4BB4;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x82ea4bc0
	goto loc_82EA4BC0;
loc_82EA4BB4:
	// lwz r28,8(r25)
	r28.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r25,r27
	cr6.compare<uint32_t>(r25.u32, r27.u32, xer);
	// bne cr6,0x82ea4c98
	if (!cr6.eq) goto loc_82EA4C98;
loc_82EA4BC0:
	// lbz r11,65(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 65);
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea4bd4
	if (!cr6.eq) goto loc_82EA4BD4;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82EA4BD4:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82ea4bec
	if (!cr6.eq) goto loc_82EA4BEC;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x82ea4c04
	goto loc_82EA4C04;
loc_82EA4BEC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82ea4c00
	if (!cr6.eq) goto loc_82EA4C00;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82ea4c04
	goto loc_82EA4C04;
loc_82EA4C00:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_82EA4C04:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82ea4c4c
	if (!cr6.eq) goto loc_82EA4C4C;
	// lbz r11,65(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4c28
	if (cr6.eq) goto loc_82EA4C28;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82ea4c48
	goto loc_82EA4C48;
loc_82EA4C28:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82ea4c3c
	goto loc_82EA4C3C;
loc_82EA4C34:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82EA4C3C:
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ea4c34
	if (cr6.eq) goto loc_82EA4C34;
loc_82EA4C48:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82EA4C4C:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x82ea4d2c
	if (!cr6.eq) goto loc_82EA4D2C;
	// lbz r11,65(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4c70
	if (cr6.eq) goto loc_82EA4C70;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// b 0x82ea4c90
	goto loc_82EA4C90;
loc_82EA4C70:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82ea4c84
	goto loc_82EA4C84;
loc_82EA4C7C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82EA4C84:
	// lbz r8,65(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ea4c7c
	if (cr6.eq) goto loc_82EA4C7C;
loc_82EA4C90:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82ea4d2c
	goto loc_82EA4D2C;
loc_82EA4C98:
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82ea4cb8
	if (!cr6.eq) goto loc_82EA4CB8;
	// mr r31,r25
	r31.u64 = r25.u64;
	// b 0x82ea4ce0
	goto loc_82EA4CE0;
loc_82EA4CB8:
	// lbz r11,65(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 65);
	// lwz r31,4(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea4ccc
	if (!cr6.eq) goto loc_82EA4CCC;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
loc_82EA4CCC:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
loc_82EA4CE0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82ea4cf8
	if (!cr6.eq) goto loc_82EA4CF8;
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// b 0x82ea4d14
	goto loc_82EA4D14;
loc_82EA4CF8:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x82ea4d10
	if (!cr6.eq) goto loc_82EA4D10;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x82ea4d14
	goto loc_82EA4D14;
loc_82EA4D10:
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
loc_82EA4D14:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// lbz r11,64(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 64);
	// lbz r10,64(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 64);
	// stb r11,64(r25)
	PPC_STORE_U8(r25.u32 + 64, r11.u8);
	// stb r10,64(r27)
	PPC_STORE_U8(r27.u32 + 64, ctx.r10.u8);
loc_82EA4D2C:
	// lbz r11,64(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ea4ecc
	if (!cr6.eq) goto loc_82EA4ECC;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r30,1
	r30.s64 = 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x82ea4ec8
	if (cr6.eq) goto loc_82EA4EC8;
	// li r29,0
	r29.s64 = 0;
loc_82EA4D50:
	// lbz r11,64(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 64);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82ea4ec8
	if (!cr6.eq) goto loc_82EA4EC8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82ea4e0c
	if (!cr6.eq) goto loc_82EA4E0C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea4d90
	if (!cr6.eq) goto loc_82EA4D90;
	// stb r30,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ea3ba0
	sub_82EA3BA0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82EA4D90:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea4e60
	if (!cr6.eq) goto loc_82EA4E60;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea4dbc
	if (!cr6.eq) goto loc_82EA4DBC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82ea4e5c
	if (cr6.eq) goto loc_82EA4E5C;
loc_82EA4DBC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea4de8
	if (!cr6.eq) goto loc_82EA4DE8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, r30.u8);
	// stb r29,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r29.u8);
	// bl 0x82ea3800
	sub_82EA3800(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82EA4DE8:
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,64(r11)
	PPC_STORE_U8(r11.u32 + 64, ctx.r10.u8);
	// stb r30,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r30.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stb r30,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r30.u8);
	// bl 0x82ea3ba0
	sub_82EA3BA0(ctx, base);
	// b 0x82ea4ec8
	goto loc_82EA4EC8;
loc_82EA4E0C:
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea4e30
	if (!cr6.eq) goto loc_82EA4E30;
	// stb r30,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r30.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r29,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r29.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82ea3800
	sub_82EA3800(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EA4E30:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea4e60
	if (!cr6.eq) goto loc_82EA4E60;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea4e7c
	if (!cr6.eq) goto loc_82EA4E7C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea4e7c
	if (!cr6.eq) goto loc_82EA4E7C;
loc_82EA4E5C:
	// stb r29,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r29.u8);
loc_82EA4E60:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r28,r31
	r28.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82ea4d50
	if (!cr6.eq) goto loc_82EA4D50;
	// b 0x82ea4ec8
	goto loc_82EA4EC8;
loc_82EA4E7C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea4ea8
	if (!cr6.eq) goto loc_82EA4EA8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r30,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, r30.u8);
	// stb r29,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r29.u8);
	// bl 0x82ea3ba0
	sub_82EA3BA0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EA4EA8:
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r10,64(r11)
	PPC_STORE_U8(r11.u32 + 64, ctx.r10.u8);
	// stb r30,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r30.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r30,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r30.u8);
	// bl 0x82ea3800
	sub_82EA3800(ctx, base);
loc_82EA4EC8:
	// stb r30,64(r28)
	PPC_STORE_U8(r28.u32 + 64, r30.u8);
loc_82EA4ECC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ea41e0
	sub_82EA41E0(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4efc
	if (cr6.eq) goto loc_82EA4EFC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
loc_82EA4EFC:
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EA4F10"))) PPC_WEAK_FUNC(sub_82EA4F10);
PPC_FUNC_IMPL(__imp__sub_82EA4F10) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// lbz r11,65(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea4f70
	if (!cr6.eq) goto loc_82EA4F70;
	// lis r28,-31946
	r28.s64 = -2093613056;
loc_82EA4F38:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82ea4f10
	sub_82EA4F10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82ea41e0
	sub_82EA41E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// lbz r11,65(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 65);
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea4f38
	if (cr6.eq) goto loc_82EA4F38;
loc_82EA4F70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA4F78"))) PPC_WEAK_FUNC(sub_82EA4F78);
PPC_FUNC_IMPL(__imp__sub_82EA4F78) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea4fbc
	if (!cr6.eq) goto loc_82EA4FBC;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82EA4FA4:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EA4FA8:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82EA4FB4:
	// bl 0x82ea46c8
	sub_82EA46C8(ctx, base);
	// b 0x82ea51bc
	goto loc_82EA51BC;
loc_82EA4FBC:
	// lwz r28,4(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82ea5008
	if (!cr6.eq) goto loc_82EA5008;
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r8,r31,52
	ctx.r8.s64 = r31.s64 + 52;
loc_82EA4FD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea4ff8
	if (!cr0.eq) goto loc_82EA4FF8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea4fd8
	if (!cr6.eq) goto loc_82EA4FD8;
loc_82EA4FF8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea51a0
	if (!cr0.lt) goto loc_82EA51A0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82ea4fa4
	goto loc_82EA4FA4;
loc_82EA5008:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82ea5050
	if (!cr6.eq) goto loc_82EA5050;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r6,12
	r11.s64 = ctx.r6.s64 + 12;
	// addi r9,r11,52
	ctx.r9.s64 = r11.s64 + 52;
loc_82EA5020:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea5040
	if (!cr0.eq) goto loc_82EA5040;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ea5020
	if (!cr6.eq) goto loc_82EA5020;
loc_82EA5040:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea51a0
	if (!cr0.lt) goto loc_82EA51A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ea4fa8
	goto loc_82EA4FA8;
loc_82EA5050:
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r31,52
	ctx.r9.s64 = r31.s64 + 52;
loc_82EA5060:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea5080
	if (!cr0.eq) goto loc_82EA5080;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ea5060
	if (!cr6.eq) goto loc_82EA5060;
loc_82EA5080:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea50fc
	if (!cr0.lt) goto loc_82EA50FC;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3970
	sub_82EA3970(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r6,12
	r11.s64 = ctx.r6.s64 + 12;
	// addi r9,r11,52
	ctx.r9.s64 = r11.s64 + 52;
loc_82EA50A4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea50c4
	if (!cr0.eq) goto loc_82EA50C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ea50a4
	if (!cr6.eq) goto loc_82EA50A4;
loc_82EA50C4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea50fc
	if (!cr0.lt) goto loc_82EA50FC;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r11,73(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea50f0
	if (cr6.eq) goto loc_82EA50F0;
loc_82EA50E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ea4fb4
	goto loc_82EA4FB4;
loc_82EA50F0:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82EA50F4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82ea4fb4
	goto loc_82EA4FB4;
loc_82EA50FC:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r8,r30,52
	ctx.r8.s64 = r30.s64 + 52;
loc_82EA5108:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea5128
	if (!cr0.eq) goto loc_82EA5128;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea5108
	if (!cr6.eq) goto loc_82EA5108;
loc_82EA5128:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea51a0
	if (!cr0.lt) goto loc_82EA51A0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3868
	sub_82EA3868(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, xer);
	// beq cr6,0x82ea517c
	if (cr6.eq) goto loc_82EA517C;
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r8,r31,52
	ctx.r8.s64 = r31.s64 + 52;
loc_82EA5154:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea5174
	if (!cr0.eq) goto loc_82EA5174;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea5154
	if (!cr6.eq) goto loc_82EA5154;
loc_82EA5174:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea51a0
	if (!cr0.lt) goto loc_82EA51A0;
loc_82EA517C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r11,73(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 73);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea50f4
	if (cr6.eq) goto loc_82EA50F4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82ea50e8
	goto loc_82EA50E8;
loc_82EA51A0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea49d8
	sub_82EA49D8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82EA51BC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA51C8"))) PPC_WEAK_FUNC(sub_82EA51C8);
PPC_FUNC_IMPL(__imp__sub_82EA51C8) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ea4f10
	sub_82EA4F10(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5220"))) PPC_WEAK_FUNC(sub_82EA5220);
PPC_FUNC_IMPL(__imp__sub_82EA5220) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ea3a68
	sub_82EA3A68(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82ea527c
	if (cr6.eq) goto loc_82EA527C;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r8,r30,52
	ctx.r8.s64 = r30.s64 + 52;
loc_82EA5254:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea5274
	if (!cr0.eq) goto loc_82EA5274;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea5254
	if (!cr6.eq) goto loc_82EA5254;
loc_82EA5274:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea52b8
	if (!cr0.lt) goto loc_82EA52B8;
loc_82EA527C:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,148(r1)
	PPC_STORE_U64(ctx.r1.u32 + 148, r11.u64);
	// bl 0x82ea4f78
	sub_82EA4F78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82EA52B8:
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA52C8"))) PPC_WEAK_FUNC(sub_82EA52C8);
PPC_FUNC_IMPL(__imp__sub_82EA52C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ea5334
	if (!cr6.eq) goto loc_82EA5334;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82ea5334
	if (!cr6.eq) goto loc_82EA5334;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea51c8
	sub_82EA51C8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82ea5340
	goto loc_82EA5340;
loc_82EA5314:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82ea3b28
	sub_82EA3B28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea4b08
	sub_82EA4B08(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82EA5334:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, xer);
	// bne cr6,0x82ea5314
	if (!cr6.eq) goto loc_82EA5314;
	// stw r5,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r5.u32);
loc_82EA5340:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA5350"))) PPC_WEAK_FUNC(sub_82EA5350);
PPC_FUNC_IMPL(__imp__sub_82EA5350) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82e9c3b8
	sub_82E9C3B8(ctx, base);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3ee0
	sub_82EA3EE0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82ea53b8
	if (cr6.eq) goto loc_82EA53B8;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea53a4
	if (cr6.eq) goto loc_82EA53A4;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82EA53A4:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// b 0x82ea53e0
	goto loc_82EA53E0;
loc_82EA53B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea5220
	sub_82EA5220(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82e9f860
	sub_82E9F860(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82EA53E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA53E8"))) PPC_WEAK_FUNC(sub_82EA53E8);
PPC_FUNC_IMPL(__imp__sub_82EA53E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82ea52c8
	sub_82EA52C8(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82EA5440"))) PPC_WEAK_FUNC(sub_82EA5440);
PPC_FUNC_IMPL(__imp__sub_82EA5440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,68
	ctx.r6.s64 = 68;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ea54bc
	if (cr0.eq) goto loc_82EA54BC;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x82e6b468
	sub_82E6B468(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r26,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r26.u8);
	// stb r11,65(r31)
	PPC_STORE_U8(r31.u32 + 65, r11.u8);
loc_82EA54BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA54C8"))) PPC_WEAK_FUNC(sub_82EA54C8);
PPC_FUNC_IMPL(__imp__sub_82EA54C8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
	// lwz r29,24(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82ea5528
	goto loc_82EA5528;
loc_82EA54F4:
	// lwz r30,56(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82ea5514
	goto loc_82EA5514;
loc_82EA5500:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea5510
	if (cr6.eq) goto loc_82EA5510;
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_82EA5510:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EA5514:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82ea5500
	if (!cr6.eq) goto loc_82EA5500;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3b28
	sub_82EA3B28(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA5528:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82ea54f4
	if (!cr6.eq) goto loc_82EA54F4;
	// addi r3,r28,20
	ctx.r3.s64 = r28.s64 + 20;
	// bl 0x82ea53e8
	sub_82EA53E8(ctx, base);
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82ea4980
	sub_82EA4980(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA5548"))) PPC_WEAK_FUNC(sub_82EA5548);
PPC_FUNC_IMPL(__imp__sub_82EA5548) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,1260
	r11.s64 = 82575360;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r11,r11,20163
	r11.u64 = r11.u64 | 20163;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ea55c0
	if (cr6.lt) goto loc_82EA55C0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-23004
	ctx.r4.s64 = r11.s64 + -23004;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7380
	sub_822C7380(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-24916
	r11.s64 = r11.s64 + -24916;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_82EA55C0:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea5440
	sub_82EA5440(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// bne cr6,0x82ea560c
	if (!cr6.eq) goto loc_82EA560C;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82ea5644
	goto loc_82EA5644;
loc_82EA560C:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea5630
	if (cr0.eq) goto loc_82EA5630;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ea5648
	if (!cr6.eq) goto loc_82EA5648;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// b 0x82ea5648
	goto loc_82EA5648;
loc_82EA5630:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ea5648
	if (!cr6.eq) goto loc_82EA5648;
loc_82EA5644:
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
loc_82EA5648:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// li r29,1
	r29.s64 = 1;
	// mr r31,r28
	r31.u64 = r28.u64;
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea5750
	if (!cr6.eq) goto loc_82EA5750;
	// li r27,0
	r27.s64 = 0;
loc_82EA5668:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea56cc
	if (!cr6.eq) goto loc_82EA56CC;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea56dc
	if (cr6.eq) goto loc_82EA56DC;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ea56a4
	if (!cr6.eq) goto loc_82EA56A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ea3ba0
	sub_82EA3BA0(ctx, base);
loc_82EA56A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ea3800
	sub_82EA3800(ctx, base);
	// b 0x82ea573c
	goto loc_82EA573C;
loc_82EA56CC:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea5700
	if (!cr6.eq) goto loc_82EA5700;
loc_82EA56DC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r29,64(r9)
	PPC_STORE_U8(ctx.r9.u32 + 64, r29.u8);
	// stb r29,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r27,64(r10)
	PPC_STORE_U8(ctx.r10.u32 + 64, r27.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82ea573c
	goto loc_82EA573C;
loc_82EA5700:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ea5718
	if (!cr6.eq) goto loc_82EA5718;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ea3800
	sub_82EA3800(ctx, base);
loc_82EA5718:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r27,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82ea3ba0
	sub_82EA3BA0(ctx, base);
loc_82EA573C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea5668
	if (cr6.eq) goto loc_82EA5668;
loc_82EA5750:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stb r29,64(r11)
	PPC_STORE_U8(r11.u32 + 64, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA5770"))) PPC_WEAK_FUNC(sub_82EA5770);
PPC_FUNC_IMPL(__imp__sub_82EA5770) {
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r11,-2080
	r11.s64 = r11.s64 + -2080;
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ea4000
	sub_82EA4000(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82ea4058
	sub_82EA4058(ctx, base);
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

__attribute__((alias("__imp__sub_82EA57C0"))) PPC_WEAK_FUNC(sub_82EA57C0);
PPC_FUNC_IMPL(__imp__sub_82EA57C0) {
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
	// bl 0x82ea54c8
	sub_82EA54C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea57f0
	if (cr0.eq) goto loc_82EA57F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82EA57F0:
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

__attribute__((alias("__imp__sub_82EA5810"))) PPC_WEAK_FUNC(sub_82EA5810);
PPC_FUNC_IMPL(__imp__sub_82EA5810) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r26,1
	r26.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// lwz r31,4(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x82ea5888
	goto loc_82EA5888;
loc_82EA583C:
	// mr r31,r11
	r31.u64 = r11.u64;
	// addi r9,r11,12
	ctx.r9.s64 = r11.s64 + 12;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r8,r29,40
	ctx.r8.s64 = r29.s64 + 40;
loc_82EA584C:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ea586c
	if (!cr0.eq) goto loc_82EA586C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea584c
	if (!cr6.eq) goto loc_82EA584C;
loc_82EA586C:
	// cntlzw r10,r7
	ctx.r10.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r28,r10,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82ea5884
	if (cr0.eq) goto loc_82EA5884;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82ea5888
	goto loc_82EA5888;
loc_82EA5884:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82EA5888:
	// lbz r10,65(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea583c
	if (cr6.eq) goto loc_82EA583C;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// beq 0x82ea58e8
	if (cr0.eq) goto loc_82EA58E8;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82ea58e0
	if (!cr6.eq) goto loc_82EA58E0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EA58BC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82ea5548
	sub_82EA5548(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ea5934
	goto loc_82EA5934;
loc_82EA58E0:
	// bl 0x82ea38e0
	sub_82EA38E0(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EA58E8:
	// addi r11,r7,12
	r11.s64 = ctx.r7.s64 + 12;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r8,r11,40
	ctx.r8.s64 = r11.s64 + 40;
loc_82EA58F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea5914
	if (!cr0.eq) goto loc_82EA5914;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea58f4
	if (!cr6.eq) goto loc_82EA58F4;
loc_82EA5914:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea5928
	if (!cr0.lt) goto loc_82EA5928;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82ea58bc
	goto loc_82EA58BC;
loc_82EA5928:
	// li r11,0
	r11.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r7.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
loc_82EA5934:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA5940"))) PPC_WEAK_FUNC(sub_82EA5940);
PPC_FUNC_IMPL(__imp__sub_82EA5940) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea5984
	if (!cr6.eq) goto loc_82EA5984;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_82EA596C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82EA5970:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82EA597C:
	// bl 0x82ea5548
	sub_82EA5548(ctx, base);
	// b 0x82ea5b84
	goto loc_82EA5B84;
loc_82EA5984:
	// lwz r28,4(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82ea59d0
	if (!cr6.eq) goto loc_82EA59D0;
	// addi r10,r29,12
	ctx.r10.s64 = r29.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
loc_82EA59A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea59c0
	if (!cr0.eq) goto loc_82EA59C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea59a0
	if (!cr6.eq) goto loc_82EA59A0;
loc_82EA59C0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea5b68
	if (!cr0.lt) goto loc_82EA5B68;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82ea596c
	goto loc_82EA596C;
loc_82EA59D0:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82ea5a18
	if (!cr6.eq) goto loc_82EA5A18;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r6,12
	r11.s64 = ctx.r6.s64 + 12;
	// addi r9,r11,40
	ctx.r9.s64 = r11.s64 + 40;
loc_82EA59E8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea5a08
	if (!cr0.eq) goto loc_82EA5A08;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ea59e8
	if (!cr6.eq) goto loc_82EA59E8;
loc_82EA5A08:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea5b68
	if (!cr0.lt) goto loc_82EA5B68;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ea5970
	goto loc_82EA5970;
loc_82EA5A18:
	// addi r30,r29,12
	r30.s64 = r29.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
loc_82EA5A28:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea5a48
	if (!cr0.eq) goto loc_82EA5A48;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ea5a28
	if (!cr6.eq) goto loc_82EA5A28;
loc_82EA5A48:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea5ac4
	if (!cr0.lt) goto loc_82EA5AC4;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea38e0
	sub_82EA38E0(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r6,12
	r11.s64 = ctx.r6.s64 + 12;
	// addi r9,r11,40
	ctx.r9.s64 = r11.s64 + 40;
loc_82EA5A6C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ea5a8c
	if (!cr0.eq) goto loc_82EA5A8C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82ea5a6c
	if (!cr6.eq) goto loc_82EA5A6C;
loc_82EA5A8C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82ea5ac4
	if (!cr0.lt) goto loc_82EA5AC4;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r11,65(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea5ab8
	if (cr6.eq) goto loc_82EA5AB8;
loc_82EA5AB0:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ea597c
	goto loc_82EA597C;
loc_82EA5AB8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
loc_82EA5ABC:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82ea597c
	goto loc_82EA597C;
loc_82EA5AC4:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r8,r30,40
	ctx.r8.s64 = r30.s64 + 40;
loc_82EA5AD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea5af0
	if (!cr0.eq) goto loc_82EA5AF0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea5ad0
	if (!cr6.eq) goto loc_82EA5AD0;
loc_82EA5AF0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea5b68
	if (!cr0.lt) goto loc_82EA5B68;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3b28
	sub_82EA3B28(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r28
	cr6.compare<uint32_t>(ctx.r6.u32, r28.u32, xer);
	// beq cr6,0x82ea5b44
	if (cr6.eq) goto loc_82EA5B44;
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
loc_82EA5B1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea5b3c
	if (!cr0.eq) goto loc_82EA5B3C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea5b1c
	if (!cr6.eq) goto loc_82EA5B1C;
loc_82EA5B3C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea5b68
	if (!cr0.lt) goto loc_82EA5B68;
loc_82EA5B44:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbz r11,65(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 65);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea5abc
	if (cr6.eq) goto loc_82EA5ABC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// b 0x82ea5ab0
	goto loc_82EA5AB0;
loc_82EA5B68:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea5810
	sub_82EA5810(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_82EA5B84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA5B90"))) PPC_WEAK_FUNC(sub_82EA5B90);
PPC_FUNC_IMPL(__imp__sub_82EA5B90) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82ea3ac8
	sub_82EA3AC8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82ea5bec
	if (cr6.eq) goto loc_82EA5BEC;
	// addi r10,r31,12
	ctx.r10.s64 = r31.s64 + 12;
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r8,r30,40
	ctx.r8.s64 = r30.s64 + 40;
loc_82EA5BC4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea5be4
	if (!cr0.eq) goto loc_82EA5BE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ea5bc4
	if (!cr6.eq) goto loc_82EA5BC4;
loc_82EA5BE4:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82ea5c64
	if (!cr0.lt) goto loc_82EA5C64;
loc_82EA5BEC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ea3db0
	sub_82EA3DB0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82e6b468
	sub_82E6B468(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea5940
	sub_82EA5940(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82ea3c08
	sub_82EA3C08(ctx, base);
	// lis r30,-31946
	r30.s64 = -2093613056;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r3,6512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82ea3c08
	sub_82EA3C08(ctx, base);
	// lwz r3,6512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6512);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
loc_82EA5C64:
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA5C70"))) PPC_WEAK_FUNC(sub_82EA5C70);
PPC_FUNC_IMPL(__imp__sub_82EA5C70) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82ea5c98
	if (cr6.eq) goto loc_82EA5C98;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82EA5C98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea2ab0
	sub_82EA2AB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82ea5b90
	sub_82EA5B90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82ea3cd0
	sub_82EA3CD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82e31f98
	sub_82E31F98(ctx, base);
	// stw r28,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r28.u32);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA5D00"))) PPC_WEAK_FUNC(sub_82EA5D00);
PPC_FUNC_IMPL(__imp__sub_82EA5D00) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ea5d98
	if (cr6.gt) goto loc_82EA5D98;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x82ea5d98
	if (cr6.gt) goto loc_82EA5D98;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82ea6f40
	sub_82EA6F40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82ea6f40
	sub_82EA6F40(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82ea5d98
	if (!cr6.eq) goto loc_82EA5D98;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x82ea6ea8
	sub_82EA6EA8(ctx, base);
	// clrlwi r29,r3,24
	r29.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x82ea6ea8
	sub_82EA6EA8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82ea5d98
	if (!cr6.eq) goto loc_82EA5D98;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea5d9c
	if (cr0.eq) goto loc_82EA5D9C;
loc_82EA5D98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA5D9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA5DA8"))) PPC_WEAK_FUNC(sub_82EA5DA8);
PPC_FUNC_IMPL(__imp__sub_82EA5DA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5DB0"))) PPC_WEAK_FUNC(sub_82EA5DB0);
PPC_FUNC_IMPL(__imp__sub_82EA5DB0) {
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
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5DF0"))) PPC_WEAK_FUNC(sub_82EA5DF0);
PPC_FUNC_IMPL(__imp__sub_82EA5DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r3,132
	ctx.r9.s64 = ctx.r3.s64 + 132;
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stb r10,149(r3)
	PPC_STORE_U8(ctx.r3.u32 + 149, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5E20"))) PPC_WEAK_FUNC(sub_82EA5E20);
PPC_FUNC_IMPL(__imp__sub_82EA5E20) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,4
	r30.s64 = 4;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82EA5E38:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea5e48
	if (cr6.eq) goto loc_82EA5E48;
	// bl 0x82ea32d8
	sub_82EA32D8(ctx, base);
loc_82EA5E48:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82ea5e38
	if (!cr0.eq) goto loc_82EA5E38;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea5e64
	if (cr6.eq) goto loc_82EA5E64;
	// bl 0x82ea32d8
	sub_82EA32D8(ctx, base);
loc_82EA5E64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA5E70"))) PPC_WEAK_FUNC(sub_82EA5E70);
PPC_FUNC_IMPL(__imp__sub_82EA5E70) {
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9f3f8
	sub_82E9F3F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82e9f190
	sub_82E9F190(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea5eb4
	if (cr6.eq) goto loc_82EA5EB4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA5EB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82bddd38
	sub_82BDDD38(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5EE0"))) PPC_WEAK_FUNC(sub_82EA5EE0);
PPC_FUNC_IMPL(__imp__sub_82EA5EE0) {
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
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r30,3
	r30.s64 = 3;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_82EA5F00:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea5f14
	if (cr6.eq) goto loc_82EA5F14;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA5F14:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82ea5f00
	if (!cr0.lt) goto loc_82EA5F00;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5F38"))) PPC_WEAK_FUNC(sub_82EA5F38);
PPC_FUNC_IMPL(__imp__sub_82EA5F38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EA5F60:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea5f60
	if (!cr0.eq) goto loc_82EA5F60;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5F80"))) PPC_WEAK_FUNC(sub_82EA5F80);
PPC_FUNC_IMPL(__imp__sub_82EA5F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82EA5F9C:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea5f9c
	if (!cr0.eq) goto loc_82EA5F9C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA5FC0"))) PPC_WEAK_FUNC(sub_82EA5FC0);
PPC_FUNC_IMPL(__imp__sub_82EA5FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// li r28,1
	r28.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82ea6004
	if (cr6.eq) goto loc_82EA6004;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// stb r28,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r28.u8);
loc_82EA6004:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea6098
	if (!cr6.eq) goto loc_82EA6098;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6098
	if (cr6.eq) goto loc_82EA6098;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea2fd0
	sub_82EA2FD0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82ea2fc8
	sub_82EA2FC8(ctx, base);
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f0,2244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f0,f12
	f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stb r28,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r28.u8);
loc_82EA6098:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA60A8"))) PPC_WEAK_FUNC(sub_82EA60A8);
PPC_FUNC_IMPL(__imp__sub_82EA60A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// subf r27,r28,r30
	r27.s64 = r30.s64 - r28.s64;
	// li r29,4
	r29.s64 = 4;
loc_82EA60C8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82ea60c8
	if (!cr0.eq) goto loc_82EA60C8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EA60F8"))) PPC_WEAK_FUNC(sub_82EA60F8);
PPC_FUNC_IMPL(__imp__sub_82EA60F8) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6134
	if (cr6.eq) goto loc_82EA6134;
	// bl 0x82e6e3c8
	sub_82E6E3C8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x82ea613c
	goto loc_82EA613C;
loc_82EA6134:
	// lis r22,11552
	r22.s64 = 757071872;
	// ori r22,r22,406
	r22.u64 = r22.u64 | 406;
loc_82EA613C:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r24,0
	r24.s64 = 0;
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea6228
	if (cr6.eq) goto loc_82EA6228;
	// lbz r11,0(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6228
	if (!cr0.eq) goto loc_82EA6228;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x82ea6170
	if (!cr6.eq) goto loc_82EA6170;
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6228
	if (cr0.eq) goto loc_82EA6228;
loc_82EA6170:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82ea3090
	sub_82EA3090(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6218
	if (cr6.eq) goto loc_82EA6218;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,88(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// lwz r29,84(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lfs f1,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x82e9f200
	sub_82E9F200(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stb r23,148(r11)
	PPC_STORE_U8(r11.u32 + 148, r23.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r23,148(r11)
	PPC_STORE_U8(r11.u32 + 148, r23.u8);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6218
	if (cr6.eq) goto loc_82EA6218;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6218:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6228
	if (cr6.eq) goto loc_82EA6228;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6228:
	// lbz r11,164(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea6240
	if (!cr0.eq) goto loc_82EA6240;
	// lbz r11,0(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6498
	if (!cr0.eq) goto loc_82EA6498;
loc_82EA6240:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r25,r24
	r25.u64 = r24.u64;
	// addi r28,r31,68
	r28.s64 = r31.s64 + 68;
	// lfs f30,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
loc_82EA6250:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6488
	if (cr6.eq) goto loc_82EA6488;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,-64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -64);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82ea6274
	if (!cr6.eq) goto loc_82EA6274;
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6488
	if (cr0.eq) goto loc_82EA6488;
loc_82EA6274:
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r24.u32);
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// bl 0x82ea3090
	sub_82EA3090(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6478
	if (cr6.eq) goto loc_82EA6478;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// slw r30,r23,r25
	r30.u64 = r25.u8 & 0x20 ? 0 : (r23.u32 << (r25.u8 & 0x3F));
	// and. r11,r30,r11
	r11.u64 = r30.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r29,r25
	r29.u64 = r25.u64;
	// beq 0x82ea62e8
	if (cr0.eq) goto loc_82EA62E8;
	// lwz r4,-64(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -64);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82ea5d00
	sub_82EA5D00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea62e8
	if (cr0.eq) goto loc_82EA62E8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// andc r11,r11,r30
	r11.u64 = r11.u64 & ~r30.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r3,-64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -64);
	// bl 0x82e6e3c8
	sub_82E6E3C8(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// ori r29,r25,256
	r29.u64 = r25.u64 | 256;
loc_82EA62E8:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lfs f31,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea634c
	if (cr6.eq) goto loc_82EA634C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,26,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea634c
	if (cr0.eq) goto loc_82EA634C;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82ea5d00
	sub_82EA5D00(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea634c
	if (cr0.eq) goto loc_82EA634C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,28,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82e6e3c8
	sub_82E6E3C8(ctx, base);
	// lis r11,6690
	r11.s64 = 438435840;
	// ori r11,r11,407
	r11.u64 = r11.u64 | 407;
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82ea634c
	if (!cr6.eq) goto loc_82EA634C;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f0.f64 = double(temp.f32);
	// ori r29,r29,512
	r29.u64 = r29.u64 | 512;
	// fsubs f31,f30,f0
	f31.f64 = double(float(f30.f64 - f0.f64));
loc_82EA634C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82ea7008
	sub_82EA7008(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq 0x82ea63dc
	if (cr0.eq) goto loc_82EA63DC;
	// lbz r11,0(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea637c
	if (cr0.eq) goto loc_82EA637C;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// b 0x82ea6394
	goto loc_82EA6394;
loc_82EA637C:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_82EA6394:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82e9f1f0
	sub_82E9F1F0(ctx, base);
	// stb r24,164(r31)
	PPC_STORE_U8(r31.u32 + 164, r24.u8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82ea6438
	if (cr6.eq) goto loc_82EA6438;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82e9f1f8
	sub_82E9F1F8(ctx, base);
	// b 0x82ea6438
	goto loc_82EA6438;
loc_82EA63DC:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f31,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 8);
	f31.f64 = double(temp.f32);
	// lwz r18,88(r27)
	r18.u64 = PPC_LOAD_U32(r27.u32 + 88);
	// addi r19,r1,144
	r19.s64 = ctx.r1.s64 + 144;
	// lwz r30,12(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// addi r17,r1,160
	r17.s64 = ctx.r1.s64 + 160;
	// lwz r27,84(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// bl 0x82e9f200
	sub_82E9F200(ctx, base);
loc_82EA6438:
	// lbz r11,0(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6478
	if (!cr0.eq) goto loc_82EA6478;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stb r23,148(r11)
	PPC_STORE_U8(r11.u32 + 148, r23.u8);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82ea2b00
	sub_82EA2B00(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r23,148(r11)
	PPC_STORE_U8(r11.u32 + 148, r23.u8);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6478
	if (cr6.eq) goto loc_82EA6478;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6478:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6488
	if (cr6.eq) goto loc_82EA6488;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6488:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(r25.u32, 4, xer);
	// bne cr6,0x82ea6250
	if (!cr6.eq) goto loc_82EA6250;
loc_82EA6498:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82EA64A8"))) PPC_WEAK_FUNC(sub_82EA64A8);
PPC_FUNC_IMPL(__imp__sub_82EA64A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x82ea64f8
	if (cr6.eq) goto loc_82EA64F8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// stb r29,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r29.u8);
loc_82EA64F8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
	// lfs f30,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f30.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x82ea6578
	if (cr6.eq) goto loc_82EA6578;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea2fd0
	sub_82EA2FD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82ea2fc8
	sub_82EA2FC8(ctx, base);
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// b 0x82ea65cc
	goto loc_82EA65CC;
loc_82EA6578:
	// lwz r30,36(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ea65d8
	if (cr6.eq) goto loc_82EA65D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea2fd0
	sub_82EA2FD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82ea2fc8
	sub_82EA2FC8(ctx, base);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
loc_82EA65CC:
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82EA65D8:
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// stb r29,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r29.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA6600"))) PPC_WEAK_FUNC(sub_82EA6600);
PPC_FUNC_IMPL(__imp__sub_82EA6600) {
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
	// bl 0x82ea60a8
	sub_82EA60A8(ctx, base);
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// bl 0x822c6570
	sub_822C6570(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r4,r30,40
	ctx.r4.s64 = r30.s64 + 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
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

__attribute__((alias("__imp__sub_82EA6668"))) PPC_WEAK_FUNC(sub_82EA6668);
PPC_FUNC_IMPL(__imp__sub_82EA6668) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6694
	if (cr6.eq) goto loc_82EA6694;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6694:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea66a4
	if (cr0.eq) goto loc_82EA66A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82EA66A4:
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

__attribute__((alias("__imp__sub_82EA66C0"))) PPC_WEAK_FUNC(sub_82EA66C0);
PPC_FUNC_IMPL(__imp__sub_82EA66C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA66CC:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82ea66cc
	if (!cr0.lt) goto loc_82EA66CC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lfs f0,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f0.f64 = double(temp.f32);
	// lfs f13,2244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6718"))) PPC_WEAK_FUNC(sub_82EA6718);
PPC_FUNC_IMPL(__imp__sub_82EA6718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// addi r4,r10,2300
	ctx.r4.s64 = ctx.r10.s64 + 2300;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x82df9d90
	sub_82DF9D90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea6758
	if (cr0.eq) goto loc_82EA6758;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82EA6758:
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6764
	if (cr0.eq) goto loc_82EA6764;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82EA6764:
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea67a4
	if (cr0.eq) goto loc_82EA67A4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82ea67a4
	if (cr6.eq) goto loc_82EA67A4;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
loc_82EA6788:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82ea6788
	if (!cr0.eq) goto loc_82EA6788;
loc_82EA67A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA67B0"))) PPC_WEAK_FUNC(sub_82EA67B0);
PPC_FUNC_IMPL(__imp__sub_82EA67B0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,8191
	r11.s64 = 536805376;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82ea6828
	if (!cr6.lt) goto loc_82EA6828;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24448
	ctx.r4.s64 = r11.s64 + -24448;
	// bl 0x822c30c0
	sub_822C30C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822c7380
	sub_822C7380(ctx, base);
	// bl 0x822c1ca8
	sub_822C1CA8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-24916
	r11.s64 = r11.s64 + -24916;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x822c2978
	sub_822C2978(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c2248
	sub_822C2248(ctx, base);
loc_82EA6828:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82EA6850"))) PPC_WEAK_FUNC(sub_82EA6850);
PPC_FUNC_IMPL(__imp__sub_82EA6850) {
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
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// addi r11,r11,-2076
	r11.s64 = r11.s64 + -2076;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82e07a30
	sub_82E07A30(ctx, base);
	// lis r11,-31946
	r11.s64 = -2093613056;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,6512(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 6512);
	// bl 0x82df9e50
	sub_82DF9E50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r30,r31,68
	r30.s64 = r31.s64 + 68;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea68a8
	if (cr6.eq) goto loc_82EA68A8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA68A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ea5ee0
	sub_82EA5EE0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea68c4
	if (cr6.eq) goto loc_82EA68C4;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA68C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea5ee0
	sub_82EA5EE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA68E8"))) PPC_WEAK_FUNC(sub_82EA68E8);
PPC_FUNC_IMPL(__imp__sub_82EA68E8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-2076
	r11.s64 = r11.s64 + -2076;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ea66c0
	sub_82EA66C0(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82ea66c0
	sub_82EA66C0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// lfs f0,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f0.f64 = double(temp.f32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stfs f0,140(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// stb r30,148(r31)
	PPC_STORE_U8(r31.u32 + 148, r30.u8);
	// stb r30,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r30.u8);
	// bl 0x82e07090
	sub_82E07090(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r3.u32);
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,164(r31)
	PPC_STORE_U8(r31.u32 + 164, r30.u8);
	// stw r29,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA6960"))) PPC_WEAK_FUNC(sub_82EA6960);
PPC_FUNC_IMPL(__imp__sub_82EA6960) {
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
	// bl 0x82ea6850
	sub_82EA6850(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6990
	if (cr0.eq) goto loc_82EA6990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82dfa0a0
	sub_82DFA0A0(ctx, base);
loc_82EA6990:
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

__attribute__((alias("__imp__sub_82EA69B0"))) PPC_WEAK_FUNC(sub_82EA69B0);
PPC_FUNC_IMPL(__imp__sub_82EA69B0) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82ea6a54
	if (cr6.eq) goto loc_82EA6A54;
	// lwz r29,156(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x82ea6a14
	goto loc_82EA6A14;
loc_82EA69DC:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r3,r28
	cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, xer);
	// beq cr6,0x82ea6a60
	if (cr6.eq) goto loc_82EA6A60;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ea3040
	sub_82EA3040(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6a10
	if (cr0.eq) goto loc_82EA6A10;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r30,152
	ctx.r4.s64 = r30.s64 + 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e63a38
	sub_82E63A38(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ea6a14
	goto loc_82EA6A14;
loc_82EA6A10:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_82EA6A14:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82ea69dc
	if (!cr6.eq) goto loc_82EA69DC;
	// lwz r29,156(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// addi r31,r30,152
	r31.s64 = r30.s64 + 152;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82ea6718
	sub_82EA6718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea67b0
	sub_82EA67B0(ctx, base);
	// stw r30,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r30.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_82EA6A54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EA6A58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
loc_82EA6A60:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ea6a58
	goto loc_82EA6A58;
}

__attribute__((alias("__imp__sub_82EA6A68"))) PPC_WEAK_FUNC(sub_82EA6A68);
PPC_FUNC_IMPL(__imp__sub_82EA6A68) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lbz r11,149(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 149);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea6e98
	if (cr0.eq) goto loc_82EA6E98;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stb r24,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r24.u8);
	// addi r21,r31,4
	r21.s64 = r31.s64 + 4;
	// lwz r8,140(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// addi r26,r31,132
	r26.s64 = r31.s64 + 132;
	// lwz r7,144(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// bl 0x82ea5e20
	sub_82EA5E20(ctx, base);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lbz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea60f8
	sub_82EA60F8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r27,r31,36
	r27.s64 = r31.s64 + 36;
	// mr r23,r24
	r23.u64 = r24.u64;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82ea6b04
	if (!cr6.eq) goto loc_82EA6B04;
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea6ba8
	if (cr0.eq) goto loc_82EA6BA8;
loc_82EA6B04:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6b9c
	if (cr6.eq) goto loc_82EA6B9C;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82ea5e70
	sub_82EA5E70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea69b0
	sub_82EA69B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6b40
	if (!cr0.eq) goto loc_82EA6B40;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r24
	r11.u64 = r24.u64;
	// beq 0x82ea6b44
	if (cr0.eq) goto loc_82EA6B44;
loc_82EA6B40:
	// li r11,1
	r11.s64 = 1;
loc_82EA6B44:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6b90
	if (!cr0.eq) goto loc_82EA6B90;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lbz r11,148(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea6b90
	if (cr0.eq) goto loc_82EA6B90;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,0,26,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6b90
	if (!cr0.eq) goto loc_82EA6B90;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea3090
	sub_82EA3090(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6b80
	if (cr6.eq) goto loc_82EA6B80;
	// li r23,1
	r23.s64 = 1;
loc_82EA6B80:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6b90
	if (cr6.eq) goto loc_82EA6B90;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6B90:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stb r24,148(r11)
	PPC_STORE_U8(r11.u32 + 148, r24.u8);
	// b 0x82ea6ba8
	goto loc_82EA6BA8;
loc_82EA6B9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82ea5e70
	sub_82EA5E70(ctx, base);
loc_82EA6BA8:
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82EA6BB4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82ea6bd0
	if (!cr6.eq) goto loc_82EA6BD0;
	// lbz r11,148(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea6cd8
	if (cr0.eq) goto loc_82EA6CD8;
loc_82EA6BD0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6cc4
	if (cr6.eq) goto loc_82EA6CC4;
	// bl 0x82e812a8
	sub_82E812A8(ctx, base);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e169b0
	sub_82E169B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea69b0
	sub_82EA69B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6c14
	if (!cr0.eq) goto loc_82EA6C14;
	// lbz r11,0(r22)
	r11.u64 = PPC_LOAD_U8(r22.u32 + 0);
	// mr r29,r24
	r29.u64 = r24.u64;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6c18
	if (cr0.eq) goto loc_82EA6C18;
loc_82EA6C14:
	// li r29,1
	r29.s64 = 1;
loc_82EA6C18:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82ea30c0
	sub_82EA30C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6c30
	if (cr0.eq) goto loc_82EA6C30;
	// li r25,1
	r25.s64 = 1;
	// b 0x82ea6cb8
	goto loc_82EA6CB8;
loc_82EA6C30:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6cb8
	if (!cr0.eq) goto loc_82EA6CB8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,148(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 148);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea6cb8
	if (cr0.eq) goto loc_82EA6CB8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea6cb8
	if (!cr0.eq) goto loc_82EA6CB8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82ea3090
	sub_82EA3090(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6ca8
	if (cr6.eq) goto loc_82EA6CA8;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// beq 0x82ea6c88
	if (cr0.eq) goto loc_82EA6C88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82e9fff0
	sub_82E9FFF0(ctx, base);
	// mr r23,r24
	r23.u64 = r24.u64;
	// b 0x82ea6ca8
	goto loc_82EA6CA8;
loc_82EA6C88:
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// bl 0x82e9fff0
	sub_82E9FFF0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6ca8
	if (cr6.eq) goto loc_82EA6CA8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6CA8:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6cb8
	if (cr6.eq) goto loc_82EA6CB8;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6CB8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stb r24,148(r11)
	PPC_STORE_U8(r11.u32 + 148, r24.u8);
	// b 0x82ea6cd8
	goto loc_82EA6CD8;
loc_82EA6CC4:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82e169b0
	sub_82E169B0(ctx, base);
loc_82EA6CD8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// bne cr6,0x82ea6bb4
	if (!cr6.eq) goto loc_82EA6BB4;
	// lbz r11,164(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea6d24
	if (!cr0.eq) goto loc_82EA6D24;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6d24
	if (cr0.eq) goto loc_82EA6D24;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82e9fff0
	sub_82E9FFF0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6d24
	if (cr6.eq) goto loc_82EA6D24;
	// bl 0x822c0890
	sub_822C0890(ctx, base);
loc_82EA6D24:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f30,2244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2244);
	f30.f64 = double(temp.f32);
	// beq 0x82ea6dd4
	if (cr0.eq) goto loc_82EA6DD4;
	// li r11,1
	r11.s64 = 1;
	// stb r11,164(r31)
	PPC_STORE_U8(r31.u32 + 164, r11.u8);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// bl 0x82ea2fc0
	sub_82EA2FC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x82ea7008
	sub_82EA7008(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stvx128 v1,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82ea6d80
	if (cr6.eq) goto loc_82EA6D80;
	// bl 0x82e6e3c8
	sub_82E6E3C8(ctx, base);
	// lis r11,6690
	r11.s64 = 438435840;
	// ori r11,r11,407
	r11.u64 = r11.u64 | 407;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82ea6d80
	if (!cr6.eq) goto loc_82EA6D80;
	// fsubs f31,f30,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 - f31.f64));
loc_82EA6D80:
	// lwz r4,112(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// beq cr6,0x82ea6d94
	if (cr6.eq) goto loc_82EA6D94;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82e9f1f8
	sub_82E9F1F8(ctx, base);
loc_82EA6D94:
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea6da8
	if (!cr6.eq) goto loc_82EA6DA8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x82ea6db4
	goto loc_82EA6DB4;
loc_82EA6DA8:
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r5,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r5.s64 = r11.s32 >> 4;
loc_82EA6DB4:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r6,100(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82e9f1e8
	sub_82E9F1E8(ctx, base);
	// b 0x82ea6df8
	goto loc_82EA6DF8;
loc_82EA6DD4:
	// lbz r11,164(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ea6df8
	if (!cr0.eq) goto loc_82EA6DF8;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6df8
	if (cr6.eq) goto loc_82EA6DF8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82e9ef38
	sub_82E9EF38(ctx, base);
loc_82EA6DF8:
	// lfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// lwz r25,168(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r29,116(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f12,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// lwz r28,116(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lfs f2,64(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lfs f1,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82e16bf8
	sub_82E16BF8(ctx, base);
	// lwz r11,680(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 680);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea6e78
	if (cr6.eq) goto loc_82EA6E78;
	// subf r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r4,r28,r30
	ctx.r4.s64 = r30.s64 - r28.s64;
	// bl 0x82e196a0
	sub_82E196A0(ctx, base);
loc_82EA6E78:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82ea6600
	sub_82EA6600(ctx, base);
	// stfs f30,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r26.u32 + 8, temp.u32);
	// stw r24,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r24.u32);
	// stw r24,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r24.u32);
	// stw r24,12(r26)
	PPC_STORE_U32(r26.u32 + 12, r24.u32);
	// stb r24,148(r31)
	PPC_STORE_U8(r31.u32 + 148, r24.u8);
loc_82EA6E98:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82EA6EA8"))) PPC_WEAK_FUNC(sub_82EA6EA8);
PPC_FUNC_IMPL(__imp__sub_82EA6EA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addis r11,r3,-6690
	r11.s64 = ctx.r3.s64 + -438435840;
	// addic. r11,r11,-344
	xer.ca = r11.u32 > 343;
	r11.s64 = r11.s64 + -344;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6ed0
	if (cr0.eq) goto loc_82EA6ED0;
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// beq cr6,0x82ea6ed0
	if (cr6.eq) goto loc_82EA6ED0;
	// lis r10,4862
	ctx.r10.s64 = 318636032;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,62
	ctx.r10.u64 = ctx.r10.u64 | 62;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82EA6ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6ED8"))) PPC_WEAK_FUNC(sub_82EA6ED8);
PPC_FUNC_IMPL(__imp__sub_82EA6ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addis r11,r3,-6688
	r11.s64 = ctx.r3.s64 + -438304768;
	// addic. r11,r11,-346
	xer.ca = r11.u32 > 345;
	r11.s64 = r11.s64 + -346;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6f30
	if (cr0.eq) goto loc_82EA6F30;
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x82ea6f30
	if (cr6.eq) goto loc_82EA6F30;
	// addis r11,r11,-3
	r11.s64 = r11.s64 + -196608;
	// addic. r11,r11,22013
	xer.ca = r11.u32 > 4294945282;
	r11.s64 = r11.s64 + 22013;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6f30
	if (cr0.eq) goto loc_82EA6F30;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82ea6f30
	if (cr6.eq) goto loc_82EA6F30;
	// lis r10,4861
	ctx.r10.s64 = 318570496;
	// ori r10,r10,22076
	ctx.r10.u64 = ctx.r10.u64 | 22076;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ea6f24
	if (cr6.eq) goto loc_82EA6F24;
	// addis r11,r11,-4864
	r11.s64 = r11.s64 + -318767104;
	// addic. r11,r11,-63
	xer.ca = r11.u32 > 62;
	r11.s64 = r11.s64 + -63;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6f24
	if (cr0.eq) goto loc_82EA6F24;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82EA6F24:
	// lis r3,11552
	ctx.r3.s64 = 757071872;
	// ori r3,r3,43917
	ctx.r3.u64 = ctx.r3.u64 | 43917;
	// blr 
	return;
loc_82EA6F30:
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,447
	ctx.r3.u64 = ctx.r3.u64 | 447;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6F40"))) PPC_WEAK_FUNC(sub_82EA6F40);
PPC_FUNC_IMPL(__imp__sub_82EA6F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,6688
	r11.s64 = 438304768;
	// ori r11,r11,43861
	r11.u64 = r11.u64 | 43861;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82ea6f8c
	if (cr6.eq) goto loc_82EA6F8C;
	// addis r11,r3,-6690
	r11.s64 = ctx.r3.s64 + -438435840;
	// addic. r11,r11,-344
	xer.ca = r11.u32 > 343;
	r11.s64 = r11.s64 + -344;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea6f84
	if (cr0.eq) goto loc_82EA6F84;
	// cmplwi cr6,r11,43528
	cr6.compare<uint32_t>(r11.u32, 43528, xer);
	// beq cr6,0x82ea6f8c
	if (cr6.eq) goto loc_82EA6F8C;
	// lis r10,3549
	ctx.r10.s64 = 232587264;
	// ori r10,r10,65450
	ctx.r10.u64 = ctx.r10.u64 | 65450;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ea6f7c
	if (cr6.eq) goto loc_82EA6F7C;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82EA6F7C:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82EA6F84:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_82EA6F8C:
	// li r3,64
	ctx.r3.s64 = 64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6F98"))) PPC_WEAK_FUNC(sub_82EA6F98);
PPC_FUNC_IMPL(__imp__sub_82EA6F98) {
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
	// bl 0x82ea6f40
	sub_82EA6F40(ctx, base);
	// rlwinm r3,r3,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6FC0"))) PPC_WEAK_FUNC(sub_82EA6FC0);
PPC_FUNC_IMPL(__imp__sub_82EA6FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82ea6fd8
	if (cr6.lt) goto loc_82EA6FD8;
	// beq cr6,0x82ea6fd8
	if (cr6.eq) goto loc_82EA6FD8;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// li r3,40
	ctx.r3.s64 = 40;
	// bltlr cr6
	if (cr6.lt) return;
loc_82EA6FD8:
	// li r3,80
	ctx.r3.s64 = 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6FE0"))) PPC_WEAK_FUNC(sub_82EA6FE0);
PPC_FUNC_IMPL(__imp__sub_82EA6FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82ea6ffc
	if (cr6.lt) goto loc_82EA6FFC;
	// beq cr6,0x82ea6ff4
	if (cr6.eq) goto loc_82EA6FF4;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x82ea6ffc
	if (!cr6.lt) goto loc_82EA6FFC;
loc_82EA6FF4:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82EA6FFC:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7008"))) PPC_WEAK_FUNC(sub_82EA7008);
PPC_FUNC_IMPL(__imp__sub_82EA7008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm r11,r3,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFF;
	// rlwinm r10,r3,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r3,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r11.u64);
	// lfd f13,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f0,-32(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// lfs f0,-24904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24904);
	f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,-8(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f11,-12(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v1,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7090"))) PPC_WEAK_FUNC(sub_82EA7090);
PPC_FUNC_IMPL(__imp__sub_82EA7090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EA709C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82ea70ac
	if (!cr6.eq) goto loc_82EA70AC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82EA70AC:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bge cr6,0x82ea70bc
	if (!cr6.lt) goto loc_82EA70BC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82EA70BC:
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x82ea70cc
	if (!cr6.lt) goto loc_82EA70CC;
	// li r11,1
	r11.s64 = 1;
loc_82EA70CC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x82ea709c
	goto loc_82EA709C;
}

__attribute__((alias("__imp__sub_82EA70D4"))) PPC_WEAK_FUNC(sub_82EA70D4);
PPC_FUNC_IMPL(__imp__sub_82EA70D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA70D8"))) PPC_WEAK_FUNC(sub_82EA70D8);
PPC_FUNC_IMPL(__imp__sub_82EA70D8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-1956
	r11.s64 = r11.s64 + -1956;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82ea7104
	if (cr0.eq) goto loc_82EA7104;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82EA7104:
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

__attribute__((alias("__imp__sub_82EA7120"))) PPC_WEAK_FUNC(sub_82EA7120);
PPC_FUNC_IMPL(__imp__sub_82EA7120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-1956
	r11.s64 = r11.s64 + -1956;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7130"))) PPC_WEAK_FUNC(sub_82EA7130);
PPC_FUNC_IMPL(__imp__sub_82EA7130) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ea717c
	if (cr6.eq) goto loc_82EA717C;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82EA7154:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r24.u32);
	// sth r24,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r24.u16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// sth r24,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r24.u16);
	// sth r24,4(r11)
	PPC_STORE_U16(r11.u32 + 4, r24.u16);
	// sth r24,6(r11)
	PPC_STORE_U16(r11.u32 + 6, r24.u16);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bne 0x82ea7154
	if (!cr0.eq) goto loc_82EA7154;
loc_82EA717C:
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82ea7344
	if (cr6.eq) goto loc_82EA7344;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r31,r4,4
	r31.s64 = ctx.r4.s64 + 4;
	// subf r23,r4,r3
	r23.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r25,r11,-2072
	r25.s64 = r11.s64 + -2072;
loc_82EA7198:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831ce240
	sub_831CE240(ctx, base);
	// lwz r10,-4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// addi r27,r31,-4
	r27.s64 = r31.s64 + -4;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ea71cc
	if (cr6.eq) goto loc_82EA71CC;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82ea71d0
	if (cr6.eq) goto loc_82EA71D0;
loc_82EA71CC:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_82EA71D0:
	// clrlwi. r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r24
	r11.u64 = r24.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// beq 0x82ea7304
	if (cr0.eq) goto loc_82EA7304;
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea720c
	if (cr0.eq) goto loc_82EA720C;
	// add r5,r23,r31
	ctx.r5.u64 = r23.u64 + r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831ce238
	sub_831CE238(ctx, base);
loc_82EA720C:
	// lbz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r11,r25,4
	r11.s64 = r25.s64 + 4;
	// lbz r7,87(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// li r10,14
	ctx.r10.s64 = 14;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
loc_82EA7228:
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// and. r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ea723c
	if (cr0.eq) goto loc_82EA723C;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r30,r4,r30
	r30.u64 = ctx.r4.u64 | r30.u64;
loc_82EA723C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x82ea7228
	if (!cr0.eq) goto loc_82EA7228;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// ble cr6,0x82ea7258
	if (!cr6.gt) goto loc_82EA7258;
	// ori r30,r30,16384
	r30.u64 = r30.u64 | 16384;
loc_82EA7258:
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(r11.u32, 30, xer);
	// ble cr6,0x82ea7268
	if (!cr6.gt) goto loc_82EA7268;
	// ori r30,r30,32768
	r30.u64 = r30.u64 | 32768;
loc_82EA7268:
	// lha r11,88(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 88));
	// cmpwi cr6,r11,-32767
	cr6.compare<int32_t>(r11.s32, -32767, xer);
	// bge cr6,0x82ea7278
	if (!cr6.lt) goto loc_82EA7278;
	// li r11,-32767
	r11.s64 = -32767;
loc_82EA7278:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x82ea7288
	if (!cr6.gt) goto loc_82EA7288;
	// li r11,32767
	r11.s64 = 32767;
loc_82EA7288:
	// lha r10,90(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 90));
	// extsh r7,r11
	ctx.r7.s64 = r11.s16;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,-32767
	cr6.compare<int32_t>(r11.s32, -32767, xer);
	// bge cr6,0x82ea72a0
	if (!cr6.lt) goto loc_82EA72A0;
	// li r11,-32767
	r11.s64 = -32767;
loc_82EA72A0:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x82ea72b0
	if (!cr6.gt) goto loc_82EA72B0;
	// li r11,32767
	r11.s64 = 32767;
loc_82EA72B0:
	// lha r10,92(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 92));
	// extsh r9,r11
	ctx.r9.s64 = r11.s16;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,-32767
	cr6.compare<int32_t>(r11.s32, -32767, xer);
	// bge cr6,0x82ea72c8
	if (!cr6.lt) goto loc_82EA72C8;
	// li r11,-32767
	r11.s64 = -32767;
loc_82EA72C8:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x82ea72d8
	if (!cr6.gt) goto loc_82EA72D8;
	// li r11,32767
	r11.s64 = 32767;
loc_82EA72D8:
	// lha r8,94(r1)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 94));
	// extsh r10,r11
	ctx.r10.s64 = r11.s16;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,-32767
	cr6.compare<int32_t>(r11.s32, -32767, xer);
	// bge cr6,0x82ea72f0
	if (!cr6.lt) goto loc_82EA72F0;
	// li r11,-32767
	r11.s64 = -32767;
loc_82EA72F0:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// cmpwi cr6,r11,32767
	cr6.compare<int32_t>(r11.s32, 32767, xer);
	// ble cr6,0x82ea7300
	if (!cr6.gt) goto loc_82EA7300;
	// li r11,32767
	r11.s64 = 32767;
loc_82EA7300:
	// extsh r11,r11
	r11.s64 = r11.s16;
loc_82EA7304:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r10,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r10.u16);
	// cntlzw r8,r29
	ctx.r8.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
	// sth r7,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r7.u16);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// sth r11,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r11.u16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// sth r6,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r6.u16);
	// sth r5,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r5.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// blt cr6,0x82ea7198
	if (cr6.lt) goto loc_82EA7198;
loc_82EA7344:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82EA7350"))) PPC_WEAK_FUNC(sub_82EA7350);
PPC_FUNC_IMPL(__imp__sub_82EA7350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,8689
	ctx.r10.s64 = 8689;
	// li r11,24078
	r11.s64 = 24078;
	// li r9,255
	ctx.r9.s64 = 255;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// sth r10,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, r11.u16);
	// sth r11,6(r5)
	PPC_STORE_U16(ctx.r5.u32 + 6, r11.u16);
	// sth r9,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7378"))) PPC_WEAK_FUNC(sub_82EA7378);
PPC_FUNC_IMPL(__imp__sub_82EA7378) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x831ce250
	sub_831CE250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7388"))) PPC_WEAK_FUNC(sub_82EA7388);
PPC_FUNC_IMPL(__imp__sub_82EA7388) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
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

__attribute__((alias("__imp__sub_82EA73C8"))) PPC_WEAK_FUNC(sub_82EA73C8);
PPC_FUNC_IMPL(__imp__sub_82EA73C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-1924
	r11.s64 = r11.s64 + -1924;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA73D8"))) PPC_WEAK_FUNC(sub_82EA73D8);
PPC_FUNC_IMPL(__imp__sub_82EA73D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_82EA73D8:
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82ea7418
	if (cr0.eq) goto loc_82EA7418;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82ea740c
	if (cr6.eq) goto loc_82EA740C;
loc_82EA73F4:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ea742c
	if (cr6.eq) goto loc_82EA742C;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x82ea73f4
	if (!cr0.eq) goto loc_82EA73F4;
loc_82EA740C:
	// li r11,0
	r11.s64 = 0;
loc_82EA7410:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea7434
	if (cr0.eq) goto loc_82EA7434;
loc_82EA7418:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bne 0x82ea73d8
	if (!cr0.eq) goto loc_82EA73D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EA742C:
	// li r11,1
	r11.s64 = 1;
	// b 0x82ea7410
	goto loc_82EA7410;
loc_82EA7434:
	// lhz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7440"))) PPC_WEAK_FUNC(sub_82EA7440);
PPC_FUNC_IMPL(__imp__sub_82EA7440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r10,140
	cr6.compare<uint32_t>(ctx.r10.u32, 140, xer);
	// bge cr6,0x82ea749c
	if (!cr6.lt) goto loc_82EA749C;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,83
	cr6.compare<uint32_t>(ctx.r10.u32, 83, xer);
	// rlwinm. r9,r4,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x82ea7460
	if (cr6.lt) goto loc_82EA7460;
	// clrlwi. r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
loc_82EA7460:
	// beq 0x82ea7468
	if (cr0.eq) goto loc_82EA7468;
	// li r11,1
	r11.s64 = 1;
loc_82EA7468:
	// andi. r9,r3,34
	ctx.r9.u64 = ctx.r3.u64 & 34;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82ea7480
	if (cr0.eq) goto loc_82EA7480;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_82EA7480:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-1896
	r11.s64 = r11.s64 + -1896;
	// beq 0x82ea7494
	if (cr0.eq) goto loc_82EA7494;
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
loc_82EA7494:
	// lbzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// blr 
	return;
loc_82EA749C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA74A8"))) PPC_WEAK_FUNC(sub_82EA74A8);
PPC_FUNC_IMPL(__imp__sub_82EA74A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// andc. r10,r11,r4
	ctx.r10.u64 = r11.u64 & ~ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ea74bc
	if (cr0.eq) goto loc_82EA74BC;
loc_82EA74B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EA74BC:
	// andi. r10,r4,17
	ctx.r10.u64 = ctx.r4.u64 & 17;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ea74d8
	if (cr0.eq) goto loc_82EA74D8;
	// and r10,r11,r4
	ctx.r10.u64 = r11.u64 & ctx.r4.u64;
	// andi. r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 & 17;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ea74b4
	if (cr0.eq) goto loc_82EA74B4;
loc_82EA74D8:
	// andi. r10,r4,68
	ctx.r10.u64 = ctx.r4.u64 & 68;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ea74f4
	if (cr0.eq) goto loc_82EA74F4;
	// and r10,r11,r4
	ctx.r10.u64 = r11.u64 & ctx.r4.u64;
	// andi. r10,r10,68
	ctx.r10.u64 = ctx.r10.u64 & 68;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ea74b4
	if (cr0.eq) goto loc_82EA74B4;
loc_82EA74F4:
	// andi. r10,r4,34
	ctx.r10.u64 = ctx.r4.u64 & 34;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ea7510
	if (cr0.eq) goto loc_82EA7510;
	// and r10,r11,r4
	ctx.r10.u64 = r11.u64 & ctx.r4.u64;
	// andi. r10,r10,34
	ctx.r10.u64 = ctx.r10.u64 & 34;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ea74b4
	if (cr0.eq) goto loc_82EA74B4;
loc_82EA7510:
	// andi. r10,r4,136
	ctx.r10.u64 = ctx.r4.u64 & 136;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82ea7530
	if (cr0.eq) goto loc_82EA7530;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// andi. r11,r11,136
	r11.u64 = r11.u64 & 136;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_82EA7530:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7538"))) PPC_WEAK_FUNC(sub_82EA7538);
PPC_FUNC_IMPL(__imp__sub_82EA7538) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea756c
	if (cr6.eq) goto loc_82EA756C;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r3,28
	r11.s64 = ctx.r3.s64 + 28;
loc_82EA7550:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ea7574
	if (cr6.eq) goto loc_82EA7574;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ea7550
	if (cr6.lt) goto loc_82EA7550;
loc_82EA756C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EA7574:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7580"))) PPC_WEAK_FUNC(sub_82EA7580);
PPC_FUNC_IMPL(__imp__sub_82EA7580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA75A8"))) PPC_WEAK_FUNC(sub_82EA75A8);
PPC_FUNC_IMPL(__imp__sub_82EA75A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 + 28;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea75ec
	if (cr6.eq) goto loc_82EA75EC;
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
loc_82EA75D4:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// beq cr6,0x82ea7618
	if (cr6.eq) goto loc_82EA7618;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x82ea75d4
	if (!cr0.eq) goto loc_82EA75D4;
loc_82EA75EC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EA75F0:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea762c
	if (!cr6.eq) goto loc_82EA762C;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea762c
	if (cr0.eq) goto loc_82EA762C;
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ea7620
	if (cr0.eq) goto loc_82EA7620;
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// b 0x82ea762c
	goto loc_82EA762C;
loc_82EA7618:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82ea75f0
	goto loc_82EA75F0;
loc_82EA7620:
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
loc_82EA762C:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ea7648
	if (!cr0.eq) goto loc_82EA7648;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ea764c
	goto loc_82EA764C;
loc_82EA7648:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82EA764C:
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7658"))) PPC_WEAK_FUNC(sub_82EA7658);
PPC_FUNC_IMPL(__imp__sub_82EA7658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,48
	r11.s64 = ctx.r4.s64 * 48;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7668"))) PPC_WEAK_FUNC(sub_82EA7668);
PPC_FUNC_IMPL(__imp__sub_82EA7668) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x82ea76ac
	if (cr6.eq) goto loc_82EA76AC;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ea76ac
	if (cr0.eq) goto loc_82EA76AC;
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
loc_82EA76AC:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA76C8"))) PPC_WEAK_FUNC(sub_82EA76C8);
PPC_FUNC_IMPL(__imp__sub_82EA76C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82EA76D4:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r10,-4(r11)
	PPC_STORE_U8(r11.u32 + -4, ctx.r10.u8);
	// li r7,4
	ctx.r7.s64 = 4;
	// sth r10,-2(r11)
	PPC_STORE_U16(r11.u32 + -2, ctx.r10.u16);
	// li r6,30
	ctx.r6.s64 = 30;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// bge 0x82ea76d4
	if (!cr0.lt) goto loc_82EA76D4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
loc_82EA7718:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,-43(r10)
	PPC_STORE_U8(ctx.r10.u32 + -43, ctx.r9.u8);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82ea7718
	if (cr6.lt) goto loc_82EA7718;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7738"))) PPC_WEAK_FUNC(sub_82EA7738);
PPC_FUNC_IMPL(__imp__sub_82EA7738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EA7758"))) PPC_WEAK_FUNC(sub_82EA7758);
PPC_FUNC_IMPL(__imp__sub_82EA7758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7760"))) PPC_WEAK_FUNC(sub_82EA7760);
PPC_FUNC_IMPL(__imp__sub_82EA7760) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea7858
	if (cr0.eq) goto loc_82EA7858;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r30,r1,108
	r30.s64 = ctx.r1.s64 + 108;
	// li r25,2
	r25.s64 = 2;
	// li r26,0
	r26.s64 = 0;
loc_82EA77A4:
	// lwz r11,-28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ea782c
	if (!cr6.eq) goto loc_82EA782C;
	// lwz r29,-20(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + -20);
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r29,6(r31)
	PPC_STORE_U32(r31.u32 + 6, r29.u32);
	// beq cr6,0x82ea7804
	if (cr6.eq) goto loc_82EA7804;
	// addi r7,r30,-16
	ctx.r7.s64 = r30.s64 + -16;
	// lwz r4,18(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 18);
	// addi r28,r31,26
	r28.s64 = r31.s64 + 26;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ea73d8
	sub_82EA73D8(ctx, base);
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r3,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r3.u16);
	// beq 0x82ea77f0
	if (cr0.eq) goto loc_82EA77F0;
	// sth r3,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r3.u16);
loc_82EA77F0:
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x82ea7808
	goto loc_82EA7808;
loc_82EA7804:
	// sth r26,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r26.u16);
loc_82EA7808:
	// stw r27,18(r31)
	PPC_STORE_U32(r31.u32 + 18, r27.u32);
	// addi r3,r31,-2
	ctx.r3.s64 = r31.s64 + -2;
	// bl 0x82ea75a8
	sub_82EA75A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,-24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -24);
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// bl 0x82ea7440
	sub_82EA7440(ctx, base);
	// stb r3,-2(r31)
	PPC_STORE_U8(r31.u32 + -2, ctx.r3.u8);
	// b 0x82ea7848
	goto loc_82EA7848;
loc_82EA782C:
	// li r11,-1
	r11.s64 = -1;
	// stb r26,-2(r31)
	PPC_STORE_U8(r31.u32 + -2, r26.u8);
	// sth r26,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r26.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// stw r26,18(r31)
	PPC_STORE_U32(r31.u32 + 18, r26.u32);
	// stw r26,22(r31)
	PPC_STORE_U32(r31.u32 + 22, r26.u32);
	// stw r26,6(r31)
	PPC_STORE_U32(r31.u32 + 6, r26.u32);
loc_82EA7848:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bne 0x82ea77a4
	if (!cr0.eq) goto loc_82EA77A4;
loc_82EA7858:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EA7860"))) PPC_WEAK_FUNC(sub_82EA7860);
PPC_FUNC_IMPL(__imp__sub_82EA7860) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82ea7668
	sub_82EA7668(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea78a8
	if (cr6.eq) goto loc_82EA78A8;
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
loc_82EA78A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA78C0"))) PPC_WEAK_FUNC(sub_82EA78C0);
PPC_FUNC_IMPL(__imp__sub_82EA78C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r6,14(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r5,13(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// addi r11,r3,40
	r11.s64 = ctx.r3.s64 + 40;
	// lbz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
loc_82EA78E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ea7910
	if (!cr6.eq) goto loc_82EA7910;
	// and. r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ea78fc
	if (cr0.eq) goto loc_82EA78FC;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x82ea790c
	goto loc_82EA790C;
loc_82EA78FC:
	// and. r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ea7910
	if (cr0.eq) goto loc_82EA7910;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// or r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82EA790C:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82EA7910:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ea7934
	if (cr0.eq) goto loc_82EA7934;
	// and. r31,r5,r10
	r31.u64 = ctx.r5.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82ea792c
	if (cr0.eq) goto loc_82EA792C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82ea7930
	goto loc_82EA7930;
loc_82EA792C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82EA7930:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82EA7934:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82ea78e0
	if (!cr0.eq) goto loc_82EA78E0;
	// stb r8,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r8.u8);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7950"))) PPC_WEAK_FUNC(sub_82EA7950);
PPC_FUNC_IMPL(__imp__sub_82EA7950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r6,14(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 14);
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// lbz r5,13(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,3
	ctx.r8.s64 = 3;
loc_82EA7968:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82ea7984
	if (!cr0.eq) goto loc_82EA7984;
	// and. r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ea79b8
	if (cr0.eq) goto loc_82EA79B8;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82ea79b4
	goto loc_82EA79B4;
loc_82EA7984:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82ea79a8
	if (!cr6.gt) goto loc_82EA79A8;
	// and. r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ea79a0
	if (cr0.eq) goto loc_82EA79A0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// b 0x82ea79b4
	goto loc_82EA79B4;
loc_82EA79A0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82ea79b4
	goto loc_82EA79B4;
loc_82EA79A8:
	// and. r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ctx.r5.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ea79b8
	if (cr0.eq) goto loc_82EA79B8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA79B4:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82EA79B8:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82ea7968
	if (!cr0.eq) goto loc_82EA7968;
	// stb r7,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r7.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA79D0"))) PPC_WEAK_FUNC(sub_82EA79D0);
PPC_FUNC_IMPL(__imp__sub_82EA79D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,60
	r11.s64 = ctx.r3.s64 + 60;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EA79F4"))) PPC_WEAK_FUNC(sub_82EA79F4);
PPC_FUNC_IMPL(__imp__sub_82EA79F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA79F8"))) PPC_WEAK_FUNC(sub_82EA79F8);
PPC_FUNC_IMPL(__imp__sub_82EA79F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r11,0
	r11.s64 = 0;
	// li r10,30
	ctx.r10.s64 = 30;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lfs f0,-1612(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1612);
	f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stfs f0,36(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7A48"))) PPC_WEAK_FUNC(sub_82EA7A48);
PPC_FUNC_IMPL(__imp__sub_82EA7A48) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r5,14
	ctx.r10.s64 = ctx.r5.s64 + 14;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x82ea7668
	sub_82EA7668(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea7a98
	if (cr6.eq) goto loc_82EA7A98;
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
loc_82EA7A98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7AB0"))) PPC_WEAK_FUNC(sub_82EA7AB0);
PPC_FUNC_IMPL(__imp__sub_82EA7AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea7b9c
	if (cr0.eq) goto loc_82EA7B9C;
	// lwa r11,100(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 100));
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwa r10,104(r1)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 104));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwa r9,96(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 96));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lbz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// not r7,r11
	ctx.r7.u64 = ~r11.u64;
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ r11.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r7,13(r31)
	PPC_STORE_U8(r31.u32 + 13, ctx.r7.u8);
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & r11.u64;
	// and r11,r10,r9
	r11.u64 = ctx.r10.u64 & ctx.r9.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r6,14(r31)
	PPC_STORE_U8(r31.u32 + 14, ctx.r6.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,15(r31)
	PPC_STORE_U8(r31.u32 + 15, r11.u8);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// stb r9,17(r31)
	PPC_STORE_U8(r31.u32 + 17, ctx.r9.u8);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctiwz f12,f10
	ctx.f12.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f12,0,r31
	PPC_STORE_U32(r31.u32, ctx.f12.u32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, f0.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, f0.u32);
	// bl 0x82ea78c0
	sub_82EA78C0(ctx, base);
	// bl 0x82ea7950
	sub_82EA7950(ctx, base);
loc_82EA7B9C:
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

__attribute__((alias("__imp__sub_82EA7BB0"))) PPC_WEAK_FUNC(sub_82EA7BB0);
PPC_FUNC_IMPL(__imp__sub_82EA7BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	// extsh r11,r6
	r11.s64 = ctx.r6.s16;
	// lha r10,0(r3)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 0));
	// neg r7,r11
	ctx.r7.s64 = -r11.s64;
	// lha r8,0(r4)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 0));
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bge cr6,0x82ea7bd8
	if (!cr6.lt) goto loc_82EA7BD8;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82ea7bd8
	if (!cr6.lt) goto loc_82EA7BD8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82ea7be8
	goto loc_82EA7BE8;
loc_82EA7BD8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// bgt cr6,0x82ea7be8
	if (cr6.gt) goto loc_82EA7BE8;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
loc_82EA7BE8:
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// bge cr6,0x82ea7c00
	if (!cr6.lt) goto loc_82EA7C00;
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bge cr6,0x82ea7c00
	if (!cr6.lt) goto loc_82EA7C00;
	// li r11,0
	r11.s64 = 0;
	// b 0x82ea7c14
	goto loc_82EA7C14;
loc_82EA7C00:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82ea7c10
	if (!cr6.gt) goto loc_82EA7C10;
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
	// b 0x82ea7c14
	goto loc_82EA7C14;
loc_82EA7C10:
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82EA7C14:
	// mullw r7,r11,r11
	ctx.r7.s64 = int64_t(r11.s32) * int64_t(r11.s32);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// extsh r10,r5
	ctx.r10.s64 = ctx.r5.s16;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r7,r10,r10
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// bge cr6,0x82ea7c88
	if (!cr6.lt) goto loc_82EA7C88;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rotlwi r11,r7,1
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// andc r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 & ~r11.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// divw r9,r9,r8
	ctx.r9.s32 = ctx.r9.s32 / ctx.r8.s32;
	// twllei r8,0
	// twlgei r10,-1
	// divw r11,r7,r8
	r11.s32 = ctx.r7.s32 / ctx.r8.s32;
	// twllei r8,0
	// twlgei r6,-1
loc_82EA7C88:
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7C98"))) PPC_WEAK_FUNC(sub_82EA7C98);
PPC_FUNC_IMPL(__imp__sub_82EA7C98) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r11.u16);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// bl 0x82ea7bb0
	sub_82EA7BB0(ctx, base);
	// extsh r11,r30
	r11.s64 = r30.s16;
	// lha r10,82(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 82));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lha r11,80(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 80));
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_82EA7D38"))) PPC_WEAK_FUNC(sub_82EA7D38);
PPC_FUNC_IMPL(__imp__sub_82EA7D38) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7D40"))) PPC_WEAK_FUNC(sub_82EA7D40);
PPC_FUNC_IMPL(__imp__sub_82EA7D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,56
	r11.s64 = ctx.r4.s64 * 56;
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7D50"))) PPC_WEAK_FUNC(sub_82EA7D50);
PPC_FUNC_IMPL(__imp__sub_82EA7D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2240(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2240);
	f0.f64 = double(temp.f32);
loc_82EA7D64:
	// stw r10,-24(r11)
	PPC_STORE_U32(r11.u32 + -24, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,-20(r11)
	PPC_STORE_U32(r11.u32 + -20, ctx.r10.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r10.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, ctx.r10.u32);
	// stfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -8, temp.u32);
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// sth r10,12(r11)
	PPC_STORE_U16(r11.u32 + 12, ctx.r10.u16);
	// sth r10,14(r11)
	PPC_STORE_U16(r11.u32 + 14, ctx.r10.u16);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// sth r10,24(r11)
	PPC_STORE_U16(r11.u32 + 24, ctx.r10.u16);
	// sth r10,26(r11)
	PPC_STORE_U16(r11.u32 + 26, ctx.r10.u16);
	// stw r8,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r8.u32);
	// addi r11,r11,56
	r11.s64 = r11.s64 + 56;
	// bge 0x82ea7d64
	if (!cr0.lt) goto loc_82EA7D64;
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// stw r10,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7DC8"))) PPC_WEAK_FUNC(sub_82EA7DC8);
PPC_FUNC_IMPL(__imp__sub_82EA7DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EA7DE8"))) PPC_WEAK_FUNC(sub_82EA7DE8);
PPC_FUNC_IMPL(__imp__sub_82EA7DE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA7DF0"))) PPC_WEAK_FUNC(sub_82EA7DF0);
PPC_FUNC_IMPL(__imp__sub_82EA7DF0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// li r30,0
	r30.s64 = 0;
loc_82EA7E10:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r30.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r9.u32);
	// sth r30,2(r11)
	PPC_STORE_U16(r11.u32 + 2, r30.u16);
	// sth r30,4(r11)
	PPC_STORE_U16(r11.u32 + 4, r30.u16);
	// sth r30,6(r11)
	PPC_STORE_U16(r11.u32 + 6, r30.u16);
	// sth r30,8(r11)
	PPC_STORE_U16(r11.u32 + 8, r30.u16);
	// sth r30,10(r11)
	PPC_STORE_U16(r11.u32 + 10, r30.u16);
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// bge 0x82ea7e10
	if (!cr0.lt) goto loc_82EA7E10;
	// lwz r3,228(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,224(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea800c
	if (cr0.eq) goto loc_82EA800C;
	// lwz r11,224(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ea800c
	if (!cr6.gt) goto loc_82EA800C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r1,136
	r29.s64 = ctx.r1.s64 + 136;
	// addi r31,r27,26
	r31.s64 = r27.s64 + 26;
	// lfs f31,2240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2240);
	f31.f64 = double(temp.f32);
loc_82EA7E84:
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// lwz r9,26(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 26);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82ea7ef4
	if (cr0.eq) goto loc_82EA7EF4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82ea7eec
	if (cr6.eq) goto loc_82EA7EEC;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// stw r10,26(r31)
	PPC_STORE_U32(r31.u32 + 26, ctx.r10.u32);
	// stw r30,-14(r31)
	PPC_STORE_U32(r31.u32 + -14, r30.u32);
	// stw r30,-18(r31)
	PPC_STORE_U32(r31.u32 + -18, r30.u32);
	// beq cr6,0x82ea7ff4
	if (cr6.eq) goto loc_82EA7FF4;
	// stw r30,-22(r31)
	PPC_STORE_U32(r31.u32 + -22, r30.u32);
	// stw r30,-26(r31)
	PPC_STORE_U32(r31.u32 + -26, r30.u32);
	// stfs f31,-6(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -6, temp.u32);
	// stfs f31,-10(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + -10, temp.u32);
	// sth r30,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r30.u16);
	// sth r30,-2(r31)
	PPC_STORE_U16(r31.u32 + -2, r30.u16);
	// stfs f31,6(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 6, temp.u32);
	// stfs f31,2(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 2, temp.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r30.u16);
	// sth r30,10(r31)
	PPC_STORE_U16(r31.u32 + 10, r30.u16);
	// stfs f31,18(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 18, temp.u32);
	// stfs f31,14(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 14, temp.u32);
	// sth r30,24(r31)
	PPC_STORE_U16(r31.u32 + 24, r30.u16);
	// sth r30,22(r31)
	PPC_STORE_U16(r31.u32 + 22, r30.u16);
	// b 0x82ea7ff4
	goto loc_82EA7FF4;
loc_82EA7EEC:
	// stw r30,26(r31)
	PPC_STORE_U32(r31.u32 + 26, r30.u32);
	// b 0x82ea7ff4
	goto loc_82EA7FF4;
loc_82EA7EF4:
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r9,-26(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + -26);
	// not r8,r11
	ctx.r8.u64 = ~r11.u64;
	// stw r10,26(r31)
	PPC_STORE_U32(r31.u32 + 26, ctx.r10.u32);
	// stw r8,-22(r31)
	PPC_STORE_U32(r31.u32 + -22, ctx.r8.u32);
	// stw r11,-26(r31)
	PPC_STORE_U32(r31.u32 + -26, r11.u32);
	// beq cr6,0x82ea7f20
	if (cr6.eq) goto loc_82EA7F20;
	// stw r30,-14(r31)
	PPC_STORE_U32(r31.u32 + -14, r30.u32);
	// stw r30,-18(r31)
	PPC_STORE_U32(r31.u32 + -18, r30.u32);
	// b 0x82ea7f34
	goto loc_82EA7F34;
loc_82EA7F20:
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ r11.u64;
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r11,-18(r31)
	PPC_STORE_U32(r31.u32 + -18, r11.u32);
	// stw r10,-14(r31)
	PPC_STORE_U32(r31.u32 + -14, ctx.r10.u32);
loc_82EA7F34:
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lhz r3,10(r29)
	ctx.r3.u64 = PPC_LOAD_U16(r29.u32 + 10);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lhz r9,2(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lhz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// lhz r7,6(r29)
	ctx.r7.u64 = PPC_LOAD_U16(r29.u32 + 6);
	// lhz r6,8(r29)
	ctx.r6.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// sth r11,-2(r31)
	PPC_STORE_U16(r31.u32 + -2, r11.u16);
	// sth r9,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r9.u16);
	// sth r8,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r8.u16);
	// sth r7,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r7.u16);
	// sth r6,22(r31)
	PPC_STORE_U16(r31.u32 + 22, ctx.r6.u16);
	// sth r3,24(r31)
	PPC_STORE_U16(r31.u32 + 24, ctx.r3.u16);
	// lwz r3,228(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// sth r10,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r10.u16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,-10
	ctx.r3.s64 = r31.s64 + -10;
	// lhz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// lhz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// bl 0x82ea7c98
	sub_82EA7C98(ctx, base);
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// lhz r5,110(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r4,106(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// bl 0x82ea7c98
	sub_82EA7C98(ctx, base);
	// lha r11,112(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 112));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lha r10,22(r31)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 22));
	// lha r11,24(r31)
	r11.s64 = int16_t(PPC_LOAD_U16(r31.u32 + 24));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / f0.f64));
	// stfs f12,14(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 14, temp.u32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,18(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 18, temp.u32);
loc_82EA7FF4:
	// lwz r11,224(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 224);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,56
	r31.s64 = r31.s64 + 56;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82ea7e84
	if (cr6.lt) goto loc_82EA7E84;
loc_82EA800C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82EA8018"))) PPC_WEAK_FUNC(sub_82EA8018);
PPC_FUNC_IMPL(__imp__sub_82EA8018) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r30,228
	r31.s64 = r30.s64 + 228;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea7668
	sub_82EA7668(ctx, base);
	// lwz r3,228(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ea808c
	if (cr6.eq) goto loc_82EA808C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82ea8080
	if (!cr6.lt) goto loc_82EA8080;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ea8084
	goto loc_82EA8084;
loc_82EA8080:
	// li r3,4
	ctx.r3.s64 = 4;
loc_82EA8084:
	// stw r3,224(r30)
	PPC_STORE_U32(r30.u32 + 224, ctx.r3.u32);
	// b 0x82ea8090
	goto loc_82EA8090;
loc_82EA808C:
	// stw r28,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r28.u32);
loc_82EA8090:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea80b0
	if (cr6.eq) goto loc_82EA80B0;
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
loc_82EA80B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA80B8"))) PPC_WEAK_FUNC(sub_82EA80B8);
PPC_FUNC_IMPL(__imp__sub_82EA80B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
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

__attribute__((alias("__imp__sub_82EA80D0"))) PPC_WEAK_FUNC(sub_82EA80D0);
PPC_FUNC_IMPL(__imp__sub_82EA80D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EA80E8"))) PPC_WEAK_FUNC(sub_82EA80E8);
PPC_FUNC_IMPL(__imp__sub_82EA80E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea8104
	if (cr6.eq) goto loc_82EA8104;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
loc_82EA8104:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8110"))) PPC_WEAK_FUNC(sub_82EA8110);
PPC_FUNC_IMPL(__imp__sub_82EA8110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-1588
	r11.s64 = r11.s64 + -1588;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8120"))) PPC_WEAK_FUNC(sub_82EA8120);
PPC_FUNC_IMPL(__imp__sub_82EA8120) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-1600
	r11.s64 = r11.s64 + -1600;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82ea814c
	if (cr0.eq) goto loc_82EA814C;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82EA814C:
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

__attribute__((alias("__imp__sub_82EA8168"))) PPC_WEAK_FUNC(sub_82EA8168);
PPC_FUNC_IMPL(__imp__sub_82EA8168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea81b8
	if (cr6.eq) goto loc_82EA81B8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ea81b8
	if (cr6.eq) goto loc_82EA81B8;
	// addi r11,r4,8
	r11.s64 = ctx.r4.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82EA8180:
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r8,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r8.u32);
	// li r8,8
	ctx.r8.s64 = 8;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82EA819C:
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82ea819c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EA819C;
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne 0x82ea8180
	if (!cr0.eq) goto loc_82EA8180;
loc_82EA81B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA81C0"))) PPC_WEAK_FUNC(sub_82EA81C0);
PPC_FUNC_IMPL(__imp__sub_82EA81C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA81C8"))) PPC_WEAK_FUNC(sub_82EA81C8);
PPC_FUNC_IMPL(__imp__sub_82EA81C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32238
	r11.s64 = -2112749568;
	// addi r11,r11,-1560
	r11.s64 = r11.s64 + -1560;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA81D8"))) PPC_WEAK_FUNC(sub_82EA81D8);
PPC_FUNC_IMPL(__imp__sub_82EA81D8) {
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
	// lis r11,-32238
	r11.s64 = -2112749568;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,-1576
	r11.s64 = r11.s64 + -1576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82ea8204
	if (cr0.eq) goto loc_82EA8204;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82EA8204:
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

__attribute__((alias("__imp__sub_82EA8220"))) PPC_WEAK_FUNC(sub_82EA8220);
PPC_FUNC_IMPL(__imp__sub_82EA8220) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8228"))) PPC_WEAK_FUNC(sub_82EA8228);
PPC_FUNC_IMPL(__imp__sub_82EA8228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8230"))) PPC_WEAK_FUNC(sub_82EA8230);
PPC_FUNC_IMPL(__imp__sub_82EA8230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,-22012
	ctx.r3.s64 = r11.s64 + -22012;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8240"))) PPC_WEAK_FUNC(sub_82EA8240);
PPC_FUNC_IMPL(__imp__sub_82EA8240) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82eb2338
	sub_82EB2338(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ea829c
	if (cr6.eq) goto loc_82EA829C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82ea82e8
	goto loc_82EA82E8;
loc_82EA829C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82EA82E8:
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

__attribute__((alias("__imp__sub_82EA8308"))) PPC_WEAK_FUNC(sub_82EA8308);
PPC_FUNC_IMPL(__imp__sub_82EA8308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82eb2238
	sub_82EB2238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8324"))) PPC_WEAK_FUNC(sub_82EA8324);
PPC_FUNC_IMPL(__imp__sub_82EA8324) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8328"))) PPC_WEAK_FUNC(sub_82EA8328);
PPC_FUNC_IMPL(__imp__sub_82EA8328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EA834C"))) PPC_WEAK_FUNC(sub_82EA834C);
PPC_FUNC_IMPL(__imp__sub_82EA834C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8350"))) PPC_WEAK_FUNC(sub_82EA8350);
PPC_FUNC_IMPL(__imp__sub_82EA8350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8360"))) PPC_WEAK_FUNC(sub_82EA8360);
PPC_FUNC_IMPL(__imp__sub_82EA8360) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwzx r27,r10,r29
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// bne cr6,0x82ea83b0
	if (!cr6.eq) goto loc_82EA83B0;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
loc_82EA83B0:
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r28,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r28.s64 = temp.s64;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// ble cr6,0x82ea8458
	if (!cr6.gt) goto loc_82EA8458;
loc_82EA83D0:
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x82ea83e4
	if (!cr6.gt) goto loc_82EA83E4;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82ea83f0
	goto loc_82EA83F0;
loc_82EA83E4:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ea8430
	if (!cr6.gt) goto loc_82EA8430;
loc_82EA83F0:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82EA83F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea841c
	if (cr6.eq) goto loc_82EA841C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// b 0x82ea8420
	goto loc_82EA8420;
loc_82EA841C:
	// li r11,0
	r11.s64 = 0;
loc_82EA8420:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ea83f8
	if (!cr0.eq) goto loc_82EA83F8;
loc_82EA8430:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r30,r5,r30
	r30.s64 = r30.s64 - ctx.r5.s64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r28
	cr6.compare<int32_t>(r30.s32, r28.s32, xer);
	// bgt cr6,0x82ea83d0
	if (cr6.gt) goto loc_82EA83D0;
loc_82EA8458:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82EA8478"))) PPC_WEAK_FUNC(sub_82EA8478);
PPC_FUNC_IMPL(__imp__sub_82EA8478) {
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
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r28,r9,r29
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82ea8530
	if (!cr6.gt) goto loc_82EA8530;
loc_82EA84AC:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// ble cr6,0x82ea84bc
	if (!cr6.gt) goto loc_82EA84BC;
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82ea84c8
	goto loc_82EA84C8;
loc_82EA84BC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82ea8508
	if (!cr6.gt) goto loc_82EA8508;
loc_82EA84C8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82EA84D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea84f4
	if (cr6.eq) goto loc_82EA84F4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// b 0x82ea84f8
	goto loc_82EA84F8;
loc_82EA84F4:
	// li r11,0
	r11.s64 = 0;
loc_82EA84F8:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82ea84d0
	if (!cr0.eq) goto loc_82EA84D0;
loc_82EA8508:
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// subf r30,r5,r30
	r30.s64 = r30.s64 - ctx.r5.s64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x82ea84ac
	if (cr6.gt) goto loc_82EA84AC;
loc_82EA8530:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA8538"))) PPC_WEAK_FUNC(sub_82EA8538);
PPC_FUNC_IMPL(__imp__sub_82EA8538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r11,-16
	ctx.r6.s64 = r11.s64 + -16;
	// lwz r11,-12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EA8560"))) PPC_WEAK_FUNC(sub_82EA8560);
PPC_FUNC_IMPL(__imp__sub_82EA8560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,28
	r11.u64 = ctx.r4.u32 & 0xF;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// beq cr6,0x82ea8594
	if (cr6.eq) goto loc_82EA8594;
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// blr 
	return;
loc_82EA8594:
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA85A8"))) PPC_WEAK_FUNC(sub_82EA85A8);
PPC_FUNC_IMPL(__imp__sub_82EA85A8) {
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
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82ea85cc
	if (cr6.eq) goto loc_82EA85CC;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
loc_82EA85CC:
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,20
	r31.s64 = 20;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea8604
	if (cr6.eq) goto loc_82EA8604;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bne 0x82ea8604
	if (!cr0.eq) goto loc_82EA8604;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EA8604:
	// stwx r29,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA8610"))) PPC_WEAK_FUNC(sub_82EA8610);
PPC_FUNC_IMPL(__imp__sub_82EA8610) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-14660
	ctx.r9.s64 = r11.s64 + -14660;
	// li r31,0
	r31.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,20(r28)
	PPC_STORE_U32(r28.u32 + 20, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r31.u32);
	// addi r11,r28,56
	r11.s64 = r28.s64 + 56;
	// stw r31,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r31.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r8,40(r28)
	PPC_STORE_U32(r28.u32 + 40, ctx.r8.u32);
	// stw r31,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r31.u32);
loc_82EA865C:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bge 0x82ea865c
	if (!cr0.lt) goto loc_82EA865C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ea8694
	if (cr6.eq) goto loc_82EA8694;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_82EA8694:
	// lis r11,4095
	r11.s64 = 268369920;
	// stw r29,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r29.u32);
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82ea86ac
	if (!cr6.lt) goto loc_82EA86AC;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EA86AC:
	// stw r11,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r11.u32);
	// addi r10,r28,260
	ctx.r10.s64 = r28.s64 + 260;
loc_82EA86B4:
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// bgt cr6,0x82ea86c4
	if (cr6.gt) goto loc_82EA86C4;
	// li r11,1
	r11.s64 = 1;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA86C4:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// bgt cr6,0x82ea86d4
	if (cr6.gt) goto loc_82EA86D4;
	// li r11,2
	r11.s64 = 2;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA86D4:
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// bgt cr6,0x82ea86e4
	if (cr6.gt) goto loc_82EA86E4;
	// li r11,3
	r11.s64 = 3;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA86E4:
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(r31.s32, 48, xer);
	// bgt cr6,0x82ea86f4
	if (cr6.gt) goto loc_82EA86F4;
	// li r11,4
	r11.s64 = 4;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA86F4:
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(r31.s32, 64, xer);
	// bgt cr6,0x82ea8704
	if (cr6.gt) goto loc_82EA8704;
	// li r11,5
	r11.s64 = 5;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8704:
	// cmpwi cr6,r31,96
	cr6.compare<int32_t>(r31.s32, 96, xer);
	// bgt cr6,0x82ea8714
	if (cr6.gt) goto loc_82EA8714;
	// li r11,6
	r11.s64 = 6;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8714:
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// bgt cr6,0x82ea8724
	if (cr6.gt) goto loc_82EA8724;
	// li r11,7
	r11.s64 = 7;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8724:
	// cmpwi cr6,r31,160
	cr6.compare<int32_t>(r31.s32, 160, xer);
	// bgt cr6,0x82ea8734
	if (cr6.gt) goto loc_82EA8734;
	// li r11,8
	r11.s64 = 8;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8734:
	// cmpwi cr6,r31,192
	cr6.compare<int32_t>(r31.s32, 192, xer);
	// bgt cr6,0x82ea8744
	if (cr6.gt) goto loc_82EA8744;
	// li r11,9
	r11.s64 = 9;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8744:
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(r31.s32, 256, xer);
	// bgt cr6,0x82ea8754
	if (cr6.gt) goto loc_82EA8754;
	// li r11,10
	r11.s64 = 10;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8754:
	// cmpwi cr6,r31,320
	cr6.compare<int32_t>(r31.s32, 320, xer);
	// bgt cr6,0x82ea8764
	if (cr6.gt) goto loc_82EA8764;
	// li r11,11
	r11.s64 = 11;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8764:
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(r31.s32, 512, xer);
	// bgt cr6,0x82ea8774
	if (cr6.gt) goto loc_82EA8774;
	// li r11,12
	r11.s64 = 12;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8774:
	// cmpwi cr6,r31,1024
	cr6.compare<int32_t>(r31.s32, 1024, xer);
	// bgt cr6,0x82ea8784
	if (cr6.gt) goto loc_82EA8784;
	// li r11,13
	r11.s64 = 13;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8784:
	// cmpwi cr6,r31,2048
	cr6.compare<int32_t>(r31.s32, 2048, xer);
	// bgt cr6,0x82ea8794
	if (cr6.gt) goto loc_82EA8794;
	// li r11,14
	r11.s64 = 14;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA8794:
	// cmpwi cr6,r31,4096
	cr6.compare<int32_t>(r31.s32, 4096, xer);
	// bgt cr6,0x82ea87a4
	if (cr6.gt) goto loc_82EA87A4;
	// li r11,15
	r11.s64 = 15;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA87A4:
	// cmpwi cr6,r31,8192
	cr6.compare<int32_t>(r31.s32, 8192, xer);
	// bgt cr6,0x82ea87b4
	if (cr6.gt) goto loc_82EA87B4;
	// li r11,16
	r11.s64 = 16;
	// b 0x82ea87bc
	goto loc_82EA87BC;
loc_82EA87B4:
	// twi 31,r0,22
	// li r11,-1
	r11.s64 = -1;
loc_82EA87BC:
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// stbx r11,r10,r31
	PPC_STORE_U8(ctx.r10.u32 + r31.u32, r11.u8);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r7,r28
	PPC_STORE_U32(ctx.r7.u32 + r28.u32, r31.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,512
	cr6.compare<int32_t>(r31.s32, 512, xer);
	// ble cr6,0x82ea86b4
	if (!cr6.gt) goto loc_82EA86B4;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// addi r9,r28,776
	ctx.r9.s64 = r28.s64 + 776;
loc_82EA87E0:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// bgt cr6,0x82ea87f0
	if (cr6.gt) goto loc_82EA87F0;
	// li r11,1
	r11.s64 = 1;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA87F0:
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// bgt cr6,0x82ea8800
	if (cr6.gt) goto loc_82EA8800;
	// li r11,2
	r11.s64 = 2;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8800:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// bgt cr6,0x82ea8810
	if (cr6.gt) goto loc_82EA8810;
	// li r11,3
	r11.s64 = 3;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8810:
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bgt cr6,0x82ea8820
	if (cr6.gt) goto loc_82EA8820;
	// li r11,4
	r11.s64 = 4;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8820:
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// bgt cr6,0x82ea8830
	if (cr6.gt) goto loc_82EA8830;
	// li r11,5
	r11.s64 = 5;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8830:
	// cmpwi cr6,r10,96
	cr6.compare<int32_t>(ctx.r10.s32, 96, xer);
	// bgt cr6,0x82ea8840
	if (cr6.gt) goto loc_82EA8840;
	// li r11,6
	r11.s64 = 6;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8840:
	// cmpwi cr6,r10,128
	cr6.compare<int32_t>(ctx.r10.s32, 128, xer);
	// bgt cr6,0x82ea8850
	if (cr6.gt) goto loc_82EA8850;
	// li r11,7
	r11.s64 = 7;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8850:
	// cmpwi cr6,r10,160
	cr6.compare<int32_t>(ctx.r10.s32, 160, xer);
	// bgt cr6,0x82ea8860
	if (cr6.gt) goto loc_82EA8860;
	// li r11,8
	r11.s64 = 8;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8860:
	// cmpwi cr6,r10,192
	cr6.compare<int32_t>(ctx.r10.s32, 192, xer);
	// bgt cr6,0x82ea8870
	if (cr6.gt) goto loc_82EA8870;
	// li r11,9
	r11.s64 = 9;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8870:
	// cmpwi cr6,r10,256
	cr6.compare<int32_t>(ctx.r10.s32, 256, xer);
	// bgt cr6,0x82ea8880
	if (cr6.gt) goto loc_82EA8880;
	// li r11,10
	r11.s64 = 10;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8880:
	// cmpwi cr6,r10,320
	cr6.compare<int32_t>(ctx.r10.s32, 320, xer);
	// bgt cr6,0x82ea8890
	if (cr6.gt) goto loc_82EA8890;
	// li r11,11
	r11.s64 = 11;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA8890:
	// cmpwi cr6,r10,512
	cr6.compare<int32_t>(ctx.r10.s32, 512, xer);
	// bgt cr6,0x82ea88a0
	if (cr6.gt) goto loc_82EA88A0;
	// li r11,12
	r11.s64 = 12;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA88A0:
	// cmpwi cr6,r10,1024
	cr6.compare<int32_t>(ctx.r10.s32, 1024, xer);
	// bgt cr6,0x82ea88b0
	if (cr6.gt) goto loc_82EA88B0;
	// li r11,13
	r11.s64 = 13;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA88B0:
	// cmpwi cr6,r10,2048
	cr6.compare<int32_t>(ctx.r10.s32, 2048, xer);
	// bgt cr6,0x82ea88c0
	if (cr6.gt) goto loc_82EA88C0;
	// li r11,14
	r11.s64 = 14;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA88C0:
	// cmpwi cr6,r10,4096
	cr6.compare<int32_t>(ctx.r10.s32, 4096, xer);
	// bgt cr6,0x82ea88d0
	if (cr6.gt) goto loc_82EA88D0;
	// li r11,15
	r11.s64 = 15;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA88D0:
	// cmpwi cr6,r10,8192
	cr6.compare<int32_t>(ctx.r10.s32, 8192, xer);
	// bgt cr6,0x82ea88e0
	if (cr6.gt) goto loc_82EA88E0;
	// li r11,16
	r11.s64 = 16;
	// b 0x82ea88e8
	goto loc_82EA88E8;
loc_82EA88E0:
	// twi 31,r0,22
	// li r11,-1
	r11.s64 = -1;
loc_82EA88E8:
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r28
	PPC_STORE_U32(ctx.r7.u32 + r28.u32, ctx.r10.u32);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// cmpwi cr6,r10,9216
	cr6.compare<int32_t>(ctx.r10.s32, 9216, xer);
	// blt cr6,0x82ea87e0
	if (cr6.lt) goto loc_82EA87E0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA8918"))) PPC_WEAK_FUNC(sub_82EA8918);
PPC_FUNC_IMPL(__imp__sub_82EA8918) {
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
	// li r31,16
	r31.s64 = 16;
	// addi r30,r29,188
	r30.s64 = r29.s64 + 188;
loc_82EA8930:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea8948
	if (cr6.eq) goto loc_82EA8948;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea8478
	sub_82EA8478(ctx, base);
loc_82EA8948:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bge 0x82ea8930
	if (!cr0.lt) goto loc_82EA8930;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA8960"))) PPC_WEAK_FUNC(sub_82EA8960);
PPC_FUNC_IMPL(__imp__sub_82EA8960) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,52(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x82ea89a8
	if (!cr6.eq) goto loc_82EA89A8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r10,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
loc_82EA89A8:
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82ea89b4
	if (cr6.lt) goto loc_82EA89B4;
	// li r30,4
	r30.s64 = 4;
loc_82EA89B4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r29,48
	r11.s64 = r29.s64 + 48;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r7,r29,7
	ctx.r7.s64 = r29.s64 + 7;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// ble cr6,0x82ea8a20
	if (!cr6.gt) goto loc_82EA8A20;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
loc_82EA89F8:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// bne 0x82ea89f8
	if (!cr0.eq) goto loc_82EA89F8;
loc_82EA8A20:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA8A30"))) PPC_WEAK_FUNC(sub_82EA8A30);
PPC_FUNC_IMPL(__imp__sub_82EA8A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,8192
	cr6.compare<int32_t>(ctx.r4.s32, 8192, xer);
	// bgt cr6,0x82ea8a9c
	if (cr6.gt) goto loc_82EA8A9C;
	// cmpwi cr6,r4,512
	cr6.compare<int32_t>(ctx.r4.s32, 512, xer);
	// bgt cr6,0x82ea8a50
	if (cr6.gt) goto loc_82EA8A50;
	// add r11,r4,r3
	r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 260);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// b 0x82ea8a64
	goto loc_82EA8A64;
loc_82EA8A50:
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// srawi r11,r11,10
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FF) != 0);
	r11.s64 = r11.s32 >> 10;
	// addi r10,r11,194
	ctx.r10.s64 = r11.s64 + 194;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
loc_82EA8A64:
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea8a98
	if (cr6.eq) goto loc_82EA8A98;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// blr 
	return;
loc_82EA8A98:
	// b 0x82ea8960
	sub_82EA8960(ctx, base);
	return;
loc_82EA8A9C:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82EA8AB0"))) PPC_WEAK_FUNC(sub_82EA8AB0);
PPC_FUNC_IMPL(__imp__sub_82EA8AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r5,8192
	cr6.compare<int32_t>(ctx.r5.s32, 8192, xer);
	// bgt cr6,0x82ea8b38
	if (cr6.gt) goto loc_82EA8B38;
	// cmpwi cr6,r5,512
	cr6.compare<int32_t>(ctx.r5.s32, 512, xer);
	// bgt cr6,0x82ea8ad8
	if (cr6.gt) goto loc_82EA8AD8;
	// add r11,r5,r3
	r11.u64 = ctx.r5.u64 + ctx.r3.u64;
	// lbz r10,260(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 260);
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// b 0x82ea8aec
	goto loc_82EA8AEC;
loc_82EA8AD8:
	// addi r11,r5,-1
	r11.s64 = ctx.r5.s64 + -1;
	// srawi r11,r11,10
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FF) != 0);
	r11.s64 = r11.s32 >> 10;
	// addi r10,r11,194
	ctx.r10.s64 = r11.s64 + 194;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r3
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
loc_82EA8AEC:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x82ea8b10
	if (cr6.lt) goto loc_82EA8B10;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82ea8360
	sub_82EA8360(ctx, base);
	return;
loc_82EA8B10:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// blr 
	return;
loc_82EA8B38:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
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

__attribute__((alias("__imp__sub_82EA8B50"))) PPC_WEAK_FUNC(sub_82EA8B50);
PPC_FUNC_IMPL(__imp__sub_82EA8B50) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ea8bcc
	if (!cr6.eq) goto loc_82EA8BCC;
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
	// addi r4,r11,-1504
	ctx.r4.s64 = r11.s64 + -1504;
	// bl 0x82eadae8
	sub_82EADAE8(ctx, base);
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// lis r5,11243
	ctx.r5.s64 = 736821248;
	// li r8,301
	ctx.r8.s64 = 301;
	// addi r7,r9,-1532
	ctx.r7.s64 = ctx.r9.s64 + -1532;
	// lwz r3,30588(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30588);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,47714
	ctx.r5.u64 = ctx.r5.u64 | 47714;
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
loc_82EA8BCC:
	// addi r30,r29,1024
	r30.s64 = r29.s64 + 1024;
	// cmpwi cr6,r30,4096
	cr6.compare<int32_t>(r30.s32, 4096, xer);
	// bgt cr6,0x82ea8bdc
	if (cr6.gt) goto loc_82EA8BDC;
	// li r30,4096
	r30.s64 = 4096;
loc_82EA8BDC:
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// add r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 + r29.u64;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// add r7,r3,r30
	ctx.r7.u64 = ctx.r3.u64 + r30.u64;
	// ld r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// std r6,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r6.u64);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// stw r7,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r7.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA8C30"))) PPC_WEAK_FUNC(sub_82EA8C30);
PPC_FUNC_IMPL(__imp__sub_82EA8C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// ld r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + -16);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// std r7,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r7.u64);
	// ld r11,-8(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -8);
	// std r11,40(r9)
	PPC_STORE_U64(ctx.r9.u32 + 40, r11.u64);
	// b 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8C60"))) PPC_WEAK_FUNC(sub_82EA8C60);
PPC_FUNC_IMPL(__imp__sub_82EA8C60) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,564
	ctx.r10.s64 = 36962304;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// ori r9,r10,22102
	ctx.r9.u64 = ctx.r10.u64 | 22102;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8CB8"))) PPC_WEAK_FUNC(sub_82EA8CB8);
PPC_FUNC_IMPL(__imp__sub_82EA8CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// ori r8,r9,48879
	ctx.r8.u64 = ctx.r9.u64 | 48879;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stw r8,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r8.u32);
	// b 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8CE4"))) PPC_WEAK_FUNC(sub_82EA8CE4);
PPC_FUNC_IMPL(__imp__sub_82EA8CE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8CE8"))) PPC_WEAK_FUNC(sub_82EA8CE8);
PPC_FUNC_IMPL(__imp__sub_82EA8CE8) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r30,r31,r5
	r30.u64 = r31.u64 + ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// addi r8,r11,15
	ctx.r8.s64 = r11.s64 + 15;
	// lis r9,564
	ctx.r9.s64 = 36962304;
	// andc r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// ori r7,r9,22102
	ctx.r7.u64 = ctx.r9.u64 | 22102;
	// subf r5,r3,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r3.s64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r7,-16(r6)
	PPC_STORE_U32(ctx.r6.u32 + -16, ctx.r7.u32);
	// stw r30,-12(r6)
	PPC_STORE_U32(ctx.r6.u32 + -12, r30.u32);
	// stw r29,-8(r6)
	PPC_STORE_U32(ctx.r6.u32 + -8, r29.u32);
	// stw r5,-4(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA8D48"))) PPC_WEAK_FUNC(sub_82EA8D48);
PPC_FUNC_IMPL(__imp__sub_82EA8D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// ori r7,r9,48879
	ctx.r7.u64 = ctx.r9.u64 | 48879;
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// stw r7,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r7.u32);
	// subf r4,r8,r11
	ctx.r4.s64 = r11.s64 - ctx.r8.s64;
	// b 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8D78"))) PPC_WEAK_FUNC(sub_82EA8D78);
PPC_FUNC_IMPL(__imp__sub_82EA8D78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8D80"))) PPC_WEAK_FUNC(sub_82EA8D80);
PPC_FUNC_IMPL(__imp__sub_82EA8D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v31{};
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32238
	r11.s64 = -2112749568;
	// vaddfp v0,v13,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v9,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// addi r10,r11,4512
	ctx.r10.s64 = r11.s64 + 4512;
	// vspltw v8,v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x0));
	// vpermwi128 v11,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r9,30592
	ctx.r7.s64 = ctx.r9.s64 + 30592;
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v10,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v13,r7,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v4,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v3,v9,v0
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v2,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v31,v4,v8
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vnmsubfp v29,v9,v4,v10
	simde_mm_store_ps(v29.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v28,v2,v8,v3
	simde_mm_store_ps(v28.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v3.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v27,v11,v0,v31
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v31.f32)));
	// vnmsubfp v26,v11,v2,v29
	simde_mm_store_ps(v26.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v29.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v19,v28,v27,v13
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v27.u8))));
	// vsel v18,v27,v26,v13
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v17,v26,v28,v13
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v28.u8))));
	// vsel v16,v19,v26,v12
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v19.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v15,v18,v28,v12
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v28.u8))));
	// vsel v14,v17,v27,v12
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v17.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v27.u8))));
	// stvx128 v16,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r3,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8E08"))) PPC_WEAK_FUNC(sub_82EA8E08);
PPC_FUNC_IMPL(__imp__sub_82EA8E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v31{};
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
	// bl 0x82eaf460
	sub_82EAF460(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r8,r10,4512
	ctx.r8.s64 = ctx.r10.s64 + 4512;
	// addi r7,r9,30592
	ctx.r7.s64 = ctx.r9.s64 + 30592;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,128
	ctx.r6.s64 = 128;
	// vaddfp v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v9,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vspltw v8,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v11,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v12,r7,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v4,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v3,v9,v13
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v2,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v0,r7,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v31,v4,v8
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vnmsubfp v29,v9,v4,v10
	simde_mm_store_ps(v29.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v28,v2,v8,v3
	simde_mm_store_ps(v28.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v3.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v27,v11,v13,v31
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v31.f32)));
	// vnmsubfp v26,v11,v2,v29
	simde_mm_store_ps(v26.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v29.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v19,v28,v27,v0
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v27.u8))));
	// vsel v18,v27,v26,v0
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v17,v26,v28,v0
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v28.u8))));
	// vsel v16,v19,v26,v12
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v19.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v15,v18,v28,v12
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v28.u8))));
	// vsel v14,v17,v27,v12
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v17.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v27.u8))));
	// stvx128 v16,r31,r3
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82EA8EC0"))) PPC_WEAK_FUNC(sub_82EA8EC0);
PPC_FUNC_IMPL(__imp__sub_82EA8EC0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stvewx v13,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,2244(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2244);
	f0.f64 = double(temp.f32);
	// lfs f13,-32(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// ble cr6,0x82ea8ef8
	if (!cr6.gt) goto loc_82EA8EF8;
loc_82EA8EEC:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EA8EF8:
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v13,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r11
	ea = (r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bgt cr6,0x82ea8eec
	if (cr6.gt) goto loc_82EA8EEC;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v12,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f1
	cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// bgt cr6,0x82ea8eec
	if (cr6.gt) goto loc_82EA8EEC;
	// lvx128 v13,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v12,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v11,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v9,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// vpermwi128 v8,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r9,r11,-14192
	ctx.r9.s64 = r11.s64 + -14192;
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lis r8,-31943
	ctx.r8.s64 = -2093416448;
	// vspltisw v7,-1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// vmulfp128 v6,v12,v9
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)));
	// li r7,224
	ctx.r7.s64 = 224;
	// vmulfp128 v5,v11,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// addi r6,r8,30848
	ctx.r6.s64 = ctx.r8.s64 + 30848;
	// lvx128 v4,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v3,v4,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), 0xFF));
	// vsubfp v2,v5,v6
	simde_mm_store_ps(ctx.v2.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r6,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v1,v2,v10
	simde_mm_store_ps(ctx.v1.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vand v31,v1,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpgefp v30,v3,v31
	simde_mm_store_ps(v30.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(v31.f32)));
	// vor v29,v30,v13
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vcmpequw. v28,v29,v7
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	cr6.setFromMask(simde_mm_load_ps(v28.f32), 0xF);
	// mfocrf r5,2
	ctx.r5.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r4,r5,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA8FC0"))) PPC_WEAK_FUNC(sub_82EA8FC0);
PPC_FUNC_IMPL(__imp__sub_82EA8FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v31{};
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82eaf768
	sub_82EAF768(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-31943
	ctx.r9.s64 = -2093416448;
	// addi r8,r10,4512
	ctx.r8.s64 = ctx.r10.s64 + 4512;
	// addi r7,r9,30592
	ctx.r7.s64 = ctx.r9.s64 + 30592;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,128
	ctx.r6.s64 = 128;
	// vaddfp v13,v0,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v9,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vspltw v8,v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x0));
	// li r5,32
	ctx.r5.s64 = 32;
	// lvx128 v10,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v11,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,32
	ctx.r3.s64 = 32;
	// lvx128 v12,r7,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v4,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v3,v9,v13
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v2,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v0,r7,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v31,v4,v8
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vnmsubfp v29,v9,v4,v10
	simde_mm_store_ps(v29.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v28,v2,v8,v3
	simde_mm_store_ps(v28.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v3.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v27,v11,v13,v31
	simde_mm_store_ps(v27.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(v31.f32)));
	// vnmsubfp v26,v11,v2,v29
	simde_mm_store_ps(v26.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(v29.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v19,v28,v27,v0
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v28.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v27.u8))));
	// vsel v18,v27,v26,v0
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v27.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v17,v26,v28,v0
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v26.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v28.u8))));
	// vsel v16,v19,v26,v12
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v19.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v26.u8))));
	// vsel v15,v18,v28,v12
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v18.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v28.u8))));
	// vsel v14,v17,v27,v12
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v17.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v27.u8))));
	// stvx128 v16,r31,r3
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82EA9080"))) PPC_WEAK_FUNC(sub_82EA9080);
PPC_FUNC_IMPL(__imp__sub_82EA9080) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9088"))) PPC_WEAK_FUNC(sub_82EA9088);
PPC_FUNC_IMPL(__imp__sub_82EA9088) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9090"))) PPC_WEAK_FUNC(sub_82EA9090);
PPC_FUNC_IMPL(__imp__sub_82EA9090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// vrlimi128 v13,v0,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// li r11,48
	r11.s64 = 48;
	// addi r7,r8,4512
	ctx.r7.s64 = ctx.r8.s64 + 4512;
	// stvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v12,v0,1,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v12,r4,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v11,v0,1,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v11,r4,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v10,v0,1,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v10,r4,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA90E0"))) PPC_WEAK_FUNC(sub_82EA90E0);
PPC_FUNC_IMPL(__imp__sub_82EA90E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r8,-32238
	ctx.r8.s64 = -2112749568;
	// vrlimi128 v13,v0,1,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// li r11,48
	r11.s64 = 48;
	// addi r7,r8,4512
	ctx.r7.s64 = ctx.r8.s64 + 4512;
	// stvx128 v13,r0,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v12,v0,1,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v12,r3,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v11,v0,1,0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v11,r3,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v10,v0,1,0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 228), 1));
	// stvx128 v10,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9130"))) PPC_WEAK_FUNC(sub_82EA9130);
PPC_FUNC_IMPL(__imp__sub_82EA9130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,32640
	ctx.r9.s64 = 2139095040;
loc_82EA913C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r7,r8,0,1,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ea9170
	if (cr6.eq) goto loc_82EA9170;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// blt cr6,0x82ea913c
	if (cr6.lt) goto loc_82EA913C;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82EA9170:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9180"))) PPC_WEAK_FUNC(sub_82EA9180);
PPC_FUNC_IMPL(__imp__sub_82EA9180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82eb13f0
	sub_82EB13F0(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea920c
	if (cr6.eq) goto loc_82EA920C;
	// li r11,48
	r11.s64 = 48;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// vspltisw v13,-1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r10,-14192
	ctx.r8.s64 = ctx.r10.s64 + -14192;
	// lis r7,-31943
	ctx.r7.s64 = -2093416448;
	// lvx128 v12,r30,r11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,224
	ctx.r6.s64 = 224;
	// lvx128 v11,r31,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r7,30848
	ctx.r5.s64 = ctx.r7.s64 + 30848;
	// vsubfp v10,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v9,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v8,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vand v7,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r5,r6
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	r11.s64 = 1;
	// vcmpgefp v6,v8,v7
	simde_mm_store_ps(ctx.v6.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vor v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpequw. v4,v5,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_cmpeq_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	cr6.setFromMask(simde_mm_load_ps(ctx.v4.f32), 0xF);
	// blt cr6,0x82ea9210
	if (cr6.lt) goto loc_82EA9210;
loc_82EA920C:
	// li r11,0
	r11.s64 = 0;
loc_82EA9210:
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA9228"))) PPC_WEAK_FUNC(sub_82EA9228);
PPC_FUNC_IMPL(__imp__sub_82EA9228) {
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
	// bl 0x82eb1300
	sub_82EB1300(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lvx128 v11,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	r11.s64 = 48;
	// addi r9,r10,-12080
	ctx.r9.s64 = ctx.r10.s64 + -12080;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v13,r30,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r30.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vxor v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v10,r31,r8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r31,r7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v8,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v7,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v6,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vmulfp128 v5,v11,v8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v4,v10,v7,v5
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v3,v9,v6,v4
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v6.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r31,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA92A8"))) PPC_WEAK_FUNC(sub_82EA92A8);
PPC_FUNC_IMPL(__imp__sub_82EA92A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,32
	ctx.r7.s64 = 32;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r5,48
	r11.s64 = ctx.r5.s64 + 48;
	// subf r9,r5,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lvx128 v13,r4,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r4,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82EA92C8:
	// lvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// vspltw v10,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vspltw v9,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xAA));
	// vspltw v8,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vmulfp128 v7,v0,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v13,v9,v7
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v5,v12,v8,v6
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// stvx128 v5,r9,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r9.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bge 0x82ea92c8
	if (!cr0.lt) goto loc_82EA92C8;
	// addi r11,r3,48
	r11.s64 = ctx.r3.s64 + 48;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r4,r10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v0,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9310"))) PPC_WEAK_FUNC(sub_82EA9310);
PPC_FUNC_IMPL(__imp__sub_82EA9310) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82eb1260
	sub_82EB1260(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea92a8
	sub_82EA92A8(ctx, base);
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

__attribute__((alias("__imp__sub_82EA9360"))) PPC_WEAK_FUNC(sub_82EA9360);
PPC_FUNC_IMPL(__imp__sub_82EA9360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r7,r4,16
	ctx.r7.s64 = ctx.r4.s64 + 16;
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r5,32
	r11.s64 = ctx.r5.s64 + 32;
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r5,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r5.s64;
	// lvx128 v11,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,4496
	ctx.r9.s64 = ctx.r9.s64 + 4496;
loc_82EA9388:
	// lvx128 v10,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v11,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v7,v13,v10
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v6,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v5,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// stvx128 v4,r8,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bge 0x82ea9388
	if (!cr0.lt) goto loc_82EA9388;
	// li r11,48
	r11.s64 = 48;
	// lvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r4,r11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r5,r11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v8,v9,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v7,v13,v8
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v6,v12,v8
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v5,v11,v8
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmrghw v4,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v3,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v2,v3,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// stvx128 v2,r3,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA93F8"))) PPC_WEAK_FUNC(sub_82EA93F8);
PPC_FUNC_IMPL(__imp__sub_82EA93F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r3,r10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r3,r9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stvx128 v0,r0,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82ea92a8
	sub_82EA92A8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9460"))) PPC_WEAK_FUNC(sub_82EA9460);
PPC_FUNC_IMPL(__imp__sub_82EA9460) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea9228
	sub_82EA9228(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ea92a8
	sub_82EA92A8(ctx, base);
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

__attribute__((alias("__imp__sub_82EA94B0"))) PPC_WEAK_FUNC(sub_82EA94B0);
PPC_FUNC_IMPL(__imp__sub_82EA94B0) {
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
	// bl 0x82eaa928
	sub_82EAA928(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea9534
	if (cr6.eq) goto loc_82EA9534;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82ea9534
	if (cr6.eq) goto loc_82EA9534;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82ea9518
	if (cr6.lt) goto loc_82EA9518;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82ea9534
	goto loc_82EA9534;
loc_82EA9518:
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// addi r10,r11,64
	ctx.r10.s64 = r11.s64 + 64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r31.u32);
loc_82EA9534:
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

__attribute__((alias("__imp__sub_82EA9550"))) PPC_WEAK_FUNC(sub_82EA9550);
PPC_FUNC_IMPL(__imp__sub_82EA9550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// b 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9560"))) PPC_WEAK_FUNC(sub_82EA9560);
PPC_FUNC_IMPL(__imp__sub_82EA9560) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82ea959c
	if (!cr6.gt) goto loc_82EA959C;
loc_82EA9588:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bgt 0x82ea9588
	if (cr0.gt) goto loc_82EA9588;
loc_82EA959C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea95cc
	if (cr6.eq) goto loc_82EA95CC;
loc_82EA95A8:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ea95a8
	if (!cr6.eq) goto loc_82EA95A8;
loc_82EA95CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EA95D8"))) PPC_WEAK_FUNC(sub_82EA95D8);
PPC_FUNC_IMPL(__imp__sub_82EA95D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,2
	r11.s64 = 2;
	// stb r9,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r9.u8);
	// stb r10,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r10.u8);
	// addi r4,r3,60
	ctx.r4.s64 = ctx.r3.s64 + 60;
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, r11.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r10,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r10.u8);
	// stb r9,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r9.u8);
	// stb r11,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, r11.u8);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// b 0x82eb2a58
	sub_82EB2A58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9610"))) PPC_WEAK_FUNC(sub_82EA9610);
PPC_FUNC_IMPL(__imp__sub_82EA9610) {
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
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9640"))) PPC_WEAK_FUNC(sub_82EA9640);
PPC_FUNC_IMPL(__imp__sub_82EA9640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// lwz r10,36(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9670
	if (cr6.eq) goto loc_82EA9670;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// b 0x82eaa960
	sub_82EAA960(ctx, base);
	return;
loc_82EA9670:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// b 0x82eaa960
	sub_82EAA960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9690"))) PPC_WEAK_FUNC(sub_82EA9690);
PPC_FUNC_IMPL(__imp__sub_82EA9690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9698"))) PPC_WEAK_FUNC(sub_82EA9698);
PPC_FUNC_IMPL(__imp__sub_82EA9698) {
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
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82eaa588
	sub_82EAA588(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82eaa588
	sub_82EAA588(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9700"))) PPC_WEAK_FUNC(sub_82EA9700);
PPC_FUNC_IMPL(__imp__sub_82EA9700) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r29,r11,31184
	r29.s64 = r11.s64 + 31184;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea9758
	if (cr6.eq) goto loc_82EA9758;
	// stw r31,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r31.u32);
loc_82EA9758:
	// li r27,-1
	r27.s64 = -1;
	// stw r29,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r29.u32);
	// stw r31,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// std r11,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b9fc
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,20
	r29.s64 = 20;
	// std r27,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r27.u64);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea97b4
	if (cr6.eq) goto loc_82EA97B4;
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// b 0x82ea97c4
	goto loc_82EA97C4;
loc_82EA97B4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82EA97C4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea980c
	if (cr6.eq) goto loc_82EA980C;
	// stw r30,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r30.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r30.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r30.u32);
	// stw r30,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r30.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r30.u32);
	// stw r30,48(r11)
	PPC_STORE_U32(r11.u32 + 48, r30.u32);
	// stw r30,52(r11)
	PPC_STORE_U32(r11.u32 + 52, r30.u32);
	// stw r30,56(r11)
	PPC_STORE_U32(r11.u32 + 56, r30.u32);
	// stw r30,60(r11)
	PPC_STORE_U32(r11.u32 + 60, r30.u32);
	// stw r30,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r30.u32);
	// stw r30,68(r11)
	PPC_STORE_U32(r11.u32 + 68, r30.u32);
	// stw r30,72(r11)
	PPC_STORE_U32(r11.u32 + 72, r30.u32);
	// stw r30,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r30.u32);
	// b 0x82ea9810
	goto loc_82EA9810;
loc_82EA980C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82EA9810:
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwzx r11,r29,r28
	r11.u64 = PPC_LOAD_U32(r29.u32 + r28.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea9840
	if (cr6.eq) goto loc_82EA9840;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r9.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r8.u32);
	// b 0x82ea9850
	goto loc_82EA9850;
loc_82EA9840:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8960
	sub_82EA8960(ctx, base);
loc_82EA9850:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea9868
	if (cr6.eq) goto loc_82EA9868;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82eaa8e8
	sub_82EAA8E8(ctx, base);
	// b 0x82ea986c
	goto loc_82EA986C;
loc_82EA9868:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82EA986C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r24,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r24.u32);
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r30,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82eaa588
	sub_82EAA588(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82eaa588
	sub_82EAA588(ctx, base);
	// std r27,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r27.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,2
	r11.s64 = 2;
	// stb r30,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r30.u8);
	// stb r10,62(r31)
	PPC_STORE_U8(r31.u32 + 62, ctx.r10.u8);
	// addi r4,r31,60
	ctx.r4.s64 = r31.s64 + 60;
	// stb r11,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r11.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r10,65(r31)
	PPC_STORE_U8(r31.u32 + 65, ctx.r10.u8);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stb r30,66(r31)
	PPC_STORE_U8(r31.u32 + 66, r30.u8);
	// stb r11,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r11.u8);
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82EA9918"))) PPC_WEAK_FUNC(sub_82EA9918);
PPC_FUNC_IMPL(__imp__sub_82EA9918) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,56(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bne cr6,0x82ea9964
	if (!cr6.eq) goto loc_82EA9964;
	// bl 0x82eaa798
	sub_82EAA798(ctx, base);
	// b 0x82ea9968
	goto loc_82EA9968;
loc_82EA9964:
	// bl 0x82eaa6e0
	sub_82EAA6E0(ctx, base);
loc_82EA9968:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea99b4
	if (cr0.eq) goto loc_82EA99B4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9994
	if (cr6.eq) goto loc_82EA9994;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// b 0x82ea99ac
	goto loc_82EA99AC;
loc_82EA9994:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea99b4
	if (cr6.eq) goto loc_82EA99B4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
loc_82EA99AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
loc_82EA99B4:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r11,32(r28)
	PPC_STORE_U64(r28.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EA99D0"))) PPC_WEAK_FUNC(sub_82EA99D0);
PPC_FUNC_IMPL(__imp__sub_82EA99D0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r31,56(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// ble cr6,0x82ea9a9c
	if (!cr6.gt) goto loc_82EA9A9C;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r11,r31
	r27.u64 = r11.u64 + r31.u64;
loc_82EA9A1C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bne cr6,0x82ea9a38
	if (!cr6.eq) goto loc_82EA9A38;
	// bl 0x82eaa798
	sub_82EAA798(ctx, base);
	// b 0x82ea9a3c
	goto loc_82EA9A3C;
loc_82EA9A38:
	// bl 0x82eaa6e0
	sub_82EAA6E0(ctx, base);
loc_82EA9A3C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea9a88
	if (cr0.eq) goto loc_82EA9A88;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9a68
	if (cr6.eq) goto loc_82EA9A68;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// b 0x82ea9a80
	goto loc_82EA9A80;
loc_82EA9A68:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9a88
	if (cr6.eq) goto loc_82EA9A88;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 88);
loc_82EA9A80:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
loc_82EA9A88:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82ea9a1c
	if (cr6.lt) goto loc_82EA9A1C;
loc_82EA9A9C:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// std r11,32(r28)
	PPC_STORE_U64(r28.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EA9AB8"))) PPC_WEAK_FUNC(sub_82EA9AB8);
PPC_FUNC_IMPL(__imp__sub_82EA9AB8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,24
	r27.s64 = 24;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9b10
	if (!cr6.lt) goto loc_82EA9B10;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,-1244
	ctx.r8.s64 = ctx.r9.s64 + -1244;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82EA9B10:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// li r25,-1
	r25.s64 = -1;
	// addi r20,r11,-14788
	r20.s64 = r11.s64 + -14788;
	// addi r23,r10,-1260
	r23.s64 = ctx.r10.s64 + -1260;
loc_82EA9B24:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// lwz r31,56(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// beq cr6,0x82ea9ba8
	if (cr6.eq) goto loc_82EA9BA8;
	// lwz r11,76(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ea9b90
	if (!cr6.eq) goto loc_82EA9B90;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bne cr6,0x82ea9b8c
	if (!cr6.eq) goto loc_82EA9B8C;
	// bl 0x82eaa798
	sub_82EAA798(ctx, base);
	// b 0x82ea9b90
	goto loc_82EA9B90;
loc_82EA9B8C:
	// bl 0x82eaa6e0
	sub_82EAA6E0(ctx, base);
loc_82EA9B90:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x82ea9e08
	if (cr6.eq) goto loc_82EA9E08;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82EA9BA8:
	// addi r11,r24,15
	r11.s64 = r24.s64 + 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82ea9bf8
	if (!cr6.gt) goto loc_82EA9BF8;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
loc_82EA9BC8:
	// lbzx r11,r8,r10
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ea9d44
	if (!cr6.eq) goto loc_82EA9D44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// blt cr6,0x82ea9bc8
	if (cr6.lt) goto loc_82EA9BC8;
loc_82EA9BF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82ea9c48
	if (!cr6.eq) goto loc_82EA9C48;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ea9c48
	if (!cr0.eq) goto loc_82EA9C48;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ea9ef4
	if (cr6.eq) goto loc_82EA9EF4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82ea9c40
	if (!cr6.gt) goto loc_82EA9C40;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
loc_82EA9C40:
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// beq cr6,0x82ea9f00
	if (cr6.eq) goto loc_82EA9F00;
loc_82EA9C48:
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// beq cr6,0x82ea9e54
	if (cr6.eq) goto loc_82EA9E54;
	// cmpwi cr6,r24,2
	cr6.compare<int32_t>(r24.s32, 2, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x82ea9cd0
	if (cr6.eq) goto loc_82EA9CD0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// std r25,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r25.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9c98
	if (!cr6.lt) goto loc_82EA9C98;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EA9C98:
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// bl 0x82eaa930
	sub_82EAA930(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9b24
	if (!cr6.lt) goto loc_82EA9B24;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x82ea9b24
	goto loc_82EA9B24;
loc_82EA9CD0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// std r25,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r25.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9d0c
	if (!cr6.lt) goto loc_82EA9D0C;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EA9D0C:
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// bl 0x82eaa930
	sub_82EAA930(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9b24
	if (!cr6.lt) goto loc_82EA9B24;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x82ea9b24
	goto loc_82EA9B24;
loc_82EA9D44:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EA9D60:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82ea9d60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EA9D60;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82ea9d94
	if (!cr6.eq) goto loc_82EA9D94;
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82EA9D94:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ea9dd0
	if (!cr6.eq) goto loc_82EA9DD0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaa798
	sub_82EAA798(ctx, base);
loc_82EA9DD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea9eb4
	if (cr0.eq) goto loc_82EA9EB4;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9e94
	if (cr6.eq) goto loc_82EA9E94;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// b 0x82ea9eac
	goto loc_82EA9EAC;
loc_82EA9E08:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ea9e54
	if (cr0.eq) goto loc_82EA9E54;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9e34
	if (cr6.eq) goto loc_82EA9E34;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// b 0x82ea9e4c
	goto loc_82EA9E4C;
loc_82EA9E34:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9e54
	if (cr6.eq) goto loc_82EA9E54;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
loc_82EA9E4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
loc_82EA9E54:
	// std r25,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r25.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9e88
	if (!cr6.lt) goto loc_82EA9E88;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EA9E88:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831b0b58
	return;
loc_82EA9E94:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ea9eb4
	if (cr6.eq) goto loc_82EA9EB4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
loc_82EA9EAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
loc_82EA9EB4:
	// std r25,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r25.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9ee8
	if (!cr6.lt) goto loc_82EA9EE8;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EA9EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831b0b58
	return;
loc_82EA9EF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea9560
	sub_82EA9560(ctx, base);
loc_82EA9F00:
	// std r25,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r25.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9f34
	if (!cr6.lt) goto loc_82EA9F34;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EA9F34:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82EA9F40"))) PPC_WEAK_FUNC(sub_82EA9F40);
PPC_FUNC_IMPL(__imp__sub_82EA9F40) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,24
	r27.s64 = 24;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9f9c
	if (!cr6.lt) goto loc_82EA9F9C;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,-1244
	ctx.r8.s64 = ctx.r9.s64 + -1244;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r5.u32);
loc_82EA9F9C:
	// addi r11,r19,15
	r11.s64 = r19.s64 + 15;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,1
	r31.s64 = 1;
	// add r21,r11,r29
	r21.u64 = r11.u64 + r29.u64;
	// lis r11,-32238
	r11.s64 = -2112749568;
	// li r22,0
	r22.s64 = 0;
	// li r26,-1
	r26.s64 = -1;
	// addi r23,r11,-1260
	r23.s64 = r11.s64 + -1260;
	// addi r20,r10,-14788
	r20.s64 = ctx.r10.s64 + -14788;
loc_82EA9FC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r30,56(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// beq cr6,0x82eaa014
	if (cr6.eq) goto loc_82EAA014;
	// addi r11,r24,1
	r11.s64 = r24.s64 + 1;
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bne cr6,0x82eaa004
	if (!cr6.eq) goto loc_82EAA004;
	// bl 0x82eaa798
	sub_82EAA798(ctx, base);
	// b 0x82eaa008
	goto loc_82EAA008;
loc_82EAA004:
	// bl 0x82eaa6e0
	sub_82EAA6E0(ctx, base);
loc_82EAA008:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82EAA014:
	// lbz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U8(r21.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x82eaa058
	if (!cr6.gt) goto loc_82EAA058;
	// addi r8,r21,1
	ctx.r8.s64 = r21.s64 + 1;
loc_82EAA028:
	// lbzx r11,r8,r9
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82eaa10c
	if (!cr6.eq) goto loc_82EAA10C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x82eaa028
	if (cr6.lt) goto loc_82EAA028;
loc_82EAA058:
	// li r11,1
	r11.s64 = 1;
loc_82EAA05C:
	// mr r31,r22
	r31.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eaa21c
	if (cr6.eq) goto loc_82EAA21C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eaa084
	if (!cr6.eq) goto loc_82EAA084;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82eaa2a8
	if (cr0.eq) goto loc_82EAA2A8;
loc_82EAA084:
	// cmpwi cr6,r17,1
	cr6.compare<int32_t>(r17.s32, 1, xer);
	// beq cr6,0x82eaa2f4
	if (cr6.eq) goto loc_82EAA2F4;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(r19.s32, 2, xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// beq cr6,0x82eaa1a8
	if (cr6.eq) goto loc_82EAA1A8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// std r26,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r26.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaa0d4
	if (!cr6.lt) goto loc_82EAA0D4;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EAA0D4:
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// bl 0x82eaa930
	sub_82EAA930(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9fc4
	if (!cr6.lt) goto loc_82EA9FC4;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x82ea9fc4
	goto loc_82EA9FC4;
loc_82EAA10C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EAA128:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82eaa128
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAA128;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82eaa158
	if (!cr6.eq) goto loc_82EAA158;
	// stw r22,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r22.u32);
loc_82EAA158:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,72(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82eaa194
	if (!cr6.eq) goto loc_82EAA194;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaa798
	sub_82EAA798(ctx, base);
loc_82EAA194:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r22
	r11.u64 = r22.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82eaa05c
	goto loc_82EAA05C;
loc_82EAA1A8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// std r26,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r26.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaa1e4
	if (!cr6.lt) goto loc_82EAA1E4;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EAA1E4:
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// bl 0x82eaa930
	sub_82EAA930(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea9fc4
	if (!cr6.lt) goto loc_82EA9FC4;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x82ea9fc4
	goto loc_82EA9FC4;
loc_82EAA21C:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82eaa268
	if (cr0.eq) goto loc_82EAA268;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eaa248
	if (cr6.eq) goto loc_82EAA248;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r3,84(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// b 0x82eaa260
	goto loc_82EAA260;
loc_82EAA248:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eaa268
	if (cr6.eq) goto loc_82EAA268;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
loc_82EAA260:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eaa960
	sub_82EAA960(ctx, base);
loc_82EAA268:
	// std r26,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r26.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaa29c
	if (!cr6.lt) goto loc_82EAA29C;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EAA29C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b4c
	return;
loc_82EAA2A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ea9560
	sub_82EA9560(ctx, base);
	// std r26,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r26.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaa2e8
	if (!cr6.lt) goto loc_82EAA2E8;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82EAA2E8:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b4c
	return;
loc_82EAA2F4:
	// std r26,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r26.u64);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaa330
	if (!cr6.lt) goto loc_82EAA330;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,-1228
	ctx.r8.s64 = ctx.r9.s64 + -1228;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EAA330:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82EAA340"))) PPC_WEAK_FUNC(sub_82EAA340);
PPC_FUNC_IMPL(__imp__sub_82EAA340) {
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaa368
	if (cr6.eq) goto loc_82EAA368;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82eaa848
	sub_82EAA848(ctx, base);
loc_82EAA368:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaa37c
	if (cr6.eq) goto loc_82EAA37C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82ea94b0
	sub_82EA94B0(ctx, base);
loc_82EAA37C:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82eaa478
	sub_82EAA478(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA398"))) PPC_WEAK_FUNC(sub_82EAA398);
PPC_FUNC_IMPL(__imp__sub_82EAA398) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82ea9ab8
	sub_82EA9AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA3B0"))) PPC_WEAK_FUNC(sub_82EAA3B0);
PPC_FUNC_IMPL(__imp__sub_82EAA3B0) {
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
	// bl 0x8324b9ec
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eaa464
	if (!cr6.eq) goto loc_82EAA464;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,28
	r11.s64 = 28;
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82eaa45c
	if (cr6.eq) goto loc_82EAA45C;
	// li r31,24
	r31.s64 = 24;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaa414
	if (!cr6.lt) goto loc_82EAA414;
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// addi r8,r9,-1276
	ctx.r8.s64 = ctx.r9.s64 + -1276;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_82EAA414:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaa464
	if (!cr6.lt) goto loc_82EAA464;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-14788
	ctx.r8.s64 = ctx.r9.s64 + -14788;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// bl 0x82eb25b0
	sub_82EB25B0(ctx, base);
	// std r3,32(r29)
	PPC_STORE_U64(r29.u32 + 32, ctx.r3.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
loc_82EAA45C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b51c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82EAA464:
	// bl 0x82eb25b0
	sub_82EB25B0(ctx, base);
	// std r3,32(r29)
	PPC_STORE_U64(r29.u32 + 32, ctx.r3.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82EAA478"))) PPC_WEAK_FUNC(sub_82EAA478);
PPC_FUNC_IMPL(__imp__sub_82EAA478) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eaa4dc
	if (cr6.eq) goto loc_82EAA4DC;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r30,r11,31184
	r30.s64 = r11.s64 + 31184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eaa4cc
	if (cr6.eq) goto loc_82EAA4CC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
loc_82EAA4CC:
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,32(r30)
	PPC_STORE_U64(r30.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82EAA4DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA4F8"))) PPC_WEAK_FUNC(sub_82EAA4F8);
PPC_FUNC_IMPL(__imp__sub_82EAA4F8) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r29,40
	r30.s64 = r29.s64 + 40;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r28,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r28.u32);
	// stw r11,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r11.u32);
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
	// beq cr6,0x82eaa568
	if (cr6.eq) goto loc_82EAA568;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// addi r31,r11,31184
	r31.s64 = r11.s64 + 31184;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82eaa3b0
	sub_82EAA3B0(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eaa550
	if (cr6.eq) goto loc_82EAA550;
	// stw r29,44(r11)
	PPC_STORE_U32(r11.u32 + 44, r29.u32);
loc_82EAA550:
	// li r11,-1
	r11.s64 = -1;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// bl 0x8324b50c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82EAA568:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8324b9fc
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// std r11,32(r29)
	PPC_STORE_U64(r29.u32 + 32, r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82EAA588"))) PPC_WEAK_FUNC(sub_82EAA588);
PPC_FUNC_IMPL(__imp__sub_82EAA588) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// bge cr6,0x82eaa670
	if (!cr6.lt) goto loc_82EAA670;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x82eaa5b8
	if (cr6.lt) goto loc_82EAA5B8;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_82EAA5B8:
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,20
	r25.s64 = 20;
	// li r5,23
	ctx.r5.s64 = 23;
	// rlwinm r4,r27,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// bl 0x82ea8a30
	sub_82EA8A30(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eaa648
	if (cr6.eq) goto loc_82EAA648;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82eaa638
	if (cr6.eq) goto loc_82EAA638;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bgt cr6,0x82eaa628
	if (cr6.gt) goto loc_82EAA628;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - r11.s64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r7,7,0,24
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r29,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0xFFFFFF80;
	// add r3,r30,r28
	ctx.r3.u64 = r30.u64 + r28.u64;
	// b 0x82eaa634
	goto loc_82EAA634;
loc_82EAA628:
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r5,r9,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
loc_82EAA634:
	// bl 0x82eb2a58
	sub_82EB2A58(ctx, base);
loc_82EAA638:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82EAA648:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eaa668
	if (cr6.eq) goto loc_82EAA668;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r25,r26
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EAA668:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
loc_82EAA670:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82EAA678"))) PPC_WEAK_FUNC(sub_82EAA678);
PPC_FUNC_IMPL(__imp__sub_82EAA678) {
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
	// addi r31,r3,80
	r31.s64 = ctx.r3.s64 + 80;
	// li r30,2
	r30.s64 = 2;
loc_82EAA694:
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82eaa6c0
	if (cr6.eq) goto loc_82EAA6C0;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r6,23
	ctx.r6.s64 = 23;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82ea8ab0
	sub_82EA8AB0(ctx, base);
loc_82EAA6C0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82eaa694
	if (!cr0.lt) goto loc_82EAA694;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA6E0"))) PPC_WEAK_FUNC(sub_82EAA6E0);
PPC_FUNC_IMPL(__imp__sub_82EAA6E0) {
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
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82eaa720
	if (cr6.lt) goto loc_82EAA720;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// beq cr6,0x82eaa71c
	if (cr6.eq) goto loc_82EAA71C;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82EAA71C:
	// bl 0x82eaa588
	sub_82EAA588(ctx, base);
loc_82EAA720:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x82eaa738
	if (!cr6.eq) goto loc_82EAA738;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82EAA738:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r10,r10,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EAA754:
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82eaa754
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAA754;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA798"))) PPC_WEAK_FUNC(sub_82EAA798);
PPC_FUNC_IMPL(__imp__sub_82EAA798) {
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
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82eaa7d8
	if (cr6.lt) goto loc_82EAA7D8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r4,8
	ctx.r4.s64 = 8;
	// beq cr6,0x82eaa7d4
	if (cr6.eq) goto loc_82EAA7D4;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82EAA7D4:
	// bl 0x82eaa588
	sub_82EAA588(ctx, base);
loc_82EAA7D8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82eaa7ec
	if (!cr6.eq) goto loc_82EAA7EC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82EAA7EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r8,r11,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EAA810:
	// ld r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82eaa810
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAA810;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA848"))) PPC_WEAK_FUNC(sub_82EAA848);
PPC_FUNC_IMPL(__imp__sub_82EAA848) {
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
	// bl 0x82eaa678
	sub_82EAA678(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82eaa8cc
	if (cr6.eq) goto loc_82EAA8CC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82eaa8cc
	if (cr6.eq) goto loc_82EAA8CC;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82eaa8b0
	if (cr6.lt) goto loc_82EAA8B0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82ea8360
	sub_82EA8360(ctx, base);
	// b 0x82eaa8cc
	goto loc_82EAA8CC;
loc_82EAA8B0:
	// lwz r9,108(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// addi r10,r11,104
	ctx.r10.s64 = r11.s64 + 104;
	// lwz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,104(r11)
	PPC_STORE_U32(r11.u32 + 104, r31.u32);
loc_82EAA8CC:
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

__attribute__((alias("__imp__sub_82EAA8E8"))) PPC_WEAK_FUNC(sub_82EAA8E8);
PPC_FUNC_IMPL(__imp__sub_82EAA8E8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831cdd28
	sub_831CDD28(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82EAA928"))) PPC_WEAK_FUNC(sub_82EAA928);
PPC_FUNC_IMPL(__imp__sub_82EAA928) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82bd4418
	sub_82BD4418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA930"))) PPC_WEAK_FUNC(sub_82EAA930);
PPC_FUNC_IMPL(__imp__sub_82EAA930) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82bd5710
	sub_82BD5710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA940"))) PPC_WEAK_FUNC(sub_82EAA940);
PPC_FUNC_IMPL(__imp__sub_82EAA940) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x831cddc0
	sub_831CDDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA950"))) PPC_WEAK_FUNC(sub_82EAA950);
PPC_FUNC_IMPL(__imp__sub_82EAA950) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// b 0x82bd5710
	sub_82BD5710(ctx, base);
	return;
}

