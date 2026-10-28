// rea decompile_all
// name: System.Globalization.CultureData$$GetCalendarIds
// address: 0x753bed4
// body: available
// range: 0x753bed4-0x753bfa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753bf8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753bfa0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_CultureData__GetCalendarIds(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((DAT_095218da & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fca0);
    DAT_095218da = 1;
  }
  lVar3 = System_Globalization_CultureData__get_CalendarIds(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_03f5c394(DAT_0917fca0,*(undefined4 *)(lVar3 + 0x18));
    lVar4 = System_Globalization_CultureData__get_CalendarIds(param_1);
    if (lVar4 != 0) {
      uVar5 = 0;
      do {
        if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar5) {
          return lVar3;
        }
        lVar4 = System_Globalization_CultureData__get_CalendarIds(param_1);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_0753bfa0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar3 == 0) break;
        if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_0753bfa0;
        lVar1 = uVar5 * 4;
        lVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(short *)(lVar3 + lVar2 + 0x20) = (short)*(undefined4 *)(lVar4 + lVar1 + 0x20);
        lVar4 = System_Globalization_CultureData__get_CalendarIds(param_1);
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

