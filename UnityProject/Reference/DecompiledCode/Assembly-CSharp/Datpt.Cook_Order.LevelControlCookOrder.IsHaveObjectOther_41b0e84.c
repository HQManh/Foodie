// rea decompile_all
// name: Datpt.Cook_Order.LevelControlCookOrder$$IsHaveObjectOther
// address: 0x41b0e84
// body: available
// range: 0x41b0e84-0x41b0fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b0fcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41b0fd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Datpt_Cook_Order_LevelControlCookOrder__IsHaveObjectOther
               (undefined4 param_1,undefined4 param_2,undefined1 param_3 [16],undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  if ((DAT_095168f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5590);
    FUN_03f5c2a4(&DAT_09189078);
    DAT_095168f1 = 1;
  }
  uVar3 = *(undefined8 *)(param_7 + 0x140);
  if (*(int *)(DAT_09189078 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = UnityEngine_Physics2D__OverlapBoxNonAlloc(param_1,param_2,param_4,param_5,param_6,uVar3,0)
  ;
  if (iVar1 < 1) {
    bVar5 = false;
  }
  else {
    lVar4 = 0;
    bVar5 = true;
    do {
      lVar2 = *(long *)(param_7 + 0x140);
      if (lVar2 == 0) {
LAB_041b0fcc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar2 + lVar4 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_041b0fcc;
      uVar3 = FUN_04a6a14c(lVar2,DAT_091c5590);
      *(undefined8 *)(param_7 + 0x138) = uVar3;
      thunk_FUN_03f5d7b8(param_7 + 0x138,uVar3);
      if ((*(long *)(param_7 + 0x138) != 0) && (*(long *)(param_7 + 0x138) != param_8)) {
        return bVar5;
      }
      lVar4 = lVar4 + 1;
      bVar5 = (int)lVar4 < iVar1;
    } while (iVar1 != (int)lVar4);
  }
  return bVar5;
}

