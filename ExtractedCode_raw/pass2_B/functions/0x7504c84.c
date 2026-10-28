// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$GetTaiwanCalendarDTFI
// address: 0x7504c84
// body: available
// range: 0x7504c84-0x7504e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7504e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_DateTimeFormatInfo__GetTaiwanCalendarDTFI(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_095216a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_0918b8a8);
    FUN_03f5c2a4(&DAT_09225e88);
    DAT_095216a2 = 1;
  }
  if (*(int *)(DAT_09183570 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(DAT_09183570 + 0xb8) + 0x18);
  thunk_FUN_03f6a5cc();
  if (lVar3 == 0) {
    if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_095216cd == '\0') {
      FUN_03f5c2a4(&DAT_09184c68);
      DAT_095216cd = '\x01';
    }
    if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(char **)(DAT_09184c68 + 0xb8) == '\0') {
      plVar1 = (long *)thunk_FUN_03f9944c(DAT_09182ff8);
      System_Globalization_CultureInfo___ctor(plVar1,DAT_09225e88,0,0);
      if (plVar1 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
        if (*(int *)(DAT_0918b8a8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918b8a8);
        }
        uVar2 = System_Globalization_TaiwanCalendar__GetDefaultInstance(0);
        if (lVar3 != 0) {
          System_Globalization_DateTimeFormatInfo__set_Calendar(lVar3,uVar2);
          if (*(int *)(DAT_09183570 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          thunk_FUN_03f6a5cc();
          plVar1 = (long *)(*(long *)(DAT_09183570 + 0xb8) + 0x18);
          *plVar1 = lVar3;
          thunk_FUN_03f5d7b8(plVar1,lVar3);
          return lVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = 0;
  }
  return lVar3;
}

