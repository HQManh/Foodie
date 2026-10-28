// rea decompile_all
// name: System.Security.SecureString$$Alloc
// address: 0x7455144
// body: available
// range: 0x7455144-0x74552df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x745527c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7455280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74552dc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_SecureString__Alloc(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_09521117 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521117 = 1;
  }
  if (0x10000 < param_2) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_0921e638);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091fa168);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d88d8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  uVar1 = param_2 >> 3;
  if ((param_2 & 7) != 0) {
    uVar1 = uVar1 + 1;
  }
  if ((param_3 & 1) != 0) {
    plVar7 = (long *)(param_1 + 0x18);
    if ((*plVar7 != 0) && (uVar1 << 4 == *(int *)(*plVar7 + 0x18))) {
      return;
    }
    lVar3 = FUN_03f5c394(DAT_0917fc88);
    lVar8 = *plVar7;
    if ((lVar8 != 0) && (lVar3 != 0)) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Math__Min(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar3 + 0x18),0);
      System_Array__Copy(lVar8,0,lVar3,0,uVar2,0);
      lVar8 = *plVar7;
      if (lVar8 != 0) {
        System_Array__Clear(lVar8,0,*(undefined4 *)(lVar8 + 0x18),0);
        *plVar7 = lVar3;
        goto LAB_07455270;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = FUN_03f5c394(DAT_0917fc88);
  *(long *)(param_1 + 0x18) = lVar3;
LAB_07455270:
  thunk_FUN_03f5d7b8(param_1 + 0x18,lVar3);
  return;
}

