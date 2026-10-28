// rea decompile_all
// name: System.ParseNumbers$$GrabInts
// address: 0x75c63a4
// body: available
// range: 0x75c63a4-0x75c6593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c6548 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c658c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_ParseNumbers__GrabInts
                (int param_1,long param_2,ulong param_3,uint *param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint extraout_w1;
  short sVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  short *psVar15;
  short *psVar16;
  short sVar17;
  ushort *puVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  short asStack_130 [76];
  long lStack_98;
  
  uVar7 = param_3;
  puVar11 = param_4;
  uVar12 = param_5;
  if ((DAT_09521d97 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d97 = 1;
  }
  sVar10 = (short)puVar11;
  uVar3 = (uint)param_3;
  if ((param_1 == 10) && ((param_5 & 1) == 0)) {
    uVar13 = *param_4;
    if ((int)uVar3 <= (int)uVar13) {
      return 0;
    }
    uVar5 = 0;
    puVar18 = (ushort *)(param_2 + (long)(int)uVar13 * 2);
    lVar19 = (long)(int)uVar3 - (long)(int)uVar13;
    do {
      if (uVar3 <= uVar13) goto LAB_075c6548;
      if (9 < *puVar18 - 0x30) break;
      if (0xccccccc < (uint)uVar5) goto LAB_075c6464;
      uVar5 = (ulong)((*puVar18 - 0x30) + (uint)uVar5 * 10);
      uVar13 = uVar13 + 1;
      lVar19 = lVar19 + -1;
      puVar18 = puVar18 + 1;
      *param_4 = uVar13;
    } while (lVar19 != 0);
    if ((uint)uVar5 < 0x80000001) {
      return uVar5;
    }
LAB_075c6464:
    System_ParseNumbers__ThrowOverflowInt32Exception();
  }
  uVar13 = 0x1fffffff;
  if (param_1 != 8) {
    uVar13 = 0x7fffffff;
  }
  uVar20 = *param_4;
  uVar2 = 0xfffffff;
  if (param_1 != 0x10) {
    uVar2 = uVar13;
  }
  if (param_1 == 10) {
    uVar2 = 0x19999999;
  }
  if ((int)uVar3 <= (int)uVar20) {
    return 0;
  }
  puVar18 = (ushort *)(param_2 + (long)(int)uVar20 * 2);
  lVar19 = (long)(int)uVar3 - (long)(int)uVar20;
  uVar13 = 0;
  do {
    if (uVar3 <= uVar20) {
LAB_075c6548:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *puVar18;
    uVar21 = uVar1 - 0x30;
    if (9 < uVar21) {
      uVar21 = (uint)uVar1;
      if (uVar1 - 0x41 < 0x1a) {
        uVar21 = uVar21 - 0x37;
      }
      else {
        if (0x19 < uVar21 - 0x61) goto LAB_075c6530;
        uVar21 = uVar21 - 0x57;
      }
    }
    if (param_1 <= (int)uVar21) {
LAB_075c6530:
      return (ulong)uVar13;
    }
    if (uVar2 < uVar13) {
      thunk_FUN_03fc39d4(&DAT_09188d78);
      uVar6 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_09212d28);
      System_OverflowException___ctor(uVar6,uVar8);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091d5778);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar8);
    }
    uVar21 = uVar21 + uVar13 * param_1;
    if (uVar21 < uVar13) {
      uVar3 = System_ParseNumbers__ThrowOverflowUInt32Exception();
      lVar19 = tpidr_el0;
      lStack_98 = *(long *)(lVar19 + 0x28);
      if ((DAT_09521d93 & 1) == 0) {
        FUN_03f5c2a4(&DAT_09187e80);
        FUN_03f5c2a4(&DAT_091ba950);
        FUN_03f5c2a4(&DAT_091ba998);
        DAT_09521d93 = 1;
      }
      memset(asStack_130,0,0x84);
      if (0x22 < extraout_w1 - 2) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar6 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09205170);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09221520);
        System_ArgumentException___ctor(uVar6,uVar8,uVar9,0);
        if (*(long *)(lVar19 + 0x28) == lStack_98) {
          uVar8 = thunk_FUN_03fc39d4(&DAT_091d5780);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar8);
        }
        goto LAB_075c68e4;
      }
      uVar13 = -uVar3;
      if (extraout_w1 != 10 || -1 < (int)uVar3) {
        uVar13 = uVar3;
      }
      uVar20 = uVar13;
      if ((uVar12 & 0x80) != 0) {
        uVar20 = uVar13 & 0xffff;
      }
      if ((uVar12 & 0x40) != 0) {
        uVar20 = uVar13 & 0xff;
      }
      if (uVar20 != 0) {
        lVar14 = 0;
        break;
      }
      uVar13 = 1;
      asStack_130[0] = 0x30;
      goto LAB_075c66ac;
    }
    uVar20 = uVar20 + 1;
    lVar19 = lVar19 + -1;
    puVar18 = puVar18 + 1;
    *param_4 = uVar20;
    uVar13 = uVar21;
    if (lVar19 == 0) {
      return (ulong)uVar21;
    }
  } while( true );
  while (lVar14 = lVar14 + 1, uVar20 = uVar13, lVar14 != 0x42) {
    uVar13 = 0;
    if (extraout_w1 != 0) {
      uVar13 = uVar20 / extraout_w1;
    }
    uVar2 = uVar20 - uVar13 * extraout_w1;
    sVar17 = 0x57;
    if (uVar2 < 10) {
      sVar17 = 0x30;
    }
    asStack_130[lVar14] = sVar17 + (short)uVar2;
    if (uVar20 < extraout_w1) {
      uVar13 = (int)lVar14 + 1;
      goto LAB_075c66ac;
    }
  }
  uVar13 = 0;
