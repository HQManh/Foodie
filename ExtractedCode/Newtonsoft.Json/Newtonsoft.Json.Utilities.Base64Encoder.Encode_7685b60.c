// rea decompile_all
// name: Newtonsoft.Json.Utilities.Base64Encoder$$Encode
// address: 0x7685b60
// body: available
// range: 0x7685b60-0x7685cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7685cfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_Base64Encoder__Encode
               (long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_44;
  
  lVar4 = param_1;
  local_44 = param_4;
  if ((DAT_09522549 & 1) == 0) {
    lVar4 = FUN_03f5c2a4(&DAT_09182b88);
    DAT_09522549 = 1;
  }
  Newtonsoft_Json_Utilities_Base64Encoder__ValidateEncode(lVar4,param_2,param_3,param_4);
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar5 = Newtonsoft_Json_Utilities_Base64Encoder__FulfillFromLeftover
                      (param_1,param_2,param_3,&local_44);
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Convert__ToBase64CharArray(uVar9,0,3,uVar8,0,0);
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) {
LAB_07685cfc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar6 + 0x248))
              (plVar6,*(undefined8 *)(param_1 + 0x10),0,uVar3,*(undefined8 *)(*plVar6 + 0x250));
  }
  Newtonsoft_Json_Utilities_Base64Encoder__StoreLeftOverBytes(param_1,param_2,param_3,&local_44);
  iVar1 = local_44 + param_3;
  if (param_3 < iVar1) {
    iVar7 = 0x39;
    do {
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      iVar2 = iVar1 - param_3;
      if (param_3 + iVar7 <= iVar1) {
        iVar2 = iVar7;
      }
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Convert__ToBase64CharArray(param_2,param_3,iVar2,uVar8,0,0);
      plVar6 = *(long **)(param_1 + 0x18);
      if (plVar6 == (long *)0x0) goto LAB_07685cfc;
      (**(code **)(*plVar6 + 0x248))
                (plVar6,*(undefined8 *)(param_1 + 0x10),0,uVar3,*(undefined8 *)(*plVar6 + 0x250));
      param_3 = iVar2 + param_3;
      iVar7 = iVar2;
    } while (param_3 < iVar1);
  }
  return;
}

