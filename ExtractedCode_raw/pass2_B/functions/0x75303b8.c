// rea decompile_all
// name: System.Globalization.CultureData$$GetCalendar
// address: 0x75303b8
// body: available
// range: 0x75303b8-0x75304e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75304d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75304d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75304e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_CultureData__GetCalendar(long param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_095218d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc98);
    FUN_03f5c2a4(&DAT_091822a0);
    DAT_095218d8 = 1;
  }
  plVar5 = (long *)(param_1 + 0x48);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    lVar4 = FUN_03f5c394(DAT_0917fc98,0x17);
    *plVar5 = lVar4;
    thunk_FUN_03f5d7b8(plVar5,lVar4);
    lVar4 = *plVar5;
    if (lVar4 == 0) goto LAB_075304d8;
  }
  uVar2 = param_2 - 1;
  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
    lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
    if (lVar4 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      uVar1 = *(undefined1 *)(param_1 + 0x60);
      lVar4 = thunk_FUN_03f9944c(DAT_091822a0);
      System_Globalization_CalendarData___ctor(lVar4,uVar6,param_2,uVar1);
      plVar5 = *(long **)(param_1 + 0x48);
      if (plVar5 == (long *)0x0) {
LAB_075304d8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,0);
      }
      if (*(uint *)(plVar5 + 3) <= uVar2) goto LAB_075304d4;
      plVar5[(long)(int)uVar2 + 4] = lVar4;
      thunk_FUN_03f5d7b8(plVar5 + (long)(int)uVar2 + 4,lVar4);
    }
    return lVar4;
  }
LAB_075304d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

