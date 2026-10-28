// rea decompile_all
// name: System.ParseNumbers$$LongToString
// address: 0x75c68e8
// body: available
// range: 0x75c68e8-0x75c6ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c6c1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c6c88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c6c9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c6ca0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_ParseNumbers__LongToString
               (ulong param_1,uint param_2,undefined4 param_3,ushort param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort uVar10;
  ulong uVar11;
  short sVar12;
  ulong uVar13;
  uint uVar14;
  ushort local_f0 [76];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((DAT_09521d94 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091ba950);
    FUN_03f5c2a4(&DAT_091ba998);
    DAT_09521d94 = 1;
  }
  memset(local_f0,0,0x86);
  if (0x22 < param_2 - 2) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09205170);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09221520);
    System_ArgumentException___ctor(uVar4,uVar5,uVar6,0);
    if (*(long *)(lVar2 + 0x28) == local_58) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d5788);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    goto LAB_075c6ca0;
  }
  uVar11 = -param_1;
  if (param_2 != 10 || -1 < (long)param_1) {
    uVar11 = param_1;
  }
  uVar13 = uVar11;
  if ((param_5 & 0x100) != 0) {
    uVar13 = uVar11 & 0xffffffff;
  }
  if ((param_5 & 0x80) != 0) {
    uVar13 = uVar11 & 0xffff;
  }
  if ((param_5 & 0x40) != 0) {
    uVar13 = uVar11 & 0xff;
  }
  if (uVar13 == 0) {
    uVar14 = 1;
    local_f0[0] = 0x30;
  }
  else {
    lVar7 = 0;
    uVar11 = (ulong)param_2;
    do {
      uVar1 = 0;
      if (uVar11 != 0) {
        uVar1 = uVar13 / uVar11;
      }
      iVar3 = (int)uVar13 - (int)uVar1 * param_2;
      sVar12 = 0x30;
      if (9 < iVar3) {
        sVar12 = 0x57;
      }
      local_f0[lVar7] = sVar12 + (short)iVar3;
      if (uVar13 < uVar11) {
        uVar14 = (int)lVar7 + 1;
        goto LAB_075c6a10;
      }
      lVar7 = lVar7 + 1;
      uVar13 = uVar1;
    } while (lVar7 != 0x43);
    uVar14 = 0;
  }
LAB_075c6a10:
  if ((param_2 == 10) || ((param_5 >> 5 & 1) == 0)) {
    if (param_2 != 10) {
LAB_075c6b18:
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Math__Max(param_3,uVar14,0);
      lVar7 = System_String__FastAllocateString(uVar4,0);
      if (lVar7 == 0) {
        if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        iVar3 = thunk_FUN_03f68190(0);
        puVar9 = (ushort *)(lVar7 + iVar3);
        iVar3 = *(int *)(lVar7 + 0x10) - uVar14;
        if ((param_5 & 1) == 0) {
          if (0 < (int)uVar14) {
            uVar11 = (ulong)uVar14;
            puVar8 = puVar9;
            do {
              if (0x43 < uVar14) goto LAB_075c6c0c;
              uVar11 = uVar11 - 1;
              puVar9 = puVar8 + 1;
              *puVar8 = local_f0[uVar11 & 0xffffffff];
              puVar8 = puVar9;
            } while (uVar11 != 0);
          }
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              *puVar9 = param_4;
              puVar9 = puVar9 + 1;
            } while (iVar3 != 0);
          }
        }
        else {
          puVar8 = puVar9;
          if (0 < iVar3) {
            do {
              iVar3 = iVar3 + -1;
              puVar9 = puVar8 + 1;
              *puVar8 = param_4;
              puVar8 = puVar9;
            } while (iVar3 != 0);
          }
          if (0 < (int)uVar14) {
            uVar11 = (ulong)uVar14;
            do {
              if (0x43 < uVar14) goto LAB_075c6c0c;
              uVar11 = uVar11 - 1;
              *puVar9 = local_f0[uVar11 & 0xffffffff];
              puVar9 = puVar9 + 1;
            } while (uVar11 != 0);
          }
        }
        if (*(long *)(lVar2 + 0x28) == local_58) {
          return lVar7;
        }
      }
      goto LAB_075c6ca0;
    }
    if ((long)param_1 < 0) {
      if (uVar14 < 0x43) {
        uVar10 = 0x2d;
LAB_075c6b10:
        local_f0[uVar14] = uVar10;
        uVar14 = uVar14 + 1;
        goto LAB_075c6b18;
      }
    }
    else if ((param_5 >> 4 & 1) == 0) {
      if ((param_5 >> 3 & 1) == 0) goto LAB_075c6b18;
      if (uVar14 < 0x43) {
        uVar10 = 0x20;
        goto LAB_075c6b10;
      }
    }
    else if (uVar14 < 0x43) {
      uVar10 = 0x2b;
      goto LAB_075c6b10;
    }
  }
  else if (param_2 == 8) {
    if (uVar14 < 0x43) {
      uVar10 = 0x30;
      goto LAB_075c6b10;
    }
  }
  else if (param_2 == 0x10) {
    if (uVar14 < 0x43) {
      local_f0[uVar14] = 0x78;
      if (uVar14 != 0x42) {
        local_f0[(ulong)uVar14 + 1] = 0x30;
        uVar14 = uVar14 + 2;
        goto LAB_075c6b18;
      }
    }
  }
  else {
    if ((param_5 >> 0xe & 1) == 0) goto LAB_075c6b18;
    if (uVar14 < 0x43) {
      local_f0[uVar14] = 0x23;
      if (uVar14 != 0x42) {
        uVar10 = (ushort)(param_2 / 10);
        local_f0[(ulong)uVar14 + 1] = (short)param_2 + uVar10 * -10 | 0x30;
        if (uVar14 < 0x41) {
          local_f0[(ulong)uVar14 + 2] = uVar10 | 0x30;
          uVar14 = uVar14 + 3;
          goto LAB_075c6b18;
        }
      }
    }
  }
LAB_075c6c0c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_075c6ca0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

