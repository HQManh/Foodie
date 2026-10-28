// rea decompile_all
// name: AnhPD.FoodOrder.FTimer$$ChangeEmoji
// address: 0x421ea38
// body: available
// range: 0x421ea38-0x421eb7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421eb78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FTimer__ChangeEmoji(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_09516d13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d13 = 1;
  }
  if (*(int *)(param_1 + 0x84) == param_2) {
    return;
  }
  if (param_2 == 1) {
    puVar4 = (undefined8 *)(param_1 + 0x38);
LAB_0421eaa8:
    uVar5 = *puVar4;
  }
  else {
    if (param_2 == 2) {
      puVar4 = (undefined8 *)(param_1 + 0x30);
      goto LAB_0421eaa8;
    }
    if (param_2 == 3) {
      puVar4 = (undefined8 *)(param_1 + 0x28);
      goto LAB_0421eaa8;
    }
    uVar5 = 0;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x20),uVar5,0);
  }
  iVar1 = *(int *)(param_1 + 0x84);
  *(int *)(param_1 + 0x84) = param_2;
  if (param_2 == 1) {
    lVar3 = *(long *)(param_1 + 0x58);
  }
  else {
    if (iVar1 != 1) goto LAB_0421eb24;
    lVar3 = *(long *)(param_1 + 0x60);
  }
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  }
LAB_0421eb24:
  if (param_2 < 3 != iVar1 < 3) {
    lVar3 = 0x68;
    if (2 < param_2) {
      lVar3 = 0x70;
    }
    lVar3 = *(long *)(param_1 + lVar3);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0421eb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

