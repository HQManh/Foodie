// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeParser$$ParseZone
// address: 0x768ce00
// body: available
// range: 0x768ce00-0x768cfff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768cff8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768cffc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Utilities_DateTimeParser__ParseZone(long param_1,uint param_2)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  undefined4 uVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_09522576 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835b0);
    DAT_09522576 = 1;
  }
  uVar6 = param_2;
  if (*(int *)(param_1 + 0x30) <= (int)param_2) goto LAB_0768cfdc;
  lVar5 = *(long *)(param_1 + 0x28);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar2 = *(ushort *)(lVar5 + (long)(int)param_2 * 2 + 0x20);
  if ((uVar2 | 0x20) == 0x7a) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    uVar6 = param_2 + 1;
    goto LAB_0768cfdc;
  }
  if ((int)(param_2 + 2) < *(int *)(param_1 + 0x30)) {
    if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_DateTimeParser__Parse2Digit
                      (param_1,*(int *)(*(long *)(DAT_091835b0 + 0xb8) + 0x34) + param_2,
                       param_1 + 0x1c);
    lVar5 = DAT_091835b0;
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x1c) < 100)) {
      if (uVar2 == 0x2b) {
        uVar4 = 3;
      }
      else {
        if (uVar2 != 0x2d) goto LAB_0768cf0c;
        uVar4 = 2;
      }
      iVar1 = *(int *)(DAT_091835b0 + 0xe4);
      *(undefined4 *)(param_1 + 0x24) = uVar4;
      if (iVar1 == 0) {
        FUN_03f5c424();
        lVar5 = DAT_091835b0;
      }
      param_2 = *(int *)(*(long *)(lVar5 + 0xb8) + 0x38) + param_2;
    }
  }
LAB_0768cf0c:
  uVar6 = param_2;
  if ((int)param_2 < *(int *)(param_1 + 0x30)) {
    if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_DateTimeParser__ParseChar(param_1,param_2,0x3a);
    if ((uVar3 & 1) == 0) {
      if ((int)(param_2 + 1) < *(int *)(param_1 + 0x30)) {
        if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Newtonsoft_Json_Utilities_DateTimeParser__Parse2Digit
                          (param_1,param_2,param_1 + 0x20);
        if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x20) < 100)) {
          uVar6 = param_2 + 2;
        }
      }
    }
    else {
      uVar6 = param_2 + 1;
      if ((int)(param_2 + 2) < *(int *)(param_1 + 0x30)) {
        if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Newtonsoft_Json_Utilities_DateTimeParser__Parse2Digit(param_1,uVar6,param_1 + 0x20);
        if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x20) < 100)) {
          uVar6 = param_2 + 3;
        }
      }
    }
  }
LAB_0768cfdc:
  return uVar6 == *(uint *)(param_1 + 0x30);
}

