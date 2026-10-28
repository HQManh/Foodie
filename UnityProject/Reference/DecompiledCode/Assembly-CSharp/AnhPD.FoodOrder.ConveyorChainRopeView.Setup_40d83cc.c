// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$Setup
// address: 0x40d83cc
// body: available
// range: 0x40d83cc-0x40d856b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d8568 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorChainRopeView__Setup
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
               undefined8 param_17)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_0951601e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e28);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0920d810);
    DAT_0951601e = 1;
  }
  *(undefined8 *)(param_6 + 0x30) = param_7;
  thunk_FUN_03f5d7b8((undefined8 *)(param_6 + 0x30),param_7);
  *(undefined4 *)(param_6 + 0x60) = (undefined4)param_14;
  *(undefined4 *)(param_6 + 100) = param_14._4_4_;
  *(undefined4 *)(param_6 + 0x68) = (undefined4)param_15;
  *(undefined4 *)(param_6 + 0x6c) = param_15._4_4_;
  *(undefined4 *)(param_6 + 0x70) = (undefined4)param_16;
  *(undefined4 *)(param_6 + 0x74) = param_16._4_4_;
  *(undefined4 *)(param_6 + 0x78) = (undefined4)param_17;
  *(undefined4 *)(param_6 + 0x7c) = param_17._4_4_;
  *(undefined8 *)(param_6 + 0x38) = param_8;
  thunk_FUN_03f5d7b8((undefined8 *)(param_6 + 0x38),param_8);
  *(undefined8 *)(param_6 + 0x80) = param_10;
  *(undefined4 *)(param_6 + 0x48) = param_1;
  *(undefined4 *)(param_6 + 0x4c) = param_2;
  *(undefined4 *)(param_6 + 0x50) = param_3;
  *(undefined4 *)(param_6 + 0x54) = param_4;
  *(undefined4 *)(param_6 + 0x58) = param_5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_6 + 0x80),param_10);
  *(undefined8 *)(param_6 + 0x88) = param_12;
  *(undefined4 *)(param_6 + 0x5c) = param_11;
  thunk_FUN_03f5d7b8((undefined8 *)(param_6 + 0x88),param_12);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_9,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = UnityEngine_Shader__Find(DAT_0920d810,0);
    param_9 = thunk_FUN_03f9944c(DAT_09187e28);
    UnityEngine_Material___ctor(param_9,uVar2,0);
  }
  *(undefined8 *)(param_6 + 0x40) = param_9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_6 + 0x40),param_9);
  return;
}

