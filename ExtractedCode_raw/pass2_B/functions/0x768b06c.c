// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$TryHexTextToInt
// address: 0x768b06c
// body: available
// range: 0x768b06c-0x768b13b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768b134 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768b138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Utilities_ConvertUtils__TryHexTextToInt
               (long param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  
  *param_4 = 0;
  if ((int)param_2 < param_3) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    lVar5 = (long)(int)param_2;
    iVar4 = 0;
    uVar6 = (~param_2 + param_3) * 4;
    bVar7 = false;
    do {
      if (uVar2 <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = *(ushort *)(param_1 + 0x20 + lVar5 * 2);
      if (uVar3 - 0x3a < 0xfffffff6) {
        if (uVar3 - 0x47 < 0xfffffffa) {
          if (uVar3 - 0x67 < 0xfffffffa) {
            *param_4 = 0;
            return bVar7;
          }
          iVar8 = -0x57;
        }
        else {
          iVar8 = -0x37;
        }
      }
      else {
        iVar8 = -0x30;
      }
      uVar1 = uVar6 & 0x1c;
      lVar5 = lVar5 + 1;
      uVar6 = uVar6 - 4;
      param_2 = param_2 + 1;
      iVar4 = (iVar8 + (uint)uVar3 << (ulong)uVar1) + iVar4;
      bVar7 = param_3 <= lVar5;
      *param_4 = iVar4;
    } while (param_3 != lVar5);
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

