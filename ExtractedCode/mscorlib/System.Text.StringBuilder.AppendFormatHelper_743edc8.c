// rea decompile_all
// name: System.Text.StringBuilder$$AppendFormatHelper
// address: 0x743edc8
// body: available
// range: 0x743edc8-0x743f84f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743ef40 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743f5a0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743f7d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743f818 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Text_StringBuilder__AppendFormatHelper
               (long param_1,long *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  long *local_b0;
  long local_88;
  ulong local_70;
  int local_64;
  
  if ((DAT_09521073 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171b70);
    FUN_03f5c2a4(&DAT_09185948);
    FUN_03f5c2a4(&DAT_09185bf8);
    FUN_03f5c2a4(&DAT_09185c00);
    FUN_03f5c2a4(&DAT_09186670);
    FUN_03f5c2a4(&DAT_09188e78);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918b348);
    DAT_09521073 = 1;
  }
  uVar9 = DAT_09171b70;
  local_64 = 0;
  if (param_3 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar14 = thunk_FUN_03fc39d4(&DAT_0921ba70);
    System_ArgumentNullException___ctor(uVar9,uVar14,0);
LAB_0743f804:
    uVar14 = thunk_FUN_03fc39d4(&DAT_091da420);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar14);
  }
  uVar2 = *(uint *)(param_3 + 0x10);
  if (param_2 != (long *)0x0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = System_Type__GetTypeFromHandle(uVar9,0);
    lVar15 = *param_2;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == DAT_09185bf8) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0743ef04;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185bf8,0);
LAB_0743ef04:
    lVar11 = (*(code *)*puVar10)(param_2,uVar9,puVar10[1]);
    lVar15 = DAT_09185948;
    if (lVar11 != 0) {
      local_b0 = (long *)thunk_FUN_03f99350(lVar11,DAT_09185948);
      if (local_b0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar11,lVar15);
      }
      goto LAB_0743ef48;
    }
  }
  local_b0 = (long *)0x0;
LAB_0743ef48:
  plVar20 = (long *)0x0;
  uVar19 = 0;
