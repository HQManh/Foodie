// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$Awake
// address: 0x40fe0b8
// body: available
// range: 0x40fe0b8-0x40fe37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fe378 to 0x4b79dcc FUN_04b79dcc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CookingStation__Awake(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_0951615f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_09174700);
    FUN_03f5c2a4(&DAT_09174cf8);
    FUN_03f5c2a4(&DAT_09174f38);
    FUN_03f5c2a4(&DAT_09181938);
    FUN_03f5c2a4(&DAT_091797f8);
    FUN_03f5c2a4(&DAT_091cd538);
    FUN_03f5c2a4(&DAT_09184b58);
    FUN_03f5c2a4(&DAT_0918b1c8);
    FUN_03f5c2a4(&DAT_0918b1d0);
    FUN_03f5c2a4(&DAT_0918b1d8);
    DAT_0951615f = 1;
  }
  AnhPD_FoodOrder_InteractableItem__Awake(param_1,0);
  lVar1 = thunk_FUN_03f9944c(DAT_0918b1d8);
  System_Object___ctor(lVar1,0);
  plVar7 = param_1 + 0xc;
  *plVar7 = lVar1;
  thunk_FUN_03f5d7b8(plVar7,lVar1);
  lVar1 = thunk_FUN_03f9944c(DAT_09181938);
  System_Object___ctor(lVar1,0);
  plVar9 = param_1 + 0xe;
  *plVar9 = lVar1;
  *(undefined4 *)(lVar1 + 0x10) = 0x40400000;
  thunk_FUN_03f5d7b8(plVar9,lVar1);
  lVar6 = *plVar7;
  lVar8 = param_1[0xb];
  lVar10 = *plVar9;
  lVar11 = param_1[8];
  uVar2 = thunk_FUN_03f9944c(DAT_09174f38);
  FUN_071ce904(uVar2,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
  uVar3 = thunk_FUN_03f9944c(DAT_091797f8);
  FUN_0532e708(uVar3,param_1,*(undefined8 *)(*param_1 + 0x280),0);
  uVar4 = thunk_FUN_03f9944c(DAT_09174cf8);
  FUN_071cb99c(uVar4,param_1,*(undefined8 *)(*param_1 + 0x290),0);
  uVar5 = thunk_FUN_03f9944c(DAT_09174570);
  FUN_070a4758(uVar5,param_1,*(undefined8 *)(*param_1 + 0x220),0);
  lVar1 = thunk_FUN_03f9944c(DAT_0918b1d0);
  AnhPD_FoodOrder_StationOrchestrator___ctor
            (lVar1,lVar6,lVar8,lVar10,lVar11,uVar2,uVar3,uVar4,uVar5);
  param_1[0xd] = lVar1;
  thunk_FUN_03f5d7b8(param_1 + 0xd,lVar1);
  lVar1 = thunk_FUN_03f9944c(DAT_0918b1c8);
  AnhPD_FoodOrder_StationGridFeeder___ctor(lVar1,param_1,0);
  param_1[0xf] = lVar1;
  thunk_FUN_03f5d7b8(param_1 + 0xf,lVar1);
  uVar2 = thunk_FUN_03f9944c(DAT_09174700);
  FUN_070a6aa0(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1a0),0);
  if (*(int *)(DAT_09184b58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04b79dcc(uVar2,DAT_091cd538);
  return;
}

