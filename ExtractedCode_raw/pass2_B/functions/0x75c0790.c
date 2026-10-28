// rea decompile_all
// name: System.Number$$StringToNumber
// address: 0x75c0790
// body: available
// range: 0x75c0790-0x75c08d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Number__StringToNumber
                (undefined8 param_1,long param_2,ulong param_3,long param_4,long *param_5,
                uint param_6)

{
  bool bVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  int iVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  long local_58;
  
  param_3 = param_3 & 0xffffffff;
  if ((DAT_09521d76 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d76 = 1;
  }
  local_58 = 0;
  lVar4 = FUN_04c072b4(param_1,param_2,DAT_091d3030);
  local_58 = lVar4;
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188a70);
  }
  puVar9 = (undefined1 *)(ulong)(param_6 & 1);
  uVar5 = System_Number__ParseNumber(&local_58,lVar4 + ((param_2 << 0x20) >> 0x1f));
  if ((uVar5 & 1) != 0) {
    lVar4 = local_58 - lVar4;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    if ((param_2 << 0x20) >> 0x20 <= lVar4 >> 1) {
      return uVar5;
    }
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_3 = lVar4 >> 1 & 0xffffffff;
    uVar5 = System_Number__TrailingZeros(param_1,param_2);
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
  }
  if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar20 = System_Number__ThrowOverflowOrFormatException(0,0);
  puVar12 = auVar20._0_8_;
  if ((DAT_09521d67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f88);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091f86a8);
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09521d67 = 1;
  }
  uVar13 = auVar20._8_4_;
  if (uVar13 == 0) goto LAB_075c0d40;
  uVar2 = *puVar12;
  if ((param_3 & 1) != 0) {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
      if (uVar13 != 1) {
        uVar15 = 1;
        lVar4 = DAT_09188a70;
        do {
          uVar2 = puVar12[(int)uVar15];
          if (*(int *)(lVar4 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar4 = DAT_09188a70;
          }
          if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_075c0974;
          uVar15 = uVar15 + 1;
        } while (uVar13 != uVar15);
      }
      goto LAB_075c0d40;
    }
  }
  uVar15 = 0;