joined_r0x0743ef74:
  while ((int)uVar19 < (int)uVar2) {
    uVar7 = System_String__get_Chars(param_3,uVar19,0);
    uVar22 = uVar19 + 1;
    if ((uVar7 & 0xffff) == 0x7b) {
      if (((int)uVar22 < (int)uVar2) &&
         (sVar5 = System_String__get_Chars(param_3,uVar22,0), sVar5 == 0x7b)) goto LAB_0743eff0;
      break;
    }
    if ((uVar7 & 0xffff) == 0x7d) {
      if (((int)uVar2 <= (int)uVar22) ||
         (sVar5 = System_String__get_Chars(param_3,uVar22,0), sVar5 != 0x7d)) goto LAB_0743f7cc;
LAB_0743eff0:
      uVar22 = uVar19 + 2;
    }
    System_Text_StringBuilder__Append(param_1,uVar7);
    uVar19 = uVar22;
  }
  if (uVar19 == uVar2) {
    return param_1;
  }
  if ((uVar19 + 1 == uVar2) ||
     (uVar6 = System_String__get_Chars(param_3,uVar19 + 1,0), 9 < (ushort)(uVar6 - 0x30)))
  goto LAB_0743f7cc;
  iVar21 = 0;
  uVar22 = uVar19 + 2;
  do {
    uVar19 = uVar22;
    if (uVar2 == uVar19) goto LAB_0743f7cc;
    iVar21 = iVar21 * 10 + (uint)uVar6 + -0x30;
    uVar6 = System_String__get_Chars(param_3,uVar19,0);
    uVar22 = uVar19 + 1;
  } while (iVar21 < 1000000 && (ushort)(uVar6 - 0x30) < 10);
  if (*(int *)(DAT_09188e78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar8 = System_ParamsArray__get_Length(param_4,0);
  if (iVar8 <= iVar21) {
    thunk_FUN_03fc39d4(&DAT_09184908);
    uVar9 = thunk_FUN_03f9944c();
    uVar14 = thunk_FUN_03fc39d4(&DAT_09204908);
    System_FormatException___ctor(uVar9,uVar14,0);
    goto LAB_0743f804;
  }
  if ((int)uVar19 < (int)uVar2) {
    do {
      uVar6 = System_String__get_Chars(param_3,uVar19,0);
      if (uVar6 != 0x20) goto LAB_0743f104;
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < (int)uVar2);
    bVar4 = false;
    iVar8 = 0;
LAB_0743f228:
    uVar6 = 0x20;
    uVar19 = uVar2;
  }
  else {
LAB_0743f104:
    if (uVar6 == 0x2c) {
      uVar22 = uVar19 + 2;
      do {
        uVar7 = uVar22;
        uVar19 = uVar7 - 1;
        if ((int)uVar2 <= (int)uVar19) break;
        sVar5 = System_String__get_Chars(param_3,uVar19,0);
        uVar22 = uVar7 + 1;
      } while (sVar5 == 0x20);
      if (-uVar2 + uVar7 == 1) goto LAB_0743f7cc;
      uVar6 = System_String__get_Chars(param_3,uVar19,0);
      bVar4 = uVar6 == 0x2d;
      if (bVar4) {
        if (uVar2 == uVar7) {
LAB_0743f7cc:
          System_Text_StringBuilder__FormatError();
LAB_0743f7d0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = System_String__get_Chars(param_3,uVar7,0);
        uVar19 = uVar7;
      }
      if (9 < (ushort)(uVar6 - 0x30)) goto LAB_0743f7cc;
      iVar8 = 0;
      do {
        if (uVar2 - 1 == uVar19) goto LAB_0743f7cc;
        uVar19 = uVar19 + 1;
        iVar8 = iVar8 * 10 + (uint)uVar6 + -0x30;
        uVar6 = System_String__get_Chars(param_3,uVar19,0);
      } while (iVar8 < 1000000 && (ushort)(uVar6 - 0x30) < 10);
    }
    else {
      iVar8 = 0;
      bVar4 = false;
    }
    if ((int)uVar19 < (int)uVar2) {
      do {
        uVar6 = System_String__get_Chars(param_3,uVar19,0);
        if (uVar6 != 0x20) goto LAB_0743f238;
        uVar19 = uVar19 + 1;
      } while (uVar2 != uVar19);
      goto LAB_0743f228;
    }
  }
LAB_0743f238:
  if (*(int *)(DAT_09188e78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar12 = (long *)System_ParamsArray__get_Item(param_4,iVar21,0);
  if (uVar6 != 0x7d) {
    if (uVar6 == 0x3a) {
      uVar17 = (ulong)(uVar19 + 1);
      while( true ) {
        uVar22 = (uint)uVar17;
        uVar23 = uVar17 & 0xffffffff;
        local_70 = 0;
        do {
          if (-uVar2 + uVar22 + (uint)local_70 == 0) goto LAB_0743f7cc;
          sVar5 = System_String__get_Chars(param_3,uVar23 + local_70,0);
          uVar1 = local_70 + 1;
          if (sVar5 == 0x7d) {
            if (((int)(uVar23 + uVar1) < (int)uVar2) &&
               (sVar5 = System_String__get_Chars(param_3,uVar23 + uVar1,0), sVar5 == 0x7d))
            goto LAB_0743f308;
            iVar21 = (int)uVar1;
            uVar19 = (uVar22 - 1) + iVar21;
            if ((plVar20 == (long *)0x0) || ((int)plVar20[4] + *(int *)((long)plVar20 + 0x24) == 0))
            {
              if (iVar21 == 1) {
                lVar15 = 0;
                local_70 = 0;
                local_88 = 0;
                uVar19 = uVar22;
              }
              else {
                if (DAT_09520e02 == '\0') {
                  FUN_03f5c2a4(&DAT_091b97b8);
                  DAT_09520e02 = '\x01';
                }
                if ((*(uint *)(param_3 + 0x10) < uVar22) ||
                   (*(uint *)(param_3 + 0x10) - uVar22 < (uint)local_70)) {
                  System_ThrowHelper__ThrowArgumentOutOfRangeException(0x18,0);
                }
                local_88 = System_String__GetRawStringData(param_3,0);
                local_88 = local_88 + (long)(int)uVar22 * 2;
                lVar15 = 0;
              }
            }
            else {
              uVar9 = System_Text_StringBuilder__Append
                                (plVar20,param_3,uVar17 & 0xffffffff,iVar21 + -1);
              lVar15 = (**(code **)(*plVar20 + 0x168))(uVar9,*(undefined8 *)(*plVar20 + 0x170));
              if (DAT_09519f66 == '\0') {
                FUN_03f5c2a4(&DAT_091b97b8);
                DAT_09519f66 = '\x01';
              }
              if (lVar15 == 0) {
                local_88 = 0;
                local_70 = 0;
              }
              else {
                local_88 = System_String__GetRawStringData(lVar15,0);
                local_70 = (ulong)*(uint *)(lVar15 + 0x10);
              }
              System_Text_StringBuilder__set_Length(plVar20,0);
            }
            goto LAB_0743f480;
          }
          local_70 = uVar1;
        } while (sVar5 != 0x7b);
        if (((int)uVar2 <= (int)(uVar23 + uVar1)) ||
           (sVar5 = System_String__get_Chars(param_3,uVar23 + uVar1,0), sVar5 != 0x7b)) break;
LAB_0743f308:
        if (plVar20 == (long *)0x0) {
          plVar20 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
          System_Text_StringBuilder___ctor();
          if (plVar20 == (long *)0x0) goto LAB_0743f7d0;
        }
        uVar17 = uVar23 + uVar1 + 1;
        System_Text_StringBuilder__Append(plVar20,param_3,uVar23,uVar1 & 0xffffffff);
      }
    }
    goto LAB_0743f7cc;
  }
  lVar15 = 0;
  local_70 = 0;
  local_88 = 0;
LAB_0743f480:
  uVar19 = uVar19 + 1;
  if (local_b0 == (long *)0x0) {
LAB_0743f524:
    plVar13 = (long *)thunk_FUN_03f99350(plVar12,DAT_09186670);
    bVar3 = bVar4;
    if (iVar8 == 0) {
      bVar3 = true;
    }
    if ((plVar13 != (long *)0x0) && (bVar3)) {
      if (DAT_095210a6 == '\0') {
        FUN_03f5c2a4(&DAT_091ba958);
        DAT_095210a6 = '\x01';
      }
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar11 == 0) goto LAB_0743f7d0;
      uVar7 = *(uint *)(param_1 + 0x20);
      uVar22 = *(uint *)(lVar11 + 0x18);
      if (uVar22 < uVar7) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      lVar16 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_09186670) {
            puVar10 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0743f5f8;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09186670,0);
LAB_0743f5f8:
      uVar17 = (*(code *)*puVar10)(plVar13,lVar11 + (long)(int)uVar7 * 2 + 0x20,uVar22 - uVar7,
                                   &local_64,local_88,local_70,param_2,puVar10[1]);
      if ((uVar17 & 1) != 0) {
        bVar4 = (bool)(bVar4 ^ 1);
        if (iVar8 - local_64 < 1) {
          bVar4 = true;
        }
        *(int *)(param_1 + 0x20) = local_64 + *(int *)(param_1 + 0x20);
        if (!bVar4) {
          System_Text_StringBuilder__Append(param_1,0x20);
        }
        goto joined_r0x0743ef74;
      }
    }
    plVar13 = (long *)thunk_FUN_03f99350(plVar12,DAT_09185c00);
    if (plVar13 == (long *)0x0) {
      if (plVar12 != (long *)0x0) {
        lVar11 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        goto LAB_0743f72c;
      }
    }
    else {
      if (((int)local_70 != 0) && (lVar15 == 0)) {
        lVar15 = System_String__CreateString(0,local_88,local_70,0);
      }
      lVar11 = *plVar13;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_09185c00) {
            puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_0743f718;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185c00,0);
LAB_0743f718:
      lVar11 = (*(code *)*puVar10)(plVar13,lVar15,param_2,puVar10[1]);
LAB_0743f72c:
      if (lVar11 != 0) goto LAB_0743f74c;
    }
    lVar11 = **(long **)(DAT_09535468 + 0xb8);
    if (lVar11 == 0) goto LAB_0743f7d0;
  }
  else {
    if ((lVar15 == 0) && (local_70 != 0)) {
      lVar15 = System_String__CreateString(0,local_88,local_70,0);
    }
    lVar11 = *local_b0;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == DAT_09185948) {
          puVar10 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_0743f504;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(local_b0,DAT_09185948,0);
LAB_0743f504:
    lVar11 = (*(code *)*puVar10)(local_b0,lVar15,plVar12,param_2,puVar10[1]);
    if (lVar11 == 0) goto LAB_0743f524;
  }
LAB_0743f74c:
  iVar8 = iVar8 - *(int *)(lVar11 + 0x10);
  bVar3 = bVar4;
  if (iVar8 < 1) {
    bVar3 = true;
  }
  if (!bVar3) {
    System_Text_StringBuilder__Append(param_1,0x20,iVar8);
  }
  System_Text_StringBuilder__Append(param_1,lVar11);
  if ((0 < iVar8) && (bVar4)) {
    System_Text_StringBuilder__Append(param_1,0x20,iVar8);
  }
  goto joined_r0x0743ef74;
}

