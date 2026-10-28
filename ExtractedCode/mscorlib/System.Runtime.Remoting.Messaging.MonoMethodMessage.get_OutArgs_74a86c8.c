// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MonoMethodMessage$$get_OutArgs
// address: 0x74a86c8
// body: available
// range: 0x74a86c8-0x74a8807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a87f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a87f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a8804 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Runtime_Remoting_Messaging_MonoMethodMessage__get_OutArgs(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  if ((DAT_095213c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    DAT_095213c9 = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar2 = System_Runtime_Remoting_Messaging_MonoMethodMessage__get_OutArgCount(param_1);
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,uVar2);
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 == 0) {
LAB_074a87f8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
      uVar10 = 0;
      uVar9 = 0;
      uVar6 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar9) goto LAB_074a87f4;
        if ((*(byte *)(lVar8 + 0x20 + uVar9) >> 1 & 1) != 0) {
          lVar7 = *(long *)(param_1 + 0x18);
          if (lVar7 == 0) goto LAB_074a87f8;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) {
LAB_074a87f4:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (plVar3 == (long *)0x0) goto LAB_074a87f8;
          lVar7 = *(long *)(lVar7 + uVar9 * 8 + 0x20);
          if ((lVar7 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if (*(uint *)(plVar3 + 3) <= uVar10) goto LAB_074a87f4;
          lVar4 = (long)(int)uVar10;
          lVar1 = (long)(int)uVar10;
          uVar10 = uVar10 + 1;
          plVar3[lVar4 + 4] = lVar7;
          thunk_FUN_03f5d7b8(plVar3 + lVar1 + 4,lVar7);
        }
        uVar6 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
  }
  return plVar3;
}

