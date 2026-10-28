// rea decompile_all
// name: System.Number$$FormatNumber
// address: 0x75bec50
// body: available
// range: 0x75bec50-0x75beea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bee9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75beea0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatNumber
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_09521d5a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091f6eb0);
    DAT_09521d5a = 1;
  }
  uVar4 = System_Number_NumberBuffer__get_sign(param_2,0);
  if ((uVar4 & 1) == 0) {
    plVar6 = &DAT_091f6eb0;
  }
  else {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((param_5 == 0) || (lVar5 = *(long *)(*(long *)(DAT_09188a70 + 0xb8) + 0x20), lVar5 == 0))
    goto LAB_075bee9c;
    if (*(uint *)(lVar5 + 0x18) <= *(uint *)(param_5 + 0xbc)) {
LAB_075beea0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar6 = (long *)(lVar5 + (long)(int)*(uint *)(param_5 + 0xbc) * 8 + 0x20);
  }
  lVar5 = *plVar6;
  if (lVar5 != 0) {
    if (0 < *(int *)(lVar5 + 0x10)) {
      iVar7 = 0;
      do {
        uVar3 = System_String__get_Chars(lVar5,iVar7,0);
        if ((uVar3 & 0xffff) == 0x2d) {
          if (param_5 == 0) goto LAB_075bee9c;
          lVar8 = *(long *)(param_5 + 0x30);
          if (DAT_09521d81 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521d81 = '\x01';
          }
          if (lVar8 == 0) goto LAB_075bee9c;
          if (*(int *)(lVar8 + 0x10) == 1) {
            uVar3 = *(uint *)(param_1 + 0x18);
            if ((int)uVar3 < (int)*(uint *)(param_1 + 0x10)) {
              if (uVar3 < *(uint *)(param_1 + 0x10)) {
                lVar9 = *(long *)(param_1 + 8);
                uVar2 = System_String__get_Chars(lVar8,0,0);
                *(undefined2 *)(lVar9 + (long)(int)uVar3 * 2) = uVar2;
                *(uint *)(param_1 + 0x18) = uVar3 + 1;
                goto LAB_075bee6c;
              }
              goto LAB_075beea0;
            }
          }
          System_Text_ValueStringBuilder__AppendSlow(param_1,lVar8,0);
        }
        else if ((uVar3 & 0xffff) == 0x23) {
          if (param_5 == 0) goto LAB_075bee9c;
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Number__FormatFixed(param_1,param_2);
        }
        else {
          if (DAT_09521150 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521150 = '\x01';
          }
          uVar1 = *(uint *)(param_1 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(param_1 + 0x10)) {
            if (*(uint *)(param_1 + 0x10) <= uVar1) goto LAB_075beea0;
            *(uint *)(param_1 + 0x18) = uVar1 + 1;
            *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar1 * 2) = (short)uVar3;
          }
          else {
            System_Text_ValueStringBuilder__GrowAndAppend(param_1,uVar3,0);
          }
        }
LAB_075bee6c:
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar5 + 0x10));
    }
    return;
  }
LAB_075bee9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