LAB_075c66ac:
  if ((extraout_w1 == 10) || ((uVar12 >> 5 & 1) == 0)) {
    if (extraout_w1 != 10) {
LAB_075c675c:
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Math__Max(uVar7 & 0xffffffff,uVar13,0);
      uVar7 = System_String__FastAllocateString(uVar6,0);
      if (uVar7 == 0) {
        if (*(long *)(lVar19 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        iVar4 = thunk_FUN_03f68190(0);
        psVar16 = (short *)(uVar7 + (long)iVar4);
        iVar4 = *(int *)(uVar7 + 0x10) - uVar13;
        if ((uVar12 & 1) == 0) {
          if (0 < (int)uVar13) {
            uVar5 = (ulong)uVar13;
            psVar15 = psVar16;
            do {
              if (0x42 < uVar13) goto LAB_075c6850;
              uVar5 = uVar5 - 1;
              psVar16 = psVar15 + 1;
              *psVar15 = asStack_130[uVar5 & 0xffffffff];
              psVar15 = psVar16;
            } while (uVar5 != 0);
          }
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              *psVar16 = sVar10;
              psVar16 = psVar16 + 1;
            } while (iVar4 != 0);
          }
        }
        else {
          psVar15 = psVar16;
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              psVar16 = psVar15 + 1;
              *psVar15 = sVar10;
              psVar15 = psVar16;
            } while (iVar4 != 0);
          }
          if (0 < (int)uVar13) {
            uVar5 = (ulong)uVar13;
            do {
              if (0x42 < uVar13) goto LAB_075c6850;
              uVar5 = uVar5 - 1;
              *psVar16 = asStack_130[uVar5 & 0xffffffff];
              psVar16 = psVar16 + 1;
            } while (uVar5 != 0);
          }
        }
        if (*(long *)(lVar19 + 0x28) == lStack_98) {
          return uVar7;
        }
      }
      goto LAB_075c68e4;
    }
    if ((int)uVar3 < 0) {
      if (uVar13 < 0x42) {
        sVar17 = 0x2d;
LAB_075c6754:
        asStack_130[uVar13] = sVar17;
        uVar13 = uVar13 + 1;
        goto LAB_075c675c;
      }
    }
    else if ((uVar12 >> 4 & 1) == 0) {
      if ((uVar12 >> 3 & 1) == 0) goto LAB_075c675c;
      if (uVar13 < 0x42) {
        sVar17 = 0x20;
        goto LAB_075c6754;
      }
    }
    else if (uVar13 < 0x42) {
      sVar17 = 0x2b;
      goto LAB_075c6754;
    }
  }
  else if (extraout_w1 == 8) {
    if (uVar13 < 0x42) {
      sVar17 = 0x30;
      goto LAB_075c6754;
    }
  }
  else {
    if (extraout_w1 != 0x10) goto LAB_075c675c;
    if (uVar13 < 0x42) {
      asStack_130[uVar13] = 0x78;
      if (uVar13 != 0x41) {
        asStack_130[(ulong)uVar13 + 1] = 0x30;
        uVar13 = uVar13 + 2;
        goto LAB_075c675c;
      }
    }
  }
LAB_075c6850:
  if (*(long *)(lVar19 + 0x28) == lStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_075c68e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

