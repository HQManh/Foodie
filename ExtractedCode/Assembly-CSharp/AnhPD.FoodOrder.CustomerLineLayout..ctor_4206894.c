// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineLayout$$.ctor
// address: 0x4206894
// body: available
// range: 0x4206894-0x4206a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4206a58 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4206a5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineLayout___ctor
               (float param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5
               ,undefined4 param_6,undefined4 param_7,float param_8,long param_9,undefined8 param_10
               ,undefined8 param_11,undefined4 param_12,long param_13,byte param_14,
               undefined8 param_15,undefined8 param_16,float param_17,float param_18)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((DAT_09516c0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acaa8);
    FUN_03f5c2a4(&DAT_0917c170);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c0f = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0917c170);
  FUN_057e0400(uVar2,DAT_091acaa8);
  *(undefined8 *)(param_9 + 0x60) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x60),uVar2);
  System_Object___ctor(param_9,0);
  *(byte *)(param_9 + 0x58) = param_14 & 1;
  *(undefined8 *)(param_9 + 0x10) = param_10;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x10),param_10);
  *(undefined8 *)(param_9 + 0x18) = param_11;
  thunk_FUN_03f5d7b8((undefined8 *)(param_9 + 0x18),param_11);
  lVar4 = DAT_09188ad0;
  *(undefined4 *)(param_9 + 0x20) = param_12;
  *(undefined4 *)(param_9 + 0x34) = param_3;
  *(undefined4 *)(param_9 + 0x38) = param_4;
  if (param_8 <= 0.0) {
    param_8 = 1.0;
  }
  iVar1 = *(int *)(lVar4 + 0xe4);
  if (param_17 <= 0.0) {
    param_17 = param_8;
  }
  *(float *)(param_9 + 0x24) = param_1;
  *(float *)(param_9 + 0x28) = param_8;
  if (param_5 <= 0.0) {
    param_5 = param_1;
  }
  *(float *)(param_9 + 0x2c) = param_17;
  *(undefined4 *)(param_9 + 0x30) = param_2;
  *(float *)(param_9 + 0x3c) = param_5;
  *(float *)(param_9 + 0x40) = param_1 * param_18;
  *(undefined4 *)(param_9 + 0x44) = param_6;
  *(undefined4 *)(param_9 + 0x48) = param_7;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_13,0);
  uVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if ((param_13 == 0) ||
       (uVar5 = 0, lVar4 = UnityEngine_Component__get_transform(param_13,0), lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Transform__get_localPosition(lVar4,0);
  }
  *(long *)(param_9 + 0x50) = param_13;
  *(undefined4 *)(param_9 + 0x4c) = uVar5;
  thunk_FUN_03f5d7b8((long *)(param_9 + 0x50),param_13);
  return;
}

