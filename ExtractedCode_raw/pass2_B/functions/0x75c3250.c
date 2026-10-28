// rea decompile_all
// name: System.Number$$ParseDouble
// address: 0x75c3250
// body: available
// range: 0x75c3250-0x75c35e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c35b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c35e4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__ParseDouble
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  int iVar5;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined8 extraout_d0_03;
  undefined8 extraout_d0_04;
  undefined8 extraout_d0_05;
  undefined8 extraout_d0_06;
  undefined8 uVar6;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined6 local_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_09521d71 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_09212d10);
    DAT_09521d71 = 1;
  }
  local_e8 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_6e = 0;
  local_76 = 0;
  uStack_70 = 0;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Number__TryStringToNumber(param_1,param_2,param_3,&local_e0,param_4,0);
  if ((uVar2 & 1) == 0) {
    System_MemoryExtensions__TrimStart(param_1,param_2);
    uVar3 = System_MemoryExtensions__TrimEnd();
    uVar6 = extraout_d0_00;
    if (param_4 == 0) goto LAB_075c35a4;
    uVar2 = *(ulong *)(param_4 + 0x70);
    if (DAT_09519f66 == '\0') {
      uVar6 = FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
      if (uVar2 != 0) goto LAB_075c3364;
LAB_075c3394:
      uVar4 = 0;
    }
    else {
      if (uVar2 == 0) goto LAB_075c3394;
LAB_075c3364:
      uVar4 = System_String__GetRawStringData(uVar2,0);
      uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
      uVar6 = extraout_d0_01;
    }
    if (DAT_095218ea == '\0') {
      FUN_03f5c2a4(&DAT_091d2f78);
      uVar6 = FUN_03f5c2a4(&DAT_091b9810);
      DAT_095218ea = '\x01';
    }
    iVar5 = (int)extraout_x1;
    if ((iVar5 == (int)uVar2) &&
       ((iVar5 == 0 ||
        (uVar2 = FUN_074367c0(uVar3,extraout_x1,uVar4,uVar2,DAT_091d2f78), uVar6 = extraout_d0_02,
        (uVar2 & 1) != 0)))) {
      uVar6 = 0x7ff0000000000000;
    }
    else {
      uVar2 = *(ulong *)(param_4 + 0x78);
      if (DAT_09519f66 == '\0') {
        uVar6 = FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09519f66 = '\x01';
        if (uVar2 != 0) goto LAB_075c340c;
LAB_075c343c:
        uVar4 = 0;
      }
      else {
        if (uVar2 == 0) goto LAB_075c343c;
LAB_075c340c:
        uVar4 = System_String__GetRawStringData(uVar2,0);
        uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
        uVar6 = extraout_d0_03;
      }
      if (DAT_095218ea == '\0') {
        FUN_03f5c2a4(&DAT_091d2f78);
        uVar6 = FUN_03f5c2a4(&DAT_091b9810);
        DAT_095218ea = '\x01';
      }
      if ((iVar5 == (int)uVar2) &&
         ((iVar5 == 0 ||
          (uVar2 = FUN_074367c0(uVar3,extraout_x1,uVar4,uVar2,DAT_091d2f78), uVar6 = extraout_d0_04,
          (uVar2 & 1) != 0)))) {
        uVar6 = 0xfff0000000000000;
      }
      else {
        uVar2 = *(ulong *)(param_4 + 0x68);
        if (DAT_09519f66 == '\0') {
          uVar6 = FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
          if (uVar2 != 0) goto LAB_075c34b0;
LAB_075c34e0:
          uVar4 = 0;
        }
        else {
          if (uVar2 == 0) goto LAB_075c34e0;
LAB_075c34b0:
          uVar4 = System_String__GetRawStringData(uVar2,0);
          uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
          uVar6 = extraout_d0_05;
        }
        if (DAT_095218ea == '\0') {
          FUN_03f5c2a4(&DAT_091d2f78);
          uVar6 = FUN_03f5c2a4(&DAT_091b9810);
          DAT_095218ea = '\x01';
        }
        if ((iVar5 != (int)uVar2) ||
           ((iVar5 != 0 &&
            (uVar2 = FUN_074367c0(uVar3,extraout_x1,uVar4,uVar2,DAT_091d2f78),
            uVar6 = extraout_d0_06, (uVar2 & 1) == 0)))) {
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            uVar6 = FUN_03f5c424();
          }
          if (*(long *)(lVar1 + 0x28) == local_58) {
            uVar6 = System_Number__ThrowOverflowOrFormatException(0,0);
          }
          goto LAB_075c35e4;
        }
        uVar6 = 0x7ff8000000000000;
      }
    }
  }
  else {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Number__NumberBufferToDouble(&local_e0,&local_e8);
    uVar6 = local_e8;
    if ((uVar2 & 1) == 0) {
      uVar6 = extraout_d0;
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        uVar6 = FUN_03f5c424();
      }
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_075c35e4;
      uVar6 = System_Number__ThrowOverflowOrFormatException(1,DAT_09212d10);
LAB_075c35a4:
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_075c35e4;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_075c35e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

