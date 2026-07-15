#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82FED3B8"))) PPC_WEAK_FUNC(sub_82FED3B8);
PPC_FUNC_IMPL(__imp__sub_82FED3B8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82fed420
	if (cr6.eq) goto loc_82FED420;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fed420
	if (cr0.eq) goto loc_82FED420;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,68
	ctx.r4.s64 = 68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed414
	if (cr0.eq) goto loc_82FED414;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83011428
	sub_83011428(ctx, base);
	// b 0x82fed418
	goto loc_82FED418;
loc_82FED414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED418:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b7c
	return;
loc_82FED420:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,5
	ctx.r4.s64 = 5;
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
}

__attribute__((alias("__imp__sub_82FED444"))) PPC_WEAK_FUNC(sub_82FED444);
PPC_FUNC_IMPL(__imp__sub_82FED444) {
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
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FED480"))) PPC_WEAK_FUNC(sub_82FED480);
PPC_FUNC_IMPL(__imp__sub_82FED480) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82fed4e8
	if (cr6.eq) goto loc_82FED4E8;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fed4e8
	if (cr0.eq) goto loc_82FED4E8;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed4dc
	if (cr0.eq) goto loc_82FED4DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83011b08
	sub_83011B08(ctx, base);
	// b 0x82fed4e0
	goto loc_82FED4E0;
loc_82FED4DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED4E0:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b7c
	return;
loc_82FED4E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,5
	ctx.r4.s64 = 5;
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
}

__attribute__((alias("__imp__sub_82FED50C"))) PPC_WEAK_FUNC(sub_82FED50C);
PPC_FUNC_IMPL(__imp__sub_82FED50C) {
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
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FED548"))) PPC_WEAK_FUNC(sub_82FED548);
PPC_FUNC_IMPL(__imp__sub_82FED548) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82fed5b4
	if (cr6.eq) goto loc_82FED5B4;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fed5b4
	if (cr0.eq) goto loc_82FED5B4;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed5a8
	if (cr0.eq) goto loc_82FED5A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83011d70
	sub_83011D70(ctx, base);
	// b 0x82fed5ac
	goto loc_82FED5AC;
loc_82FED5A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED5AC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b7c
	return;
loc_82FED5B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,5
	ctx.r4.s64 = 5;
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
}

__attribute__((alias("__imp__sub_82FED5D8"))) PPC_WEAK_FUNC(sub_82FED5D8);
PPC_FUNC_IMPL(__imp__sub_82FED5D8) {
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
	// li r5,9
	ctx.r5.s64 = 9;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FED610"))) PPC_WEAK_FUNC(sub_82FED610);
PPC_FUNC_IMPL(__imp__sub_82FED610) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82fed678
	if (cr6.eq) goto loc_82FED678;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fed678
	if (cr0.eq) goto loc_82FED678;
	// li r5,10
	ctx.r5.s64 = 10;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed66c
	if (cr0.eq) goto loc_82FED66C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83011f90
	sub_83011F90(ctx, base);
	// b 0x82fed670
	goto loc_82FED670;
loc_82FED66C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED670:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b7c
	return;
loc_82FED678:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,5
	ctx.r4.s64 = 5;
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
}

