// rea decompile_all
// name: System.Security.Cryptography.X509Certificates.X509Certificate$$FormatDate
// address: 0x7478500
// body: available
// range: 0x7478500-0x7478647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7478644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_X509Certificates_X509Certificate__FormatDate(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 local_38;
  
  local_38 = param_1;
  if ((DAT_09521223 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09521223 = 1;
  }
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar4 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
  if (plVar4 != (long *)0x0) {
    lVar5 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250));
    if (lVar5 != 0) {
      plVar7 = *(long **)(lVar5 + 0x78);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar1 = System_DateTime__get_Year(&local_38,0);
      uVar2 = System_DateTime__get_Month(&local_38,0);
      uVar3 = System_DateTime__get_Day(&local_38,0);
      if (plVar7 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar7 + 0x318))
                          (plVar7,uVar1,uVar2,uVar3,0,*(undefined8 *)(*plVar7 + 800));
        if ((uVar6 & 1) == 0) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar4 = (long *)System_Globalization_CultureInfo__get_InvariantCulture(0);
        }
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_DateTime__ToString(&local_38,plVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

