// rea decompile_all
// name: System.Globalization.UmAlQuraCalendar$$GetDatePart
// address: 0x753a85c
// body: available
// range: 0x753a85c-0x753a9e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753a9e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Globalization_UmAlQuraCalendar__GetDatePart
              (undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  
  local_28 = param_2;
  if ((DAT_095218c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918c5c0);
    DAT_095218c2 = 1;
  }
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_DateTime__get_Ticks(&local_28,0);
  if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c5c0);
  }
  System_Globalization_UmAlQuraCalendar__CheckTicksRange(uVar4);
  System_Globalization_UmAlQuraCalendar__ConvertGregorianToHijri
            (local_28,&local_2c,&local_30,&local_34);
  iVar3 = local_2c;
  iVar2 = local_30;
  iVar1 = local_34;
  if (param_3 < 2) {
    if (param_3 != 0) {
      if (param_3 != 1) goto LAB_0753a994;
      if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_Globalization_UmAlQuraCalendar__GetAbsoluteDateUmAlQura(iVar3,iVar2,iVar1);
      iVar2 = System_Globalization_UmAlQuraCalendar__GetAbsoluteDateUmAlQura(iVar3,1,1);
      iVar3 = (iVar1 - iVar2) + 1;
    }
  }
  else {
    iVar3 = local_30;
    if ((param_3 != 2) && (iVar3 = local_34, param_3 != 3)) {
LAB_0753a994:
      uVar4 = thunk_FUN_03fc39d4(&DAT_09205000);
      uVar4 = System_Environment__GetResourceString(uVar4,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar5 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar5,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091dd9f0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar4);
    }
  }
  return iVar3;
}

