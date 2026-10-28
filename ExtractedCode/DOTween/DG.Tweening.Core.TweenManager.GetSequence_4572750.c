// rea decompile_all
// name: DG.Tweening.Core.TweenManager$$GetSequence
// address: 0x4572750
// body: available
// range: 0x4572750-0x4572a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4572a2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4572a34 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * DG_Tweening_Core_TweenManager__GetSequence(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 local_38;
  
  if ((DAT_095188be & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a868);
    FUN_03f5c2a4(&DAT_091bb450);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_091f6fb8);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_091f6fa0);
    FUN_03f5c2a4(&DAT_092078a8);
    DAT_095188be = 1;
  }
  local_38 = 0;
  if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(DAT_0918c158 + 0xb8);
  if (*(int *)(lVar4 + 0x38) < 1) {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = *(long *)(DAT_0918c158 + 0xb8);
    }
    iVar5 = *(int *)(lVar4 + 0xc);
    if (iVar5 + -1 <= *(int *)(lVar4 + 0x40)) {
      if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = *(long *)(DAT_0918c158 + 0xb8);
        iVar5 = *(int *)(lVar4 + 0xc);
      }
      local_38 = CONCAT44(*(undefined4 *)(lVar4 + 8),iVar5);
      DG_Tweening_Core_TweenManager__IncreaseCapacities(2);
      if (DAT_0951877d == '\0') {
        FUN_03f5c2a4(&DAT_091836f8);
        DAT_0951877d = '\x01';
      }
      if (0 < **(int **)(DAT_091836f8 + 0xb8)) {
        uVar2 = System_Int32__ToString((long)&local_38 + 4,0);
        uVar3 = System_Int32__ToString(&local_38,0);
        uVar2 = System_String__Concat(uVar2,DAT_091f9400,uVar3,0);
        if (DAT_092078a8 == 0) {
LAB_04572a2c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = System_String__Replace(DAT_092078a8,DAT_091f6fa0,uVar2,0);
        if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918c158);
        }
        uVar2 = System_Int32__ToString(*(long *)(DAT_0918c158 + 0xb8) + 8,0);
        uVar3 = System_Int32__ToString(*(long *)(DAT_0918c158 + 0xb8) + 0xc,0);
        uVar2 = System_String__Concat(uVar2,DAT_091f9400,uVar3,0);
        if (lVar4 == 0) goto LAB_04572a2c;
        uVar2 = System_String__Replace(lVar4,DAT_091f6fb8,uVar2,0);
        DG_Tweening_Core_Debugger__LogWarning(uVar2,0,0);
      }
    }
    plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918a868);
    DG_Tweening_Sequence___ctor(plVar1,0);
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x40) =
         *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x40) + 1;
    DG_Tweening_Core_TweenManager__AddActiveTween(plVar1);
  }
  else {
    if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = *(long *)(DAT_0918c158 + 0xb8);
    }
    if (*(long *)(lVar4 + 0x58) == 0) goto LAB_04572a2c;
    plVar1 = (long *)FUN_061a18e8(*(long *)(lVar4 + 0x58),DAT_091bb450);
    if (plVar1 != (long *)0x0) {
      if (*plVar1 != DAT_0918a868) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar1);
      }
    }
    DG_Tweening_Core_TweenManager__AddActiveTween(plVar1);
    *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x38) =
         *(int *)(*(long *)(DAT_0918c158 + 0xb8) + 0x38) + -1;
  }
  return plVar1;
}

