// rea decompile_all
// name: System.DateTimeFormat$$TryFormatO
// address: 0x75a074c
// body: available
// range: 0x75a074c-0x75a0c4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a0c48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a0c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_DateTimeFormat__TryFormatO
               (undefined8 param_1,long param_2,short *param_3,uint param_4,int *param_5)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  short sVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  long local_68;
  undefined8 uStack_58;
  
  local_68 = param_2;
  uStack_58 = param_1;
  if ((DAT_09521c2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091ba980);
    FUN_03f5c2a4(&DAT_091ba998);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521c2a = 1;
  }
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = **(undefined8 **)(DAT_09183568 + 0xb8);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bd60);
  }
  uVar6 = System_TimeSpan__op_Equality(param_2,uVar9,0);
  if ((uVar6 & 1) == 0) {
LAB_075a08a8:
    iVar11 = 0x21;
    iVar4 = 2;
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar4 = System_DateTime__get_Kind(&uStack_58);
    if (iVar4 == 1) {
      iVar11 = 0x1c;
    }
    else {
      if (iVar4 == 2) {
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = System_TimeZoneInfo__get_Local(0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        param_2 = System_TimeZoneInfo__GetUtcOffset(lVar7,param_1,0);
        local_68 = param_2;
        goto LAB_075a08a8;
      }
      iVar11 = 0x1b;
    }
  }
  if ((int)param_4 < iVar11) {
    *param_5 = 0;
  }
  else {
    *param_5 = iVar11;
    if (param_4 < 0x1b) {
LAB_075a0c48:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_DateTime__get_Year(&uStack_58);
    uVar10 = uVar6 & 0xffffffff;
    if (*(int *)(DAT_09183568 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183568);
    }
    sVar8 = (short)(uVar10 / 10);
    sVar1 = (short)(uVar10 / 100);
    param_3[4] = 0x2d;
    sVar3 = (short)(uVar10 / 1000);
    *param_3 = sVar3 + 0x30;
    param_3[3] = (short)uVar6 + sVar8 * -10 + 0x30;
    param_3[2] = sVar8 + sVar1 * -10 + 0x30;
    param_3[1] = sVar1 + sVar3 * -10 + 0x30;
    uVar6 = System_DateTime__get_Month(&uStack_58);
    param_3[7] = 0x2d;
    sVar8 = (short)((uVar6 & 0xffffffff) / 10);
    param_3[5] = sVar8 + 0x30;
    param_3[6] = (short)uVar6 + sVar8 * -10 + 0x30;
    uVar6 = System_DateTime__get_Day(&uStack_58);
    param_3[10] = 0x54;
    sVar8 = (short)((uVar6 & 0xffffffff) / 10);
    param_3[8] = sVar8 + 0x30;
    param_3[9] = (short)uVar6 + sVar8 * -10 + 0x30;
    uVar5 = System_DateTime__get_Hour(&uStack_58);
    param_3[0xd] = 0x3a;
    uVar2 = (ushort)((uVar5 & 0xff) / 10);
    param_3[0xb] = uVar2 | 0x30;
    param_3[0xc] = (short)uVar5 + uVar2 * -10 + 0x30;
    uVar5 = System_DateTime__get_Minute(&uStack_58);
    param_3[0x10] = 0x3a;
    uVar2 = (ushort)((uVar5 & 0xff) / 10);
    param_3[0xe] = uVar2 | 0x30;
    param_3[0xf] = (short)uVar5 + uVar2 * -10 + 0x30;
    uVar5 = System_DateTime__get_Second(&uStack_58);
    param_3[0x13] = 0x2e;
    uVar2 = (ushort)((uVar5 & 0xff) / 10);
    param_3[0x11] = uVar2 | 0x30;
    param_3[0x12] = (short)uVar5 + uVar2 * -10 + 0x30;
    uVar6 = System_DateTime__get_Ticks(&uStack_58);
    if ((*(ushort *)(*(long *)(DAT_091ba980 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c(*(long *)(DAT_091ba980 + 0x20));
    }
    if (DAT_09521c73 == '\0') {
      FUN_03f5c2a4(&DAT_091ba998);
      DAT_09521c73 = '\x01';
    }
    lVar7 = 0x1a;
    uVar6 = uVar6 % 10000000;
    do {
      uVar10 = lVar7 - 0x14;
      sVar8 = (short)(uVar6 / 10);
      param_3[lVar7] = (short)uVar6 + sVar8 * -10 + 0x30;
      lVar7 = lVar7 + -1;
      uVar6 = uVar6 / 10;
    } while (1 < uVar10);
    param_3[0x14] = sVar8 + 0x30;
    if (iVar4 == 1) {
      if (param_4 == 0x1b) goto LAB_075a0c48;
      param_3[0x1b] = 0x5a;
    }
    else if (iVar4 == 2) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_TimeSpan__op_LessThan(param_2,0,0);
      if ((uVar6 & 1) == 0) {
        sVar8 = 0x2b;
      }
      else {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_68 = System_TimeSpan__FromTicks(-param_2,0);
        sVar8 = 0x2d;
      }
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_TimeSpan__get_Minutes(&local_68,0);
      if (*(int *)(DAT_09183568 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183568);
      }
      if (param_4 < 0x21) goto LAB_075a0c48;
      sVar1 = (short)((uVar6 & 0xffffffff) / 10);
      param_3[0x1f] = sVar1 + 0x30;
      param_3[0x20] = (short)uVar6 + sVar1 * -10 + 0x30;
      param_3[0x1e] = 0x3a;
      uVar6 = System_TimeSpan__get_Hours(&local_68,0);
      param_3[0x1b] = sVar8;
      sVar8 = (short)((uVar6 & 0xffffffff) / 10);
      param_3[0x1c] = sVar8 + 0x30;
      param_3[0x1d] = (short)uVar6 + sVar8 * -10 + 0x30;
    }
  }
  return iVar11 <= (int)param_4;
}

