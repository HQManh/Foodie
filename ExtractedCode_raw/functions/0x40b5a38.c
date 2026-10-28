// rea decompile_all
// name: AnhPD.FoodOrder.RecipeComponentIngredient$$Sync
// address: 0x40b5a38
// body: available
// range: 0x40b5a38-0x40b5bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b5b74 to 0x85f71fc UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40b5bbc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40b5bcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_RecipeComponentIngredient__Sync(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09515f13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091f7aa8);
    FUN_03f5c2a4(&DAT_092141f8);
    FUN_03f5c2a4(&DAT_09226da0);
    DAT_09515f13 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03f5d7b8();
  }
  uVar1 = System_String__IsNullOrWhiteSpace(*(undefined8 *)(param_1 + 0x10),0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar3 != 0)) {
      *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(param_1 + 0x10);
      thunk_FUN_03f5d7b8();
      return;
    }
LAB_040b5bcc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  uVar4 = DAT_092141f8;
  uVar2 = DAT_09226da0;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_040b5bcc;
    uVar2 = UnityEngine_Object__GetName(*(long *)(param_1 + 0x20),0);
  }
  uVar4 = System_String__Concat(uVar4,uVar2,DAT_091f7aa8,0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__LogError(uVar4,uVar2,0);
  return;
}