__attribute__((alias("__imp__sub_82FED69C"))) PPC_WEAK_FUNC(sub_82FED69C);
PPC_FUNC_IMPL(__imp__sub_82FED69C) {
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
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FED6D8"))) PPC_WEAK_FUNC(sub_82FED6D8);
PPC_FUNC_IMPL(__imp__sub_82FED6D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82fed748
	if (cr6.eq) goto loc_82FED748;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fed748
	if (cr0.eq) goto loc_82FED748;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed73c
	if (cr0.eq) goto loc_82FED73C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83012670
	sub_83012670(ctx, base);
	// b 0x82fed740
	goto loc_82FED740;
loc_82FED73C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED740:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
loc_82FED748:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,5
	ctx.r4.s64 = 5;
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
}

__attribute__((alias("__imp__sub_82FED76C"))) PPC_WEAK_FUNC(sub_82FED76C);
PPC_FUNC_IMPL(__imp__sub_82FED76C) {
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
	// li r5,11
	ctx.r5.s64 = 11;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FED7A8"))) PPC_WEAK_FUNC(sub_82FED7A8);
PPC_FUNC_IMPL(__imp__sub_82FED7A8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed7ec
	if (cr0.eq) goto loc_82FED7EC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83012ed0
	sub_83012ED0(ctx, base);
	// b 0x82fed7f0
	goto loc_82FED7F0;
loc_82FED7EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED7F0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FED7F8"))) PPC_WEAK_FUNC(sub_82FED7F8);
PPC_FUNC_IMPL(__imp__sub_82FED7F8) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
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

__attribute__((alias("__imp__sub_82FED828"))) PPC_WEAK_FUNC(sub_82FED828);
PPC_FUNC_IMPL(__imp__sub_82FED828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// bne cr6,0x82fed83c
	if (!cr6.eq) goto loc_82FED83C;
	// li r11,0
	r11.s64 = 0;
loc_82FED83C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82fec8b0
	sub_82FEC8B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FED850"))) PPC_WEAK_FUNC(sub_82FED850);
PPC_FUNC_IMPL(__imp__sub_82FED850) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82fed8c4
	if (cr6.eq) goto loc_82FED8C4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fed8c4
	if (cr0.eq) goto loc_82FED8C4;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed8b8
	if (cr0.eq) goto loc_82FED8B8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83014358
	sub_83014358(ctx, base);
	// b 0x82fed8bc
	goto loc_82FED8BC;
loc_82FED8B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED8BC:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
loc_82FED8C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,5
	ctx.r4.s64 = 5;
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
}

__attribute__((alias("__imp__sub_82FED8E8"))) PPC_WEAK_FUNC(sub_82FED8E8);
PPC_FUNC_IMPL(__imp__sub_82FED8E8) {
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
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FED920"))) PPC_WEAK_FUNC(sub_82FED920);
PPC_FUNC_IMPL(__imp__sub_82FED920) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// beq cr6,0x82fed994
	if (cr6.eq) goto loc_82FED994;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fe9a20
	sub_82FE9A20(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fed994
	if (cr0.eq) goto loc_82FED994;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fecbe8
	sub_82FECBE8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fed988
	if (cr0.eq) goto loc_82FED988;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x83014ef0
	sub_83014EF0(ctx, base);
	// b 0x82fed98c
	goto loc_82FED98C;
loc_82FED988:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FED98C:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
loc_82FED994:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,5
	ctx.r4.s64 = 5;
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
}

__attribute__((alias("__imp__sub_82FED9B8"))) PPC_WEAK_FUNC(sub_82FED9B8);
PPC_FUNC_IMPL(__imp__sub_82FED9B8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FED9E8"))) PPC_WEAK_FUNC(sub_82FED9E8);
PPC_FUNC_IMPL(__imp__sub_82FED9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// bne cr6,0x82fed9fc
	if (!cr6.eq) goto loc_82FED9FC;
	// li r11,0
	r11.s64 = 0;
loc_82FED9FC:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82fec9f0
	sub_82FEC9F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEDA10"))) PPC_WEAK_FUNC(sub_82FEDA10);
PPC_FUNC_IMPL(__imp__sub_82FEDA10) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
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
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82feda6c
	if (!cr6.eq) goto loc_82FEDA6C;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feda64
	if (cr0.eq) goto loc_82FEDA64;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x82fea2a0
	sub_82FEA2A0(ctx, base);
	// b 0x82feda68
	goto loc_82FEDA68;
loc_82FEDA64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEDA68:
	// stw r3,108(r30)
	PPC_STORE_U32(r30.u32 + 108, ctx.r3.u32);
loc_82FEDA6C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x82fea338
	sub_82FEA338(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fedad4
	if (!cr6.eq) goto loc_82FEDAD4;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82fedac0
	if (cr0.eq) goto loc_82FEDAC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r11,r11,2232
	r11.s64 = r11.s64 + 2232;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82fedac4
	goto loc_82FEDAC4;
loc_82FEDAC0:
	// li r29,0
	r29.s64 = 0;
loc_82FEDAC4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x82fea338
	sub_82FEA338(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_82FEDAD4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// bl 0x82fea338
	sub_82FEA338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FEDAF4"))) PPC_WEAK_FUNC(sub_82FEDAF4);
PPC_FUNC_IMPL(__imp__sub_82FEDAF4) {
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
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 144);
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

__attribute__((alias("__imp__sub_82FEDB24"))) PPC_WEAK_FUNC(sub_82FEDB24);
PPC_FUNC_IMPL(__imp__sub_82FEDB24) {
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
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 144);
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

__attribute__((alias("__imp__sub_82FEDB60"))) PPC_WEAK_FUNC(sub_82FEDB60);
PPC_FUNC_IMPL(__imp__sub_82FEDB60) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,112(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fedbd0
	if (!cr6.eq) goto loc_82FEDBD0;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,144(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// beq 0x82fedbc8
	if (cr0.eq) goto loc_82FEDBC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fea880
	sub_82FEA880(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-15848
	r11.s64 = r11.s64 + -15848;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82fedbcc
	goto loc_82FEDBCC;
loc_82FEDBC8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FEDBCC:
	// stw r10,112(r29)
	PPC_STORE_U32(r29.u32 + 112, ctx.r10.u32);
loc_82FEDBD0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// bl 0x83043678
	sub_83043678(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FEDBE4"))) PPC_WEAK_FUNC(sub_82FEDBE4);
PPC_FUNC_IMPL(__imp__sub_82FEDBE4) {
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
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 144);
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

__attribute__((alias("__imp__sub_82FEDC18"))) PPC_WEAK_FUNC(sub_82FEDC18);
PPC_FUNC_IMPL(__imp__sub_82FEDC18) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r6,-16120(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -16120);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82fedc88
	if (!cr6.gt) goto loc_82FEDC88;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,-17060
	ctx.r4.s64 = r11.s64 + -17060;
	// li r5,222
	ctx.r5.s64 = 222;
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
loc_82FEDC88:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	r27.s64 = 0;
	// lwzx r31,r11,r28
	r31.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82fedd1c
	if (cr0.eq) goto loc_82FEDD1C;
loc_82FEDCA0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
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
	// beq 0x82fedd0c
	if (cr0.eq) goto loc_82FEDD0C;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82fedcdc
	if (!cr6.eq) goto loc_82FEDCDC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
	// b 0x82fedce4
	goto loc_82FEDCE4;
loc_82FEDCDC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r11.u32);
loc_82FEDCE4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82feccc8
	sub_82FECCC8(ctx, base);
	// mr. r3,r31
	ctx.r3.u64 = r31.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// beq 0x82fedd14
	if (cr0.eq) goto loc_82FEDD14;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// b 0x82fedd14
	goto loc_82FEDD14;
loc_82FEDD0C:
	// mr r27,r31
	r27.u64 = r31.u64;
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82FEDD14:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82fedca0
	if (!cr6.eq) goto loc_82FEDCA0;
loc_82FEDD1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FEDD28"))) PPC_WEAK_FUNC(sub_82FEDD28);
PPC_FUNC_IMPL(__imp__sub_82FEDD28) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82fedd8c
	if (!cr6.gt) goto loc_82FEDD8C;
	// li r31,0
	r31.s64 = 0;
loc_82FEDD4C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwzx r28,r31,r11
	r28.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82fedd6c
	if (cr0.eq) goto loc_82FEDD6C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x830ac7b8
	sub_830AC7B8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEDD6C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82fedd4c
	if (cr6.lt) goto loc_82FEDD4C;
loc_82FEDD8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FEDD98"))) PPC_WEAK_FUNC(sub_82FEDD98);
PPC_FUNC_IMPL(__imp__sub_82FEDD98) {
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
	// bl 0x82fecd78
	sub_82FECD78(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
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
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fede00
	if (cr0.eq) goto loc_82FEDE00;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FEDE00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEDE20"))) PPC_WEAK_FUNC(sub_82FEDE20);
PPC_FUNC_IMPL(__imp__sub_82FEDE20) {
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
	// addi r11,r11,-15920
	r11.s64 = r11.s64 + -15920;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fede6c
	if (cr0.eq) goto loc_82FEDE6C;
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82fede6c
	if (cr0.eq) goto loc_82FEDE6C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fecc60
	sub_82FECC60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEDE6C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FEDE80"))) PPC_WEAK_FUNC(sub_82FEDE80);
PPC_FUNC_IMPL(__imp__sub_82FEDE80) {
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
	// bl 0x830547b0
	sub_830547B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEDEA8"))) PPC_WEAK_FUNC(sub_82FEDEA8);
PPC_FUNC_IMPL(__imp__sub_82FEDEA8) {
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
	// bl 0x82fede20
	sub_82FEDE20(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82feded8
	if (cr0.eq) goto loc_82FEDED8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEDED8:
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

__attribute__((alias("__imp__sub_82FEDF00"))) PPC_WEAK_FUNC(sub_82FEDF00);
PPC_FUNC_IMPL(__imp__sub_82FEDF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b18
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r11,r11,-3652
	r11.s64 = r11.s64 + -3652;
	// addi r10,r10,-5384
	ctx.r10.s64 = ctx.r10.s64 + -5384;
	// addi r28,r30,12
	r28.s64 = r30.s64 + 12;
	// addi r9,r9,-17744
	ctx.r9.s64 = ctx.r9.s64 + -17744;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r11,r11,-16816
	r11.s64 = r11.s64 + -16816;
	// addi r10,r10,-16832
	ctx.r10.s64 = ctx.r10.s64 + -16832;
	// addi r9,r9,-16844
	ctx.r9.s64 = ctx.r9.s64 + -16844;
	// addi r8,r8,-17000
	ctx.r8.s64 = ctx.r8.s64 + -17000;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// bl 0x82fe7638
	sub_82FE7638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x83004348
	sub_83004348(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,17
	ctx.r4.s64 = 17;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stb r29,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r29.u8);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// bl 0x83005998
	sub_83005998(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// stw r29,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r29.u32);
	// stw r29,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r29.u32);
	// stw r29,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r29.u32);
	// stw r29,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r29.u32);
	// stw r29,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r29.u32);
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r29.u32);
	// stw r29,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r29.u32);
	// stw r29,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r29.u32);
	// stw r29,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r29.u32);
	// stw r29,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r29.u32);
	// stb r11,152(r30)
	PPC_STORE_U8(r30.u32 + 152, r11.u8);
	// stw r27,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r27.u32);
	// bl 0x82fe9dd8
	sub_82FE9DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee03c
	if (cr0.eq) goto loc_82FEE03C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,257
	ctx.r4.s64 = 257;
	// bl 0x830052d0
	sub_830052D0(ctx, base);
	// b 0x82fee040
	goto loc_82FEE040;
loc_82FEE03C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82FEE040:
	// stw r3,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r3.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe9608
	sub_82FE9608(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82fee0a8
	if (cr6.eq) goto loc_82FEE0A8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fed850
	sub_82FED850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82FEE09C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b68
	return;
loc_82FEE0A8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82fee09c
	if (cr6.eq) goto loc_82FEE09C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// li r4,14
	ctx.r4.s64 = 14;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83002050
	sub_83002050(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8296
	ctx.r4.s64 = r11.s64 + -8296;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
}

__attribute__((alias("__imp__sub_82FEE0EC"))) PPC_WEAK_FUNC(sub_82FEE0EC);
PPC_FUNC_IMPL(__imp__sub_82FEE0EC) {
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

__attribute__((alias("__imp__sub_82FEE10C"))) PPC_WEAK_FUNC(sub_82FEE10C);
PPC_FUNC_IMPL(__imp__sub_82FEE10C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82fe9ed0
	sub_82FE9ED0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FEE130"))) PPC_WEAK_FUNC(sub_82FEE130);
PPC_FUNC_IMPL(__imp__sub_82FEE130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// bl 0x82fe9518
	sub_82FE9518(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEE158"))) PPC_WEAK_FUNC(sub_82FEE158);
PPC_FUNC_IMPL(__imp__sub_82FEE158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82FEE184"))) PPC_WEAK_FUNC(sub_82FEE184);
PPC_FUNC_IMPL(__imp__sub_82FEE184) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
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

__attribute__((alias("__imp__sub_82FEE1B0"))) PPC_WEAK_FUNC(sub_82FEE1B0);
PPC_FUNC_IMPL(__imp__sub_82FEE1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x83006010
	sub_83006010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEE1DC"))) PPC_WEAK_FUNC(sub_82FEE1DC);
PPC_FUNC_IMPL(__imp__sub_82FEE1DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 212);
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

__attribute__((alias("__imp__sub_82FEE210"))) PPC_WEAK_FUNC(sub_82FEE210);
PPC_FUNC_IMPL(__imp__sub_82FEE210) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-16816
	r11.s64 = r11.s64 + -16816;
	// addi r10,r10,-16832
	ctx.r10.s64 = ctx.r10.s64 + -16832;
	// addi r9,r9,-16844
	ctx.r9.s64 = ctx.r9.s64 + -16844;
	// addi r8,r8,-17000
	ctx.r8.s64 = ctx.r8.s64 + -17000;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee268
	if (cr0.eq) goto loc_82FEE268;
	// bl 0x82fedd98
	sub_82FEDD98(ctx, base);
loc_82FEE268:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee288
	if (cr0.eq) goto loc_82FEE288;
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
loc_82FEE288:
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee2a8
	if (cr0.eq) goto loc_82FEE2A8;
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
loc_82FEE2A8:
	// lwz r29,92(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82fee2c4
	if (cr0.eq) goto loc_82FEE2C4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fecc60
	sub_82FECC60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEE2C4:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee2e8
	if (cr0.eq) goto loc_82FEE2E8;
	// bl 0x82fedd28
	sub_82FEDD28(ctx, base);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee2e8
	if (cr0.eq) goto loc_82FEE2E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x830057c0
	sub_830057C0(ctx, base);
loc_82FEE2E8:
	// lwz r29,112(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82fee304
	if (cr0.eq) goto loc_82FEE304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fec070
	sub_82FEC070(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEE304:
	// lwz r29,132(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82fee320
	if (cr0.eq) goto loc_82FEE320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83002ba0
	sub_83002BA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEE320:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe9ed0
	sub_82FE9ED0(ctx, base);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x83006010
	sub_83006010(ctx, base);
	// addi r11,r30,24
	r11.s64 = r30.s64 + 24;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x83002188
	sub_83002188(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82ea81c0
	sub_82EA81C0(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// addi r11,r11,-17416
	r11.s64 = r11.s64 + -17416;
	// addi r10,r10,-17428
	ctx.r10.s64 = ctx.r10.s64 + -17428;
	// addi r9,r9,-17584
	ctx.r9.s64 = ctx.r9.s64 + -17584;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// addi r8,r8,-17744
	ctx.r8.s64 = ctx.r8.s64 + -17744;
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r7,r7,-5384
	ctx.r7.s64 = ctx.r7.s64 + -5384;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// addi r6,r6,-3652
	ctx.r6.s64 = ctx.r6.s64 + -3652;
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r5,r5,-30128
	ctx.r5.s64 = ctx.r5.s64 + -30128;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// stw r7,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// stw r6,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FEE3A0"))) PPC_WEAK_FUNC(sub_82FEE3A0);
PPC_FUNC_IMPL(__imp__sub_82FEE3A0) {
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
	// bl 0x82fe9518
	sub_82FE9518(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEE3C8"))) PPC_WEAK_FUNC(sub_82FEE3C8);
PPC_FUNC_IMPL(__imp__sub_82FEE3C8) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82FEE3F4"))) PPC_WEAK_FUNC(sub_82FEE3F4);
PPC_FUNC_IMPL(__imp__sub_82FEE3F4) {
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
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
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

__attribute__((alias("__imp__sub_82FEE420"))) PPC_WEAK_FUNC(sub_82FEE420);
PPC_FUNC_IMPL(__imp__sub_82FEE420) {
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
	// addi r3,r11,68
	ctx.r3.s64 = r11.s64 + 68;
	// bl 0x83006010
	sub_83006010(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEE458"))) PPC_WEAK_FUNC(sub_82FEE458);
PPC_FUNC_IMPL(__imp__sub_82FEE458) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fee50c
	if (!cr0.eq) goto loc_82FEE50C;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82fee500
	if (cr0.eq) goto loc_82FEE500;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee4e4
	if (cr0.eq) goto loc_82FEE4E4;
	// bl 0x83007488
	sub_83007488(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// b 0x82fee4e8
	goto loc_82FEE4E8;
loc_82FEE4E4:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82FEE4E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,109
	ctx.r4.s64 = 109;
	// lwz r7,144(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83020a30
	sub_83020A30(ctx, base);
	// b 0x82fee504
	goto loc_82FEE504;
loc_82FEE500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEE504:
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// b 0x82fee548
	goto loc_82FEE548;
loc_82FEE50C:
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee548
	if (cr0.eq) goto loc_82FEE548;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fee548
	if (cr0.eq) goto loc_82FEE548;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82fec4d0
	sub_82FEC4D0(ctx, base);
loc_82FEE548:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82fee58c
	if (cr6.eq) goto loc_82FEE58C;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee574
	if (cr0.eq) goto loc_82FEE574;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r25.u32);
	// b 0x82fee578
	goto loc_82FEE578;
loc_82FEE574:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82FEE578:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82feccc8
	sub_82FECCC8(ctx, base);
	// b 0x82fee604
	goto loc_82FEE604;
loc_82FEE58C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r4,92(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// bl 0x82febe98
	sub_82FEBE98(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fee5dc
	if (!cr6.eq) goto loc_82FEE5DC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82fee5e0
	if (cr6.eq) goto loc_82FEE5E0;
loc_82FEE5DC:
	// li r11,1
	r11.s64 = 1;
loc_82FEE5E0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82fee5fc
	if (!cr0.eq) goto loc_82FEE5FC;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// lhz r11,-18228(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -18228);
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// sth r11,4(r28)
	PPC_STORE_U16(r28.u32 + 4, r11.u16);
loc_82FEE5FC:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fede20
	sub_82FEDE20(ctx, base);
loc_82FEE604:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82FEE610"))) PPC_WEAK_FUNC(sub_82FEE610);
PPC_FUNC_IMPL(__imp__sub_82FEE610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 144);
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

__attribute__((alias("__imp__sub_82FEE640"))) PPC_WEAK_FUNC(sub_82FEE640);
PPC_FUNC_IMPL(__imp__sub_82FEE640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,144(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 144);
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

__attribute__((alias("__imp__sub_82FEE670"))) PPC_WEAK_FUNC(sub_82FEE670);
PPC_FUNC_IMPL(__imp__sub_82FEE670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fede20
	sub_82FEDE20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEE6A0"))) PPC_WEAK_FUNC(sub_82FEE6A0);
PPC_FUNC_IMPL(__imp__sub_82FEE6A0) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r4,92(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82fee7d8
	if (cr0.eq) goto loc_82FEE7D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,144(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82febe98
	sub_82FEBE98(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r26,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r26.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FEE6F8:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fee71c
	if (!cr6.eq) goto loc_82FEE71C;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82fee720
	if (cr6.eq) goto loc_82FEE720;
loc_82FEE71C:
	// li r11,1
	r11.s64 = 1;
loc_82FEE720:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fee7d0
	if (cr0.eq) goto loc_82FEE7D0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82febfe8
	sub_82FEBFE8(ctx, base);
	// lwz r27,80(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fea480
	sub_82FEA480(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82fee760
	if (cr0.eq) goto loc_82FEE760;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82FEE760:
	// lwz r30,4(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82fee7b0
	if (cr0.eq) goto loc_82FEE7B0;
	// addi r3,r29,68
	ctx.r3.s64 = r29.s64 + 68;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FEE7B0:
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(r25.s32, 3, xer);
	// bne cr6,0x82fee6f8
	if (!cr6.eq) goto loc_82FEE6F8;
	// addi r6,r31,92
	ctx.r6.s64 = r31.s64 + 92;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82fec4d0
	sub_82FEC4D0(ctx, base);
	// b 0x82fee6f8
	goto loc_82FEE6F8;
loc_82FEE7D0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fede20
	sub_82FEDE20(ctx, base);
loc_82FEE7D8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82FEE7E0"))) PPC_WEAK_FUNC(sub_82FEE7E0);
PPC_FUNC_IMPL(__imp__sub_82FEE7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fede20
	sub_82FEDE20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEE808"))) PPC_WEAK_FUNC(sub_82FEE808);
PPC_FUNC_IMPL(__imp__sub_82FEE808) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fee858
	if (cr0.eq) goto loc_82FEE858;
	// bl 0x82fedc18
	sub_82FEDC18(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lhz r10,-18228(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + -18228);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// sth r10,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r10.u16);
	// lhz r11,-18228(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -18228);
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,4(r30)
	PPC_STORE_U16(r30.u32 + 4, r11.u16);
loc_82FEE858:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEE870"))) PPC_WEAK_FUNC(sub_82FEE870);
PPC_FUNC_IMPL(__imp__sub_82FEE870) {
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
	// bl 0x82fee210
	sub_82FEE210(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fee8a0
	if (cr0.eq) goto loc_82FEE8A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEE8A0:
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

__attribute__((alias("__imp__sub_82FEE8C0"))) PPC_WEAK_FUNC(sub_82FEE8C0);
PPC_FUNC_IMPL(__imp__sub_82FEE8C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82fee928
	if (!cr6.gt) goto loc_82FEE928;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,275
	ctx.r5.s64 = 275;
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
loc_82FEE928:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r28,r3,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	r29.s64 = 0;
	// lwzx r30,r11,r28
	r30.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// b 0x82fee968
	goto loc_82FEE968;
loc_82FEE93C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
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
	// bne 0x82fee974
	if (!cr0.eq) goto loc_82FEE974;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_82FEE968:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82fee93c
	if (!cr0.eq) goto loc_82FEE93C;
	// b 0x82fee9a8
	goto loc_82FEE9A8;
loc_82FEE974:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82fee98c
	if (!cr6.eq) goto loc_82FEE98C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stwx r10,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r10.u32);
	// b 0x82fee994
	goto loc_82FEE994;
loc_82FEE98C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82FEE994:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82fee9d4
	if (!cr6.eq) goto loc_82FEE9D4;
loc_82FEE9A8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,313
	ctx.r5.s64 = 313;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fe9148
	sub_82FE9148(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8184
	ctx.r4.s64 = r11.s64 + -8184;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FEE9D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FEE9E0"))) PPC_WEAK_FUNC(sub_82FEE9E0);
PPC_FUNC_IMPL(__imp__sub_82FEE9E0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82feea50
	if (!cr6.gt) goto loc_82FEEA50;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,543
	ctx.r5.s64 = 543;
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
loc_82FEEA50:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// lwzx r30,r11,r10
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x82feea90
	goto loc_82FEEA90;
loc_82FEEA64:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
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
	// bne 0x82feeac4
	if (!cr0.eq) goto loc_82FEEAC4;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_82FEEA90:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82feea64
	if (!cr0.eq) goto loc_82FEEA64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r4,r11,-13408
	ctx.r4.s64 = r11.s64 + -13408;
	// li r5,585
	ctx.r5.s64 = 585;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fe9148
	sub_82FE9148(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8184
	ctx.r4.s64 = r11.s64 + -8184;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FEEAC4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82feeae4
	if (!cr6.eq) goto loc_82FEEAE4;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x82feeaec
	goto loc_82FEEAEC;
loc_82FEEAE4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82FEEAEC:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82feeb18
	if (cr0.eq) goto loc_82FEEB18;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feeb18
	if (cr0.eq) goto loc_82FEEB18;
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
loc_82FEEB18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FEEB38"))) PPC_WEAK_FUNC(sub_82FEEB38);
PPC_FUNC_IMPL(__imp__sub_82FEEB38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x83015278
	sub_83015278(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82feeb78
	if (cr0.eq) goto loc_82FEEB78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83017798
	sub_83017798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEEB78:
	// stw r29,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FEEB88"))) PPC_WEAK_FUNC(sub_82FEEB88);
PPC_FUNC_IMPL(__imp__sub_82FEEB88) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x83015278
	sub_83015278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEEBD0"))) PPC_WEAK_FUNC(sub_82FEEBD0);
PPC_FUNC_IMPL(__imp__sub_82FEEBD0) {
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
	// bl 0x82feeb38
	sub_82FEEB38(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEEC20"))) PPC_WEAK_FUNC(sub_82FEEC20);
PPC_FUNC_IMPL(__imp__sub_82FEEC20) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82feecbc
	if (cr6.eq) goto loc_82FEECBC;
	// lis r30,-31942
	r30.s64 = -2093350912;
	// lwz r3,-15772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15772);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82feec88
	if (cr6.eq) goto loc_82FEEC88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82feec88
	if (cr0.eq) goto loc_82FEEC88;
	// lwz r3,-15772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15772);
loc_82FEEC6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feecbc
	if (cr0.eq) goto loc_82FEECBC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82feecc0
	goto loc_82FEECC0;
loc_82FEEC88:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feecbc
	if (cr0.eq) goto loc_82FEECBC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x83070a58
	sub_83070A58(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82feecbc
	if (cr0.eq) goto loc_82FEECBC;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x82feec6c
	goto loc_82FEEC6C;
loc_82FEECBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEECC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FEECD0"))) PPC_WEAK_FUNC(sub_82FEECD0);
PPC_FUNC_IMPL(__imp__sub_82FEECD0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// stb r28,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r28.u8);
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// stb r11,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r11.u8);
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r27,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r27.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feed54
	if (cr0.eq) goto loc_82FEED54;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82feed58
	goto loc_82FEED58;
loc_82FEED54:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82FEED58:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feed88
	if (cr0.eq) goto loc_82FEED88;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83054fb0
	sub_83054FB0(ctx, base);
	// b 0x82feed8c
	goto loc_82FEED8C;
loc_82FEED88:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FEED8C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// bne cr6,0x82feedc8
	if (!cr6.eq) goto loc_82FEEDC8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feedbc
	if (cr0.eq) goto loc_82FEEDBC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8301b8d8
	sub_8301B8D8(ctx, base);
	// b 0x82feedc0
	goto loc_82FEEDC0;
loc_82FEEDBC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FEEDC0:
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// stb r28,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r28.u8);
loc_82FEEDC8:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feee10
	if (cr0.eq) goto loc_82FEEE10;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82FEEE10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FEEE20"))) PPC_WEAK_FUNC(sub_82FEEE20);
PPC_FUNC_IMPL(__imp__sub_82FEEE20) {
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
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FEEE4C"))) PPC_WEAK_FUNC(sub_82FEEE4C);
PPC_FUNC_IMPL(__imp__sub_82FEEE4C) {
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
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FEEE78"))) PPC_WEAK_FUNC(sub_82FEEE78);
PPC_FUNC_IMPL(__imp__sub_82FEEE78) {
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
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FEEEA4"))) PPC_WEAK_FUNC(sub_82FEEEA4);
PPC_FUNC_IMPL(__imp__sub_82FEEEA4) {
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
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_82FEEED8"))) PPC_WEAK_FUNC(sub_82FEEED8);
PPC_FUNC_IMPL(__imp__sub_82FEEED8) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82feefcc
	if (cr6.eq) goto loc_82FEEFCC;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feef18
	if (cr0.eq) goto loc_82FEEF18;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82feefd0
	if (!cr0.eq) goto loc_82FEEFD0;
loc_82FEEF18:
	// lbz r11,1(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82feefcc
	if (cr0.eq) goto loc_82FEEFCC;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82feef48
	if (cr0.eq) goto loc_82FEEF48;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82feefd0
	if (!cr0.eq) goto loc_82FEEFD0;
loc_82FEEF48:
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82feefb8
	if (cr0.eq) goto loc_82FEEFB8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_82FEEFB8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82feefd0
	goto loc_82FEEFD0;
loc_82FEEFCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEEFD0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FEEFD8"))) PPC_WEAK_FUNC(sub_82FEEFD8);
PPC_FUNC_IMPL(__imp__sub_82FEEFD8) {
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

__attribute__((alias("__imp__sub_82FEF000"))) PPC_WEAK_FUNC(sub_82FEF000);
PPC_FUNC_IMPL(__imp__sub_82FEF000) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fef100
	if (cr6.eq) goto loc_82FEF100;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef060
	if (cr0.eq) goto loc_82FEF060;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fef104
	if (!cr0.eq) goto loc_82FEF104;
loc_82FEF060:
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fef100
	if (cr0.eq) goto loc_82FEF100;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef0a4
	if (cr0.eq) goto loc_82FEF0A4;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fef104
	if (!cr0.eq) goto loc_82FEF104;
loc_82FEF0A4:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82fef0f8
	if (cr0.eq) goto loc_82FEF0F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
loc_82FEF0F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82fef104
	goto loc_82FEF104;
loc_82FEF100:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEF104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEF120"))) PPC_WEAK_FUNC(sub_82FEF120);
PPC_FUNC_IMPL(__imp__sub_82FEF120) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82fef1cc
	if (cr6.eq) goto loc_82FEF1CC;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fef16c
	if (cr0.eq) goto loc_82FEF16C;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
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
	// bne 0x82fef1cc
	if (!cr0.eq) goto loc_82FEF1CC;
loc_82FEF16C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83054ec8
	sub_83054EC8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82fef1cc
	if (!cr6.eq) goto loc_82FEF1CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_82FEF1CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEF1E8"))) PPC_WEAK_FUNC(sub_82FEF1E8);
PPC_FUNC_IMPL(__imp__sub_82FEF1E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fef244
	if (cr0.eq) goto loc_82FEF244;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82fef23c
	if (cr0.eq) goto loc_82FEF23C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82fee9e0
	sub_82FEE9E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82fef24c
	goto loc_82FEF24C;
loc_82FEF23C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fef24c
	goto loc_82FEF24C;
loc_82FEF244:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82fee8c0
	sub_82FEE8C0(ctx, base);
loc_82FEF24C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FEF258"))) PPC_WEAK_FUNC(sub_82FEF258);
PPC_FUNC_IMPL(__imp__sub_82FEF258) {
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
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82fef28c
	if (cr0.eq) goto loc_82FEF28C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEF28C:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82fef2a8
	if (cr0.eq) goto loc_82FEF2A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83015ab0
	sub_83015AB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEF2A8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef2c8
	if (cr0.eq) goto loc_82FEF2C8;
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
loc_82FEF2C8:
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82fef2f4
	if (!cr0.eq) goto loc_82FEF2F4;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef2f4
	if (cr0.eq) goto loc_82FEF2F4;
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
loc_82FEF2F4:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82fef310
	if (cr0.eq) goto loc_82FEF310;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83017798
	sub_83017798(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEF310:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef324
	if (cr0.eq) goto loc_82FEF324;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fdeaa8
	sub_82FDEAA8(ctx, base);
loc_82FEF324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEF348"))) PPC_WEAK_FUNC(sub_82FEF348);
PPC_FUNC_IMPL(__imp__sub_82FEF348) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-8608
	ctx.r4.s64 = r11.s64 + -8608;
	// stw r30,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r30.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fef3d4
	if (cr0.eq) goto loc_82FEF3D4;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fef3c0
	if (!cr6.eq) goto loc_82FEF3C0;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef3b4
	if (cr0.eq) goto loc_82FEF3B4;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x83017aa0
	sub_83017AA0(ctx, base);
	// b 0x82fef3b8
	goto loc_82FEF3B8;
loc_82FEF3B4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82FEF3B8:
	// stw r3,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// bl 0x83018fd0
	sub_83018FD0(ctx, base);
loc_82FEF3C0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82fef47c
	goto loc_82FEF47C;
loc_82FEF3D4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82fef47c
	if (cr0.eq) goto loc_82FEF47C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82fef47c
	if (!cr6.eq) goto loc_82FEF47C;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r27,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r27.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addi r3,r28,60
	ctx.r3.s64 = r28.s64 + 60;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r27,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r27.u16);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x82feec20
	sub_82FEEC20(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
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
loc_82FEF47C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FEF488"))) PPC_WEAK_FUNC(sub_82FEF488);
PPC_FUNC_IMPL(__imp__sub_82FEF488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
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

__attribute__((alias("__imp__sub_82FEF4B8"))) PPC_WEAK_FUNC(sub_82FEF4B8);
PPC_FUNC_IMPL(__imp__sub_82FEF4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
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

__attribute__((alias("__imp__sub_82FEF4E0"))) PPC_WEAK_FUNC(sub_82FEF4E0);
PPC_FUNC_IMPL(__imp__sub_82FEF4E0) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x83015918
	sub_83015918(ctx, base);
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

__attribute__((alias("__imp__sub_82FEF530"))) PPC_WEAK_FUNC(sub_82FEF530);
PPC_FUNC_IMPL(__imp__sub_82FEF530) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83015918
	sub_83015918(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83070930
	sub_83070930(ctx, base);
	// li r26,0
	r26.s64 = 0;
loc_82FEF570:
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fef594
	if (!cr6.eq) goto loc_82FEF594;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82fef598
	if (cr6.eq) goto loc_82FEF598;
loc_82FEF594:
	// li r11,1
	r11.s64 = 1;
loc_82FEF598:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fef5c0
	if (cr0.eq) goto loc_82FEF5C0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83055250
	sub_83055250(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x82fef570
	goto loc_82FEF570;
loc_82FEF5C0:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82fef674
	if (cr6.eq) goto loc_82FEF674;
loc_82FEF5D8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8308ea58
	sub_8308EA58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8302dee8
	sub_8302DEE8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// beq 0x82fef60c
	if (cr0.eq) goto loc_82FEF60C;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82FEF60C:
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// beq 0x82fef63c
	if (cr0.eq) goto loc_82FEF63C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82fee8c0
	sub_82FEE8C0(ctx, base);
	// b 0x82fef668
	goto loc_82FEF668;
loc_82FEF63C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82fef668
	if (!cr6.eq) goto loc_82FEF668;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
loc_82FEF668:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x82fef5d8
	if (cr6.lt) goto loc_82FEF5D8;
loc_82FEF674:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FEF69C"))) PPC_WEAK_FUNC(sub_82FEF69C);
PPC_FUNC_IMPL(__imp__sub_82FEF69C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEF6C4"))) PPC_WEAK_FUNC(sub_82FEF6C4);
PPC_FUNC_IMPL(__imp__sub_82FEF6C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83034d68
	sub_83034D68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEF6F8"))) PPC_WEAK_FUNC(sub_82FEF6F8);
PPC_FUNC_IMPL(__imp__sub_82FEF6F8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fef97c
	if (cr0.eq) goto loc_82FEF97C;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82fef88c
	if (cr0.eq) goto loc_82FEF88C;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fef774
	if (!cr6.eq) goto loc_82FEF774;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82fef774
	if (!cr0.eq) goto loc_82FEF774;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82fef774
	if (!cr6.eq) goto loc_82FEF774;
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// b 0x82fefa14
	goto loc_82FEFA14;
loc_82FEF774:
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83015918
	sub_83015918(ctx, base);
loc_82FEF798:
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fef7bc
	if (!cr6.eq) goto loc_82FEF7BC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq cr6,0x82fef7c0
	if (cr6.eq) goto loc_82FEF7C0;
loc_82FEF7BC:
	// li r11,1
	r11.s64 = 1;
loc_82FEF7C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fef800
	if (cr0.eq) goto loc_82FEF800;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82fef798
	if (!cr6.eq) goto loc_82FEF798;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bl 0x8305c228
	sub_8305C228(ctx, base);
	// b 0x82fef798
	goto loc_82FEF798;
loc_82FEF800:
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82fef81c
	if (cr0.eq) goto loc_82FEF81C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83017798
	sub_83017798(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEF81C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fef87c
	if (cr0.eq) goto loc_82FEF87C;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef858
	if (cr0.eq) goto loc_82FEF858;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x83016e88
	sub_83016E88(ctx, base);
	// b 0x82fef85c
	goto loc_82FEF85C;
loc_82FEF858:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FEF85C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r30,28(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 28);
loc_82FEF86C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82fefa14
	goto loc_82FEFA14;
loc_82FEF87C:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x82fef86c
	goto loc_82FEF86C;
loc_82FEF88C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fef92c
	if (cr0.eq) goto loc_82FEF92C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fef8e4
	if (cr6.eq) goto loc_82FEF8E4;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef8d8
	if (cr0.eq) goto loc_82FEF8D8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83016e88
	sub_83016E88(ctx, base);
	// b 0x82fef8dc
	goto loc_82FEF8DC;
loc_82FEF8D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FEF8DC:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// b 0x82fef91c
	goto loc_82FEF91C;
loc_82FEF8E4:
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef914
	if (cr0.eq) goto loc_82FEF914;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x83016e88
	sub_83016E88(ctx, base);
	// b 0x82fef918
	goto loc_82FEF918;
loc_82FEF914:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FEF918:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_82FEF91C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// b 0x82fefa14
	goto loc_82FEFA14;
loc_82FEF92C:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fefa14
	if (!cr0.eq) goto loc_82FEFA14;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82fefa14
	if (!cr0.eq) goto loc_82FEFA14;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef970
	if (cr0.eq) goto loc_82FEF970;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83016e88
	sub_83016E88(ctx, base);
	// b 0x82fef974
	goto loc_82FEF974;
loc_82FEF970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEF974:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// b 0x82fefa14
	goto loc_82FEFA14;
loc_82FEF97C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fef9d0
	if (cr0.eq) goto loc_82FEF9D0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fef9bc
	if (cr0.eq) goto loc_82FEF9BC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x83016e88
	sub_83016E88(ctx, base);
	// b 0x82fef9c0
	goto loc_82FEF9C0;
loc_82FEF9BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82FEF9C0:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// b 0x82fefa10
	goto loc_82FEFA10;
loc_82FEF9D0:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82fefa10
	if (!cr6.eq) goto loc_82FEFA10;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82fefa08
	if (cr0.eq) goto loc_82FEFA08;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83016e88
	sub_83016E88(ctx, base);
	// b 0x82fefa0c
	goto loc_82FEFA0C;
loc_82FEFA08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEFA0C:
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_82FEFA10:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
loc_82FEFA14:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FEFA1C"))) PPC_WEAK_FUNC(sub_82FEFA1C);
PPC_FUNC_IMPL(__imp__sub_82FEFA1C) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFA44"))) PPC_WEAK_FUNC(sub_82FEFA44);
PPC_FUNC_IMPL(__imp__sub_82FEFA44) {
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

__attribute__((alias("__imp__sub_82FEFA74"))) PPC_WEAK_FUNC(sub_82FEFA74);
PPC_FUNC_IMPL(__imp__sub_82FEFA74) {
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

__attribute__((alias("__imp__sub_82FEFAA4"))) PPC_WEAK_FUNC(sub_82FEFAA4);
PPC_FUNC_IMPL(__imp__sub_82FEFAA4) {
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

__attribute__((alias("__imp__sub_82FEFAD4"))) PPC_WEAK_FUNC(sub_82FEFAD4);
PPC_FUNC_IMPL(__imp__sub_82FEFAD4) {
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

__attribute__((alias("__imp__sub_82FEFB04"))) PPC_WEAK_FUNC(sub_82FEFB04);
PPC_FUNC_IMPL(__imp__sub_82FEFB04) {
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

__attribute__((alias("__imp__sub_82FEFB34"))) PPC_WEAK_FUNC(sub_82FEFB34);
PPC_FUNC_IMPL(__imp__sub_82FEFB34) {
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

__attribute__((alias("__imp__sub_82FEFB68"))) PPC_WEAK_FUNC(sub_82FEFB68);
PPC_FUNC_IMPL(__imp__sub_82FEFB68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82fefb84
	if (cr6.lt) goto loc_82FEFB84;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bgt cr6,0x82fefb84
	if (cr6.gt) goto loc_82FEFB84;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FEFB84:
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// blt cr6,0x82fefb9c
	if (cr6.lt) goto loc_82FEFB9C;
	// cmpwi cr6,r11,401
	cr6.compare<int32_t>(r11.s32, 401, xer);
	// bgt cr6,0x82fefb9c
	if (cr6.gt) goto loc_82FEFB9C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82FEFB9C:
	// cmpwi cr6,r11,402
	cr6.compare<int32_t>(r11.s32, 402, xer);
	// blt cr6,0x82fefbb0
	if (cr6.lt) goto loc_82FEFBB0;
	// cmpwi cr6,r11,403
	cr6.compare<int32_t>(r11.s32, 403, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// blelr cr6
	if (!cr6.gt) return;
loc_82FEFBB0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFBB8"))) PPC_WEAK_FUNC(sub_82FEFBB8);
PPC_FUNC_IMPL(__imp__sub_82FEFBB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,2
	r11.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r11,r11,32860
	r11.u64 = r11.u64 | 32860;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ori r8,r8,32852
	ctx.r8.u64 = ctx.r8.u64 | 32852;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + r11.u32, ctx.r4.u32);
	// bne cr6,0x82fefbf0
	if (!cr6.eq) goto loc_82FEFBF0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,32856
	ctx.r10.u64 = ctx.r10.u64 | 32856;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// addi r11,r11,13880
	r11.s64 = r11.s64 + 13880;
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x82fefc0c
	goto loc_82FEFC0C;
loc_82FEFBF0:
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// ori r9,r9,32856
	ctx.r9.u64 = ctx.r9.u64 | 32856;
	// addi r11,r11,13880
	r11.s64 = r11.s64 + 13880;
	// lbz r10,-16044(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -16044);
	// stbx r10,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u8);
loc_82FEFC0C:
	// stwx r11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFC18"))) PPC_WEAK_FUNC(sub_82FEFC18);
PPC_FUNC_IMPL(__imp__sub_82FEFC18) {
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
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// clrlwi r30,r30,16
	r30.u64 = r30.u32 & 0xFFFF;
	// b 0x82fefc50
	goto loc_82FEFC50;
loc_82FEFC40:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82fefc5c
	if (cr6.eq) goto loc_82FEFC5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
loc_82FEFC50:
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82fefc40
	if (!cr6.eq) goto loc_82FEFC40;
loc_82FEFC5C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFC78"))) PPC_WEAK_FUNC(sub_82FEFC78);
PPC_FUNC_IMPL(__imp__sub_82FEFC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r10,28(r11)
	PPC_STORE_U8(r11.u32 + 28, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFC90"))) PPC_WEAK_FUNC(sub_82FEFC90);
PPC_FUNC_IMPL(__imp__sub_82FEFC90) {
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
	// addi r11,r11,-12728
	r11.s64 = r11.s64 + -12728;
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

__attribute__((alias("__imp__sub_82FEFCD8"))) PPC_WEAK_FUNC(sub_82FEFCD8);
PPC_FUNC_IMPL(__imp__sub_82FEFCD8) {
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

__attribute__((alias("__imp__sub_82FEFD00"))) PPC_WEAK_FUNC(sub_82FEFD00);
PPC_FUNC_IMPL(__imp__sub_82FEFD00) {
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
	// addi r11,r11,-12728
	r11.s64 = r11.s64 + -12728;
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

__attribute__((alias("__imp__sub_82FEFD40"))) PPC_WEAK_FUNC(sub_82FEFD40);
PPC_FUNC_IMPL(__imp__sub_82FEFD40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-12728
	r11.s64 = r11.s64 + -12728;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82fe1298
	sub_82FE1298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FEFD58"))) PPC_WEAK_FUNC(sub_82FEFD58);
PPC_FUNC_IMPL(__imp__sub_82FEFD58) {
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
	// beq 0x82fefda8
	if (cr0.eq) goto loc_82FEFDA8;
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
	// addi r11,r11,-12728
	r11.s64 = r11.s64 + -12728;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82fefdac
	goto loc_82FEFDAC;
loc_82FEFDA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FEFDAC:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FEFDB4"))) PPC_WEAK_FUNC(sub_82FEFDB4);
PPC_FUNC_IMPL(__imp__sub_82FEFDB4) {
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

__attribute__((alias("__imp__sub_82FEFDE8"))) PPC_WEAK_FUNC(sub_82FEFDE8);
PPC_FUNC_IMPL(__imp__sub_82FEFDE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27128
	ctx.r3.s64 = r11.s64 + -27128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFDF8"))) PPC_WEAK_FUNC(sub_82FEFDF8);
PPC_FUNC_IMPL(__imp__sub_82FEFDF8) {
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
	// addi r11,r11,-12728
	r11.s64 = r11.s64 + -12728;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fefe34
	if (cr0.eq) goto loc_82FEFE34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FEFE34:
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

__attribute__((alias("__imp__sub_82FEFE50"))) PPC_WEAK_FUNC(sub_82FEFE50);
PPC_FUNC_IMPL(__imp__sub_82FEFE50) {
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
	// lwz r3,-15952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -15952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82fefe84
	if (cr6.eq) goto loc_82FEFE84;
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
loc_82FEFE84:
	// li r11,0
	r11.s64 = 0;
	// stw r11,-15952(r31)
	PPC_STORE_U32(r31.u32 + -15952, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFEA0"))) PPC_WEAK_FUNC(sub_82FEFEA0);
PPC_FUNC_IMPL(__imp__sub_82FEFEA0) {
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
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r11.u32);
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// stb r11,10(r31)
	PPC_STORE_U8(r31.u32 + 10, r11.u8);
	// lbz r11,18(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 18);
	// stb r11,18(r31)
	PPC_STORE_U8(r31.u32 + 18, r11.u8);
	// lbz r11,9(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// stb r11,9(r31)
	PPC_STORE_U8(r31.u32 + 9, r11.u8);
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stb r11,160(r31)
	PPC_STORE_U8(r31.u32 + 160, r11.u8);
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// stb r11,11(r31)
	PPC_STORE_U8(r31.u32 + 11, r11.u8);
	// lbz r11,12(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// lbz r11,20(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 20);
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
	// lbz r11,19(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 19);
	// stb r11,19(r31)
	PPC_STORE_U8(r31.u32 + 19, r11.u8);
	// lbz r11,21(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
	// lbz r11,22(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// stb r11,22(r31)
	PPC_STORE_U8(r31.u32 + 22, r11.u8);
	// lbz r11,23(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 23);
	// stb r11,23(r31)
	PPC_STORE_U8(r31.u32 + 23, r11.u8);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// bl 0x82fdc330
	sub_82FDC330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// bl 0x82fdc390
	sub_82FDC390(ctx, base);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82feff78
	if (cr6.eq) goto loc_82FEFF78;
	// li r11,0
	r11.s64 = 0;
loc_82FEFF78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// bl 0x82fdc3f0
	sub_82FDC3F0(ctx, base);
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFFA8"))) PPC_WEAK_FUNC(sub_82FEFFA8);
PPC_FUNC_IMPL(__imp__sub_82FEFFA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,124
	r11.s64 = ctx.r3.s64 + 124;
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// addi r10,r3,220
	ctx.r10.s64 = ctx.r3.s64 + 220;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FEFFC8"))) PPC_WEAK_FUNC(sub_82FEFFC8);
PPC_FUNC_IMPL(__imp__sub_82FEFFC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// addi r11,r4,-171
	r11.s64 = ctx.r4.s64 + -171;
	// subfic r11,r11,136
	xer.ca = r11.u32 <= 136;
	r11.s64 = 136 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82fefffc
	if (cr0.eq) goto loc_82FEFFFC;
	// lbz r11,11(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82fefffc
	if (cr0.eq) goto loc_82FEFFFC;
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
loc_82FEFFFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF0008"))) PPC_WEAK_FUNC(sub_82FF0008);
PPC_FUNC_IMPL(__imp__sub_82FF0008) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0060
	if (cr0.eq) goto loc_82FF0060;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
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
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff0068
	if (!cr0.eq) goto loc_82FF0068;
loc_82FF0060:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27800
	ctx.r3.s64 = r11.s64 + -27800;
loc_82FF0068:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF0080"))) PPC_WEAK_FUNC(sub_82FF0080);
PPC_FUNC_IMPL(__imp__sub_82FF0080) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff00f0
	if (cr0.eq) goto loc_82FF00F0;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 192);
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
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82ff00f0
	if (cr0.eq) goto loc_82FF00F0;
	// li r11,0
	r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bl 0x82fe1990
	sub_82FE1990(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff00f4
	goto loc_82FF00F4;
loc_82FF00F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF00F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF0100"))) PPC_WEAK_FUNC(sub_82FF0100);
PPC_FUNC_IMPL(__imp__sub_82FF0100) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-27800
	ctx.r4.s64 = r11.s64 + -27800;
	// stw r3,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r10,-28960
	ctx.r4.s64 = ctx.r10.s64 + -28960;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r10,-27944
	ctx.r4.s64 = ctx.r10.s64 + -27944;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,192(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r4,r10,-28092
	ctx.r4.s64 = ctx.r10.s64 + -28092;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF01B8"))) PPC_WEAK_FUNC(sub_82FF01B8);
PPC_FUNC_IMPL(__imp__sub_82FF01B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ff01dc
	if (!cr6.eq) goto loc_82FF01DC;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82ff01e0
	if (cr6.eq) goto loc_82FF01E0;
loc_82FF01DC:
	// li r11,0
	r11.s64 = 0;
loc_82FF01E0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF01E8"))) PPC_WEAK_FUNC(sub_82FF01E8);
PPC_FUNC_IMPL(__imp__sub_82FF01E8) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r31,r3,124
	r31.s64 = ctx.r3.s64 + 124;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// bl 0x82ff62e0
	sub_82FF62E0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff0258
	if (!cr0.eq) goto loc_82FF0258;
loc_82FF0228:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF022C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82FF0244:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff0228
	if (cr6.eq) goto loc_82FF0228;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_82FF0258:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82ff0244
	if (!cr6.eq) goto loc_82FF0244;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff022c
	goto loc_82FF022C;
}

__attribute__((alias("__imp__sub_82FF0278"))) PPC_WEAK_FUNC(sub_82FF0278);
PPC_FUNC_IMPL(__imp__sub_82FF0278) {
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
	// addi r31,r3,124
	r31.s64 = ctx.r3.s64 + 124;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff02c4
	if (cr0.eq) goto loc_82FF02C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff02c8
	goto loc_82FF02C8;
loc_82FF02C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF02C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF02E0"))) PPC_WEAK_FUNC(sub_82FF02E0);
PPC_FUNC_IMPL(__imp__sub_82FF02E0) {
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
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bge cr6,0x82ff0328
	if (!cr6.lt) goto loc_82FF0328;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r7,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r7.u32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82ff0430
	goto loc_82FF0430;
loc_82FF0328:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82ff03c8
	if (!cr6.eq) goto loc_82FF03C8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ff03c8
	if (!cr6.lt) goto loc_82FF03C8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FF03A8:
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82ff03a8
	if (cr6.lt) goto loc_82FF03A8;
loc_82FF03C8:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r5,256
	ctx.r5.s64 = 256;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
loc_82FF0430:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF0448"))) PPC_WEAK_FUNC(sub_82FF0448);
PPC_FUNC_IMPL(__imp__sub_82FF0448) {
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
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_82FF0460:
	// lwz r11,60(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82ff0460
	if (!cr6.gt) goto loc_82FF0460;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF0490"))) PPC_WEAK_FUNC(sub_82FF0490);
PPC_FUNC_IMPL(__imp__sub_82FF0490) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82FF04AC:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwzx r4,r11,r29
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82ff04ac
	if (!cr6.gt) goto loc_82FF04AC;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,2
	r11.s64 = 2;
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r28,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r28.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r28.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,216(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF0570"))) PPC_WEAK_FUNC(sub_82FF0570);
PPC_FUNC_IMPL(__imp__sub_82FF0570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-12600
	r11.s64 = r11.s64 + -12600;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF0580"))) PPC_WEAK_FUNC(sub_82FF0580);
PPC_FUNC_IMPL(__imp__sub_82FF0580) {
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
	// addi r11,r11,-12600
	r11.s64 = r11.s64 + -12600;
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
	// beq cr6,0x82ff05f4
	if (cr6.eq) goto loc_82FF05F4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82FF05E0:
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
	// bne 0x82ff05e0
	if (!cr0.eq) goto loc_82FF05E0;
loc_82FF05F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF0600"))) PPC_WEAK_FUNC(sub_82FF0600);
PPC_FUNC_IMPL(__imp__sub_82FF0600) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff063c
	if (cr0.eq) goto loc_82FF063C;
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
loc_82FF063C:
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

__attribute__((alias("__imp__sub_82FF0658"))) PPC_WEAK_FUNC(sub_82FF0658);
PPC_FUNC_IMPL(__imp__sub_82FF0658) {
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
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r31,r11,-15960
	r31.s64 = r11.s64 + -15960;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82ff0690
	if (cr6.eq) goto loc_82FF0690;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ffd710
	sub_82FFD710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF0690:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF06C0"))) PPC_WEAK_FUNC(sub_82FF06C0);
PPC_FUNC_IMPL(__imp__sub_82FF06C0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r30,r11,-15956
	r30.s64 = r11.s64 + -15956;
	// lbz r11,-4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff0754
	if (!cr0.eq) goto loc_82FF0754;
	// lis r11,-31942
	r11.s64 = -2093350912;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,-16116(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -16116);
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lbz r11,-4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff074c
	if (!cr0.eq) goto loc_82FF074C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82fe0668
	sub_82FE0668(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff0728
	if (cr0.eq) goto loc_82FF0728;
	// bl 0x82ffd6d0
	sub_82FFD6D0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x82ff072c
	goto loc_82FF072C;
loc_82FF0728:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF072C:
	// lis r11,-32001
	r11.s64 = -2097217536;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r4,r11,1624
	ctx.r4.s64 = r11.s64 + 1624;
	// addi r3,r10,-15936
	ctx.r3.s64 = ctx.r10.s64 + -15936;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,-4(r30)
	PPC_STORE_U8(r30.u32 + -4, r11.u8);
loc_82FF074C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
loc_82FF0754:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
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

__attribute__((alias("__imp__sub_82FF0770"))) PPC_WEAK_FUNC(sub_82FF0770);
PPC_FUNC_IMPL(__imp__sub_82FF0770) {
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

__attribute__((alias("__imp__sub_82FF0798"))) PPC_WEAK_FUNC(sub_82FF0798);
PPC_FUNC_IMPL(__imp__sub_82FF0798) {
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

__attribute__((alias("__imp__sub_82FF07C8"))) PPC_WEAK_FUNC(sub_82FF07C8);
PPC_FUNC_IMPL(__imp__sub_82FF07C8) {
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
	// lwz r3,-15952(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ff084c
	if (!cr6.eq) goto loc_82FF084C;
	// bl 0x82ff06c0
	sub_82FF06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lwz r11,-15952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -15952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff0840
	if (!cr6.eq) goto loc_82FF0840;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-28032
	ctx.r3.s64 = r11.s64 + -28032;
	// bl 0x82fe04b0
	sub_82FE04B0(ctx, base);
	// stw r3,-15952(r30)
	PPC_STORE_U32(r30.u32 + -15952, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff082c
	if (!cr0.eq) goto loc_82FF082C;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82ffc9d0
	sub_82FFC9D0(ctx, base);
loc_82FF082C:
	// lis r11,-32001
	r11.s64 = -2097217536;
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r4,r11,-432
	ctx.r4.s64 = r11.s64 + -432;
	// addi r3,r10,-15948
	ctx.r3.s64 = ctx.r10.s64 + -15948;
	// bl 0x82fffc18
	sub_82FFFC18(ctx, base);
loc_82FF0840:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// lwz r3,-15952(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -15952);
loc_82FF084C:
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

__attribute__((alias("__imp__sub_82FF0864"))) PPC_WEAK_FUNC(sub_82FF0864);
PPC_FUNC_IMPL(__imp__sub_82FF0864) {
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

__attribute__((alias("__imp__sub_82FF0890"))) PPC_WEAK_FUNC(sub_82FF0890);
PPC_FUNC_IMPL(__imp__sub_82FF0890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-2208(r1)
	ea = -2208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// ble cr6,0x82ff08c4
	if (!cr6.gt) goto loc_82FF08C4;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_82FF08C4:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff0970
	if (cr6.eq) goto loc_82FF0970;
	// bl 0x82ff07c8
	sub_82FF07C8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1023
	ctx.r6.s64 = 1023;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82ff0910
	if (cr6.gt) goto loc_82FF0910;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ff0938
	goto loc_82FF0938;
loc_82FF0910:
	// addi r11,r31,-171
	r11.s64 = r31.s64 + -171;
	// cmplwi cr6,r11,136
	cr6.compare<uint32_t>(r11.u32, 136, xer);
	// bgt cr6,0x82ff0924
	if (cr6.gt) goto loc_82FF0924;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82ff0938
	goto loc_82FF0938;
loc_82FF0924:
	// addi r11,r31,-9
	r11.s64 = r31.s64 + -9;
	// subfic r11,r11,161
	xer.ca = r11.u32 <= 161;
	r11.s64 = 161 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
loc_82FF0938:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF0970:
	// addi r11,r31,-171
	r11.s64 = r31.s64 + -171;
	// subfic r11,r11,136
	xer.ca = r11.u32 <= 136;
	r11.s64 = 136 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff09a4
	if (cr0.eq) goto loc_82FF09A4;
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff09a4
	if (cr0.eq) goto loc_82FF09A4;
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82ff09a8
	if (cr0.eq) goto loc_82FF09A8;
loc_82FF09A4:
	// li r11,0
	r11.s64 = 0;
loc_82FF09A8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff09c4
	if (cr0.eq) goto loc_82FF09C4;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8124
	ctx.r4.s64 = r11.s64 + -8124;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF09C4:
	// addi r1,r1,2208
	ctx.r1.s64 = ctx.r1.s64 + 2208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF09E0"))) PPC_WEAK_FUNC(sub_82FF09E0);
PPC_FUNC_IMPL(__imp__sub_82FF09E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4288(r1)
	ea = -4288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// ble cr6,0x82ff0a20
	if (!cr6.gt) goto loc_82FF0A20;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_82FF0A20:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff0ae4
	if (cr6.eq) goto loc_82FF0AE4;
	// bl 0x82ff07c8
	sub_82FF07C8(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,2047
	ctx.r6.s64 = 2047;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82ff0a84
	if (cr6.gt) goto loc_82FF0A84;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ff0aac
	goto loc_82FF0AAC;
loc_82FF0A84:
	// addi r11,r31,-171
	r11.s64 = r31.s64 + -171;
	// cmplwi cr6,r11,136
	cr6.compare<uint32_t>(r11.u32, 136, xer);
	// bgt cr6,0x82ff0a98
	if (cr6.gt) goto loc_82FF0A98;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82ff0aac
	goto loc_82FF0AAC;
loc_82FF0A98:
	// addi r11,r31,-9
	r11.s64 = r31.s64 + -9;
	// subfic r11,r11,161
	xer.ca = r11.u32 <= 161;
	r11.s64 = 161 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
loc_82FF0AAC:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF0AE4:
	// addi r11,r31,-171
	r11.s64 = r31.s64 + -171;
	// subfic r11,r11,136
	xer.ca = r11.u32 <= 136;
	r11.s64 = 136 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0b18
	if (cr0.eq) goto loc_82FF0B18;
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff0b18
	if (cr0.eq) goto loc_82FF0B18;
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82ff0b1c
	if (cr0.eq) goto loc_82FF0B1C;
loc_82FF0B18:
	// li r11,0
	r11.s64 = 0;
loc_82FF0B1C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0b38
	if (cr0.eq) goto loc_82FF0B38;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8124
	ctx.r4.s64 = r11.s64 + -8124;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF0B38:
	// addi r1,r1,4288
	ctx.r1.s64 = ctx.r1.s64 + 4288;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF0B40"))) PPC_WEAK_FUNC(sub_82FF0B40);
PPC_FUNC_IMPL(__imp__sub_82FF0B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4288(r1)
	ea = -4288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// ble cr6,0x82ff0b80
	if (!cr6.gt) goto loc_82FF0B80;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
loc_82FF0B80:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff0c44
	if (cr6.eq) goto loc_82FF0C44;
	// bl 0x82ff07c8
	sub_82FF07C8(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,2047
	ctx.r6.s64 = 2047;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x82ff0be4
	if (cr6.gt) goto loc_82FF0BE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82ff0c0c
	goto loc_82FF0C0C;
loc_82FF0BE4:
	// addi r11,r31,-171
	r11.s64 = r31.s64 + -171;
	// cmplwi cr6,r11,136
	cr6.compare<uint32_t>(r11.u32, 136, xer);
	// bgt cr6,0x82ff0bf8
	if (cr6.gt) goto loc_82FF0BF8;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x82ff0c0c
	goto loc_82FF0C0C;
loc_82FF0BF8:
	// addi r11,r31,-9
	r11.s64 = r31.s64 + -9;
	// subfic r11,r11,161
	xer.ca = r11.u32 <= 161;
	r11.s64 = 161 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
loc_82FF0C0C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-28032
	ctx.r5.s64 = r11.s64 + -28032;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF0C44:
	// addi r11,r31,-171
	r11.s64 = r31.s64 + -171;
	// subfic r11,r11,136
	xer.ca = r11.u32 <= 136;
	r11.s64 = 136 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0c78
	if (cr0.eq) goto loc_82FF0C78;
	// lbz r11,11(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff0c78
	if (cr0.eq) goto loc_82FF0C78;
	// lbz r11,13(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82ff0c7c
	if (cr0.eq) goto loc_82FF0C7C;
loc_82FF0C78:
	// li r11,0
	r11.s64 = 0;
loc_82FF0C7C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0c98
	if (cr0.eq) goto loc_82FF0C98;
	// lis r11,-32219
	r11.s64 = -2111504384;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8124
	ctx.r4.s64 = r11.s64 + -8124;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF0C98:
	// addi r1,r1,4288
	ctx.r1.s64 = ctx.r1.s64 + 4288;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF0CA8"))) PPC_WEAK_FUNC(sub_82FF0CA8);
PPC_FUNC_IMPL(__imp__sub_82FF0CA8) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r30,124
	r28.s64 = r30.s64 + 124;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// ori r20,r10,32852
	r20.u64 = ctx.r10.u64 | 32852;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0d00
	if (cr0.eq) goto loc_82FF0D00;
	// li r4,194
	ctx.r4.s64 = 194;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
loc_82FF0D00:
	// addi r24,r30,220
	r24.s64 = r30.s64 + 220;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// stw r23,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r23.u32);
	// li r22,0
	r22.s64 = 0;
	// lwz r11,24(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// stw r22,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r22.u32);
	// sth r22,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r22.u16);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb090
	sub_82FFB090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff0d5c
	if (!cr0.eq) goto loc_82FF0D5C;
	// li r4,194
	ctx.r4.s64 = 194;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x82ff0ff4
	goto loc_82FF0FF4;
loc_82FF0D5C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r9,24(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// addi r4,r11,-28364
	ctx.r4.s64 = r11.s64 + -28364;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r9
	PPC_STORE_U16(r11.u32 + ctx.r9.u32, r22.u16);
	// lwz r21,24(r23)
	r21.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff0d94
	if (!cr0.eq) goto loc_82FF0D94;
	// li r4,283
	ctx.r4.s64 = 283;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF0D94:
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff0dc0
	if (cr0.eq) goto loc_82FF0DC0;
	// li r4,58
	ctx.r4.s64 = 58;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82fda0f8
	sub_82FDA0F8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82ff0dc0
	if (cr6.eq) goto loc_82FF0DC0;
	// li r4,290
	ctx.r4.s64 = 290;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF0DC0:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff6270
	sub_82FF6270(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x82ff0f10
	if (cr0.eq) goto loc_82FF0F10;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r26,r22
	r26.u64 = r22.u64;
	// b 0x82ff0ec4
	goto loc_82FF0EC4;
loc_82FF0DF8:
	// cmplwi cr6,r29,63
	cr6.compare<uint32_t>(r29.u32, 63, xer);
	// bne cr6,0x82ff0e14
	if (!cr6.eq) goto loc_82FF0E14;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff0f84
	if (!cr0.eq) goto loc_82FF0F84;
loc_82FF0E14:
	// cmplwi cr6,r29,55296
	cr6.compare<uint32_t>(r29.u32, 55296, xer);
	// blt cr6,0x82ff0e44
	if (cr6.lt) goto loc_82FF0E44;
	// cmplwi cr6,r29,56319
	cr6.compare<uint32_t>(r29.u32, 56319, xer);
	// bgt cr6,0x82ff0e44
	if (cr6.gt) goto loc_82FF0E44;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0e3c
	if (cr0.eq) goto loc_82FF0E3C;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x82ff0eb8
	goto loc_82FF0EB8;
loc_82FF0E3C:
	// li r26,1
	r26.s64 = 1;
	// b 0x82ff0eb8
	goto loc_82FF0EB8;
loc_82FF0E44:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff0e6c
	if (cr0.eq) goto loc_82FF0E6C;
	// cmplwi cr6,r29,56320
	cr6.compare<uint32_t>(r29.u32, 56320, xer);
	// blt cr6,0x82ff0e5c
	if (cr6.lt) goto loc_82FF0E5C;
	// cmplwi cr6,r29,57343
	cr6.compare<uint32_t>(r29.u32, 57343, xer);
	// ble cr6,0x82ff0eb4
	if (!cr6.gt) goto loc_82FF0EB4;
loc_82FF0E5C:
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x82ff0eb4
	goto loc_82FF0EB4;
loc_82FF0E6C:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff0eb4
	if (!cr0.eq) goto loc_82FF0EB4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_82FF0EB4:
	// mr r26,r22
	r26.u64 = r22.u64;
loc_82FF0EB8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
loc_82FF0EC4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi. r29,r27,16
	r29.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82ff0df8
	if (!cr0.eq) goto loc_82FF0DF8;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,1070
	ctx.r5.s64 = 1070;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF0F10:
	// li r4,63
	ctx.r4.s64 = 63;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff0f48
	if (!cr0.eq) goto loc_82FF0F48;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x82ff0ff4
	goto loc_82FF0FF4;
loc_82FF0F48:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff0f84
	if (!cr0.eq) goto loc_82FF0F84;
	// li r4,195
	ctx.r4.s64 = 195;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// b 0x82ff0ff4
	goto loc_82FF0FF4;
loc_82FF0F84:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r10,24(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r22,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r22.u16);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r5,24(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff0fbc
	if (cr6.eq) goto loc_82FF0FBC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF0FBC:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff0fe8
	if (!cr0.eq) goto loc_82FF0FE8;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r10,33(r11)
	PPC_STORE_U8(r11.u32 + 33, ctx.r10.u8);
loc_82FF0FE8:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_82FF0FF4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82FF1008"))) PPC_WEAK_FUNC(sub_82FF1008);
PPC_FUNC_IMPL(__imp__sub_82FF1008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF1030"))) PPC_WEAK_FUNC(sub_82FF1030);
PPC_FUNC_IMPL(__imp__sub_82FF1030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF1060"))) PPC_WEAK_FUNC(sub_82FF1060);
PPC_FUNC_IMPL(__imp__sub_82FF1060) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// addi r31,r1,-336
	r31.s64 = ctx.r1.s64 + -336;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// addi r30,r29,220
	r30.s64 = r29.s64 + 220;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r21,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r21.u32);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// stw r23,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r23.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r24,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r24.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r22,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r22.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r20,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r20.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r16,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r16.u32);
	// li r27,-1
	r27.s64 = -1;
	// li r26,0
	r26.s64 = 0;
	// stw r23,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r23.u32);
	// addi r25,r29,124
	r25.s64 = r29.s64 + 124;
	// stw r24,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r24.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r22,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r22.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r20,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r20.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r27.u32);
	// stw r27,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r27.u32);
	// stw r27,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r27.u32);
	// stw r27,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r27.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-63
	r11.s64 = r11.s64 + -63;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff14c0
	if (!cr0.eq) goto loc_82FF14C0;
	// lis r11,-31949
	r11.s64 = -2093809664;
	// lis r18,-31942
	r18.s64 = -2093350912;
	// addi r19,r11,13880
	r19.s64 = r11.s64 + 13880;
	// lis r11,-31948
	r11.s64 = -2093744128;
	// li r20,1
	r20.s64 = 1;
	// addi r17,r11,13880
	r17.s64 = r11.s64 + 13880;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r14,r11,-29160
	r14.s64 = r11.s64 + -29160;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r15,r11,-27808
	r15.s64 = r11.s64 + -27808;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-28992
	r11.s64 = r11.s64 + -28992;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-28984
	r11.s64 = r11.s64 + -28984;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-29016
	r11.s64 = r11.s64 + -29016;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-29844
	r11.s64 = r11.s64 + -29844;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-28524
	r11.s64 = r11.s64 + -28524;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lis r11,2
	r11.s64 = 131072;
	// ori r21,r11,32860
	r21.u64 = r11.u64 | 32860;
	// lis r11,2
	r11.s64 = 131072;
	// ori r22,r11,32856
	r22.u64 = r11.u64 | 32856;
	// lis r11,2
	r11.s64 = 131072;
	// ori r23,r11,32852
	r23.u64 = r11.u64 | 32852;
loc_82FF11C0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82ff11e0
	if (!cr6.eq) goto loc_82FF11E0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82ff11e0
	if (cr6.eq) goto loc_82FF11E0;
	// li r4,207
	ctx.r4.s64 = 207;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF11E0:
	// li r5,61
	ctx.r5.s64 = 61;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6128
	sub_82FF6128(ctx, base);
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff1208
	if (!cr0.eq) goto loc_82FF1208;
	// li r4,187
	ctx.r4.s64 = 187;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF1208:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1274
	if (cr0.eq) goto loc_82FF1274;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_82FF1230:
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,144
	ctx.r10.s64 = r31.s64 + 144;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x82ff12d8
	if (cr6.eq) goto loc_82FF12D8;
	// li r4,268
	ctx.r4.s64 = 268;
loc_82FF1248:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r5,24(r16)
	ctx.r5.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x82ff12e8
	goto loc_82FF12E8;
loc_82FF1274:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff12a0
	if (cr0.eq) goto loc_82FF12A0;
	// mr r27,r20
	r27.u64 = r20.u64;
	// b 0x82ff1230
	goto loc_82FF1230;
loc_82FF12A0:
	// lwz r11,4(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// lwz r10,24(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,24(r16)
	ctx.r3.u64 = PPC_LOAD_U32(r16.u32 + 24);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff12cc
	if (cr0.eq) goto loc_82FF12CC;
	// li r27,2
	r27.s64 = 2;
	// b 0x82ff1230
	goto loc_82FF1230;
loc_82FF12CC:
	// li r4,187
	ctx.r4.s64 = 187;
	// li r27,3
	r27.s64 = 3;
	// b 0x82ff1248
	goto loc_82FF1248;
loc_82FF12D8:
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82FF12E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0278
	sub_82FF0278(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1308
	if (!cr0.eq) goto loc_82FF1308;
	// li r4,180
	ctx.r4.s64 = 180;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF1308:
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r28,r11,r10
	r28.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ff01e8
	sub_82FF01E8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff16f8
	if (cr0.eq) goto loc_82FF16F8;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r28,24(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bne cr6,0x82ff13d4
	if (!cr6.eq) goto loc_82FF13D4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1394
	if (cr0.eq) goto loc_82FF1394;
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ff1380
	if (!cr6.eq) goto loc_82FF1380;
	// stw r20,212(r29)
	PPC_STORE_U32(r29.u32 + 212, r20.u32);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r20,32(r25)
	PPC_STORE_U32(r25.u32 + 32, r20.u32);
	// stwx r20,r11,r21
	PPC_STORE_U32(r11.u32 + r21.u32, r20.u32);
	// stbx r20,r11,r22
	PPC_STORE_U8(r11.u32 + r22.u32, r20.u8);
	// stwx r17,r11,r23
	PPC_STORE_U32(r11.u32 + r23.u32, r17.u32);
	// b 0x82ff147c
	goto loc_82FF147C;
loc_82FF1380:
	// lwz r11,212(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 212);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82ff147c
	if (cr6.eq) goto loc_82FF147C;
loc_82FF138C:
	// li r4,189
	ctx.r4.s64 = 189;
	// b 0x82ff13f0
	goto loc_82FF13F0;
loc_82FF1394:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff138c
	if (cr0.eq) goto loc_82FF138C;
	// lwz r11,364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ff147c
	if (!cr6.eq) goto loc_82FF147C;
	// stw r26,212(r29)
	PPC_STORE_U32(r29.u32 + 212, r26.u32);
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r26,32(r25)
	PPC_STORE_U32(r25.u32 + 32, r26.u32);
	// stwx r26,r11,r21
	PPC_STORE_U32(r11.u32 + r21.u32, r26.u32);
	// lbz r10,-16044(r18)
	ctx.r10.u64 = PPC_LOAD_U8(r18.u32 + -16044);
	// stwx r19,r11,r23
	PPC_STORE_U32(r11.u32 + r23.u32, r19.u32);
	// stbx r10,r11,r22
	PPC_STORE_U8(r11.u32 + r22.u32, ctx.r10.u8);
	// b 0x82ff147c
	goto loc_82FF147C;
loc_82FF13D4:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x82ff140c
	if (!cr6.eq) goto loc_82FF140C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdb088
	sub_82FDB088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff147c
	if (!cr0.eq) goto loc_82FF147C;
	// li r4,191
	ctx.r4.s64 = 191;
loc_82FF13F0:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x82ff147c
	goto loc_82FF147C;
loc_82FF140C:
	// cmpwi cr6,r27,2
	cr6.compare<int32_t>(r27.s32, 2, xer);
	// bne cr6,0x82ff147c
	if (!cr6.eq) goto loc_82FF147C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff145c
	if (!cr0.eq) goto loc_82FF145C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1478
	if (!cr0.eq) goto loc_82FF1478;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff1464
	if (!cr0.eq) goto loc_82FF1464;
loc_82FF145C:
	// stb r20,14(r29)
	PPC_STORE_U8(r29.u32 + 14, r20.u8);
	// b 0x82ff147c
	goto loc_82FF147C;
loc_82FF1464:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82fd9c60
	sub_82FD9C60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff147c
	if (!cr0.eq) goto loc_82FF147C;
loc_82FF1478:
	// stb r26,14(r29)
	PPC_STORE_U8(r29.u32 + 14, r26.u8);
loc_82FF147C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r11,r11,-63
	r11.s64 = r11.s64 + -63;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff11c0
	if (cr0.eq) goto loc_82FF11C0;
	// lwz r27,148(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r20,104(r31)
	r20.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r22,112(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r23,120(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r21,364(r31)
	r21.u64 = PPC_LOAD_U32(r31.u32 + 364);
loc_82FF14C0:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r10,r31,144
	ctx.r10.s64 = r31.s64 + 144;
loc_82FF14CC:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82ff14e8
	if (cr6.eq) goto loc_82FF14E8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82ff14fc
	if (!cr6.eq) goto loc_82FF14FC;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_82FF14E8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// blt cr6,0x82ff14cc
	if (cr6.lt) goto loc_82FF14CC;
	// b 0x82ff1508
	goto loc_82FF1508;
loc_82FF14FC:
	// li r4,269
	ctx.r4.s64 = 269;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF1508:
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// bne cr6,0x82ff1524
	if (!cr6.eq) goto loc_82FF1524;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82ff1558
	if (!cr6.eq) goto loc_82FF1558;
	// li r4,285
	ctx.r4.s64 = 285;
	// b 0x82ff1550
	goto loc_82FF1550;
loc_82FF1524:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x82ff1558
	if (!cr6.eq) goto loc_82FF1558;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82ff1544
	if (cr6.eq) goto loc_82FF1544;
	// li r4,286
	ctx.r4.s64 = 286;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF1544:
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x82ff1558
	if (!cr6.eq) goto loc_82FF1558;
	// li r4,287
	ctx.r4.s64 = 287;
loc_82FF1550:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF1558:
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1580
	if (cr0.eq) goto loc_82FF1580;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1598
	if (!cr0.eq) goto loc_82FF1598;
loc_82FF1580:
	// li r4,190
	ctx.r4.s64 = 190;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_82FF1598:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82ff6508
	sub_82FF6508(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// beq cr6,0x82ff1604
	if (cr6.eq) goto loc_82FF1604;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r4,24(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// bl 0x82ffa2f0
	sub_82FFA2F0(ctx, base);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// bne 0x82ff1600
	if (!cr0.eq) goto loc_82FF1600;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x82ff1604
	goto loc_82FF1604;
loc_82FF1600:
	// lwz r28,24(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 24);
loc_82FF1604:
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// bne cr6,0x82ff1670
	if (!cr6.eq) goto loc_82FF1670;
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff16c0
	if (cr6.eq) goto loc_82FF16C0;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,24(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ff16c0
	goto loc_82FF16C0;
loc_82FF1670:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x82ff16c0
	if (!cr6.eq) goto loc_82FF16C0;
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff16c0
	if (cr6.eq) goto loc_82FF16C0;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,24(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// sthx r26,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r26.u16);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// lwz r4,24(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF16C0:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x82ff1744
	goto loc_82FF1744;
loc_82FF16F8:
	// li r4,209
	ctx.r4.s64 = 209;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
loc_82FF1744:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,336
	ctx.r1.s64 = r31.s64 + 336;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82FF1754"))) PPC_WEAK_FUNC(sub_82FF1754);
PPC_FUNC_IMPL(__imp__sub_82FF1754) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF177C"))) PPC_WEAK_FUNC(sub_82FF177C);
PPC_FUNC_IMPL(__imp__sub_82FF177C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF17A4"))) PPC_WEAK_FUNC(sub_82FF17A4);
PPC_FUNC_IMPL(__imp__sub_82FF17A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF17CC"))) PPC_WEAK_FUNC(sub_82FF17CC);
PPC_FUNC_IMPL(__imp__sub_82FF17CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF17F4"))) PPC_WEAK_FUNC(sub_82FF17F4);
PPC_FUNC_IMPL(__imp__sub_82FF17F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-336
	r31.s64 = r12.s64 + -336;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF1820"))) PPC_WEAK_FUNC(sub_82FF1820);
PPC_FUNC_IMPL(__imp__sub_82FF1820) {
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
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// beq 0x82ff1928
	if (cr0.eq) goto loc_82FF1928;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-28260
	ctx.r4.s64 = r11.s64 + -28260;
	// bl 0x82ffb548
	sub_82FFB548(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff19f0
	if (cr0.eq) goto loc_82FF19F0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28248
	ctx.r4.s64 = r11.s64 + -28248;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28232
	ctx.r4.s64 = r11.s64 + -28232;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28216
	ctx.r4.s64 = r11.s64 + -28216;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28200
	ctx.r4.s64 = r11.s64 + -28200;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28184
	ctx.r4.s64 = r11.s64 + -28184;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1914
	if (!cr0.eq) goto loc_82FF1914;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28168
	ctx.r4.s64 = r11.s64 + -28168;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1914
	if (!cr0.eq) goto loc_82FF1914;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28152
	ctx.r4.s64 = r11.s64 + -28152;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1914
	if (!cr0.eq) goto loc_82FF1914;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-28136
	ctx.r4.s64 = r11.s64 + -28136;
loc_82FF1904:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff19f0
	if (cr0.eq) goto loc_82FF19F0;
loc_82FF1914:
	// li r4,271
	ctx.r4.s64 = 271;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF1920:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff19f4
	goto loc_82FF19F4;
loc_82FF1928:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-28364
	ctx.r4.s64 = r11.s64 + -28364;
	// bl 0x82ffb548
	sub_82FFB548(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff19f0
	if (cr0.eq) goto loc_82FF19F0;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28356
	ctx.r4.s64 = r11.s64 + -28356;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28344
	ctx.r4.s64 = r11.s64 + -28344;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28320
	ctx.r4.s64 = r11.s64 + -28320;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28332
	ctx.r4.s64 = r11.s64 + -28332;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1920
	if (!cr0.eq) goto loc_82FF1920;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28308
	ctx.r4.s64 = r11.s64 + -28308;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1914
	if (!cr0.eq) goto loc_82FF1914;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28296
	ctx.r4.s64 = r11.s64 + -28296;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1914
	if (!cr0.eq) goto loc_82FF1914;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r4,r11,-28272
	ctx.r4.s64 = r11.s64 + -28272;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1914
	if (!cr0.eq) goto loc_82FF1914;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r4,r11,-28284
	ctx.r4.s64 = r11.s64 + -28284;
	// b 0x82ff1904
	goto loc_82FF1904;
loc_82FF19F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF19F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF1A10"))) PPC_WEAK_FUNC(sub_82FF1A10);
PPC_FUNC_IMPL(__imp__sub_82FF1A10) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r28,28(r30)
	r28.u64 = PPC_LOAD_U8(r30.u32 + 28);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stb r11,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r11.u8);
	// stb r28,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r28.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r28,28(r30)
	PPC_STORE_U8(r30.u32 + 28, r28.u8);
	// bne 0x82ff1a5c
	if (!cr0.eq) goto loc_82FF1A5C;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1A5C:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// beq cr6,0x82ff1a6c
	if (cr6.eq) goto loc_82FF1A6C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1A6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// lwz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r11,r11,32808
	r11.u64 = r11.u64 | 32808;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x82ff1ab0
	if (!cr6.eq) goto loc_82FF1AB0;
	// li r29,3
	r29.s64 = 3;
loc_82FF1AA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1AB0:
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(r11.u32, 33, xer);
	// bne cr6,0x82ff1b0c
	if (!cr6.eq) goto loc_82FF1B0C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r4,r11,-11968
	ctx.r4.s64 = r11.s64 + -11968;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1ad8
	if (cr0.eq) goto loc_82FF1AD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1AD8:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r3,132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r4,r11,-11976
	ctx.r4.s64 = r11.s64 + -11976;
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1af8
	if (cr0.eq) goto loc_82FF1AF8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1AF8:
	// li r4,173
	ctx.r4.s64 = 173;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x82ff1b20
	goto loc_82FF1B20;
loc_82FF1B0C:
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x82ff1b1c
	if (!cr6.eq) goto loc_82FF1B1C;
	// li r29,5
	r29.s64 = 5;
	// b 0x82ff1aa0
	goto loc_82FF1AA0;
loc_82FF1B1C:
	// li r3,6
	ctx.r3.s64 = 6;
loc_82FF1B20:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF1B28"))) PPC_WEAK_FUNC(sub_82FF1B28);
PPC_FUNC_IMPL(__imp__sub_82FF1B28) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fefc78
	sub_82FEFC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF1B50"))) PPC_WEAK_FUNC(sub_82FF1B50);
PPC_FUNC_IMPL(__imp__sub_82FF1B50) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r28,124
	r31.s64 = r28.s64 + 124;
	// li r24,0
	r24.s64 = 0;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// li r27,10
	r27.s64 = 10;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1bb0
	if (!cr0.eq) goto loc_82FF1BB0;
	// li r4,88
	ctx.r4.s64 = 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff61f0
	sub_82FF61F0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1c58
	if (cr0.eq) goto loc_82FF1C58;
	// li r4,267
	ctx.r4.s64 = 267;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
loc_82FF1BB0:
	// li r27,16
	r27.s64 = 16;
	// b 0x82ff1c58
	goto loc_82FF1C58;
loc_82FF1BB8:
	// cmplwi cr6,r11,59
	cr6.compare<uint32_t>(r11.u32, 59, xer);
	// beq cr6,0x82ff1c98
	if (cr6.eq) goto loc_82FF1C98;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x82ff1bd8
	if (cr6.lt) goto loc_82FF1BD8;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(r11.u32, 57, xer);
	// bgt cr6,0x82ff1bd8
	if (cr6.gt) goto loc_82FF1BD8;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// b 0x82ff1c04
	goto loc_82FF1C04;
loc_82FF1BD8:
	// cmplwi cr6,r11,65
	cr6.compare<uint32_t>(r11.u32, 65, xer);
	// blt cr6,0x82ff1bf0
	if (cr6.lt) goto loc_82FF1BF0;
	// cmplwi cr6,r11,70
	cr6.compare<uint32_t>(r11.u32, 70, xer);
	// bgt cr6,0x82ff1bf0
	if (cr6.gt) goto loc_82FF1BF0;
	// addi r11,r11,-55
	r11.s64 = r11.s64 + -55;
	// b 0x82ff1c04
	goto loc_82FF1C04;
loc_82FF1BF0:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// blt cr6,0x82ff1d1c
	if (cr6.lt) goto loc_82FF1D1C;
	// cmplwi cr6,r11,102
	cr6.compare<uint32_t>(r11.u32, 102, xer);
	// bgt cr6,0x82ff1d1c
	if (cr6.gt) goto loc_82FF1D1C;
	// addi r11,r11,-87
	r11.s64 = r11.s64 + -87;
loc_82FF1C04:
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// blt cr6,0x82ff1c34
	if (cr6.lt) goto loc_82FF1C34;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r24,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, r24.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,273
	ctx.r4.s64 = 273;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// b 0x82ff1c4c
	goto loc_82FF1C4C;
loc_82FF1C34:
	// mullw r10,r27,r29
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// lis r11,16
	r11.s64 = 1048576;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82ff1d14
	if (cr6.gt) goto loc_82FF1D14;
loc_82FF1C4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
loc_82FF1C58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi. r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1bb8
	if (!cr0.eq) goto loc_82FF1BB8;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 216);
	// li r6,47
	ctx.r6.s64 = 47;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,1931
	ctx.r5.s64 = 1931;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF1C98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// lis r11,15
	r11.s64 = 983040;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// addis r11,r29,-1
	r11.s64 = r29.s64 + -65536;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ff1cdc
	if (cr6.gt) goto loc_82FF1CDC;
	// rlwinm r10,r11,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// clrlwi r11,r11,22
	r11.u64 = r11.u32 & 0x3FF;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r10,r10,-10240
	ctx.r10.s64 = ctx.r10.s64 + -10240;
	// addi r11,r11,-9216
	r11.s64 = r11.s64 + -9216;
	// sth r10,0(r26)
	PPC_STORE_U16(r26.u32 + 0, ctx.r10.u16);
	// sth r11,0(r25)
	PPC_STORE_U16(r25.u32 + 0, r11.u16);
loc_82FF1CD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ff1d3c
	goto loc_82FF1D3C;
loc_82FF1CDC:
	// cmplwi cr6,r29,65533
	cr6.compare<uint32_t>(r29.u32, 65533, xer);
	// bgt cr6,0x82ff1d14
	if (cr6.gt) goto loc_82FF1D14;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// sth r29,0(r26)
	PPC_STORE_U16(r26.u32 + 0, r29.u16);
	// sth r24,0(r25)
	PPC_STORE_U16(r25.u32 + 0, r24.u16);
	// lwz r11,132(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 132);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ff1cd4
	if (!cr0.eq) goto loc_82FF1CD4;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1cd4
	if (!cr0.eq) goto loc_82FF1CD4;
loc_82FF1D14:
	// li r4,224
	ctx.r4.s64 = 224;
	// b 0x82ff1d30
	goto loc_82FF1D30;
loc_82FF1D1C:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r24,0(r26)
	PPC_STORE_U16(r26.u32 + 0, r24.u16);
	// li r4,225
	ctx.r4.s64 = 225;
	// bne 0x82ff1d30
	if (!cr0.eq) goto loc_82FF1D30;
	// li r4,260
	ctx.r4.s64 = 260;
loc_82FF1D30:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF1D3C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82FF1D50"))) PPC_WEAK_FUNC(sub_82FF1D50);
PPC_FUNC_IMPL(__imp__sub_82FF1D50) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r23,r30,220
	r23.s64 = r30.s64 + 220;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r23,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r23.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r24,r30,124
	r24.s64 = r30.s64 + 124;
	// li r26,0
	r26.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x82ff1ea8
	goto loc_82FF1EA8;
loc_82FF1D90:
	// cmplwi cr6,r29,55296
	cr6.compare<uint32_t>(r29.u32, 55296, xer);
	// blt cr6,0x82ff1dc0
	if (cr6.lt) goto loc_82FF1DC0;
	// cmplwi cr6,r29,56319
	cr6.compare<uint32_t>(r29.u32, 56319, xer);
	// bgt cr6,0x82ff1dc0
	if (cr6.gt) goto loc_82FF1DC0;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1db8
	if (cr0.eq) goto loc_82FF1DB8;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x82ff1e3c
	goto loc_82FF1E3C;
loc_82FF1DB8:
	// li r25,1
	r25.s64 = 1;
	// b 0x82ff1e3c
	goto loc_82FF1E3C;
loc_82FF1DC0:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff1de8
	if (cr0.eq) goto loc_82FF1DE8;
	// cmplwi cr6,r29,56320
	cr6.compare<uint32_t>(r29.u32, 56320, xer);
	// blt cr6,0x82ff1dd8
	if (cr6.lt) goto loc_82FF1DD8;
	// cmplwi cr6,r29,57343
	cr6.compare<uint32_t>(r29.u32, 57343, xer);
	// ble cr6,0x82ff1e38
	if (!cr6.gt) goto loc_82FF1E38;
loc_82FF1DD8:
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// b 0x82ff1e38
	goto loc_82FF1E38;
loc_82FF1DE8:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1e38
	if (!cr0.eq) goto loc_82FF1E38;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fd9bb8
	sub_82FD9BB8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// li r4,196
	ctx.r4.s64 = 196;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
loc_82FF1E38:
	// li r25,0
	r25.s64 = 0;
loc_82FF1E3C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x82ff1e64
	if (!cr6.eq) goto loc_82FF1E64;
	// cmplwi cr6,r29,45
	cr6.compare<uint32_t>(r29.u32, 45, xer);
	// bne cr6,0x82ff1e54
	if (!cr6.eq) goto loc_82FF1E54;
	// li r26,1
	r26.s64 = 1;
	// b 0x82ff1ea4
	goto loc_82FF1EA4;
loc_82FF1E54:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// b 0x82ff1ea4
	goto loc_82FF1EA4;
loc_82FF1E64:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x82ff1e9c
	if (!cr6.eq) goto loc_82FF1E9C;
	// cmplwi cr6,r29,45
	cr6.compare<uint32_t>(r29.u32, 45, xer);
	// bne cr6,0x82ff1e7c
	if (!cr6.eq) goto loc_82FF1E7C;
	// li r26,2
	r26.s64 = 2;
	// b 0x82ff1ea4
	goto loc_82FF1EA4;
loc_82FF1E7C:
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fd8e60
	sub_82FD8E60(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// b 0x82ff1ea4
	goto loc_82FF1EA4;
loc_82FF1E9C:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// beq cr6,0x82ff1ef0
	if (cr6.eq) goto loc_82FF1EF0;
loc_82FF1EA4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_82FF1EA8:
	// bl 0x82ff6050
	sub_82FF6050(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// clrlwi. r29,r28,16
	r29.u64 = r28.u32 & 0xFFFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82ff1d90
	if (!cr0.eq) goto loc_82FF1D90;
	// li r4,193
	ctx.r4.s64 = 193;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,47
	ctx.r6.s64 = 47;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,2053
	ctx.r5.s64 = 2053;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fefc90
	sub_82FEFC90(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8072
	ctx.r4.s64 = r11.s64 + -8072;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF1EF0:
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,62
	cr6.compare<uint32_t>(r11.u32, 62, xer);
	// beq cr6,0x82ff1f18
	if (cr6.eq) goto loc_82FF1F18;
	// li r4,263
	ctx.r4.s64 = 263;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
	// b 0x82ff1f7c
	goto loc_82FF1F7C;
loc_82FF1F18:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff1f50
	if (cr6.eq) goto loc_82FF1F50;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,24(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF1F50:
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff1f7c
	if (!cr0.eq) goto loc_82FF1F7C;
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// lwz r10,432(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stb r10,33(r11)
	PPC_STORE_U8(r11.u32 + 33, ctx.r10.u8);
loc_82FF1F7C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82FF1F90"))) PPC_WEAK_FUNC(sub_82FF1F90);
PPC_FUNC_IMPL(__imp__sub_82FF1F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF1FC0"))) PPC_WEAK_FUNC(sub_82FF1FC0);
PPC_FUNC_IMPL(__imp__sub_82FF1FC0) {
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
	// addi r11,r11,-11792
	r11.s64 = r11.s64 + -11792;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff2038
	if (cr0.eq) goto loc_82FF2038;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff2038
	if (!cr6.gt) goto loc_82FF2038;
	// li r29,0
	r29.s64 = 0;
loc_82FF2004:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwzx r28,r11,r29
	r28.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82ff2024
	if (cr0.eq) goto loc_82FF2024;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF2024:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82ff2004
	if (cr6.lt) goto loc_82FF2004;
loc_82FF2038:
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
	// addi r11,r11,-12600
	r11.s64 = r11.s64 + -12600;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF2064"))) PPC_WEAK_FUNC(sub_82FF2064);
PPC_FUNC_IMPL(__imp__sub_82FF2064) {
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
	// bl 0x82ff0570
	sub_82FF0570(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF2090"))) PPC_WEAK_FUNC(sub_82FF2090);
PPC_FUNC_IMPL(__imp__sub_82FF2090) {
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
	// blt cr6,0x82ff20e0
	if (cr6.lt) goto loc_82FF20E0;
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
loc_82FF20E0:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff2110
	if (cr0.eq) goto loc_82FF2110;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff2110
	if (cr0.eq) goto loc_82FF2110;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF2110:
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

__attribute__((alias("__imp__sub_82FF2128"))) PPC_WEAK_FUNC(sub_82FF2128);
PPC_FUNC_IMPL(__imp__sub_82FF2128) {
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
	// ble cr6,0x82ff2198
	if (!cr6.gt) goto loc_82FF2198;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82FF2150:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff217c
	if (cr0.eq) goto loc_82FF217C;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r28,r11,r30
	r28.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82ff217c
	if (cr0.eq) goto loc_82FF217C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF217C:
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
	// blt cr6,0x82ff2150
	if (cr6.lt) goto loc_82FF2150;
loc_82FF2198:
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF21A8"))) PPC_WEAK_FUNC(sub_82FF21A8);
PPC_FUNC_IMPL(__imp__sub_82FF21A8) {
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
	// blt cr6,0x82ff21f4
	if (cr6.lt) goto loc_82FF21F4;
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
loc_82FF21F4:
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff2224
	if (cr0.eq) goto loc_82FF2224;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r10,r11
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff2224
	if (cr0.eq) goto loc_82FF2224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF2224:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82ff2248
	if (!cr6.eq) goto loc_82FF2248;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// b 0x82ff2298
	goto loc_82FF2298;
loc_82FF2248:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82ff2280
	if (!cr6.lt) goto loc_82FF2280;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82FF2258:
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
	// blt cr6,0x82ff2258
	if (cr6.lt) goto loc_82FF2258;
loc_82FF2280:
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
loc_82FF2298:
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

__attribute__((alias("__imp__sub_82FF22B0"))) PPC_WEAK_FUNC(sub_82FF22B0);
PPC_FUNC_IMPL(__imp__sub_82FF22B0) {
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
	// beq 0x82ff2304
	if (cr0.eq) goto loc_82FF2304;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beq 0x82ff2304
	if (cr0.eq) goto loc_82FF2304;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82ff2304
	if (cr0.eq) goto loc_82FF2304;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF2304:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF2318"))) PPC_WEAK_FUNC(sub_82FF2318);
PPC_FUNC_IMPL(__imp__sub_82FF2318) {
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
	// beq 0x82ff237c
	if (cr0.eq) goto loc_82FF237C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff237c
	if (!cr6.gt) goto loc_82FF237C;
	// li r30,0
	r30.s64 = 0;
loc_82FF2348:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwzx r29,r11,r30
	r29.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff2368
	if (cr0.eq) goto loc_82FF2368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF2368:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82ff2348
	if (cr6.lt) goto loc_82FF2348;
loc_82FF237C:
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

__attribute__((alias("__imp__sub_82FF23A0"))) PPC_WEAK_FUNC(sub_82FF23A0);
PPC_FUNC_IMPL(__imp__sub_82FF23A0) {
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
	// bl 0x82ff1fc0
	sub_82FF1FC0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff23d0
	if (cr0.eq) goto loc_82FF23D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF23D0:
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

__attribute__((alias("__imp__sub_82FF23F8"))) PPC_WEAK_FUNC(sub_82FF23F8);
PPC_FUNC_IMPL(__imp__sub_82FF23F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b28
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c3d8
	sub_8301C3D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8301d3b8
	sub_8301D3B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff25d8
	if (cr0.eq) goto loc_82FF25D8;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2514
	if (cr0.eq) goto loc_82FF2514;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff24a0
	if (!cr0.eq) goto loc_82FF24A0;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff2494
	if (cr0.eq) goto loc_82FF2494;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe0fb0
	sub_82FE0FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff2498
	goto loc_82FF2498;
loc_82FF2494:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF2498:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ff261c
	goto loc_82FF261C;
loc_82FF24A0:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,335
	ctx.r5.s64 = 335;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-26928
	ctx.r5.s64 = r11.s64 + -26928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// stb r10,13(r30)
	PPC_STORE_U8(r30.u32 + 13, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r11,r11,-20764
	r11.s64 = r11.s64 + -20764;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82FF2504:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff26bc
	goto loc_82FF26BC;
loc_82FF2514:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff259c
	if (cr0.eq) goto loc_82FF259C;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff259c
	if (cr0.eq) goto loc_82FF259C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,349
	ctx.r5.s64 = 349;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-26928
	ctx.r5.s64 = r11.s64 + -26928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// stb r10,13(r30)
	PPC_STORE_U8(r30.u32 + 13, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// addi r11,r11,-20764
	r11.s64 = r11.s64 + -20764;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff2504
	goto loc_82FF2504;
loc_82FF259C:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff25d0
	if (cr0.eq) goto loc_82FF25D0;
	// addi r4,r31,192
	ctx.r4.s64 = r31.s64 + 192;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ff25d4
	goto loc_82FF25D4;
loc_82FF25D0:
	// li r29,0
	r29.s64 = 0;
loc_82FF25D4:
	// b 0x82ff261c
	goto loc_82FF261C;
loc_82FF25D8:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff2654
	if (!cr0.eq) goto loc_82FF2654;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff2614
	if (cr0.eq) goto loc_82FF2614;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe0fb0
	sub_82FE0FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff2618
	goto loc_82FF2618;
loc_82FF2614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF2618:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82FF261C:
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// b 0x82ff26bc
	goto loc_82FF26BC;
loc_82FF2654:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,370
	ctx.r5.s64 = 370;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,176(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-26928
	ctx.r5.s64 = r11.s64 + -26928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// stb r10,13(r30)
	PPC_STORE_U8(r30.u32 + 13, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// addi r11,r11,-20764
	r11.s64 = r11.s64 + -20764;
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff2504
	goto loc_82FF2504;
loc_82FF26BC:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF26CC"))) PPC_WEAK_FUNC(sub_82FF26CC);
PPC_FUNC_IMPL(__imp__sub_82FF26CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,308(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// li r11,1
	r11.s64 = 1;
	// lwz r30,84(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,13(r29)
	PPC_STORE_U8(r29.u32 + 13, r11.u8);
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff2720
	if (!cr0.eq) goto loc_82FF2720;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
loc_82FF2718:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82ff2764
	goto loc_82FF2764;
loc_82FF2720:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blt cr6,0x82ff2750
	if (cr6.lt) goto loc_82FF2750;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x82ff2718
	goto loc_82FF2718;
loc_82FF2750:
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82FF2764:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32001
	ctx.r3.s64 = -2097217536;
	// addi r3,r3,9916
	ctx.r3.s64 = ctx.r3.s64 + 9916;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF2790"))) PPC_WEAK_FUNC(sub_82FF2790);
PPC_FUNC_IMPL(__imp__sub_82FF2790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
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

__attribute__((alias("__imp__sub_82FF27B8"))) PPC_WEAK_FUNC(sub_82FF27B8);
PPC_FUNC_IMPL(__imp__sub_82FF27B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF27E8"))) PPC_WEAK_FUNC(sub_82FF27E8);
PPC_FUNC_IMPL(__imp__sub_82FF27E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fe2080
	sub_82FE2080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF2810"))) PPC_WEAK_FUNC(sub_82FF2810);
PPC_FUNC_IMPL(__imp__sub_82FF2810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82fe2080
	sub_82FE2080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF2838"))) PPC_WEAK_FUNC(sub_82FF2838);
PPC_FUNC_IMPL(__imp__sub_82FF2838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF2868"))) PPC_WEAK_FUNC(sub_82FF2868);
PPC_FUNC_IMPL(__imp__sub_82FF2868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF2898"))) PPC_WEAK_FUNC(sub_82FF2898);
PPC_FUNC_IMPL(__imp__sub_82FF2898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
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

__attribute__((alias("__imp__sub_82FF28C0"))) PPC_WEAK_FUNC(sub_82FF28C0);
PPC_FUNC_IMPL(__imp__sub_82FF28C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-288
	r31.s64 = r12.s64 + -288;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x82fe2080
	sub_82FE2080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF28F0"))) PPC_WEAK_FUNC(sub_82FF28F0);
PPC_FUNC_IMPL(__imp__sub_82FF28F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd9758
	sub_82FD9758(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff23f8
	sub_82FF23F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
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

__attribute__((alias("__imp__sub_82FF2954"))) PPC_WEAK_FUNC(sub_82FF2954);
PPC_FUNC_IMPL(__imp__sub_82FF2954) {
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

__attribute__((alias("__imp__sub_82FF2988"))) PPC_WEAK_FUNC(sub_82FF2988);
PPC_FUNC_IMPL(__imp__sub_82FF2988) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82ff06c0
	sub_82FF06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ffd760
	sub_82FFD760(ctx, base);
	// lis r10,-31942
	ctx.r10.s64 = -2093350912;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,-15964(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15964);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,-15964(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15964, r11.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// bl 0x82ffd798
	sub_82FFD798(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82ff2a0c
	if (cr0.eq) goto loc_82FF2A0C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,216(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff0580
	sub_82FF0580(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// addi r11,r11,-11792
	r11.s64 = r11.s64 + -11792;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x82ff2a10
	goto loc_82FF2A10;
loc_82FF2A0C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FF2A10:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r10,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff2a38
	if (cr0.eq) goto loc_82FF2A38;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301de58
	sub_8301DE58(ctx, base);
	// b 0x82ff2a3c
	goto loc_82FF2A3C;
loc_82FF2A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF2A3C:
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r3,116(r30)
	PPC_STORE_U32(r30.u32 + 116, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// stw r3,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r3.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r30,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r30.u32);
	// stw r11,308(r30)
	PPC_STORE_U32(r30.u32 + 308, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF2ABC"))) PPC_WEAK_FUNC(sub_82FF2ABC);
PPC_FUNC_IMPL(__imp__sub_82FF2ABC) {
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
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF2AEC"))) PPC_WEAK_FUNC(sub_82FF2AEC);
PPC_FUNC_IMPL(__imp__sub_82FF2AEC) {
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
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF2B28"))) PPC_WEAK_FUNC(sub_82FF2B28);
PPC_FUNC_IMPL(__imp__sub_82FF2B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r29,r30,220
	r29.s64 = r30.s64 + 220;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r27,r11,-29952
	r27.s64 = r11.s64 + -29952;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-29068
	r26.s64 = r11.s64 + -29068;
loc_82FF2B70:
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff2b9c
	if (!cr0.eq) goto loc_82FF2B9C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b70
	return;
loc_82FF2B9C:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x82ff2c14
	if (!cr6.eq) goto loc_82FF2C14;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2bc4
	if (cr0.eq) goto loc_82FF2BC4;
	// li r4,204
	ctx.r4.s64 = 204;
	// b 0x82ff2c90
	goto loc_82FF2C90;
loc_82FF2BC4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2be8
	if (cr0.eq) goto loc_82FF2BE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x82ff2ca8
	goto loc_82FF2CA8;
loc_82FF2BE8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x82ff2c0c
	if (cr0.eq) goto loc_82FF2C0C;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x82ff2ca8
	goto loc_82FF2CA8;
loc_82FF2C0C:
	// li r4,206
	ctx.r4.s64 = 206;
	// b 0x82ff2c94
	goto loc_82FF2C94;
loc_82FF2C14:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r9,r9,32852
	ctx.r9.u64 = ctx.r9.u64 | 32852;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2c8c
	if (cr0.eq) goto loc_82FF2C8C;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff2c80
	if (cr6.eq) goto loc_82FF2C80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82ff60b8
	sub_82FF60B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r11.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ff2ca8
	goto loc_82FF2CA8;
loc_82FF2C80:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x82ff2ca8
	goto loc_82FF2CA8;
loc_82FF2C8C:
	// li r4,206
	ctx.r4.s64 = 206;
loc_82FF2C90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82FF2C94:
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_82FF2CA8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff2b70
	goto loc_82FF2B70;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r27,r11,-29952
	r27.s64 = r11.s64 + -29952;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r26,r11,-29068
	r26.s64 = r11.s64 + -29068;
	// b 0x82ff2b70
	goto loc_82FF2B70;
}

__attribute__((alias("__imp__sub_82FF2CD4"))) PPC_WEAK_FUNC(sub_82FF2CD4);
PPC_FUNC_IMPL(__imp__sub_82FF2CD4) {
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
	// li r4,259
	ctx.r4.s64 = 259;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32001
	ctx.r3.s64 = -2097217536;
	// addi r3,r3,11440
	ctx.r3.s64 = ctx.r3.s64 + 11440;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF2D08"))) PPC_WEAK_FUNC(sub_82FF2D08);
PPC_FUNC_IMPL(__imp__sub_82FF2D08) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF2D38"))) PPC_WEAK_FUNC(sub_82FF2D38);
PPC_FUNC_IMPL(__imp__sub_82FF2D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b14
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r30,220
	r29.s64 = r30.s64 + 220;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// bl 0x82fe7418
	sub_82FE7418(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r25,r11,-29908
	r25.s64 = r11.s64 + -29908;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r24,r11,-29952
	r24.s64 = r11.s64 + -29952;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r23,r11,-29068
	r23.s64 = r11.s64 + -29068;
loc_82FF2D88:
	// addi r27,r30,124
	r27.s64 = r30.s64 + 124;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ff6188
	sub_82FF6188(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi r28,r3,16
	r28.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r28,60
	cr6.compare<uint32_t>(r28.u32, 60, xer);
	// bne cr6,0x82ff2ee0
	if (!cr6.eq) goto loc_82FF2EE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1820
	sub_82FF1820(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2e08
	if (cr0.eq) goto loc_82FF2E08;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,49164
	ctx.r10.u64 = ctx.r10.u64 | 49164;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82ff2de8
	if (!cr6.eq) goto loc_82FF2DE8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,49160
	ctx.r10.u64 = ctx.r10.u64 | 49160;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x82ff2df8
	if (cr6.eq) goto loc_82FF2DF8;
loc_82FF2DE8:
	// li r4,284
	ctx.r4.s64 = 284;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82FF2DF8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1060
	sub_82FF1060(ctx, base);
	// b 0x82ff2f84
	goto loc_82FF2F84;
loc_82FF2E08:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2e2c
	if (cr0.eq) goto loc_82FF2E2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0ca8
	sub_82FF0CA8(ctx, base);
	// b 0x82ff2f84
	goto loc_82FF2F84;
loc_82FF2E2C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2e50
	if (cr0.eq) goto loc_82FF2E50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff1d50
	sub_82FF1D50(ctx, base);
	// b 0x82ff2f84
	goto loc_82FF2F84;
loc_82FF2E50:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82ffb458
	sub_82FFB458(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2ecc
	if (cr0.eq) goto loc_82FF2ECC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff2d88
	if (cr0.eq) goto loc_82FF2D88;
	// lwz r3,184(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff2d88
	if (!cr0.eq) goto loc_82FF2D88;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r4,22(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ff2f84
	goto loc_82FF2F84;
loc_82FF2ECC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff2fa0
	goto loc_82FF2FA0;
loc_82FF2EE0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// ori r10,r10,32852
	ctx.r10.u64 = ctx.r10.u64 | 32852;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r28
	r11.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff2f5c
	if (cr0.eq) goto loc_82FF2F5C;
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff2f4c
	if (cr6.eq) goto loc_82FF2F4C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ff60b8
	sub_82FF60B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r11,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, r11.u16);
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ff2f84
	goto loc_82FF2F84;
loc_82FF2F4C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82ff6360
	sub_82FF6360(ctx, base);
	// b 0x82ff2f84
	goto loc_82FF2F84;
loc_82FF2F5C:
	// li r4,186
	ctx.r4.s64 = 186;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff0890
	sub_82FF0890(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82ff2f78
	if (!cr6.eq) goto loc_82FF2F78;
	// b 0x82ff2f94
	goto loc_82FF2F94;
loc_82FF2F78:
	// li r4,62
	ctx.r4.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82fefc18
	sub_82FEFC18(ctx, base);
loc_82FF2F84:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff2d88
	goto loc_82FF2D88;
	// lwz r29,84(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r26,80(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82FF2F94:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe7548
	sub_82FE7548(ctx, base);
loc_82FF2FA0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82FF2FB0"))) PPC_WEAK_FUNC(sub_82FF2FB0);
PPC_FUNC_IMPL(__imp__sub_82FF2FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r5,r11,-10680
	ctx.r5.s64 = r11.s64 + -10680;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// bl 0x82ff0b40
	sub_82FF0B40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32001
	ctx.r3.s64 = -2097217536;
	// addi r3,r3,12172
	ctx.r3.s64 = ctx.r3.s64 + 12172;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82FF2FF8"))) PPC_WEAK_FUNC(sub_82FF2FF8);
PPC_FUNC_IMPL(__imp__sub_82FF2FF8) {
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
	// bl 0x82fdc2c8
	sub_82FDC2C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3028"))) PPC_WEAK_FUNC(sub_82FF3028);
PPC_FUNC_IMPL(__imp__sub_82FF3028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r30,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff30b4
	if (cr6.eq) goto loc_82FF30B4;
	// addi r4,r31,272
	ctx.r4.s64 = r31.s64 + 272;
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6538
	sub_82FF6538(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// addi r11,r11,-27800
	r11.s64 = r11.s64 + -27800;
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// lwz r11,272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82ff32c4
	if (!cr0.eq) goto loc_82FF32C4;
loc_82FF30B4:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c3d8
	sub_8301C3D8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8301d3b8
	sub_8301D3B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff3274
	if (cr0.eq) goto loc_82FF3274;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8301c488
	sub_8301C488(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff31b0
	if (cr0.eq) goto loc_82FF31B0;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff3138
	if (!cr0.eq) goto loc_82FF3138;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff3130
	if (cr0.eq) goto loc_82FF3130;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe0fb0
	sub_82FE0FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ff3134
	goto loc_82FF3134;
loc_82FF3130:
	// li r29,0
	r29.s64 = 0;
loc_82FF3134:
	// b 0x82ff32b8
	goto loc_82FF32B8;
loc_82FF3138:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,103
	ctx.r6.s64 = 103;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,1612
	ctx.r5.s64 = 1612;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,192(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-26928
	ctx.r5.s64 = r11.s64 + -26928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// stb r10,13(r30)
	PPC_STORE_U8(r30.u32 + 13, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// addi r11,r11,-20764
	r11.s64 = r11.s64 + -20764;
	// stw r11,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82FF319C:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82FF31A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff32fc
	goto loc_82FF32FC;
loc_82FF31B0:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff3238
	if (cr0.eq) goto loc_82FF3238;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8301c4c0
	sub_8301C4C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff3238
	if (cr0.eq) goto loc_82FF3238;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,99
	ctx.r6.s64 = 99;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,1626
	ctx.r5.s64 = 1626;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,256(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-26928
	ctx.r5.s64 = r11.s64 + -26928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// stb r10,13(r30)
	PPC_STORE_U8(r30.u32 + 13, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// addi r11,r11,-20764
	r11.s64 = r11.s64 + -20764;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff319c
	goto loc_82FF319C;
loc_82FF3238:
	// li r3,72
	ctx.r3.s64 = 72;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff326c
	if (cr0.eq) goto loc_82FF326C;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x8301c1d0
	sub_8301C1D0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ff3270
	goto loc_82FF3270;
loc_82FF326C:
	// li r29,0
	r29.s64 = 0;
loc_82FF3270:
	// b 0x82ff32b8
	goto loc_82FF32B8;
loc_82FF3274:
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff3304
	if (!cr0.eq) goto loc_82FF3304;
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff32b4
	if (cr0.eq) goto loc_82FF32B4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,216(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fe0fb0
	sub_82FE0FB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ff32b8
	goto loc_82FF32B8;
loc_82FF32B4:
	// li r29,0
	r29.s64 = 0;
loc_82FF32B8:
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8301cf70
	sub_8301CF70(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82FF32C4:
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82FF32FC:
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// b 0x831b0b70
	return;
loc_82FF3304:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r6,99
	ctx.r6.s64 = 99;
	// li r5,1647
	ctx.r5.s64 = 1647;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82fe1f38
	sub_82FE1F38(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-26928
	ctx.r5.s64 = r11.s64 + -26928;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,292
	ctx.r4.s64 = 292;
	// stb r10,13(r30)
	PPC_STORE_U8(r30.u32 + 13, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// addi r11,r11,-20764
	r11.s64 = r11.s64 + -20764;
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff319c
	goto loc_82FF319C;
	// b 0x82ff31a8
	goto loc_82FF31A8;
}

__attribute__((alias("__imp__sub_82FF3378"))) PPC_WEAK_FUNC(sub_82FF3378);
PPC_FUNC_IMPL(__imp__sub_82FF3378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,372(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// li r11,1
	r11.s64 = 1;
	// lwz r30,116(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,13(r29)
	PPC_STORE_U8(r29.u32 + 13, r11.u8);
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff33cc
	if (!cr0.eq) goto loc_82FF33CC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,7
	ctx.r4.s64 = 7;
loc_82FF33C4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x82ff3410
	goto loc_82FF3410;
loc_82FF33CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82fefb68
	sub_82FEFB68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// blt cr6,0x82ff33fc
	if (cr6.lt) goto loc_82FF33FC;
	// lwz r28,16(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,292
	ctx.r4.s64 = 292;
	// b 0x82ff33c4
	goto loc_82FF33C4;
loc_82FF33FC:
	// lwz r30,16(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,157
	ctx.r4.s64 = 157;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
loc_82FF3410:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff09e0
	sub_82FF09E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lis r3,-32001
	ctx.r3.s64 = -2097217536;
	// addi r3,r3,13164
	ctx.r3.s64 = ctx.r3.s64 + 13164;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF343C"))) PPC_WEAK_FUNC(sub_82FF343C);
PPC_FUNC_IMPL(__imp__sub_82FF343C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_82FF3464"))) PPC_WEAK_FUNC(sub_82FF3464);
PPC_FUNC_IMPL(__imp__sub_82FF3464) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF3494"))) PPC_WEAK_FUNC(sub_82FF3494);
PPC_FUNC_IMPL(__imp__sub_82FF3494) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82fe2080
	sub_82FE2080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF34BC"))) PPC_WEAK_FUNC(sub_82FF34BC);
PPC_FUNC_IMPL(__imp__sub_82FF34BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82fe2080
	sub_82FE2080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF34E4"))) PPC_WEAK_FUNC(sub_82FF34E4);
PPC_FUNC_IMPL(__imp__sub_82FF34E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF3514"))) PPC_WEAK_FUNC(sub_82FF3514);
PPC_FUNC_IMPL(__imp__sub_82FF3514) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,372(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 372);
	// lwz r4,216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 216);
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

__attribute__((alias("__imp__sub_82FF3544"))) PPC_WEAK_FUNC(sub_82FF3544);
PPC_FUNC_IMPL(__imp__sub_82FF3544) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
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

__attribute__((alias("__imp__sub_82FF356C"))) PPC_WEAK_FUNC(sub_82FF356C);
PPC_FUNC_IMPL(__imp__sub_82FF356C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-352
	r31.s64 = r12.s64 + -352;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x82fe2080
	sub_82FE2080(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF35A0"))) PPC_WEAK_FUNC(sub_82FF35A0);
PPC_FUNC_IMPL(__imp__sub_82FF35A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,216(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x82fd9758
	sub_82FD9758(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff3028
	sub_82FF3028(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82fdae08
	sub_82FDAE08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF3604"))) PPC_WEAK_FUNC(sub_82FF3604);
PPC_FUNC_IMPL(__imp__sub_82FF3604) {
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

__attribute__((alias("__imp__sub_82FF3638"))) PPC_WEAK_FUNC(sub_82FF3638);
PPC_FUNC_IMPL(__imp__sub_82FF3638) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,21(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 21);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff368c
	if (cr0.eq) goto loc_82FF368C;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,118
	ctx.r6.s64 = 118;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,1734
	ctx.r5.s64 = 1734;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF368C:
	// lbz r11,22(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 22);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff3730
	if (cr0.eq) goto loc_82FF3730;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff3730
	if (cr0.eq) goto loc_82FF3730;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x82feeed8
	sub_82FEEED8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff3724
	if (cr0.eq) goto loc_82FF3724;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82ff3724
	if (!cr0.eq) goto loc_82FF3724;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r7,216(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r6,118
	ctx.r6.s64 = 118;
	// addi r4,r11,-12424
	ctx.r4.s64 = r11.s64 + -12424;
	// li r5,1744
	ctx.r5.s64 = 1744;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82fd93a0
	sub_82FD93A0(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-8860
	ctx.r4.s64 = r11.s64 + -8860;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF3724:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82ff0600
	sub_82FF0600(ctx, base);
loc_82FF3730:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3748"))) PPC_WEAK_FUNC(sub_82FF3748);
PPC_FUNC_IMPL(__imp__sub_82FF3748) {
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

__attribute__((alias("__imp__sub_82FF3770"))) PPC_WEAK_FUNC(sub_82FF3770);
PPC_FUNC_IMPL(__imp__sub_82FF3770) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff3804
	if (!cr6.gt) goto loc_82FF3804;
	// li r29,0
	r29.s64 = 0;
loc_82FF3794:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r31,r11,r29
	r31.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82ff37e4
	if (cr0.eq) goto loc_82FF37E4;
loc_82FF37A4:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// lwz r27,4(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff37d0
	if (cr0.eq) goto loc_82FF37D0;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82ff37d0
	if (cr0.eq) goto loc_82FF37D0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82ff9cc8
	sub_82FF9CC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF37D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// mr r31,r27
	r31.u64 = r27.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82ff37a4
	if (!cr6.eq) goto loc_82FF37A4;
loc_82FF37E4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82ff3794
	if (cr6.lt) goto loc_82FF3794;
loc_82FF3804:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82FF3818"))) PPC_WEAK_FUNC(sub_82FF3818);
PPC_FUNC_IMPL(__imp__sub_82FF3818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-9560
	r11.s64 = r11.s64 + -9560;
	// li r29,0
	r29.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// addi r25,r30,124
	r25.s64 = r30.s64 + 124;
	// stb r29,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r29.u8);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stb r29,9(r30)
	PPC_STORE_U8(r30.u32 + 9, r29.u8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r29,10(r30)
	PPC_STORE_U8(r30.u32 + 10, r29.u8);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stb r27,11(r30)
	PPC_STORE_U8(r30.u32 + 11, r27.u8);
	// stb r29,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r29.u8);
	// stb r29,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r29.u8);
	// stb r29,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r29.u8);
	// stb r27,15(r30)
	PPC_STORE_U8(r30.u32 + 15, r27.u8);
	// stb r29,16(r30)
	PPC_STORE_U8(r30.u32 + 16, r29.u8);
	// stb r29,18(r30)
	PPC_STORE_U8(r30.u32 + 18, r29.u8);
	// stb r29,19(r30)
	PPC_STORE_U8(r30.u32 + 19, r29.u8);
	// stb r27,20(r30)
	PPC_STORE_U8(r30.u32 + 20, r27.u8);
	// stb r29,21(r30)
	PPC_STORE_U8(r30.u32 + 21, r29.u8);
	// stb r29,22(r30)
	PPC_STORE_U8(r30.u32 + 22, r29.u8);
	// stb r27,23(r30)
	PPC_STORE_U8(r30.u32 + 23, r27.u8);
	// stb r27,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r27.u8);
	// stb r29,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r29.u8);
	// stb r29,26(r30)
	PPC_STORE_U8(r30.u32 + 26, r29.u8);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// stw r29,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r29.u32);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r29,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r29.u32);
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// stb r29,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r29.u8);
	// stw r29,100(r30)
	PPC_STORE_U32(r30.u32 + 100, r29.u32);
	// stw r29,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r29.u32);
	// stw r29,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r29.u32);
	// stw r29,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r29.u32);
	// stb r29,120(r30)
	PPC_STORE_U8(r30.u32 + 120, r29.u8);
	// stw r29,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r29.u32);
	// bl 0x82ff5130
	sub_82FF5130(ctx, base);
	// stw r29,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r29.u32);
	// stw r26,176(r30)
	PPC_STORE_U32(r30.u32 + 176, r26.u32);
	// addi r24,r30,220
	r24.s64 = r30.s64 + 220;
	// stw r23,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r23.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r29,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r29.u32);
	// stw r29,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r29.u32);
	// stw r29,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r29.u32);
	// stw r29,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r29.u32);
	// stw r29,200(r30)
	PPC_STORE_U32(r30.u32 + 200, r29.u32);
	// stw r29,204(r30)
	PPC_STORE_U32(r30.u32 + 204, r29.u32);
	// stw r29,208(r30)
	PPC_STORE_U32(r30.u32 + 208, r29.u32);
	// stw r29,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r29.u32);
	// stw r28,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r28.u32);
	// stw r11,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r11.u32);
	// bl 0x82fe7318
	sub_82FE7318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,232
	ctx.r3.s64 = r30.s64 + 232;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,260
	ctx.r3.s64 = r30.s64 + 260;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,288
	ctx.r3.s64 = r30.s64 + 288;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,316
	ctx.r3.s64 = r30.s64 + 316;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,344
	ctx.r3.s64 = r30.s64 + 344;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// addi r3,r30,372
	ctx.r3.s64 = r30.s64 + 372;
	// bl 0x82fe7278
	sub_82FE7278(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301e970
	sub_8301E970(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82ff2988
	sub_82FF2988(ctx, base);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff39fc
	if (cr0.eq) goto loc_82FF39FC;
	// stb r27,17(r30)
	PPC_STORE_U8(r30.u32 + 17, r27.u8);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r25.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_82FF39FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82FF3A08"))) PPC_WEAK_FUNC(sub_82FF3A08);
PPC_FUNC_IMPL(__imp__sub_82FF3A08) {
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
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff6918
	sub_82FF6918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3A34"))) PPC_WEAK_FUNC(sub_82FF3A34);
PPC_FUNC_IMPL(__imp__sub_82FF3A34) {
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
	// addi r3,r11,220
	ctx.r3.s64 = r11.s64 + 220;
	// bl 0x82fe75c8
	sub_82FE75C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3A60"))) PPC_WEAK_FUNC(sub_82FF3A60);
PPC_FUNC_IMPL(__imp__sub_82FF3A60) {
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
	// addi r3,r11,232
	ctx.r3.s64 = r11.s64 + 232;
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

__attribute__((alias("__imp__sub_82FF3A8C"))) PPC_WEAK_FUNC(sub_82FF3A8C);
PPC_FUNC_IMPL(__imp__sub_82FF3A8C) {
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
	// addi r3,r11,260
	ctx.r3.s64 = r11.s64 + 260;
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

__attribute__((alias("__imp__sub_82FF3AB8"))) PPC_WEAK_FUNC(sub_82FF3AB8);
PPC_FUNC_IMPL(__imp__sub_82FF3AB8) {
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
	// addi r3,r11,288
	ctx.r3.s64 = r11.s64 + 288;
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

__attribute__((alias("__imp__sub_82FF3AE4"))) PPC_WEAK_FUNC(sub_82FF3AE4);
PPC_FUNC_IMPL(__imp__sub_82FF3AE4) {
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
	// addi r3,r11,316
	ctx.r3.s64 = r11.s64 + 316;
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

__attribute__((alias("__imp__sub_82FF3B10"))) PPC_WEAK_FUNC(sub_82FF3B10);
PPC_FUNC_IMPL(__imp__sub_82FF3B10) {
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
	// addi r3,r11,344
	ctx.r3.s64 = r11.s64 + 344;
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

__attribute__((alias("__imp__sub_82FF3B3C"))) PPC_WEAK_FUNC(sub_82FF3B3C);
PPC_FUNC_IMPL(__imp__sub_82FF3B3C) {
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
	// addi r3,r11,372
	ctx.r3.s64 = r11.s64 + 372;
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

__attribute__((alias("__imp__sub_82FF3B68"))) PPC_WEAK_FUNC(sub_82FF3B68);
PPC_FUNC_IMPL(__imp__sub_82FF3B68) {
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
	// addi r3,r11,400
	ctx.r3.s64 = r11.s64 + 400;
	// bl 0x8301ef40
	sub_8301EF40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3B98"))) PPC_WEAK_FUNC(sub_82FF3B98);
PPC_FUNC_IMPL(__imp__sub_82FF3B98) {
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
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82FF3BC8"))) PPC_WEAK_FUNC(sub_82FF3BC8);
PPC_FUNC_IMPL(__imp__sub_82FF3BC8) {
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
	// bl 0x82ff3770
	sub_82FF3770(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff3c18
	if (cr0.eq) goto loc_82FF3C18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82FF3C18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3C38"))) PPC_WEAK_FUNC(sub_82FF3C38);
PPC_FUNC_IMPL(__imp__sub_82FF3C38) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r29,216(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x83015918
	sub_83015918(ctx, base);
loc_82FF3C78:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82ff3c9c
	if (!cr6.eq) goto loc_82FF3C9C;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82ff3ca0
	if (cr6.eq) goto loc_82FF3CA0;
loc_82FF3C9C:
	// li r11,1
	r11.s64 = 1;
loc_82FF3CA0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff3cf4
	if (cr0.eq) goto loc_82FF3CF4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x830159e0
	sub_830159E0(ctx, base);
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82ff3c78
	if (!cr0.eq) goto loc_82FF3C78;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff3c78
	if (cr0.eq) goto loc_82FF3C78;
	// lbz r11,16(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff3c78
	if (cr0.eq) goto loc_82FF3C78;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x8301f560
	sub_8301F560(ctx, base);
	// b 0x82ff3c78
	goto loc_82FF3C78;
loc_82FF3CF4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF3D04"))) PPC_WEAK_FUNC(sub_82FF3D04);
PPC_FUNC_IMPL(__imp__sub_82FF3D04) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x83016120
	sub_83016120(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3D38"))) PPC_WEAK_FUNC(sub_82FF3D38);
PPC_FUNC_IMPL(__imp__sub_82FF3D38) {
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
	// addi r11,r11,-9560
	r11.s64 = r11.s64 + -9560;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff3d7c
	if (cr0.eq) goto loc_82FF3D7C;
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
loc_82FF3D7C:
	// lwz r29,88(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff3d98
	if (cr0.eq) goto loc_82FF3D98;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82ff3bc8
	sub_82FF3BC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF3D98:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff3db8
	if (cr0.eq) goto loc_82FF3DB8;
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
loc_82FF3DB8:
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r4,196(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r4,200(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r4,204(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
loc_82FF3E08:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,64(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82ff3e08
	if (!cr6.gt) goto loc_82FF3E08;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r4,60(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,400
	ctx.r3.s64 = r30.s64 + 400;
	// bl 0x8301ef40
	sub_8301EF40(ctx, base);
	// lwz r3,384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// lwz r4,396(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,356(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// lwz r4,368(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 368);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,328(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// lwz r4,340(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// lwz r4,312(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 312);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// lwz r4,284(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,244(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// lwz r4,256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,220
	ctx.r3.s64 = r30.s64 + 220;
	// bl 0x82fe75c8
	sub_82FE75C8(ctx, base);
	// addi r3,r30,124
	ctx.r3.s64 = r30.s64 + 124;
	// bl 0x82ff6918
	sub_82FF6918(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF3F00"))) PPC_WEAK_FUNC(sub_82FF3F00);
PPC_FUNC_IMPL(__imp__sub_82FF3F00) {
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
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// bl 0x82ff6918
	sub_82FF6918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3F2C"))) PPC_WEAK_FUNC(sub_82FF3F2C);
PPC_FUNC_IMPL(__imp__sub_82FF3F2C) {
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
	// addi r3,r11,220
	ctx.r3.s64 = r11.s64 + 220;
	// bl 0x82fe75c8
	sub_82FE75C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF3F58"))) PPC_WEAK_FUNC(sub_82FF3F58);
PPC_FUNC_IMPL(__imp__sub_82FF3F58) {
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
	// addi r3,r11,232
	ctx.r3.s64 = r11.s64 + 232;
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

__attribute__((alias("__imp__sub_82FF3F84"))) PPC_WEAK_FUNC(sub_82FF3F84);
PPC_FUNC_IMPL(__imp__sub_82FF3F84) {
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
	// addi r3,r11,260
	ctx.r3.s64 = r11.s64 + 260;
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

__attribute__((alias("__imp__sub_82FF3FB0"))) PPC_WEAK_FUNC(sub_82FF3FB0);
PPC_FUNC_IMPL(__imp__sub_82FF3FB0) {
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
	// addi r3,r11,288
	ctx.r3.s64 = r11.s64 + 288;
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

__attribute__((alias("__imp__sub_82FF3FDC"))) PPC_WEAK_FUNC(sub_82FF3FDC);
PPC_FUNC_IMPL(__imp__sub_82FF3FDC) {
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
	// addi r3,r11,316
	ctx.r3.s64 = r11.s64 + 316;
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

__attribute__((alias("__imp__sub_82FF4008"))) PPC_WEAK_FUNC(sub_82FF4008);
PPC_FUNC_IMPL(__imp__sub_82FF4008) {
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
	// addi r3,r11,344
	ctx.r3.s64 = r11.s64 + 344;
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

__attribute__((alias("__imp__sub_82FF4034"))) PPC_WEAK_FUNC(sub_82FF4034);
PPC_FUNC_IMPL(__imp__sub_82FF4034) {
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
	// addi r3,r11,372
	ctx.r3.s64 = r11.s64 + 372;
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

__attribute__((alias("__imp__sub_82FF4060"))) PPC_WEAK_FUNC(sub_82FF4060);
PPC_FUNC_IMPL(__imp__sub_82FF4060) {
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
	// addi r3,r11,400
	ctx.r3.s64 = r11.s64 + 400;
	// bl 0x8301ef40
	sub_8301EF40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4090"))) PPC_WEAK_FUNC(sub_82FF4090);
PPC_FUNC_IMPL(__imp__sub_82FF4090) {
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
	// bl 0x82ff3d38
	sub_82FF3D38(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff40c0
	if (cr0.eq) goto loc_82FF40C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF40C0:
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

__attribute__((alias("__imp__sub_82FF40E8"))) PPC_WEAK_FUNC(sub_82FF40E8);
PPC_FUNC_IMPL(__imp__sub_82FF40E8) {
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
	// li r3,608
	ctx.r3.s64 = 608;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff4134
	if (cr0.eq) goto loc_82FF4134;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x830262f8
	sub_830262F8(ctx, base);
	// b 0x82ff4138
	goto loc_82FF4138;
loc_82FF4134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF4138:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF4140"))) PPC_WEAK_FUNC(sub_82FF4140);
PPC_FUNC_IMPL(__imp__sub_82FF4140) {
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

__attribute__((alias("__imp__sub_82FF4178"))) PPC_WEAK_FUNC(sub_82FF4178);
PPC_FUNC_IMPL(__imp__sub_82FF4178) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r11,-27736
	ctx.r4.s64 = r11.s64 + -27736;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff41e4
	if (cr0.eq) goto loc_82FF41E4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff41dc
	if (cr0.eq) goto loc_82FF41DC;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83036b88
	sub_83036B88(ctx, base);
	// b 0x82ff41e0
	goto loc_82FF41E0;
loc_82FF41DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF41E0:
	// b 0x82ff42cc
	goto loc_82FF42CC;
loc_82FF41E4:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-27708
	ctx.r4.s64 = r11.s64 + -27708;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff4230
	if (cr0.eq) goto loc_82FF4230;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,608
	ctx.r3.s64 = 608;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff4228
	if (cr0.eq) goto loc_82FF4228;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x830262f8
	sub_830262F8(ctx, base);
	// b 0x82ff422c
	goto loc_82FF422C;
loc_82FF4228:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF422C:
	// b 0x82ff42cc
	goto loc_82FF42CC;
loc_82FF4230:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-27680
	ctx.r4.s64 = r11.s64 + -27680;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff427c
	if (cr0.eq) goto loc_82FF427C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,596
	ctx.r3.s64 = 596;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff4274
	if (cr0.eq) goto loc_82FF4274;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x83034268
	sub_83034268(ctx, base);
	// b 0x82ff4278
	goto loc_82FF4278;
loc_82FF4274:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF4278:
	// b 0x82ff42cc
	goto loc_82FF42CC;
loc_82FF427C:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-27652
	ctx.r4.s64 = r11.s64 + -27652;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff42c8
	if (cr0.eq) goto loc_82FF42C8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,500
	ctx.r3.s64 = 500;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff42c0
	if (cr0.eq) goto loc_82FF42C0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8302ba20
	sub_8302BA20(ctx, base);
	// b 0x82ff42c4
	goto loc_82FF42C4;
loc_82FF42C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF42C4:
	// b 0x82ff42cc
	goto loc_82FF42CC;
loc_82FF42C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF42CC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82FF42D4"))) PPC_WEAK_FUNC(sub_82FF42D4);
PPC_FUNC_IMPL(__imp__sub_82FF42D4) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
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

__attribute__((alias("__imp__sub_82FF4300"))) PPC_WEAK_FUNC(sub_82FF4300);
PPC_FUNC_IMPL(__imp__sub_82FF4300) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
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

__attribute__((alias("__imp__sub_82FF432C"))) PPC_WEAK_FUNC(sub_82FF432C);
PPC_FUNC_IMPL(__imp__sub_82FF432C) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
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

__attribute__((alias("__imp__sub_82FF4358"))) PPC_WEAK_FUNC(sub_82FF4358);
PPC_FUNC_IMPL(__imp__sub_82FF4358) {
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
	// lwz r4,188(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 188);
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

__attribute__((alias("__imp__sub_82FF4388"))) PPC_WEAK_FUNC(sub_82FF4388);
PPC_FUNC_IMPL(__imp__sub_82FF4388) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x83037908
	sub_83037908(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r25.u32);
	// addi r11,r11,-8840
	r11.s64 = r11.s64 + -8840;
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r29.u32);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// sth r10,20(r31)
	PPC_STORE_U16(r31.u32 + 20, ctx.r10.u16);
	// sth r10,22(r31)
	PPC_STORE_U16(r31.u32 + 22, ctx.r10.u16);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r27,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r27.u32);
	// stw r26,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r26.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff443c
	if (cr0.eq) goto loc_82FF443C;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ff4414
	if (cr0.eq) goto loc_82FF4414;
	// sth r10,20(r31)
	PPC_STORE_U16(r31.u32 + 20, ctx.r10.u16);
loc_82FF4414:
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ff4428
	if (cr0.eq) goto loc_82FF4428;
	// lhz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 20);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// sth r9,20(r31)
	PPC_STORE_U16(r31.u32 + 20, ctx.r9.u16);
loc_82FF4428:
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff443c
	if (cr0.eq) goto loc_82FF443C;
	// lhz r11,20(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 20);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// sth r11,20(r31)
	PPC_STORE_U16(r31.u32 + 20, r11.u16);
loc_82FF443C:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff4468
	if (cr0.eq) goto loc_82FF4468;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82ff4454
	if (cr0.eq) goto loc_82FF4454;
	// sth r10,22(r31)
	PPC_STORE_U16(r31.u32 + 22, ctx.r10.u16);
loc_82FF4454:
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff4468
	if (cr0.eq) goto loc_82FF4468;
	// lhz r11,22(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 22);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// sth r11,22(r31)
	PPC_STORE_U16(r31.u32 + 22, r11.u16);
loc_82FF4468:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82FF4478"))) PPC_WEAK_FUNC(sub_82FF4478);
PPC_FUNC_IMPL(__imp__sub_82FF4478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4488"))) PPC_WEAK_FUNC(sub_82FF4488);
PPC_FUNC_IMPL(__imp__sub_82FF4488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82FF44B0"))) PPC_WEAK_FUNC(sub_82FF44B0);
PPC_FUNC_IMPL(__imp__sub_82FF44B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF44C8"))) PPC_WEAK_FUNC(sub_82FF44C8);
PPC_FUNC_IMPL(__imp__sub_82FF44C8) {
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
	// addi r11,r11,-8840
	r11.s64 = r11.s64 + -8840;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82ff4508
	if (cr0.eq) goto loc_82FF4508;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83017730
	sub_83017730(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF4508:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF4518"))) PPC_WEAK_FUNC(sub_82FF4518);
PPC_FUNC_IMPL(__imp__sub_82FF4518) {
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
	// bl 0x83037970
	sub_83037970(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4540"))) PPC_WEAK_FUNC(sub_82FF4540);
PPC_FUNC_IMPL(__imp__sub_82FF4540) {
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
	// bl 0x82ff44c8
	sub_82FF44C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff4570
	if (cr0.eq) goto loc_82FF4570;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF4570:
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

__attribute__((alias("__imp__sub_82FF4590"))) PPC_WEAK_FUNC(sub_82FF4590);
PPC_FUNC_IMPL(__imp__sub_82FF4590) {
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
	// addi r11,r11,-5384
	r11.s64 = r11.s64 + -5384;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82ff45bc
	if (cr0.eq) goto loc_82FF45BC;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82FF45BC:
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

__attribute__((alias("__imp__sub_82FF45D8"))) PPC_WEAK_FUNC(sub_82FF45D8);
PPC_FUNC_IMPL(__imp__sub_82FF45D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r10,r11,-5384
	ctx.r10.s64 = r11.s64 + -5384;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r9,r11,-5360
	ctx.r9.s64 = r11.s64 + -5360;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r11,-5372
	ctx.r8.s64 = r11.s64 + -5372;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4620"))) PPC_WEAK_FUNC(sub_82FF4620);
PPC_FUNC_IMPL(__imp__sub_82FF4620) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// bne cr6,0x82ff4644
	if (!cr6.eq) goto loc_82FF4644;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82FF4644:
	// lis r11,-32236
	r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r11,r11,-5384
	r11.s64 = r11.s64 + -5384;
	// addi r10,r10,-5384
	ctx.r10.s64 = ctx.r10.s64 + -5384;
	// clrlwi. r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq 0x82ff466c
	if (cr0.eq) goto loc_82FF466C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82FF466C:
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

__attribute__((alias("__imp__sub_82FF4688"))) PPC_WEAK_FUNC(sub_82FF4688);
PPC_FUNC_IMPL(__imp__sub_82FF4688) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ff46f0
	if (cr0.eq) goto loc_82FF46F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ff46f0
	if (cr0.eq) goto loc_82FF46F0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82ff46f4
	if (!cr0.eq) goto loc_82FF46F4;
loc_82FF46F0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82FF46F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4710"))) PPC_WEAK_FUNC(sub_82FF4710);
PPC_FUNC_IMPL(__imp__sub_82FF4710) {
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
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ff4780
	if (cr0.eq) goto loc_82FF4780;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82ff4780
	if (cr0.eq) goto loc_82FF4780;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff4780
	if (cr6.eq) goto loc_82FF4780;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x82ff4784
	goto loc_82FF4784;
loc_82FF4780:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_82FF4784:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF47A0"))) PPC_WEAK_FUNC(sub_82FF47A0);
PPC_FUNC_IMPL(__imp__sub_82FF47A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x82ff4800
	if (cr6.eq) goto loc_82FF4800;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x82ff47f8
	if (cr6.eq) goto loc_82FF47F8;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// beq cr6,0x82ff47f0
	if (cr6.eq) goto loc_82FF47F0;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x82ff47e8
	if (cr6.eq) goto loc_82FF47E8;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// beq cr6,0x82ff47e0
	if (cr6.eq) goto loc_82FF47E0;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// beq cr6,0x82ff47d8
	if (cr6.eq) goto loc_82FF47D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF47D8:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blr 
	return;
loc_82FF47E0:
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
loc_82FF47E8:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
loc_82FF47F0:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
loc_82FF47F8:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
loc_82FF4800:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4808"))) PPC_WEAK_FUNC(sub_82FF4808);
PPC_FUNC_IMPL(__imp__sub_82FF4808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82ff4898
	if (cr6.lt) goto loc_82FF4898;
	// beq cr6,0x82ff488c
	if (cr6.eq) goto loc_82FF488C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82ff4874
	if (cr6.lt) goto loc_82FF4874;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// beq cr6,0x82ff4868
	if (cr6.eq) goto loc_82FF4868;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// beq cr6,0x82ff485c
	if (cr6.eq) goto loc_82FF485C;
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// beq cr6,0x82ff4850
	if (cr6.eq) goto loc_82FF4850;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// beq cr6,0x82ff4844
	if (cr6.eq) goto loc_82FF4844;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF4844:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,23,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	// blr 
	return;
loc_82FF4850:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,24,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// blr 
	return;
loc_82FF485C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
loc_82FF4868:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// blr 
	return;
loc_82FF4874:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,15
	ctx.r3.s64 = r11.s64 + 15;
	// blr 
	return;
loc_82FF488C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// b 0x82ff489c
	goto loc_82FF489C;
loc_82FF4898:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_82FF489C:
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF48A8"))) PPC_WEAK_FUNC(sub_82FF48A8);
PPC_FUNC_IMPL(__imp__sub_82FF48A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// beq cr6,0x82ff4900
	if (cr6.eq) goto loc_82FF4900;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x82ff48f8
	if (cr6.eq) goto loc_82FF48F8;
	// cmpwi cr6,r4,7
	cr6.compare<int32_t>(ctx.r4.s32, 7, xer);
	// beq cr6,0x82ff48f0
	if (cr6.eq) goto loc_82FF48F0;
	// cmpwi cr6,r4,8
	cr6.compare<int32_t>(ctx.r4.s32, 8, xer);
	// beq cr6,0x82ff48e8
	if (cr6.eq) goto loc_82FF48E8;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// beq cr6,0x82ff48e0
	if (cr6.eq) goto loc_82FF48E0;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
loc_82FF48E0:
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// blr 
	return;
loc_82FF48E8:
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// blr 
	return;
loc_82FF48F0:
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
loc_82FF48F8:
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// blr 
	return;
loc_82FF4900:
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4908"))) PPC_WEAK_FUNC(sub_82FF4908);
PPC_FUNC_IMPL(__imp__sub_82FF4908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82ff4994
	if (cr6.lt) goto loc_82FF4994;
	// beq cr6,0x82ff498c
	if (cr6.eq) goto loc_82FF498C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82ff497c
	if (cr6.lt) goto loc_82FF497C;
	// cmplwi cr6,r4,5
	cr6.compare<uint32_t>(ctx.r4.u32, 5, xer);
	// beq cr6,0x82ff496c
	if (cr6.eq) goto loc_82FF496C;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// beq cr6,0x82ff495c
	if (cr6.eq) goto loc_82FF495C;
	// cmplwi cr6,r4,9
	cr6.compare<uint32_t>(ctx.r4.u32, 9, xer);
	// beq cr6,0x82ff494c
	if (cr6.eq) goto loc_82FF494C;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,22,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF494C:
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF495C:
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF496C:
	// subfic r11,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	r11.s64 = 0 - ctx.r5.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF497C:
	// addi r11,r5,-15
	r11.s64 = ctx.r5.s64 + -15;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF498C:
	// rlwinm r11,r5,2,28,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// b 0x82ff4998
	goto loc_82FF4998;
loc_82FF4994:
	// clrlwi r11,r5,30
	r11.u64 = ctx.r5.u32 & 0x3;
loc_82FF4998:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF49A8"))) PPC_WEAK_FUNC(sub_82FF49A8);
PPC_FUNC_IMPL(__imp__sub_82FF49A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82ff4620
	sub_82FF4620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF49B0"))) PPC_WEAK_FUNC(sub_82FF49B0);
PPC_FUNC_IMPL(__imp__sub_82FF49B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82ff49c4
	if (cr6.lt) goto loc_82FF49C4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF49C4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x83020000
	sub_83020000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF49D0"))) PPC_WEAK_FUNC(sub_82FF49D0);
PPC_FUNC_IMPL(__imp__sub_82FF49D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82ff49e4
	if (cr6.lt) goto loc_82FF49E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF49E4:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x83020000
	sub_83020000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF49F0"))) PPC_WEAK_FUNC(sub_82FF49F0);
PPC_FUNC_IMPL(__imp__sub_82FF49F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82ff4a04
	if (cr6.lt) goto loc_82FF4A04;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FF4A04:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// b 0x83020000
	sub_83020000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF4A10"))) PPC_WEAK_FUNC(sub_82FF4A10);
PPC_FUNC_IMPL(__imp__sub_82FF4A10) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82ff4a88
	if (!cr6.gt) goto loc_82FF4A88;
loc_82FF4A38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff4a78
	if (cr0.eq) goto loc_82FF4A78;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82fdbf80
	sub_82FDBF80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff4a94
	if (!cr0.eq) goto loc_82FF4A94;
loc_82FF4A78:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82ff4a38
	if (cr6.lt) goto loc_82FF4A38;
loc_82FF4A88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF4A8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
loc_82FF4A94:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x83020000
	sub_83020000(ctx, base);
	// b 0x82ff4a8c
	goto loc_82FF4A8C;
}

__attribute__((alias("__imp__sub_82FF4AB0"))) PPC_WEAK_FUNC(sub_82FF4AB0);
PPC_FUNC_IMPL(__imp__sub_82FF4AB0) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82ff4b10
	if (cr0.eq) goto loc_82FF4B10;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x83043458
	sub_83043458(ctx, base);
	// lis r11,-32233
	r11.s64 = -2112421888;
	// addi r10,r11,2232
	ctx.r10.s64 = r11.s64 + 2232;
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x82ff4b14
	goto loc_82FF4B14;
loc_82FF4B10:
	// li r11,0
	r11.s64 = 0;
loc_82FF4B14:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// lis r11,-32237
	r11.s64 = -2112684032;
	// addi r28,r11,32376
	r28.s64 = r11.s64 + 32376;
	// beq 0x82ff4b58
	if (cr0.eq) goto loc_82FF4B58;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82ff4b5c
	goto loc_82FF4B5C;
loc_82FF4B58:
	// li r11,0
	r11.s64 = 0;
loc_82FF4B5C:
	// li r3,24
	ctx.r3.s64 = 24;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq 0x82ff4b98
	if (cr0.eq) goto loc_82FF4B98;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82fdad88
	sub_82FDAD88(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82ff4b9c
	goto loc_82FF4B9C;
loc_82FF4B98:
	// li r11,0
	r11.s64 = 0;
loc_82FF4B9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82FF4BAC"))) PPC_WEAK_FUNC(sub_82FF4BAC);
PPC_FUNC_IMPL(__imp__sub_82FF4BAC) {
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82FF4BDC"))) PPC_WEAK_FUNC(sub_82FF4BDC);
PPC_FUNC_IMPL(__imp__sub_82FF4BDC) {
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82FF4C0C"))) PPC_WEAK_FUNC(sub_82FF4C0C);
PPC_FUNC_IMPL(__imp__sub_82FF4C0C) {
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
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82FF4C48"))) PPC_WEAK_FUNC(sub_82FF4C48);
PPC_FUNC_IMPL(__imp__sub_82FF4C48) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x82fe1350
	sub_82FE1350(ctx, base);
	// lis r11,-32236
	r11.s64 = -2112618496;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82fe1758
	sub_82FE1758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82FF4CB0"))) PPC_WEAK_FUNC(sub_82FF4CB0);
PPC_FUNC_IMPL(__imp__sub_82FF4CB0) {
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

__attribute__((alias("__imp__sub_82FF4CD8"))) PPC_WEAK_FUNC(sub_82FF4CD8);
PPC_FUNC_IMPL(__imp__sub_82FF4CD8) {
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
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
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

__attribute__((alias("__imp__sub_82FF4D18"))) PPC_WEAK_FUNC(sub_82FF4D18);
PPC_FUNC_IMPL(__imp__sub_82FF4D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82fe1298
	sub_82FE1298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FF4D30"))) PPC_WEAK_FUNC(sub_82FF4D30);
PPC_FUNC_IMPL(__imp__sub_82FF4D30) {
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
	// beq 0x82ff4d80
	if (cr0.eq) goto loc_82FF4D80;
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
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82ff4d84
	goto loc_82FF4D84;
loc_82FF4D80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF4D84:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82FF4D8C"))) PPC_WEAK_FUNC(sub_82FF4D8C);
PPC_FUNC_IMPL(__imp__sub_82FF4D8C) {
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

__attribute__((alias("__imp__sub_82FF4DC0"))) PPC_WEAK_FUNC(sub_82FF4DC0);
PPC_FUNC_IMPL(__imp__sub_82FF4DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// addi r3,r11,-27172
	ctx.r3.s64 = r11.s64 + -27172;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4DD0"))) PPC_WEAK_FUNC(sub_82FF4DD0);
PPC_FUNC_IMPL(__imp__sub_82FF4DD0) {
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
	// addi r11,r11,-5200
	r11.s64 = r11.s64 + -5200;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82fe1298
	sub_82FE1298(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff4e0c
	if (cr0.eq) goto loc_82FF4E0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
loc_82FF4E0C:
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

__attribute__((alias("__imp__sub_82FF4E28"))) PPC_WEAK_FUNC(sub_82FF4E28);
PPC_FUNC_IMPL(__imp__sub_82FF4E28) {
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
	// blt cr6,0x82ff4e78
	if (cr6.lt) goto loc_82FF4E78;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82ff4e78
	if (!cr0.eq) goto loc_82FF4E78;
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x82ff4edc
	goto loc_82FF4EDC;
loc_82FF4E78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r10,13
	cr6.compare<uint32_t>(ctx.r10.u32, 13, xer);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// beq cr6,0x82ff4ebc
	if (cr6.eq) goto loc_82FF4EBC;
	// cmplwi cr6,r10,133
	cr6.compare<uint32_t>(ctx.r10.u32, 133, xer);
	// beq cr6,0x82ff4ea8
	if (cr6.eq) goto loc_82FF4EA8;
	// cmplwi cr6,r10,8232
	cr6.compare<uint32_t>(ctx.r10.u32, 8232, xer);
	// bne cr6,0x82ff4ed8
	if (!cr6.eq) goto loc_82FF4ED8;
loc_82FF4EA8:
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32856
	r11.u64 = r11.u64 | 32856;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff4ed8
	if (cr0.eq) goto loc_82FF4ED8;
loc_82FF4EBC:
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32820
	r11.u64 = r11.u64 | 32820;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ff4ed8
	if (!cr6.eq) goto loc_82FF4ED8;
	// li r11,10
	r11.s64 = 10;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
loc_82FF4ED8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FF4EDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF4EF8"))) PPC_WEAK_FUNC(sub_82FF4EF8);
PPC_FUNC_IMPL(__imp__sub_82FF4EF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x82ff4fc4
	if (!cr6.eq) goto loc_82FF4FC4;
	// lis r11,2
	r11.s64 = 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r11,32820
	ctx.r10.u64 = r11.u64 | 32820;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// ori r9,r9,49160
	ctx.r9.u64 = ctx.r9.u64 | 49160;
	// addi r11,r11,-16372
	r11.s64 = r11.s64 + -16372;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stwx r8,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82ff50d0
	if (!cr6.eq) goto loc_82FF50D0;
	// lis r11,0
	r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,32772
	r11.u64 = r11.u64 | 32772;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82ff4f7c
	if (cr6.lt) goto loc_82FF4F7C;
	// bl 0x82ffacf0
	sub_82FFACF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff4fb8
	if (cr0.eq) goto loc_82FF4FB8;
loc_82FF4F7C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82ff4fb0
	if (cr6.eq) goto loc_82FF4FB0;
	// cmplwi cr6,r11,133
	cr6.compare<uint32_t>(r11.u32, 133, xer);
	// bne cr6,0x82ff4fb8
	if (!cr6.eq) goto loc_82FF4FB8;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32856
	r11.u64 = r11.u64 | 32856;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff4fb8
	if (cr0.eq) goto loc_82FF4FB8;
loc_82FF4FB0:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82FF4FB8:
	// li r11,10
	r11.s64 = 10;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// b 0x82ff50d0
	goto loc_82FF50D0;
loc_82FF4FC4:
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bne cr6,0x82ff4fe8
	if (!cr6.eq) goto loc_82FF4FE8;
	// lis r11,1
	r11.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r11,49160
	ctx.r10.u64 = r11.u64 | 49160;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// addi r11,r11,-16372
	r11.s64 = r11.s64 + -16372;
	// stwx r9,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// b 0x82ff5000
	goto loc_82FF5000;
loc_82FF4FE8:
	// cmplwi cr6,r11,133
	cr6.compare<uint32_t>(r11.u32, 133, xer);
	// beq cr6,0x82ff5010
	if (cr6.eq) goto loc_82FF5010;
	// cmplwi cr6,r11,8232
	cr6.compare<uint32_t>(r11.u32, 8232, xer);
	// beq cr6,0x82ff5010
	if (cr6.eq) goto loc_82FF5010;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// addi r11,r11,-16376
	r11.s64 = r11.s64 + -16376;
loc_82FF5000:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82ff50d0
	goto loc_82FF50D0;
loc_82FF5010:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82ff507c
	if (cr0.eq) goto loc_82FF507C;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32860
	r11.u64 = r11.u64 | 32860;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ff507c
	if (!cr6.eq) goto loc_82FF507C;
	// lis r11,2
	r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,32864
	ctx.r8.u64 = r11.u64 | 32864;
	// lis r11,2
	r11.s64 = 131072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r7,r11,32832
	ctx.r7.u64 = r11.u64 | 32832;
	// lis r11,-32236
	r11.s64 = -2112618496;
	// li r6,72
	ctx.r6.s64 = 72;
	// addi r4,r11,-5072
	ctx.r4.s64 = r11.s64 + -5072;
	// lwzx r11,r31,r8
	r11.u64 = PPC_LOAD_U32(r31.u32 + ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,933
	ctx.r5.s64 = 933;
	// lwzx r7,r31,r7
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + ctx.r7.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82ff4c48
	sub_82FF4C48(ctx, base);
	// lis r11,-32219
	r11.s64 = -2111504384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-8012
	ctx.r4.s64 = r11.s64 + -8012;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
loc_82FF507C:
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32856
	r11.u64 = r11.u64 | 32856;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82ff50d0
	if (cr0.eq) goto loc_82FF50D0;
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32820
	r11.u64 = r11.u64 | 32820;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82ff50d0
	if (!cr6.eq) goto loc_82FF50D0;
	// lis r11,1
	r11.s64 = 65536;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r11,49160
	ctx.r10.u64 = r11.u64 | 49160;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r11,r11,-16372
	r11.s64 = r11.s64 + -16372;
	// stwx r9,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// sth r8,0(r30)
	PPC_STORE_U16(r30.u32 + 0, ctx.r8.u16);
loc_82FF50D0:
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

__attribute__((alias("__imp__sub_82FF50E8"))) PPC_WEAK_FUNC(sub_82FF50E8);
PPC_FUNC_IMPL(__imp__sub_82FF50E8) {
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
	// addi r11,r11,-5020
	r11.s64 = r11.s64 + -5020;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82ff5114
	if (cr0.eq) goto loc_82FF5114;
	// bl 0x822c0270
	sub_822C0270(ctx, base);
loc_82FF5114:
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

__attribute__((alias("__imp__sub_82FF5130"))) PPC_WEAK_FUNC(sub_82FF5130);
PPC_FUNC_IMPL(__imp__sub_82FF5130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32236
	r11.s64 = -2112618496;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-5000
	ctx.r10.s64 = r11.s64 + -5000;
	// li r11,0
	r11.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5178"))) PPC_WEAK_FUNC(sub_82FF5178);
PPC_FUNC_IMPL(__imp__sub_82FF5178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x831b0b0c
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// stw r29,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// stw r21,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r21.u32);
	// bne 0x82ff51d4
	if (!cr0.eq) goto loc_82FF51D4;
loc_82FF51CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff53b0
	goto loc_82FF53B0;
loc_82FF51D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ff52cc
	if (cr6.eq) goto loc_82FF52CC;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// ori r3,r3,32868
	ctx.r3.u64 = ctx.r3.u64 | 32868;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// stw r26,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r26.u32);
	// beq 0x82ff52c4
	if (cr0.eq) goto loc_82FF52C4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stb r22,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r22.u8);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stb r3,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r3.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82ffa768
	sub_82FFA768(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff52c8
	goto loc_82FF52C8;
loc_82FF52C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF52C8:
	// b 0x82ff5374
	goto loc_82FF5374;
loc_82FF52CC:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r4,40(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// ori r3,r3,32868
	ctx.r3.u64 = ctx.r3.u64 | 32868;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// beq 0x82ff5370
	if (cr0.eq) goto loc_82FF5370;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// stb r22,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r22.u8);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82ffc170
	sub_82FFC170(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82ff5374
	goto loc_82FF5374;
loc_82FF5370:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF5374:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ff5398
	if (!cr6.eq) goto loc_82FF5398;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82ff51cc
	goto loc_82FF51CC;
loc_82FF5398:
	// lis r11,2
	r11.s64 = 131072;
	// ori r10,r11,32808
	ctx.r10.u64 = r11.u64 | 32808;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,20(r29)
	PPC_STORE_U32(r29.u32 + 20, ctx.r9.u32);
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, r11.u32);
loc_82FF53B0:
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// b 0x831b0b5c
	return;
}

__attribute__((alias("__imp__sub_82FF53C0"))) PPC_WEAK_FUNC(sub_82FF53C0);
PPC_FUNC_IMPL(__imp__sub_82FF53C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF53E0"))) PPC_WEAK_FUNC(sub_82FF53E0);
PPC_FUNC_IMPL(__imp__sub_82FF53E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x831b2120
	sub_831B2120(ctx, base);
}

__attribute__((alias("__imp__sub_82FF5414"))) PPC_WEAK_FUNC(sub_82FF5414);
PPC_FUNC_IMPL(__imp__sub_82FF5414) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5444"))) PPC_WEAK_FUNC(sub_82FF5444);
PPC_FUNC_IMPL(__imp__sub_82FF5444) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5480"))) PPC_WEAK_FUNC(sub_82FF5480);
PPC_FUNC_IMPL(__imp__sub_82FF5480) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff54f4
	if (cr0.eq) goto loc_82FF54F4;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// bl 0x82fe6398
	sub_82FE6398(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82ff54f8
	goto loc_82FF54F8;
loc_82FF54F4:
	// li r29,0
	r29.s64 = 0;
loc_82FF54F8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82ff5508
	if (!cr6.eq) goto loc_82FF5508;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff55a8
	goto loc_82FF55A8;
loc_82FF5508:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// ori r3,r3,32868
	ctx.r3.u64 = ctx.r3.u64 | 32868;
	// bl 0x82fe06b8
	sub_82FE06B8(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82ff5564
	if (cr0.eq) goto loc_82FF5564;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stb r23,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r23.u8);
	// li r7,7
	ctx.r7.s64 = 7;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, r11.u8);
	// bl 0x82ffaa38
	sub_82FFAA38(ctx, base);
	// b 0x82ff5568
	goto loc_82FF5568;
loc_82FF5564:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FF5568:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ff5590
	if (!cr6.eq) goto loc_82FF5590;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ff55a8
	goto loc_82FF55A8;
loc_82FF5590:
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
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, r11.u32);
loc_82FF55A8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82FF55B0"))) PPC_WEAK_FUNC(sub_82FF55B0);
PPC_FUNC_IMPL(__imp__sub_82FF55B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF55E0"))) PPC_WEAK_FUNC(sub_82FF55E0);
PPC_FUNC_IMPL(__imp__sub_82FF55E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82fe0700
	sub_82FE0700(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FF5610"))) PPC_WEAK_FUNC(sub_82FF5610);
PPC_FUNC_IMPL(__imp__sub_82FF5610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82ff564c
	if (cr6.eq) goto loc_82FF564C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// ori r10,r10,32848
	ctx.r10.u64 = ctx.r10.u64 | 32848;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ff564c
	if (!cr6.eq) goto loc_82FF564C;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r10,r10,32812
	ctx.r10.u64 = ctx.r10.u64 | 32812;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82FF564C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