LAB_075c0974:
  uVar18 = (uint)uVar2;
  uVar5 = auVar20._8_8_ >> 0x20;
  if (((uint)param_3 >> 2 & 1) == 0) {
LAB_075c0980:
    iVar11 = 1;
    auVar3 = auVar20;
LAB_075c0bd8:
    lVar4 = auVar3._0_8_;
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = uVar18 - 0x30;
    if (uVar13 < 10) {
      uVar14 = auVar3._8_4_;
      if (uVar18 == 0x30) {
        do {
          uVar15 = uVar15 + 1;
          if (uVar14 <= uVar15) {
            uVar19 = 0;
            goto LAB_075c0e78;
          }
          uVar2 = *(ushort *)(lVar4 + (long)(int)uVar15 * 2);
          uVar17 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = uVar2 - 0x30;
        if (uVar13 < 10) goto LAB_075c0c3c;
        uVar10 = 0;
        uVar18 = uVar15;
LAB_075c0d8c:
        uVar13 = (uint)uVar17;
        bVar1 = false;
LAB_075c0d90:
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
          if (((uint)param_3 >> 1 & 1) != 0) {
            uVar18 = uVar18 + 1;
            if ((int)uVar18 < (int)uVar14) {
              puVar12 = (ushort *)(lVar4 + (long)(int)uVar18 * 2);
              do {
                if (uVar14 <= uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar2 = *puVar12;
                if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_075c0e0c;
                uVar18 = uVar18 + 1;
                puVar12 = puVar12 + 1;
              } while (uVar14 != uVar18);
            }
            else {
LAB_075c0e0c:
              if (uVar18 < uVar14) goto LAB_075c0e20;
            }
            goto LAB_075c0e5c;
          }
        }
        else {
LAB_075c0e20:
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = System_Number__TrailingZeros
                            (lVar4,auVar3._8_8_ & 0xffffffff | uVar5 << 0x20,uVar18);
          if ((uVar5 & 1) != 0) {
LAB_075c0e5c:
            uVar19 = uVar10;
            if (!bVar1) goto LAB_075c0e78;
            goto LAB_075c0e60;
          }
        }
        lVar4 = 0;
        uVar5 = 0;
      }
      else {
LAB_075c0c3c:
        uVar18 = uVar15 + 0x12;
        iVar16 = 1;
        uVar10 = (ulong)uVar13;
        do {
          uVar19 = uVar10;
          if (uVar14 <= uVar15 + iVar16) goto LAB_075c0e78;
          uVar2 = *(ushort *)(lVar4 + (long)(int)(uVar15 + iVar16) * 2);
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar2 - 0x30) {
            uVar17 = (ulong)(uint)uVar2;
            uVar18 = uVar15 + iVar16;
            goto LAB_075c0d8c;
          }
          iVar16 = iVar16 + 1;
          uVar19 = ((ulong)uVar2 + uVar10 * 10) - 0x30;
          uVar10 = uVar19;
        } while (iVar16 != 0x12);
        if (uVar14 <= uVar18) {
LAB_075c0e78:
          uVar5 = 1;
          lVar4 = uVar19 * (long)iVar11;
          goto LAB_075c0d44;
        }
        uVar2 = *(ushort *)(lVar4 + (long)(int)uVar18 * 2);
        uVar17 = (ulong)uVar2;
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (9 < uVar2 - 0x30) goto LAB_075c0d8c;
        uVar18 = uVar15 + 0x13;
        uVar10 = (uVar17 + uVar19 * 10) - 0x30;
        bVar1 = (ulong)(1U - iVar11 >> 1) + 0x7fffffffffffffff < uVar10 ||
                0xccccccccccccccc < (long)uVar19;
        lVar7 = DAT_09188a70;
        if (uVar14 <= uVar18) goto LAB_075c0e5c;
        do {
          uVar2 = *(ushort *)(lVar4 + (long)(int)uVar18 * 2);
          uVar13 = (uint)uVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar7 = DAT_09188a70;
          }
          if (9 < uVar2 - 0x30) goto LAB_075c0d90;
          uVar18 = uVar18 + 1;
          bVar1 = true;
        } while (uVar14 != uVar18);
LAB_075c0e60:
        lVar4 = 0;
        uVar5 = 0;
        *puVar9 = 1;
      }
      goto LAB_075c0d44;
    }
  }
  else {
    if (param_4 == 0) goto LAB_075c0e90;
    lVar4 = *(long *)(param_4 + 0x28);
    lVar7 = *(long *)(param_4 + 0x30);
    uVar19 = System_String__op_Equality(lVar4,DAT_091f86a8,0);
    if (((uVar19 & 1) == 0) ||
       (uVar19 = System_String__op_Equality(lVar7,DAT_091f8a38,0), (uVar19 & 1) == 0)) {
      uVar14 = uVar13 - uVar15;
      if (uVar13 < uVar15) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      puVar12 = puVar12 + (int)uVar15;
      auVar3._8_4_ = uVar14;
      auVar3._0_8_ = puVar12;
      auVar3._12_4_ = 0;
      auVar20._8_4_ = uVar14;
      auVar20._0_8_ = puVar12;
      auVar20._12_4_ = 0;
      uVar5 = System_String__IsNullOrEmpty(lVar4,0);
      if ((uVar5 & 1) == 0) {
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
        }
        if (lVar4 == 0) {
          uVar6 = 0;
          uVar8 = 0;
        }
        else {
          uVar6 = System_String__GetRawStringData(lVar4,0);
          uVar8 = *(undefined4 *)(lVar4 + 0x10);
        }
        uVar5 = FUN_075c4dac(puVar12,uVar14,uVar6,uVar8,DAT_091d2f88);
        if ((uVar5 & 1) == 0) goto LAB_075c0b28;
        if (lVar4 == 0) goto LAB_075c0e90;
        uVar15 = *(uint *)(lVar4 + 0x10);
        if (uVar14 <= uVar15) goto LAB_075c0d40;
        iVar11 = 1;
LAB_075c0bb0:
        uVar5 = 0;
LAB_075c0bd4:
        uVar18 = (uint)*(ushort *)(auVar20._0_8_ + (long)(int)uVar15 * 2);
        auVar3 = auVar20;
      }
      else {
LAB_075c0b28:
        uVar5 = System_String__IsNullOrEmpty(lVar7,0);
        if ((uVar5 & 1) == 0) {
          if (DAT_09519f66 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09519f66 = '\x01';
          }
          if (lVar7 == 0) {
            uVar6 = 0;
            uVar8 = 0;
          }
          else {
            uVar6 = System_String__GetRawStringData(lVar7,0);
            uVar8 = *(undefined4 *)(lVar7 + 0x10);
          }
          uVar5 = FUN_075c4dac(puVar12,uVar14,uVar6,uVar8,DAT_091d2f88);
          if ((uVar5 & 1) != 0) {
            if (lVar7 == 0) {
LAB_075c0e90:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar15 = *(uint *)(lVar7 + 0x10);
            if (uVar14 <= uVar15) goto LAB_075c0d40;
            iVar11 = -1;
            goto LAB_075c0bb0;
          }
        }
        uVar5 = 0;
        uVar15 = 0;
        iVar11 = 1;
      }
      goto LAB_075c0bd8;
    }
    if (uVar18 == 0x2b) {
      uVar15 = uVar15 + 1;
      if (uVar15 < uVar13) {
        iVar11 = 1;
        goto LAB_075c0bd4;
      }
    }
    else {
      if (uVar18 != 0x2d) goto LAB_075c0980;
      uVar15 = uVar15 + 1;
      if (uVar15 < uVar13) {
        iVar11 = -1;
        goto LAB_075c0bd4;
      }
    }
  }
LAB_075c0d40:
  lVar4 = 0;
  uVar5 = 0;
LAB_075c0d44:
  *param_5 = lVar4;
  return uVar5;
}

