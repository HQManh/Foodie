// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$.ctor
// address: 0x420e9cc
// body: available
// range: 0x420e9cc-0x420ec7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420ec7c to 0x420ec80 AnhPD.FoodOrder.CustomerSpawner$$RefreshPreviews (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AnhPD_FoodOrder_CustomerSpawner___ctor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,float param_6,float param_7,float param_8,long param_9,
               undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
               undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
               int param_18,int param_19,byte param_20,undefined8 param_21)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  
  if ((DAT_09516c5e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c8f8);
    FUN_03f5c2a4(&DAT_09176108);
    FUN_03f5c2a4(&DAT_091b2648);
    FUN_03f5c2a4(&DAT_091ac258);
    FUN_03f5c2a4(&DAT_0917d2a0);
    FUN_03f5c2a4(&DAT_0917bfe0);
    DAT_09516c5e = 1;
  }
  uVar3 = thunk_FUN_03f9944c(DAT_0917bfe0);
  FUN_057e0400(uVar3,DAT_091ac258);
  *(undefined8 *)(param_9 + 0x88) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x88),uVar3);
  *(undefined4 *)(param_9 + 0x94) = 0xffffffff;
  uVar3 = thunk_FUN_03f9944c(DAT_0917d2a0);
  FUN_057e0400(uVar3,DAT_091b2648);
  *(undefined8 *)(param_9 + 0x98) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x98),uVar3);
  *(undefined8 *)(param_9 + 0xc0) = 0xc479c0003f800000;
  uVar3 = thunk_FUN_03f9944c(DAT_09176108);
  FUN_06fc96ac(uVar3,DAT_0919c8f8);
  *(undefined8 *)(param_9 + 0xd8) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0xd8),uVar3);
  System_Object___ctor(param_9,0);
  *(undefined8 *)(param_9 + 0x10) = param_10;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x10),param_10);
  *(undefined8 *)(param_9 + 0x18) = param_11;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x18),param_11);
  *(undefined8 *)(param_9 + 0x20) = param_12;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x20),param_12);
  *(undefined8 *)(param_9 + 0x28) = param_13;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x28),param_13);
  *(undefined8 *)(param_9 + 0x30) = param_14;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x30),param_14);
  *(undefined8 *)(param_9 + 0x38) = param_15;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x38),param_15);
  *(undefined8 *)(param_9 + 0x40) = param_16;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x40),param_16);
  *(undefined8 *)(param_9 + 0x48) = param_17;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x48),param_17);
  *(undefined4 *)(param_9 + 0x58) = param_1;
  *(undefined4 *)(param_9 + 0x5c) = param_2;
  *(undefined4 *)(param_9 + 0x60) = param_3;
  *(undefined4 *)(param_9 + 100) = param_4;
  *(undefined8 *)(param_9 + 0x80) = param_21;
  auVar5 = _DAT_01a8d240;
  fVar4 = (float)DAT_01a8d240;
  fVar6 = DAT_01a8d240._4_4_;
  fVar7 = DAT_01a8d240._8_4_;
  fVar8 = DAT_01a8d240._12_4_;
  *(byte *)(param_9 + 0x78) = param_20 & 1;
  if (param_18 < 2) {
    param_18 = 1;
  }
  if (param_19 < 1) {
    param_19 = 0x7fffffff;
  }
  auVar2._4_4_ = param_6;
  auVar2._0_4_ = param_5;
  auVar2._8_4_ = param_7;
  auVar2._12_4_ = param_8;
  auVar1._4_4_ = -(uint)(param_6 < fVar6);
  auVar1._0_4_ = -(uint)(param_5 < fVar4);
  auVar1._8_4_ = -(uint)(param_7 < fVar7);
  auVar1._12_4_ = -(uint)(param_8 < fVar8);
  auVar5 = auVar5 ^ (auVar5 ^ auVar2) & ~auVar1;
  *(int *)(param_9 + 0x50) = param_18;
  *(int *)(param_9 + 0x54) = param_19;
  *(long *)(param_9 + 0x70) = auVar5._8_8_;
  *(long *)(param_9 + 0x68) = auVar5._0_8_;
  thunk_FUN_03f5d7b8();
  AnhPD_FoodOrder_CustomerSpawner__RefreshPreviews(param_9);
  return;
}

