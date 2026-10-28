// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$.ctor
// address: 0x44bf9d0
// body: available
// range: 0x44bf9d0-0x44c0723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c0720 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CookOrder_Cooking_Implement_CookingGameplayPresentation___ctor(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_09518254 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0378);
    FUN_03f5c2a4(&DAT_09182d18);
    FUN_03f5c2a4(&DAT_0919de18);
    FUN_03f5c2a4(&DAT_0919e458);
    FUN_03f5c2a4(&DAT_0919ded8);
    FUN_03f5c2a4(&DAT_0919f548);
    FUN_03f5c2a4(&DAT_0919e370);
    FUN_03f5c2a4(&DAT_0919d630);
    FUN_03f5c2a4(&DAT_0919d948);
    FUN_03f5c2a4(&DAT_0919d600);
    FUN_03f5c2a4(&DAT_0919e568);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_091a0020);
    FUN_03f5c2a4(&DAT_0919e5a0);
    FUN_03f5c2a4(&DAT_0919d908);
    FUN_03f5c2a4(&DAT_0919e3f8);
    FUN_03f5c2a4(&DAT_0919e398);
    FUN_03f5c2a4(&DAT_0919eef0);
    FUN_03f5c2a4(&DAT_0919d7b8);
    FUN_03f5c2a4(&DAT_091766a0);
    FUN_03f5c2a4(&DAT_09176400);
    FUN_03f5c2a4(&DAT_09176a20);
    FUN_03f5c2a4(&DAT_09176450);
    FUN_03f5c2a4(&DAT_091765b8);
    FUN_03f5c2a4(&DAT_09176490);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_09176698);
    FUN_03f5c2a4(&DAT_091763f8);
    FUN_03f5c2a4(&DAT_091766f8);
    FUN_03f5c2a4(&DAT_091766c8);
    FUN_03f5c2a4(&DAT_09176590);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091768c8);
    FUN_03f5c2a4(&DAT_091766b8);
    FUN_03f5c2a4(&DAT_09176c68);
    FUN_03f5c2a4(&DAT_09176700);
    FUN_03f5c2a4(&DAT_091a7e18);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_091a85b0);
    FUN_03f5c2a4(&DAT_091a8810);
    FUN_03f5c2a4(&DAT_091a82f8);
    FUN_03f5c2a4(&DAT_09179d08);
    FUN_03f5c2a4(&DAT_09179eb0);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09179f28);
    FUN_03f5c2a4(&DAT_09179e20);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091ae318);
    FUN_03f5c2a4(&DAT_091acd38);
    FUN_03f5c2a4(&DAT_091afd50);
    FUN_03f5c2a4(&DAT_091b03f0);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_091b1070);
    FUN_03f5c2a4(&DAT_0917cb68);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_0917cea8);
    FUN_03f5c2a4(&DAT_0917c658);
    FUN_03f5c2a4(&DAT_0917c1f0);
    FUN_03f5c2a4(&DAT_0917cc90);
    DAT_09518254 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917cb68);
  FUN_057e0400(uVar1,DAT_091afd50);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cea8);
  FUN_057e0400(uVar1,DAT_091b1070);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar1);
  uVar1 = DAT_0917cea8;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091b1070);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1118(uVar1,DAT_091a82f8);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179eb0);
  FUN_053eb530(uVar1,DAT_091a85b0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179f28);
  FUN_053eb530(uVar1,DAT_091a8810);
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cea8);
  FUN_057e0400(uVar1,DAT_091b1070);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x98),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar1,DAT_091a8298);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091766c8);
  FUN_06f4b670(uVar1,DAT_0919e458);
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176700);
  FUN_06f55d48(uVar1,DAT_0919e5a0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xb8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091766a0);
  FUN_06f40cdc(uVar1,DAT_0919e398);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176698);
  FUN_06f52618(uVar1,DAT_0919e370);
  *(undefined8 *)(param_1 + 200) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar1,DAT_091a8298);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(uVar1,DAT_0919d948);
  *(undefined8 *)(param_1 + 0xd8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c658);
  FUN_057e0400(uVar1,DAT_091ae318);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cc90);
  FUN_057e0400(uVar1,DAT_091b03f0);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176450);
  FUN_06eef750(uVar1,DAT_0919d7b8);
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cea8);
  FUN_057e0400(uVar1,DAT_091b1070);
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar1,DAT_091a8298);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x100,uVar1);
  lVar2 = DAT_091c0378;
  lVar3 = *(long *)(DAT_091c0378 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c0378);
    lVar3 = *(long *)(lVar2 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  *(undefined8 *)(param_1 + 0x108) = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_03f5d7b8(param_1 + 0x108);
  lVar2 = DAT_091c0378;
  lVar3 = *(long *)(DAT_091c0378 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c0378);
    lVar3 = *(long *)(lVar2 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  *(undefined8 *)(param_1 + 0x110) = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_03f5d7b8(param_1 + 0x110);
  uVar1 = DAT_09182d18;
  *(undefined4 *)(param_1 + 0x124) = 0x3f8ccccd;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  CookOrder_Cooking_Implement_CookingCustomerAssets___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x140) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x140,uVar1);
  uVar1 = DAT_09176590;
  auVar4 = _DAT_01a8be60;
  *(undefined4 *)(param_1 + 0x14c) = 7;
  *(long *)(param_1 + 0x158) = auVar4._8_8_;
  *(long *)(param_1 + 0x150) = auVar4._0_8_;
  *(undefined8 *)(param_1 + 0x168) = 0x3f6666663e19999a;
  *(undefined8 *)(param_1 + 0x160) = 0x3e8000003dcccccd;
  *(undefined8 *)(param_1 + 0x170) = 0x3f19999a3da3d70a;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_06eef750(uVar1,DAT_0919de18);
  *(undefined8 *)(param_1 + 400) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 400,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee539c(uVar1,DAT_0919d948);
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x198,uVar1);
  auVar4 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(param_1 + 0x228) = 8;
  *(undefined8 *)(param_1 + 600) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x250) = 0x3f8000003da3d70a;
  *(long *)(param_1 + 0x280) = auVar4._8_8_;
  *(long *)(param_1 + 0x278) = auVar4._0_8_;
  *(undefined8 *)(param_1 + 0x290) = 0x3f8000003f0ccccd;
  *(undefined8 *)(param_1 + 0x288) = 0x3f0ccccd3f0ccccd;
  uVar1 = DAT_091766b8;
  auVar4 = _DAT_01a8ec50;
  *(undefined8 *)(param_1 + 0x260) = 0xffffffff3f800000;
  *(long *)(param_1 + 0x2ac) = auVar4._8_8_;
  *(long *)(param_1 + 0x2a4) = auVar4._0_8_;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_06f52618(uVar1,DAT_0919e3f8);
  *(undefined8 *)(param_1 + 0x300) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x300,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176400);
  FUN_06eef750(uVar1,DAT_0919d630);
  *(undefined8 *)(param_1 + 0x308) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x308,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091766f8);
  FUN_06f52618(uVar1,DAT_0919e568);
  *(undefined8 *)(param_1 + 0x310) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x310,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e20);
  FUN_053e1118(uVar1,DAT_091a82f8);
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x318,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091766c8);
  FUN_06f4b670(uVar1,DAT_0919e458);
  *(undefined8 *)(param_1 + 800) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 800,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176c68);
  FUN_06fd76bc(uVar1,DAT_091a0020);
  *(undefined8 *)(param_1 + 0x328) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x328,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(uVar1,DAT_0919f978);
  *(undefined8 *)(param_1 + 0x330) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x330,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(uVar1,DAT_091a8698);
  *(undefined8 *)(param_1 + 0x338) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x338,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091765b8);
  FUN_06f0b51c(uVar1,DAT_0919ded8);
  *(undefined8 *)(param_1 + 0x340) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x340,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176590);
  FUN_06eef750(uVar1,DAT_0919de18);
  *(undefined8 *)(param_1 + 0x348) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x348,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091763f8);
  FUN_06eef750(uVar1,DAT_0919d600);
  *(undefined8 *)(param_1 + 0x350) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x350,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176490);
  FUN_06eef750(uVar1,DAT_0919d908);
  *(undefined8 *)(param_1 + 0x358) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x358,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c1f0);
  FUN_057e0400(uVar1,DAT_091acd38);
  *(undefined8 *)(param_1 + 0x360) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x360,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(uVar1,DAT_091a8298);
  *(undefined8 *)(param_1 + 0x368) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x368,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179ee0);
  FUN_053eb530(uVar1,DAT_091a8698);
  *(undefined8 *)(param_1 + 0x370) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x370,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cc90);
  FUN_057e0400(uVar1,DAT_091b03f0);
  *(undefined8 *)(param_1 + 0x378) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x378,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abd7c(uVar1,DAT_091b19a0);
  *(undefined8 *)(param_1 + 0x380) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x380,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176700);
  FUN_06f55d48(uVar1,DAT_0919e5a0);
  *(undefined8 *)(param_1 + 0x390) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x390,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c1f0);
  FUN_057e0400(uVar1,DAT_091acd38);
  *(undefined8 *)(param_1 + 0x398) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x398,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179d08);
  FUN_053eb530(uVar1,DAT_091a7e18);
  *(undefined8 *)(param_1 + 0x3b8) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x3b8,uVar1);
  uVar1 = DAT_09179ee0;
  *(undefined8 *)(param_1 + 0x3e0) = 0x3e19999a3f000000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_053eb530(uVar1,DAT_091a8698);
  *(undefined8 *)(param_1 + 0x408) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x408,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c1f0);
  FUN_057e0400(uVar1,DAT_091acd38);
  *(undefined8 *)(param_1 + 0x410) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x410,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091768c8);
  FUN_06f8143c(uVar1,DAT_0919eef0);
  *(undefined8 *)(param_1 + 0x418) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x418,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176a20);
  FUN_06fd76bc(uVar1,DAT_0919f548);
  *(undefined8 *)(param_1 + 0x420) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x420,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176a20);
  FUN_06fd76bc(uVar1,DAT_0919f548);
  *(undefined8 *)(param_1 + 0x428) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x428,uVar1);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

