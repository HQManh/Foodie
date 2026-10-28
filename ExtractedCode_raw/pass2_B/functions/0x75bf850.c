// rea decompile_all
// name: System.Number$$FormatExponent
// address: 0x75bf850
// body: available
// range: 0x75bf850-0x75bfb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bfb00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bfb14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bfb18 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatExponent
               (long param_1,long param_2,uint param_3,undefined4 param_4,int param_5,uint param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  short *psVar4;
  undefined2 uVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 local_70;
  undefined2 uStack_6c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar9 = (ulong)param_3;
  if ((DAT_09521d5c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d5c = 1;
  }
  if (DAT_09521150 == '\0') {
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521150 = '\x01';
  }
  uVar8 = *(uint *)(param_1 + 0x18);
  if ((int)uVar8 < (int)*(uint *)(param_1 + 0x10)) {
    if (*(uint *)(param_1 + 0x10) <= uVar8) {
LAB_075bfb04:
      if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_075bfb18;
    }
    *(uint *)(param_1 + 0x18) = uVar8 + 1;
    *(short *)(*(long *)(param_1 + 8) + (long)(int)uVar8 * 2) = (short)param_4;
    if (-1 < (int)param_3) goto LAB_075bf984;
LAB_075bf8fc:
    if (param_2 != 0) {
      lVar11 = *(long *)(param_2 + 0x30);
      if (DAT_09521d81 == '\0') {
        FUN_03f5c2a4(&DAT_091ba998);
        DAT_09521d81 = '\x01';
      }
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x10) == 1) {
          uVar8 = *(uint *)(param_1 + 0x18);
          if ((int)*(uint *)(param_1 + 0x10) <= (int)uVar8) goto LAB_075bf9fc;
          if (*(uint *)(param_1 + 0x10) <= uVar8) goto LAB_075bfb04;
          lVar12 = *(long *)(param_1 + 8);
          uVar5 = System_String__get_Chars(lVar11,0,0);
          *(undefined2 *)(lVar12 + (long)(int)uVar8 * 2) = uVar5;
          *(uint *)(param_1 + 0x18) = uVar8 + 1;
        }
        else {
LAB_075bf9fc:
          System_Text_ValueStringBuilder__AppendSlow(param_1,lVar11,0);
        }
        uVar9 = (ulong)-param_3;
        goto LAB_075bfa24;
      }
    }
LAB_075bfaf0:
    if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    System_Text_ValueStringBuilder__GrowAndAppend(param_1,param_4,0);
    if ((int)param_3 < 0) goto LAB_075bf8fc;
LAB_075bf984:
    if ((param_6 & 1) != 0) {
      if (param_2 != 0) {
        lVar11 = *(long *)(param_2 + 0x28);
        if (DAT_09521d81 == '\0') {
          FUN_03f5c2a4(&DAT_091ba998);
          DAT_09521d81 = '\x01';
        }
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x10) == 1) {
            uVar8 = *(uint *)(param_1 + 0x18);
            if ((int)uVar8 < (int)*(uint *)(param_1 + 0x10)) {
              if (*(uint *)(param_1 + 0x10) <= uVar8) goto LAB_075bfb04;
              lVar12 = *(long *)(param_1 + 8);
              uVar5 = System_String__get_Chars(lVar11,0,0);
              *(undefined2 *)(lVar12 + (long)(int)uVar8 * 2) = uVar5;
              *(uint *)(param_1 + 0x18) = uVar8 + 1;
              goto LAB_075bfa24;
            }
          }
          System_Text_ValueStringBuilder__AppendSlow(param_1,lVar11,0);
          goto LAB_075bfa24;
        }
      }
      goto LAB_075bfaf0;
    }
LAB_075bfa24:
    local_70 = 0;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((-1 < param_5 + -1) || (psVar6 = &uStack_6c, (int)uVar9 != 0)) {
      psVar4 = (short *)((long)&local_70 + 2);
      iVar7 = param_5 + -2;
      do {
        do {
          psVar6 = psVar4;
          uVar10 = uVar9 / 10;
          uVar8 = (uint)uVar9;
          *psVar6 = (short)uVar9 + (short)(uVar9 / 10) * -10 + 0x30;
          iVar2 = iVar7 + -1;
          bVar1 = -1 < iVar7;
          psVar4 = psVar6 + -1;
          uVar9 = uVar10;
          iVar7 = iVar2;
        } while (bVar1);
      } while (9 < uVar8);
    }
    uVar9 = (long)&uStack_6c + -(long)psVar6;
    if ((long)uVar9 < 0) {
      uVar9 = (long)&uStack_6c + -(long)psVar6 + 1;
    }
    System_Text_ValueStringBuilder__Append(param_1,psVar6,uVar9 >> 1,0);
    if (*(long *)(lVar3 + 0x28) == local_58) {
      return;
    }
  }
LAB_075bfb18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

