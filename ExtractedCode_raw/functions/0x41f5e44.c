// rea decompile_all
// name: AnhPD.FoodOrder.PieceLedger$$Born
// address: 0x41f5e44
// body: available
// range: 0x41f5e44-0x41f601f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f601c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_PieceLedger__Born(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_48 [2];
  long local_40;
  undefined8 uStack_38;
  
  if ((DAT_09516b9d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183cf0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091bb5d8);
    FUN_03f5c2a4(&DAT_091bb5f0);
    FUN_03f5c2a4(&DAT_09220780);
    DAT_09516b9d = 1;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09189140 + 0xb8) + 0xa8) == '\0') {
    return;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_1 == 0) {
LAB_041f601c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(param_1 + 0x92) != '\0') {
    return;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_09189140 + 0xb8);
  if (0 < *(int *)(lVar3 + 0x8c)) {
    return;
  }
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = *(long *)(DAT_09189140 + 0xb8);
  }
  lVar3 = *(long *)(lVar3 + 0x20);
  if (lVar3 == 0) goto LAB_041f601c;
  if (*(int *)(lVar3 + 0x18) < 1) {
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar3 = *(long *)(*(long *)(DAT_09189140 + 0xb8) + 0x20);
      if (lVar3 == 0) goto LAB_041f601c;
    }
    FUN_061a766c(local_48,lVar3,DAT_091bb5d8);
    uVar5 = uStack_38;
    lVar3 = local_40;
    uVar4 = local_48[0];
    if (local_40 != 0) goto LAB_041f5fe4;
  }
  local_48[0] = *(undefined4 *)(param_1 + 0xec);
  uVar2 = FUN_03f5c42c(DAT_09183cf0,local_48);
  lVar3 = System_String__Format(DAT_09220780,uVar2,0);
LAB_041f5fe4:
  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceLedger__Begin(param_1,uVar4,lVar3,uVar5);
  return;
}

