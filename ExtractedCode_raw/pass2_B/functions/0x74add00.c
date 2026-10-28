// rea decompile_all
// name: System.Runtime.Serialization.FormatterServices$$GetClrTypeFullNameForArray
// address: 0x74add00
// body: available
// range: 0x74add00-0x74adf27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ade34 to 0x7430d70 System.String$$Format (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74adf24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_FormatterServices__GetClrTypeFullNameForArray(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  if ((DAT_09521404 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09226898);
    FUN_03f5c2a4(&DAT_09214520);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_09214720);
    DAT_09521404 = 1;
  }
  if (param_1 != (long *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
    iVar6 = iVar1 + -1;
    if (iVar6 == 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar3 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
      if (*(int *)(DAT_09184940 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09184940);
      }
      uVar3 = System_Runtime_Serialization_FormatterServices__GetClrTypeFullName(uVar3);
      System_String__Format(uVar2,DAT_09226898,uVar3,DAT_09214520,0);
      return;
    }
    uVar2 = (**(code **)(*param_1 + 0x448))(param_1,*(undefined8 *)(*param_1 + 0x450));
    if (*(int *)(DAT_09184940 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184940);
    }
    uVar2 = System_Runtime_Serialization_FormatterServices__GetClrTypeFullName(uVar2);
    lVar4 = thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(lVar4,uVar2,0);
    if (lVar4 != 0) {
      plVar5 = (long *)System_Text_StringBuilder__Append(lVar4,DAT_092139f8,0);
      if (1 < iVar1) {
        if (plVar5 == (long *)0x0) goto LAB_074adf24;
        do {
          System_Text_StringBuilder__Append(plVar5,DAT_091f86d8,0);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (plVar5 != (long *)0x0) {
        System_Text_StringBuilder__Append(plVar5,DAT_09214720,0);
                    /* WARNING: Could not recover jumptable at 0x074adf20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        return;
      }
    }
  }
LAB_074adf24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

