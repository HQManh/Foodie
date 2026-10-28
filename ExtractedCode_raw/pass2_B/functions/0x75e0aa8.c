// rea decompile_all
// name: System.LocalDataStoreMgr$$AllocateDataSlot
// address: 0x75e0aa8
// body: available
// range: 0x75e0aa8-0x75e0ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e0bc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0c7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0c84 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0c88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0c8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e0ca0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075e0c80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long System_LocalDataStoreMgr__AllocateDataSlot(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  char local_34 [4];
  
  if ((DAT_09521ec8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091d26a8);
    FUN_03f5c2a4(&DAT_09187ae0);
    DAT_09521ec8 = 1;
  }
  local_34[0] = '\0';
  System_Runtime_CompilerServices_RuntimeHelpers__PrepareConstrainedRegions(0);
  System_Threading_Monitor__Enter(param_1,local_34,0);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(uint *)(lVar4 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x18);
  iVar5 = uVar2 - uVar6;
  if (iVar5 != 0 && (int)uVar6 <= (int)uVar2) {
    lVar7 = (long)(int)uVar6;
    uVar1 = uVar6;
    if (uVar6 <= uVar2) {
      uVar1 = uVar2;
    }
    do {
      uVar6 = (uint)lVar7;
      if (uVar1 == uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(char *)(lVar4 + lVar7 + 0x20) == '\0') goto LAB_075e0bcc;
      iVar5 = iVar5 + -1;
      lVar7 = lVar7 + 1;
      uVar6 = uVar2;
    } while (iVar5 != 0);
  }
  iVar5 = uVar2 + 0x80;
  if ((int)uVar2 < 0x200) {
    iVar5 = uVar2 << 1;
  }
  uVar3 = FUN_03f5c394(DAT_0917fc40,iVar5);
  System_Array__Copy(*(undefined8 *)(param_1 + 0x10),uVar3,uVar2,0);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar3);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_075e0bcc:
  if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar7 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(lVar4 + (int)uVar6 + 0x20) = 1;
  if (lVar7 != 0x7fffffffffffffff) {
    *(long *)(param_1 + 0x30) = lVar7 + 1;
    lVar4 = thunk_FUN_03f9944c(DAT_09187ae0);
    System_Object___ctor(lVar4,0);
    *(long *)(lVar4 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x10),param_1);
    *(uint *)(lVar4 + 0x18) = uVar6;
    *(long *)(lVar4 + 0x20) = lVar7;
    *(uint *)(param_1 + 0x18) = uVar6 + 1;
    if (local_34[0] != '\0') {
      System_Threading_Monitor__Exit(param_1,0);
    }
    return lVar4;
  }
  uVar3 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,DAT_091d26a8);
}

