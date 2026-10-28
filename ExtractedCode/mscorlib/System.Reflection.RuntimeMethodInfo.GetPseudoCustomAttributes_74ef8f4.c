// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$GetPseudoCustomAttributes
// address: 0x74ef8f4
// body: available
// range: 0x74ef8f4-0x74efa73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74efa60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74efa64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74efa70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_RuntimeMethodInfo__GetPseudoCustomAttributes(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09521618 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091894f8);
    DAT_09521618 = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  FUN_03f66a68(*(undefined8 *)(param_1 + 0x10),&local_50);
  uVar2 = (uint)local_40;
  uVar7 = local_40._4_4_ >> 7 & 1;
  uVar1 = local_40 & 0x8000000000;
  if (((uint)local_40 >> 0xd & 1) == 0) {
    if ((local_40 & 0x8000000000) == 0) {
      return (long *)0x0;
    }
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,uVar7);
LAB_074ef9ac:
    lVar4 = thunk_FUN_03f9944c(DAT_091894f8);
    System_Runtime_InteropServices_PreserveSigAttribute___ctor(lVar4,0);
    if (plVar3 == (long *)0x0) {
LAB_074efa64:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_074efa68;
    if ((int)plVar3[3] == 0) goto LAB_074efa60;
    plVar3[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
    if ((uVar2 >> 0xd & 1) == 0) {
      return plVar3;
    }
    lVar4 = System_Runtime_InteropServices_DllImportAttribute__GetCustomAttribute(param_1,0);
    uVar7 = 1;
  }
  else {
    plVar3 = (long *)FUN_03f5c394(DAT_09180318,uVar7 + 1);
    if (uVar1 != 0) goto LAB_074ef9ac;
    lVar4 = System_Runtime_InteropServices_DllImportAttribute__GetCustomAttribute(param_1,0);
    if (plVar3 == (long *)0x0) goto LAB_074efa64;
    uVar7 = 0;
  }
  if ((lVar4 == 0) ||
     (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 != 0)) {
    if (uVar7 < *(uint *)(plVar3 + 3)) {
      plVar3[(ulong)uVar7 + 4] = lVar4;
      thunk_FUN_03f5d7b8(plVar3 + (ulong)uVar7 + 4,lVar4);
      return plVar3;
    }
LAB_074efa60:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_074efa68:
  uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,0);
}

