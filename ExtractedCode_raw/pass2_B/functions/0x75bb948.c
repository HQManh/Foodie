// rea decompile_all
// name: System.Number$$FormatSingle
// address: 0x75bb948
// body: available
// range: 0x75bb948-0x75bbc47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bbc40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bbc44 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatSingle
               (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  int local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_09521d3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d3b = 1;
  }
  local_f4 = 0;
  uStack_7e = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_86 = 0;
  uStack_90 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Number__ParseFormatSpecifier(param_3,param_4,&local_f4);
  uVar1 = uVar3 & 0xffff;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7e = 0;
  local_86 = 0;
  uStack_80 = 0;
  if (uVar1 < 0x53) {
    if (uVar1 == 0x45) {
LAB_075bbae8:
      uVar6 = 7;
      if (6 < local_f4) {
        uVar6 = 9;
      }
      goto LAB_075bbafc;
    }
    if (uVar1 == 0x47) {
LAB_075bbad0:
      uVar6 = 9;
      if (local_f4 < 8) {
        uVar6 = 7;
      }
      goto LAB_075bbafc;
    }
    if (uVar1 != 0x52) goto LAB_075bba28;
LAB_075bba48:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Number__DoubleToNumber((double)param_1,7,&local_f0);
    if (local_f0._4_4_ != 0x7fffffff) {
      if (local_f0._4_4_ != -0x80000000) {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar7 = (double)System_Number__NumberToDouble(&local_f0);
        if ((float)dVar7 == param_1) {
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = 0x47;
          iVar5 = 7;
        }
        else {
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Number__DoubleToNumber((double)param_1,9,&local_f0);
          uVar3 = 0x47;
          iVar5 = 9;
        }
        goto LAB_075bbb8c;
      }
      goto LAB_075bbb38;
    }
LAB_075bbb44:
    uVar4 = System_Number_NumberBuffer__get_sign(&local_f0,0);
    if ((uVar4 & 1) == 0) {
      if (param_5 == 0) goto LAB_075bbc30;
      uVar4 = *(ulong *)(param_5 + 0x70);
    }
    else {
      if (param_5 == 0) {
LAB_075bbc30:
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_075bbc44;
      }
      uVar4 = *(ulong *)(param_5 + 0x78);
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_075bbae8;
    if (uVar1 == 0x67) goto LAB_075bbad0;
    if (uVar1 == 0x72) goto LAB_075bba48;
LAB_075bba28:
    uVar6 = 7;
LAB_075bbafc:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Number__DoubleToNumber((double)param_1,uVar6,&local_f0);
    iVar5 = local_f4;
    if (local_f0._4_4_ == 0x7fffffff) goto LAB_075bbb44;
    if (local_f0._4_4_ == -0x80000000) {
LAB_075bbb38:
      if (param_5 != 0) {
        uVar4 = *(ulong *)(param_5 + 0x68);
        goto LAB_075bbbd4;
      }
      goto LAB_075bbc30;
    }
    if ((uVar3 & 0xffff) == 0) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Number__NumberToStringFormat(param_2,&local_f0,param_3,param_4,param_5);
    }
    else {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
LAB_075bbb8c:
      System_Number__NumberToString(param_2,&local_f0,uVar3,iVar5,param_5,0);
    }
    uVar4 = 0;
  }
LAB_075bbbd4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_075bbc44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

