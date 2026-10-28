// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$.ctor
// address: 0x40fae0c
// body: available
// range: 0x40fae0c-0x40fb2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fb2bc to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09516129 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182be0);
    FUN_03f5c2a4(&DAT_09182bf8);
    FUN_03f5c2a4(&DAT_09182c18);
    FUN_03f5c2a4(&DAT_0919c7c0);
    FUN_03f5c2a4(&DAT_091760c8);
    FUN_03f5c2a4(&DAT_091a7f90);
    FUN_03f5c2a4(&DAT_09179d68);
    FUN_03f5c2a4(&DAT_091abd78);
    FUN_03f5c2a4(&DAT_091b03f0);
    FUN_03f5c2a4(&DAT_091b19a0);
    FUN_03f5c2a4(&DAT_091abe50);
    FUN_03f5c2a4(&DAT_091aff90);
    FUN_03f5c2a4(&DAT_091abe08);
    FUN_03f5c2a4(&DAT_091b0288);
    FUN_03f5c2a4(&DAT_091b30a0);
    FUN_03f5c2a4(&DAT_0917d508);
    FUN_03f5c2a4(&DAT_0917cbd0);
    FUN_03f5c2a4(&DAT_0917bef8);
    FUN_03f5c2a4(&DAT_0917bef0);
    FUN_03f5c2a4(&DAT_0917cc60);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_0917cc90);
    FUN_03f5c2a4(&DAT_0917bee0);
    DAT_09516129 = 1;
  }
  uVar1 = DAT_0917cc90;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091b03f0);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d508);
  FUN_057e0400(uVar1,DAT_091b30a0);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar1);
  uVar1 = DAT_0917bef0;
  *(undefined8 *)(param_1 + 0x70) = 0x3eb333333fc00000;
  *(undefined4 *)(param_1 + 0x6c) = 3;
  *(undefined8 *)(param_1 + 0xe0) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0xd8) = 0x3d23d70a3f800000;
  *(undefined4 *)(param_1 + 0x78) = 9;
  *(undefined8 *)(param_1 + 0xf0) = 0x3f0ccccd3f0ccccd;
  *(undefined8 *)(param_1 + 0xe8) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0x13c) = 3;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f99999a;
  *(undefined8 *)(param_1 + 0xf8) = 0x3f8000003f0ccccd;
  *(undefined8 *)(param_1 + 0xb0) = 0x840a00000;
  *(undefined4 *)(param_1 + 0xc0) = 0x40a00000;
  *(undefined8 *)(param_1 + 0xb8) = 0x3e19999a3f4ccccd;
  *(undefined8 *)(param_1 + 0x118) = 0x500000002;
  *(undefined8 *)(param_1 + 0x130) = 0x200000002;
  *(undefined8 *)(param_1 + 0x120) = 0x100000001;
  *(undefined4 *)(param_1 + 0x15c) = 0x3da3d70a;
  *(undefined8 *)(param_1 + 0x170) = 0x3ee666663f3851ec;
  *(undefined8 *)(param_1 + 0x168) = 0x3f59999a3da3d70a;
  *(undefined4 *)(param_1 + 0x178) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091abe08);
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x198,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09182bf8);
  AnhPD_FoodOrder_ConveyorGrid___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x1a0) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x1a0,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09182be0);
  AnhPD_FoodOrder_ConveyorChainRopeView___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x1a8,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09182c18);
  System_Object___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x1b0,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cc60);
  FUN_057e0400(uVar1,DAT_091b0288);
  *(undefined8 *)(param_1 + 0x1e0) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x1e0,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917cbd0);
  FUN_05862d70(uVar1,DAT_091aff90);
  *(undefined8 *)(param_1 + 0x1e8) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x1e8,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abd7c(uVar1,DAT_091b19a0);
  *(undefined8 *)(param_1 + 0x1f0) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x1f0,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091760c8);
  FUN_06fe1d68(uVar1,DAT_0919c7c0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x1f8,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179d68);
  FUN_053eb530(uVar1,DAT_091a7f90);
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x200,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917bee0);
  FUN_057e0400(uVar1,DAT_091abd78);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x218,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917bef8);
  FUN_057e0400(uVar1,DAT_091abe50);
  *(undefined8 *)(param_1 + 0x220) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x220,uVar1);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}

