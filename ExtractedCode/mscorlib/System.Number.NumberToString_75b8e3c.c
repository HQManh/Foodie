// rea decompile_all
// name: System.Number$$NumberToString
// address: 0x75b8e3c
// body: available
// range: 0x75b8e3c-0x75b9003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b8f5c to 0x75bf488 System.Number$$FormatPercent (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b9000 to 0x89db630 FUN_089db630 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__NumberToString
               (long param_1,int *param_2,ushort param_3,int param_4,long param_5,ulong param_6)

{
  uint uVar1;
  undefined2 uVar2;
  short *psVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_09521d56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d56 = 1;
  }
  lVar8 = DAT_09188a70;
  if (param_3 < 0x51) {
    if (param_3 < 0x46) {
      if (param_3 == 0x43) goto LAB_075b9120;
      if (param_3 == 0x45) goto LAB_075b8fb4;
      if (param_3 == 0x44) goto LAB_075b9198;
    }
    else {
      if (param_3 == 0x46) goto LAB_075b9068;
      if (param_3 == 0x47) goto LAB_075b8f70;
    }
    if (param_3 == 0x4e) {
LAB_075b91e0:
      if (-1 < param_4) {
LAB_075b91ec:
        iVar7 = param_2[1];
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Number__RoundNumber(param_2,iVar7 + param_4);
        System_Number__FormatNumber(param_1,param_2);
        return;
      }
      if (param_5 != 0) {
        param_4 = *(int *)(param_5 + 0xac);
        goto LAB_075b91ec;
      }
      goto LAB_075b9400;
    }
    if (param_3 != 0x50) {
LAB_075b9198:
      thunk_FUN_03fc39d4(&DAT_09184908);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09202d98);
      System_FormatException___ctor(uVar5,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d48e0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
LAB_075b8ef8:
    if (-1 < param_4) {
LAB_075b8f04:
      iVar7 = param_2[1];
      param_2[1] = iVar7 + 2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Number__RoundNumber(param_2,iVar7 + 2 + param_4);
      System_Number__FormatPercent(param_1,param_2);
      return;
    }
    if (param_5 != 0) {
      param_4 = *(int *)(param_5 + 200);
      goto LAB_075b8f04;
    }
    goto LAB_075b9400;
  }
  if (param_3 < 0x67) {
    if (param_3 != 99) {
      if (param_3 == 0x65) {
LAB_075b8fb4:
        iVar7 = 7;
        if (-1 < param_4) {
          iVar7 = param_4 + 1;
        }
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Number__RoundNumber(param_2,iVar7);
        uVar4 = System_Number_NumberBuffer__get_sign(param_2,0);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Number__FormatScientific(param_1,param_2);
          return;
        }
        if (param_5 != 0) {
          FUN_089db630();
          return;
        }
        goto LAB_075b9400;
      }
      if (param_3 != 0x66) goto LAB_075b9198;
LAB_075b9068:
      if (param_4 < 0) {
        if (param_5 == 0) goto LAB_075b9400;
        param_4 = *(int *)(param_5 + 0xac);
      }
      iVar7 = param_2[1];
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Number__RoundNumber(param_2,iVar7 + param_4);
      uVar4 = System_Number_NumberBuffer__get_sign(param_2,0);
      if ((uVar4 & 1) == 0) {
        if (param_5 == 0) goto LAB_075b9400;
LAB_075b92a8:
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Number__FormatFixed(param_1,param_2);
        return;
      }
      if (param_5 != 0) {
        lVar8 = *(long *)(param_5 + 0x30);
        if (DAT_09521d81 == '\0') {
          FUN_03f5c2a4(&DAT_091ba998);
          DAT_09521d81 = '\x01';
        }
        if (lVar8 == 0) goto LAB_075b9400;
        if (*(int *)(lVar8 + 0x10) == 1) {
          uVar1 = *(uint *)(param_1 + 0x18);
          if ((int)uVar1 < (int)*(uint *)(param_1 + 0x10)) {
            if (uVar1 < *(uint *)(param_1 + 0x10)) {
              lVar9 = *(long *)(param_1 + 8);
              uVar2 = System_String__get_Chars(lVar8,0,0);
              *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar2;
              *(uint *)(param_1 + 0x18) = uVar1 + 1;
              goto LAB_075b92a8;
            }
            goto LAB_075b9404;
          }
        }
        System_Text_ValueStringBuilder__AppendSlow(param_1,lVar8,0);
        goto LAB_075b92a8;
      }
      goto LAB_075b9400;
    }
LAB_075b9120:
    if (-1 < param_4) {
LAB_075b912c:
      iVar7 = param_2[1];
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Number__RoundNumber(param_2,iVar7 + param_4);
      System_Number__FormatCurrency(param_1,param_2,param_4,param_4,param_5);
      return;
    }
    if (param_5 != 0) {
      param_4 = *(int *)(param_5 + 0xb0);
      goto LAB_075b912c;
    }
    goto LAB_075b9400;
  }
  if (param_3 != 0x67) {
    if (param_3 == 0x6e) goto LAB_075b91e0;
    if (param_3 != 0x70) goto LAB_075b9198;
    goto LAB_075b8ef8;
  }
LAB_075b8f70:
  if (param_4 < 1) {
    if ((param_4 != -1) || ((param_6 & 1) == 0)) {
      param_4 = *param_2;
      goto LAB_075b92f8;
    }
    psVar3 = (short *)System_Number_NumberBuffer__get_digits(param_2,0);
    if (*psVar3 == 0) {
      System_Number_NumberBuffer__set_sign(param_2,0,0);
    }
  }
  else {
LAB_075b92f8:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Number__RoundNumber(param_2,param_4);
  }
  uVar4 = System_Number_NumberBuffer__get_sign(param_2,0);
  if ((uVar4 & 1) == 0) {
LAB_075b93b4:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Number__FormatGeneral(param_1,param_2);
    return;
  }
  if (param_5 != 0) {
    lVar8 = *(long *)(param_5 + 0x30);
    if (DAT_09521d81 == '\0') {
      FUN_03f5c2a4(&DAT_091ba998);
      DAT_09521d81 = '\x01';
    }
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x10) == 1) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if ((int)uVar1 < (int)*(uint *)(param_1 + 0x10)) {
          if (*(uint *)(param_1 + 0x10) <= uVar1) {
LAB_075b9404:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar9 = *(long *)(param_1 + 8);
          uVar2 = System_String__get_Chars(lVar8,0,0);
          *(undefined2 *)(lVar9 + (long)(int)uVar1 * 2) = uVar2;
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          goto LAB_075b93b4;
        }
      }
      System_Text_ValueStringBuilder__AppendSlow(param_1,lVar8,0);
      goto LAB_075b93b4;
    }
  }
LAB_075b9400:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

