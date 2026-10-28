// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$GetBoardCount
// address: 0x420ce74
// body: available
// range: 0x420ce74-0x420cf6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420cf6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AnhPD_FoodOrder_CustomerLineView__GetBoardCount(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_09516c45 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aec50);
    FUN_03f5c2a4(&DAT_091aa6c0);
    FUN_03f5c2a4(&DAT_091aec58);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c45 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
LAB_0420cf6c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    uVar2 = FUN_057e0998(lVar1,0,DAT_091aec58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar3 & 1) != 0) {
      if (((*(long *)(param_1 + 0x30) != 0) &&
          (plVar4 = (long *)FUN_057e0998(*(long *)(param_1 + 0x30),0,DAT_091aec58),
          plVar4 != (long *)0x0)) &&
         (lVar1 = (**(code **)(*plVar4 + 0x1b8))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x1c0)),
         lVar1 != 0)) {
        return *(undefined4 *)(lVar1 + 0x18);
      }
      goto LAB_0420cf6c;
    }
  }
  return 1;
}

