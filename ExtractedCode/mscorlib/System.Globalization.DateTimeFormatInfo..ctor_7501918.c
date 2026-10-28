// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$.ctor
// address: 0x7501918
// body: available
// range: 0x7501918-0x7501a07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7501a00 to 0x7501a08 System.Globalization.DateTimeFormatInfo$$InitializeOverridableProperties (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7501a04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfo___ctor(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09521682 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09184eb0);
    DAT_09521682 = 1;
  }
  *(undefined4 *)(param_1 + 0x144) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  System_Object___ctor(param_1,0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0xc0);
    thunk_FUN_03f5d7b8();
    if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
    plVar3 = (long *)(param_1 + 0x78);
    *plVar3 = lVar2;
    thunk_FUN_03f5d7b8(plVar3,lVar2);
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      System_Globalization_DateTimeFormatInfo__InitializeOverridableProperties(param_1,uVar4,uVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

