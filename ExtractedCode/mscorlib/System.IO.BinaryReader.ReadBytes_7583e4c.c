// rea decompile_all
// name: System.IO.BinaryReader$$ReadBytes
// address: 0x7583e4c
// body: available
// range: 0x7583e4c-0x7583fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7583f6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7583fd0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7583fd4 to 0x7582080 System.IO.__Error$$FileNotOpen (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_BinaryReader__ReadBytes(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  
  if ((DAT_09521afc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09177300);
    DAT_09521afc = 1;
  }
  if (param_2 < 0) {
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208d80);
    uVar5 = System_Environment__GetResourceString(uVar5,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09219b28);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar7,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c3dd0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar5);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    System_IO___Error__FileNotOpen();
  }
  if (param_2 == 0) {
    if (*(int *)(DAT_09177300 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_09177300 + 0xb8);
  }
  else {
    lVar2 = FUN_03f5c394(DAT_0917fc88,param_2);
    iVar8 = 0;
    do {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_07583f6c;
      iVar1 = (**(code **)(*plVar3 + 0x368))
                        (plVar3,lVar2,iVar8,param_2,*(undefined8 *)(*plVar3 + 0x370));
      if (iVar1 == 0) break;
      param_2 = param_2 - iVar1;
      iVar8 = iVar1 + iVar8;
    } while (0 < param_2);
    if (lVar2 == 0) {
LAB_07583f6c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = lVar2;
    if (iVar8 != *(int *)(lVar2 + 0x18)) {
      lVar4 = FUN_03f5c394(DAT_0917fc88,iVar8);
      thunk_FUN_03f6c31c(lVar2,0,lVar4,0,iVar8,0);
    }
  }
  return lVar4;
}

