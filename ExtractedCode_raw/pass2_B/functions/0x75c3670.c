// rea decompile_all
// name: System.Number$$ParseSingle
// address: 0x75c3670
// body: available
// range: 0x75c3670-0x75c3a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c39e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c3a18 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

float System_Number__ParseSingle
                (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  undefined1 auVar8 [16];
  double local_e8 [14];
  undefined2 uStack_78;
  undefined6 local_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((DAT_09521d72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_09212d18);
    DAT_09521d72 = 1;
  }
  local_e8[0] = 0.0;
  local_e8[4] = 0.0;
  local_e8[3] = 0.0;
  local_e8[6] = 0.0;
  local_e8[5] = 0.0;
  local_e8[8] = 0.0;
  local_e8[7] = 0.0;
  local_e8[10] = 0.0;
  local_e8[9] = 0.0;
  local_e8[0xc] = 0.0;
  local_e8[0xb] = 0.0;
  local_e8[2] = 0.0;
  local_e8[1] = 0.0;
  uStack_78 = 0;
  local_e8[0xd] = 0.0;
  uStack_6e = 0;
  local_76 = 0;
  uStack_70 = 0;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Number__TryStringToNumber(param_1,param_2,param_3,local_e8 + 1,param_4,0);
  if ((uVar2 & 1) == 0) {
LAB_075c379c:
    System_MemoryExtensions__TrimStart(param_1,param_2);
    auVar8 = System_MemoryExtensions__TrimEnd();
    uVar5 = auVar8._8_8_;
    uVar3 = auVar8._0_8_;
    if (param_4 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_075c3a18;
    }
    uVar2 = *(ulong *)(param_4 + 0x70);
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
      if (uVar2 != 0) goto LAB_075c37cc;
LAB_075c37fc:
      uVar4 = 0;
    }
    else {
      if (uVar2 == 0) goto LAB_075c37fc;
LAB_075c37cc:
      uVar4 = System_String__GetRawStringData(uVar2,0);
      uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
    }
    if (DAT_095218ea == '\0') {
      FUN_03f5c2a4(&DAT_091d2f78);
      FUN_03f5c2a4(&DAT_091b9810);
      DAT_095218ea = '\x01';
    }
    iVar6 = auVar8._8_4_;
    if ((iVar6 == (int)uVar2) &&
       ((iVar6 == 0 ||
        (uVar2 = FUN_074367c0(uVar3,uVar5,uVar4,uVar2,DAT_091d2f78), (uVar2 & 1) != 0)))) {
      fVar7 = INFINITY;
    }
    else {
      uVar2 = *(ulong *)(param_4 + 0x78);
      if (DAT_09519f66 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09519f66 = '\x01';
        if (uVar2 != 0) goto LAB_075c3874;
LAB_075c38a4:
        uVar4 = 0;
      }
      else {
        if (uVar2 == 0) goto LAB_075c38a4;
LAB_075c3874:
        uVar4 = System_String__GetRawStringData(uVar2,0);
        uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
      }
      if (DAT_095218ea == '\0') {
        FUN_03f5c2a4(&DAT_091d2f78);
        FUN_03f5c2a4(&DAT_091b9810);
        DAT_095218ea = '\x01';
      }
      if ((iVar6 == (int)uVar2) &&
         ((iVar6 == 0 ||
          (uVar2 = FUN_074367c0(uVar3,uVar5,uVar4,uVar2,DAT_091d2f78), (uVar2 & 1) != 0)))) {
        fVar7 = -INFINITY;
      }
      else {
        uVar2 = *(ulong *)(param_4 + 0x68);
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
          if (uVar2 != 0) goto LAB_075c3918;
LAB_075c3948:
          uVar4 = 0;
        }
        else {
          if (uVar2 == 0) goto LAB_075c3948;
LAB_075c3918:
          uVar4 = System_String__GetRawStringData(uVar2,0);
          uVar2 = (ulong)*(uint *)(uVar2 + 0x10);
        }
        if (DAT_095218ea == '\0') {
          FUN_03f5c2a4(&DAT_091d2f78);
          FUN_03f5c2a4(&DAT_091b9810);
          DAT_095218ea = '\x01';
        }
        if ((iVar6 != (int)uVar2) ||
           ((iVar6 != 0 &&
            (uVar2 = FUN_074367c0(uVar3,uVar5,uVar4,uVar2,DAT_091d2f78), (uVar2 & 1) == 0)))) {
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(lVar1 + 0x28) == local_58) {
            System_Number__ThrowOverflowOrFormatException(0,0);
          }
          goto LAB_075c3a18;
        }
        fVar7 = NAN;
      }
    }
  }
  else {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Number__NumberBufferToDouble(local_e8 + 1,local_e8);
    if (((uVar2 & 1) == 0) || (fVar7 = (float)local_e8[0], ABS(fVar7) == INFINITY)) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(lVar1 + 0x28) != local_58) goto LAB_075c3a18;
      System_Number__ThrowOverflowOrFormatException(1,DAT_09212d18);
      goto LAB_075c379c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return fVar7;
  }
LAB_075c3a18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

