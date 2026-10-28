// rea decompile_all
// name: _GAME.Profile.ProfileFIconUICtrl$$UpdateUIData
// address: 0x77bd2e8
// body: available
// range: 0x77bd2e8-0x77bd4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77bd4bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileFIconUICtrl__UpdateUIData(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09522efb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    DAT_09522efb = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = **(long **)(DAT_091896c0 + 0xb8);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_077bd4bc;
  iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x20);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = **(long **)(DAT_091896c0 + 0xb8);
    if (lVar3 == 0) goto LAB_077bd4bc;
  }
  plVar4 = *(long **)(param_1 + 0x28);
  if (iVar1 == *(int *)(lVar3 + 0x20)) {
    if (plVar4 == (long *)0x0) goto LAB_077bd4bc;
    lVar3 = plVar4[9];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x28);
      goto LAB_077bd3c0;
    }
  }
  else {
LAB_077bd3c0:
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) || (plVar4 == (long *)0x0)) goto LAB_077bd4bc;
    (**(code **)(*plVar4 + 0x178))
              (plVar4,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
               *(undefined8 *)(*plVar4 + 0x180));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x20);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      plVar4 = *(long **)(param_1 + 0x30);
      if (iVar1 == *(int *)(**(long **)(DAT_091896c0 + 0xb8) + 0x24)) {
        if (plVar4 == (long *)0x0) goto LAB_077bd4bc;
        lVar3 = plVar4[9];
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        plVar4 = *(long **)(param_1 + 0x30);
      }
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((**(long **)(DAT_091896c0 + 0xb8) != 0) && (plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x077bd4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x178))
                  (plVar4,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x24),
                   *(undefined8 *)(*plVar4 + 0x180));
        return;
      }
    }
  }
LAB_077bd4bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

