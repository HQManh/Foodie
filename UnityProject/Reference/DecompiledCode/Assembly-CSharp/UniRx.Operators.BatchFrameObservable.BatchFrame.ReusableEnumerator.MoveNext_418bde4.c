// rea decompile_all
// name: UniRx.Operators.BatchFrameObservable.BatchFrame.ReusableEnumerator$$MoveNext
// address: 0x418bde4
// body: available
// range: 0x418bde4-0x418bfef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418bfdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418bfe4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418bfe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418bfec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418bfe0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
UniRx_Operators_BatchFrameObservable_BatchFrame_ReusableEnumerator__MoveNext(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  int iVar9;
  char local_34 [4];
  
  if ((DAT_09516772 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b288);
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_09516772 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  local_34[0] = '\0';
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_0418bfdc;
  if (*(char *)(*(long *)(lVar4 + 0x30) + 0x10) != '\0') {
    return 0;
  }
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  local_34[0] = '\0';
  System_Threading_Monitor__Enter(uVar2,local_34,0);
  iVar9 = *(int *)(param_1 + 0x18);
  lVar4 = *(long *)(param_1 + 0x10);
  *(int *)(param_1 + 0x18) = iVar9 + 1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (iVar9 == *(int *)(*(long *)(lVar4 + 0x20) + 0x20)) {
    if (*(char *)(lVar4 + 0x41) != '\0') {
      uVar8 = 0;
      goto LAB_0418beb0;
    }
    uVar8 = 0;
    *(undefined1 *)(lVar4 + 0x40) = 0;
    iVar9 = 6;
  }
  else {
    uVar8 = 1;
LAB_0418beb0:
    iVar9 = 5;
  }
  if (local_34[0] != '\0') {
    System_Threading_Monitor__Exit(uVar2,0);
  }
  if ((iVar9 != 6) && (iVar9 != 0)) {
    return uVar8;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
    thunk_FUN_03f6a5cc();
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515ed7 == '\0') {
      FUN_03f5c2a4(&DAT_0918c670);
      DAT_09515ed7 = '\x01';
    }
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      uVar1 = **(undefined1 **)(DAT_0918c670 + 0xb8);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b288) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0418bf9c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b288,0);
LAB_0418bf9c:
      (*(code *)*puVar3)(plVar7,uVar1,puVar3[1]);
      return 0;
    }
  }
LAB_0418bfdc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

