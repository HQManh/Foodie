// rea decompile_all
// name: System.DateTimeFormat$$TryFormat
// address: 0x759b62c
// body: available
// range: 0x759b62c-0x759b83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759b71c to 0x75a074c System.DateTimeFormat$$TryFormatO (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x759b838 to 0x75a0c50 System.DateTimeFormat$$TryFormatR (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x759b83c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_DateTimeFormat__TryFormat
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                ushort *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_09521c28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521c28 = 1;
  }
  if ((int)param_6 == 1) {
    uVar1 = *param_5;
    if (uVar1 < 0x53) {
      if (uVar1 == 0x4f) {
LAB_0759b6e4:
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_DateTimeFormat__TryFormatO(param_1,param_8,param_2,param_3,param_4);
        return uVar6;
      }
      if (uVar1 == 0x52) goto LAB_0759b800;
    }
    else {
      if (uVar1 == 0x72) {
LAB_0759b800:
        if (*(int *)(DAT_09183568 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_DateTimeFormat__TryFormatR(param_1,param_8,param_2,param_3,param_4);
        return uVar6;
      }
      if (uVar1 == 0x6f) goto LAB_0759b6e4;
    }
  }
  if (*(int *)(DAT_09183570 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Globalization_DateTimeFormatInfo__GetInstance(param_7,0);
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183568);
  }
  lVar5 = System_DateTimeFormat__FormatStringBuilder(param_1,param_5,param_6,uVar4,param_8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = System_Text_StringBuilder__get_Length(lVar5,0);
  if ((int)param_3 < iVar2) {
    uVar3 = 0;
  }
  else {
    uVar3 = System_Text_StringBuilder__get_Length(lVar5,0);
    System_Text_StringBuilder__CopyTo(lVar5,0,param_2,param_3,uVar3,0);
    uVar3 = System_Text_StringBuilder__get_Length(lVar5,0);
  }
  *param_4 = uVar3;
  System_Text_StringBuilderCache__Release(lVar5,0);
  return (ulong)(iVar2 <= (int)param_3);
}

