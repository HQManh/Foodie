// rea decompile_all
// name: System.Number$$FormatDouble
// address: 0x75ba940
// body: available
// range: 0x75ba940-0x75bac37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bac30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bac34 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__FormatDouble
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
               )

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  int local_e4;
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
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 local_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_09521d38 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d38 = 1;
  }
  local_e4 = 0;
  uStack_6e = 0;
  uStack_70 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_76 = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Number__ParseFormatSpecifier(param_3,param_4,&local_e4);
  uVar1 = uVar3 & 0xffff;
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
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_6e = 0;
  local_76 = 0;
  uStack_70 = 0;
  if (uVar1 < 0x53) {
    if (uVar1 == 0x45) {
LAB_075baad8:
      uVar6 = 0xf;
      if (0xe < local_e4) {
        uVar6 = 0x11;
      }
      goto LAB_075baaec;
    }
    if (uVar1 == 0x47) {
LAB_075baac0:
      uVar6 = 0x11;
      if (local_e4 < 0x10) {
        uVar6 = 0xf;
      }
      goto LAB_075baaec;
    }
    if (uVar1 != 0x52) goto LAB_075baa20;
LAB_075baa40:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Number__DoubleToNumber(param_1,0xf,&local_e0);
    if (local_e0._4_4_ != 0x7fffffff) {
      if (local_e0._4_4_ != -0x80000000) {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar7 = (double)System_Number__NumberToDouble(&local_e0);
        if (dVar7 == param_1) {
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = 0x47;
          iVar5 = 0xf;
        }
        else {
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Number__DoubleToNumber(param_1,0x11,&local_e0);
          uVar3 = 0x47;
          iVar5 = 0x11;
        }
        goto LAB_075bab7c;
      }
      goto LAB_075bab28;
    }
LAB_075bab34:
    uVar4 = System_Number_NumberBuffer__get_sign(&local_e0,0);
    if ((uVar4 & 1) == 0) {
      if (param_5 == 0) goto LAB_075bac20;
      uVar4 = *(ulong *)(param_5 + 0x70);
    }
    else {
      if (param_5 == 0) {
LAB_075bac20:
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_075bac34;
      }
      uVar4 = *(ulong *)(param_5 + 0x78);
    }
  }
  else {
    if (uVar1 == 0x65) goto LAB_075baad8;
    if (uVar1 == 0x67) goto LAB_075baac0;
    if (uVar1 == 0x72) goto LAB_075baa40;
LAB_075baa20:
    uVar6 = 0xf;
LAB_075baaec:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Number__DoubleToNumber(param_1,uVar6,&local_e0);
    iVar5 = local_e4;
    if (local_e0._4_4_ == 0x7fffffff) goto LAB_075bab34;
    if (local_e0._4_4_ == -0x80000000) {
LAB_075bab28:
      if (param_5 != 0) {
        uVar4 = *(ulong *)(param_5 + 0x68);
        goto LAB_075babc4;
      }
      goto LAB_075bac20;
    }
    if ((uVar3 & 0xffff) == 0) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Number__NumberToStringFormat(param_2,&local_e0,param_3,param_4,param_5);
    }
    else {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
LAB_075bab7c:
      System_Number__NumberToString(param_2,&local_e0,uVar3,iVar5,param_5,0);
    }
    uVar4 = 0;
  }
LAB_075babc4:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
LAB_075bac34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

