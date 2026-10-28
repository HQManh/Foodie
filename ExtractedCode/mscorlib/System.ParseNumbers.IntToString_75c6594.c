// rea decompile_all
// name: System.ParseNumbers$$IntToString
// address: 0x75c6594
// body: available
// range: 0x75c6594-0x75c68e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c6860 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c68cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c68e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c68e4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_ParseNumbers__IntToString
               (uint param_1,uint param_2,undefined4 param_3,short param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  short *psVar8;
  short *psVar9;
  short sVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  short local_f0 [76];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_09521d93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d93 = 1;
  }
  memset(local_f0,0,0x84);
  if (0x22 < param_2 - 2) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09205170);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09221520);
    System_ArgumentException___ctor(uVar4,uVar5,uVar6,0);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d5780);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    goto LAB_075c68e4;
  }
  uVar13 = -param_1;
  if (param_2 != 10 || -1 < (int)param_1) {
    uVar13 = param_1;
  }
  uVar12 = uVar13;
  if ((param_5 & 0x80) != 0) {
    uVar12 = uVar13 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar12 = uVar13 & 0xff;
  }
  if (uVar12 == 0) {
    uVar13 = 1;
    local_f0[0] = 0x30;
  }
  else {
    lVar7 = 0;
    do {
      uVar13 = 0;
      if (param_2 != 0) {
        uVar13 = uVar12 / param_2;
      }
      uVar1 = uVar12 - uVar13 * param_2;
      sVar10 = 0x57;
      if (uVar1 < 10) {
        sVar10 = 0x30;
      }
      local_f0[lVar7] = sVar10 + (short)uVar1;
      if (uVar12 < param_2) {
        uVar13 = (int)lVar7 + 1;
        goto LAB_075c66ac;
      }
      lVar7 = lVar7 + 1;
      uVar12 = uVar13;
    } while (lVar7 != 0x42);
    uVar13 = 0;
  }
LAB_075c66ac:
  if ((param_2 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (param_2 != 10) {
LAB_075c675c:
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Math__Max(param_3,uVar13,0);
      lVar7 = System_String__FastAllocateString(uVar4,0);
      if (lVar7 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        iVar3 = thunk_FUN_03f68190(0);
        psVar9 = (short *)(lVar7 + iVar3);
        iVar3 = *(int *)(lVar7 + 0x10) - uVar13;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            psVar8 = psVar9;
            do {
              if (0x42 < uVar13) goto LAB_075c6850;
              uVar11 = uVar11 - 1;
              psVar9 = psVar8 + 1;
              *psVar8 = local_f0[uVar11 & 0xffffffff];
              psVar8 = psVar9;
            } while (uVar11 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *psVar9 = param_4;
              psVar9 = psVar9 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          psVar8 = psVar9;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              psVar9 = psVar8 + 1;
              *psVar8 = param_4;
              psVar8 = psVar9;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar13) {
            uVar11 = (ulong)uVar13;
            do {
              if (0x42 < uVar13) goto LAB_075c6850;
              uVar11 = uVar11 - 1;
              *psVar9 = local_f0[uVar11 & 0xffffffff];
              psVar9 = psVar9 + 1;
            } while (uVar11 != 0);
          }
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return lVar7;
        }
      }
      goto LAB_075c68e4;
    }
    if ((int)param_1 < 0) {
      if (uVar13 < 0x42) {
        sVar10 = 0x2d;
LAB_075c6754:
        local_f0[uVar13] = sVar10;
        uVar13 = uVar13 + 1;
        goto LAB_075c675c;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_075c675c;
      if (uVar13 < 0x42) {
        sVar10 = 0x20;
        goto LAB_075c6754;
      }
    }
    else if (uVar13 < 0x42) {
      sVar10 = 0x2b;
      goto LAB_075c6754;
    }
  }
  else if (param_2 == 8) {
    if (uVar13 < 0x42) {
      sVar10 = 0x30;
      goto LAB_075c6754;
    }
  }
  else {
    if (param_2 != 0x10) goto LAB_075c675c;
    if (uVar13 < 0x42) {
      local_f0[uVar13] = 0x78;
      if (uVar13 != 0x41) {
        local_f0[(ulong)uVar13 + 1] = 0x30;
        uVar13 = uVar13 + 2;
        goto LAB_075c675c;
      }
    }
  }
LAB_075c6850:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_075c68e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

