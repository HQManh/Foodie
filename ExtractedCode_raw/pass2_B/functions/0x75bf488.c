// rea decompile_all
// name: System.Number$$FormatPercent
// address: 0x75bf488
// body: available
// range: 0x75bf488-0x75bf70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bf704 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bf708 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatPercent
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined2 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_09521d5e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d5e = 1;
  }
  uVar3 = System_Number_NumberBuffer__get_sign(param_2,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((param_5 == 0) || (lVar4 = *(long *)(*(long *)(DAT_09188a70 + 0xb8) + 0x10), lVar4 == 0))
    goto LAB_075bf704;
    uVar5 = *(uint *)(param_5 + 0xc0);
  }
  else {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((param_5 == 0) || (lVar4 = *(long *)(*(long *)(DAT_09188a70 + 0xb8) + 0x18), lVar4 == 0))
    goto LAB_075bf704;
    uVar5 = *(uint *)(param_5 + 0xc4);
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_075bf708:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x10)) {
      iVar6 = 0;
      do {
        uVar2 = System_String__get_Chars(lVar4,iVar6,0);
        uVar5 = uVar2 & 0xffff;
        if (uVar5 == 0x2d) {
          lVar7 = *(long *)(param_5 + 0x30);
joined_r0x075bf670:
          if (DAT_09521d81 == '\0') {
            FUN_03f5c2a4(&DAT_091ba998);
            DAT_09521d81 = '\x01';
          }
          if (lVar7 == 0) goto LAB_075bf704;
          if (*(int *)(lVar7 + 0x10) == 1) {
            uVar5 = *(uint *)(param_1 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(param_1 + 0x10)) {
              if (uVar5 < *(uint *)(param_1 + 0x10)) {
                lVar8 = *(long *)(param_1 + 8);
                uVar1 = System_String__get_Chars(lVar7,0,0);
                *(undefined2 *)(lVar8 + (long)(int)uVar5 * 2) = uVar1;
                *(uint *)(param_1 + 0x18) = uVar5 + 1;
                goto LAB_075bf6d4;
              }
              goto LAB_075bf708;
            }
          }
          System_Text_ValueStringBuilder__AppendSlow(param_1,lVar7,0);
        }
        else {
          if (uVar5 == 0x25) {
            lVar7 = *(long *)(param_5 + 0x90);
            goto joined_r0x075bf670;
          }
          if (uVar5 == 0x23) {
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
            uVar5 = *(uint *)(param_1 + 0x18);
            if ((int)uVar5 < (int)*(uint *)(param_1 + 0x10)) {
              if (*(uint *)(param_1 + 0x10) <= uVar5) goto LAB_075bf708;
              *(uint *)(param_1 + 0x18) = uVar5 + 1;
              *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar5 * 2) = (short)uVar2;
            }
            else {
              System_Text_ValueStringBuilder__GrowAndAppend(param_1,uVar2,0);
            }
          }
        }
LAB_075bf6d4:
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar4 + 0x10));
    }
    return;
  }
LAB_075bf704:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

