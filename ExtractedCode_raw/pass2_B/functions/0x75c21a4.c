// rea decompile_all
// name: System.Number$$ParseNumber
// address: 0x75c21a4
// body: available
// range: 0x75c21a4-0x75c288b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c2888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Number__ParseNumber
          (ulong *param_1,ushort *param_2,uint param_3,int *param_4,long param_5,uint param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ushort *puVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  int local_74;
  undefined8 *puVar9;
  
  if ((DAT_09521d64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d64 = 1;
  }
  param_4[1] = 0;
  System_Number_NumberBuffer__set_sign(param_4,0,0);
  if ((param_3 >> 8 & 1) == 0) {
    if (param_5 == 0) goto LAB_075c2888;
    lVar13 = 0;
    puVar9 = (undefined8 *)(param_5 + 0x38);
    puVar11 = (undefined8 *)(param_5 + 0x40);
  }
  else {
    if (param_5 == 0) {
LAB_075c2888:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = *(long *)(param_5 + 0x58);
    puVar9 = (undefined8 *)(param_5 + 0x50);
    puVar11 = (undefined8 *)(param_5 + 0x48);
  }
  uVar8 = *puVar9;
  puVar14 = (ushort *)*param_1;
  uVar10 = *puVar11;
  if (puVar14 < param_2) {
    uVar18 = (uint)*puVar14;
  }
  else {
    uVar18 = 0;
  }
  uVar12 = 0;
  bVar2 = false;
LAB_075c2270:
  bVar5 = false;
  bVar1 = false;
  bVar3 = false;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (((param_3 & 1) == 0) || (uVar18 != 0x20 && uVar18 - 0xe < 0xfffffffb)) {
    bVar4 = (uVar12 & 1) == 0;
    if (((param_3 >> 2 & 1) == 0) || ((uVar12 & 1) != 0)) goto LAB_075c233c;
    uVar20 = *(undefined8 *)(param_5 + 0x28);
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = System_Number__MatchChars(puVar14,param_2,uVar20);
    if (lVar6 == 0) {
      uVar20 = *(undefined8 *)(param_5 + 0x30);
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = System_Number__MatchChars(puVar14,param_2,uVar20);
      if (lVar6 == 0) goto LAB_075c233c;
      System_Number_NumberBuffer__set_sign(param_4,1,0);
    }
    uVar12 = uVar12 | 1;
    puVar14 = (ushort *)(lVar6 - 2);
  }
  else if (((uVar12 & 0x21) == 1) && (*(int *)(param_5 + 0xbc) != 2)) {
    bVar4 = false;
LAB_075c233c:
    if ((((param_3 >> 4 & 1) == 0) || (uVar18 != 0x28)) || (!bVar4)) {
      if (lVar13 == 0) goto LAB_075c23b0;
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = System_Number__MatchChars(puVar14,param_2,lVar13);
      if (lVar6 == 0) goto LAB_075c23b0;
      lVar13 = 0;
      uVar12 = uVar12 | 0x20;
      puVar14 = (ushort *)(lVar6 - 2);
    }
    else {
      uVar12 = uVar12 | 3;
      bVar2 = true;
      System_Number_NumberBuffer__set_sign(param_4,1,0);
    }
  }
  puVar14 = puVar14 + 1;
  uVar18 = 0;
  if (puVar14 < param_2) {
    uVar18 = (uint)*puVar14;
  }
  goto LAB_075c2270;
LAB_075c23b0:
  iVar15 = 0;
  local_74 = 0;
  do {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (uVar18 - 0x30 < 10) {
      if ((uVar18 != 0x30) || (bVar3)) {
        iVar16 = iVar15;
        if (iVar15 < 0x32) {
          lVar6 = System_Number_NumberBuffer__get_digits(param_4,0);
          iVar16 = iVar15 + 1;
          *(short *)(lVar6 + (long)iVar15 * 2) = (short)uVar18;
          if (uVar18 != 0x30 || (param_6 & 1) != 0) {
            local_74 = iVar15 + 1;
          }
        }
        if (!bVar1) {
          param_4[1] = param_4[1] + 1;
        }
        bVar5 = true;
        bVar3 = true;
        iVar15 = iVar16;
      }
      else {
        bVar5 = true;
        if (bVar1) {
          param_4[1] = param_4[1] + -1;
        }
      }
    }
    else {
      if (((param_3 >> 5 & 1) == 0) || (bVar1)) {
LAB_075c24c4:
        if ((((param_3 >> 6 & 1) == 0) || (!bVar5)) || (bVar1)) {
          *param_4 = local_74;
          lVar6 = System_Number_NumberBuffer__get_digits(param_4,0);
          *(undefined2 *)(lVar6 + (long)local_74 * 2) = 0;
          if (bVar5) goto LAB_075c257c;
          goto LAB_075c26cc;
        }
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = System_Number__MatchChars(puVar14,param_2,uVar10);
        if (lVar6 == 0) {
          if (((param_3 >> 8 & 1) == 0) || (uVar12 >> 5 != 0)) break;
          uVar20 = *(undefined8 *)(param_5 + 0x40);
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = System_Number__MatchChars(puVar14,param_2,uVar20);
          if (lVar6 == 0) break;
        }
      }
      else {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = System_Number__MatchChars(puVar14,param_2,uVar8);
        if (lVar6 == 0) {
          if (((param_3 >> 8 & 1) != 0) && (uVar12 >> 5 == 0)) {
            uVar20 = *(undefined8 *)(param_5 + 0x38);
            if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar6 = System_Number__MatchChars(puVar14,param_2,uVar20);
            if (lVar6 != 0) goto LAB_075c2430;
          }
          goto LAB_075c24c4;
        }
LAB_075c2430:
        bVar1 = true;
      }
      puVar14 = (ushort *)(lVar6 + -2);
    }
    puVar14 = puVar14 + 1;
    uVar18 = 0;
    if (puVar14 < param_2) {
      uVar18 = (uint)*puVar14;
    }
  } while( true );
  *param_4 = local_74;
  lVar6 = System_Number_NumberBuffer__get_digits(param_4,0);
  *(undefined2 *)(lVar6 + (long)local_74 * 2) = 0;
LAB_075c257c:
  if (((uVar18 | 0x20) != 0x65) || ((param_3 >> 7 & 1) == 0)) goto LAB_075c2594;
  puVar17 = puVar14 + 1;
  if (puVar17 < param_2) {
    uVar18 = (uint)*puVar17;
  }
  else {
    uVar18 = 0;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x28);
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar7 = (ushort *)System_Number__MatchChars(puVar17,param_2,uVar8);
  bVar5 = puVar7 == (ushort *)0x0;
  if (puVar7 == (ushort *)0x0) {
    uVar8 = *(undefined8 *)(param_5 + 0x30);
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = (ushort *)System_Number__MatchChars(puVar17,param_2,uVar8);
    if (puVar7 == (ushort *)0x0) {
      bVar5 = false;
    }
    else {
      if (puVar7 < param_2) goto LAB_075c278c;
      uVar18 = 0;
      bVar5 = true;
      puVar17 = puVar7;
    }
  }
  else if (puVar7 < param_2) {
LAB_075c278c:
    uVar18 = (uint)*puVar7;
    puVar17 = puVar7;
  }
  else {
    bVar5 = false;
    uVar18 = 0;
    puVar17 = puVar7;
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (uVar18 - 0x30 < 10) {
    iVar15 = 0;
    puVar14 = puVar17;
    do {
      puVar14 = puVar14 + 1;
      if (puVar14 < param_2) {
        uVar19 = (uint)*puVar14;
      }
      else {
        uVar19 = 0;
      }
      iVar15 = uVar18 + iVar15 * 10 + -0x30;
      lVar6 = DAT_09188a70;
      uVar18 = uVar19;
      if (1000 < iVar15) {
        while( true ) {
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar6 = DAT_09188a70;
          }
          if (9 < uVar19 - 0x30) break;
          puVar14 = puVar14 + 1;
          uVar19 = 0;
          if (puVar14 < param_2) {
            uVar19 = (uint)*puVar14;
          }
        }
        iVar15 = 9999;
        uVar18 = uVar19;
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    } while (uVar18 - 0x30 < 10);
    iVar16 = -iVar15;
    if (!bVar5) {
      iVar16 = iVar15;
    }
    param_4[1] = param_4[1] + iVar16;
  }
  else if (puVar14 < param_2) {
    uVar18 = (uint)*puVar14;
  }
  else {
    uVar18 = 0;
  }
LAB_075c2594:
  do {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (((param_3 >> 1 & 1) == 0) || (uVar18 != 0x20 && uVar18 - 0xe < 0xfffffffb)) {
      if (((param_3 >> 3 & 1) == 0) || ((uVar12 & 1) != 0)) {
LAB_075c2638:
        if ((uVar18 == 0x29) && (bVar2)) {
          uVar12 = uVar12 & 0xfffffffd;
          bVar2 = false;
        }
        else {
          if (lVar13 == 0) {
LAB_075c2694:
            if (bVar2) {
LAB_075c26cc:
              uVar8 = 0;
            }
            else {
              if (!bVar3) {
                if ((param_6 & 1) == 0) {
                  param_4[1] = 0;
                }
                if (!bVar1) {
                  System_Number_NumberBuffer__set_sign(param_4,0,0);
                }
              }
              uVar8 = 1;
            }
            *param_1 = (ulong)puVar14;
            return uVar8;
          }
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = System_Number__MatchChars(puVar14,param_2,lVar13);
          if (lVar6 == 0) goto LAB_075c2694;
          lVar13 = 0;
          puVar14 = (ushort *)(lVar6 - 2);
        }
      }
      else {
        uVar8 = *(undefined8 *)(param_5 + 0x28);
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = System_Number__MatchChars(puVar14,param_2,uVar8);
        if (lVar6 == 0) {
          uVar8 = *(undefined8 *)(param_5 + 0x30);
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = System_Number__MatchChars(puVar14,param_2,uVar8);
          if (lVar6 == 0) goto LAB_075c2638;
          System_Number_NumberBuffer__set_sign(param_4,1,0);
        }
        uVar12 = uVar12 | 1;
        puVar14 = (ushort *)(lVar6 - 2);
      }
    }
    puVar14 = puVar14 + 1;
    uVar18 = 0;
    if (puVar14 < param_2) {
      uVar18 = (uint)*puVar14;
    }
  } while( true );
}

