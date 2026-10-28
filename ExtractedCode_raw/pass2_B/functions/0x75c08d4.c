// rea decompile_all
// name: System.Number$$TryParseInt64IntegerStyle
// address: 0x75c08d4
// body: available
// range: 0x75c08d4-0x75c0e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c0a74 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c0e8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c0e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Number__TryParseInt64IntegerStyle
          (ushort *param_1,ulong param_2,uint param_3,long param_4,long *param_5,undefined1 *param_6
          )

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  
  if ((DAT_09521d67 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f88);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091f86a8);
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09521d67 = 1;
  }
  uVar9 = (uint)param_2;
  if (uVar9 == 0) goto LAB_075c0d40;
  uVar3 = *param_1;
  if ((param_3 & 1) != 0) {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (uVar9 != 1) {
        uVar11 = 1;
        lVar15 = DAT_09188a70;
        do {
          uVar3 = param_1[(int)uVar11];
          if (*(int *)(lVar15 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar15 = DAT_09188a70;
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_075c0974;
          uVar11 = uVar11 + 1;
        } while (uVar9 != uVar11);
      }
      goto LAB_075c0d40;
    }
  }
  uVar11 = 0;
LAB_075c0974:
  uVar16 = (uint)uVar3;
  uVar14 = param_2 >> 0x20;
  if ((param_3 >> 2 & 1) == 0) {
LAB_075c0980:
    iVar7 = 1;
LAB_075c0bd8:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = uVar16 - 0x30;
    if (uVar9 < 10) {
      uVar10 = (uint)param_2;
      if (uVar16 == 0x30) {
        do {
          uVar11 = uVar11 + 1;
          if (uVar10 <= uVar11) {
            uVar17 = 0;
            goto LAB_075c0e78;
          }
          uVar3 = param_1[(int)uVar11];
          uVar13 = (ulong)uVar3;
        } while (uVar3 == 0x30);
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = uVar3 - 0x30;
        if (uVar9 < 10) goto LAB_075c0c3c;
        uVar6 = 0;
        uVar16 = uVar11;
LAB_075c0d8c:
        uVar9 = (uint)uVar13;
        bVar1 = false;
LAB_075c0d90:
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((uVar9 - 9 < 5) || (uVar9 == 0x20)) {
          if ((param_3 >> 1 & 1) != 0) {
            uVar16 = uVar16 + 1;
            if ((int)uVar16 < (int)uVar10) {
              puVar8 = param_1 + (int)uVar16;
              do {
                if (uVar10 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar3 = *puVar8;
                if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_075c0e0c;
                uVar16 = uVar16 + 1;
                puVar8 = puVar8 + 1;
              } while (uVar10 != uVar16);
            }
            else {
LAB_075c0e0c:
              if (uVar16 < uVar10) goto LAB_075c0e20;
            }
            goto LAB_075c0e5c;
          }
        }
        else {
LAB_075c0e20:
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar14 = System_Number__TrailingZeros
                             (param_1,param_2 & 0xffffffff | uVar14 << 0x20,uVar16);
          if ((uVar14 & 1) != 0) {
LAB_075c0e5c:
            uVar17 = uVar6;
            if (!bVar1) goto LAB_075c0e78;
            goto LAB_075c0e60;
          }
        }
        lVar15 = 0;
        uVar4 = 0;
      }
      else {
LAB_075c0c3c:
        uVar16 = uVar11 + 0x12;
        iVar12 = 1;
        uVar6 = (ulong)uVar9;
        do {
          uVar17 = uVar6;
          if (uVar10 <= uVar11 + iVar12) goto LAB_075c0e78;
          uVar3 = param_1[(int)(uVar11 + iVar12)];
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar3 - 0x30) {
            uVar13 = (ulong)(uint)uVar3;
            uVar16 = uVar11 + iVar12;
            goto LAB_075c0d8c;
          }
          iVar12 = iVar12 + 1;
          uVar17 = ((ulong)uVar3 + uVar6 * 10) - 0x30;
          uVar6 = uVar17;
        } while (iVar12 != 0x12);
        if (uVar10 <= uVar16) {
LAB_075c0e78:
          uVar4 = 1;
          lVar15 = uVar17 * (long)iVar7;
          goto LAB_075c0d44;
        }
        uVar3 = param_1[(int)uVar16];
        uVar13 = (ulong)uVar3;
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (9 < uVar3 - 0x30) goto LAB_075c0d8c;
        uVar16 = uVar11 + 0x13;
        uVar6 = (uVar13 + uVar17 * 10) - 0x30;
        bVar1 = (ulong)(1U - iVar7 >> 1) + 0x7fffffffffffffff < uVar6 ||
                0xccccccccccccccc < (long)uVar17;
        lVar15 = DAT_09188a70;
        if (uVar10 <= uVar16) goto LAB_075c0e5c;
        do {
          uVar3 = param_1[(int)uVar16];
          uVar9 = (uint)uVar3;
          if (*(int *)(lVar15 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar15 = DAT_09188a70;
          }
          if (9 < uVar3 - 0x30) goto LAB_075c0d90;
          uVar16 = uVar16 + 1;
          bVar1 = true;
        } while (uVar10 != uVar16);
LAB_075c0e60:
        lVar15 = 0;
        uVar4 = 0;
        *param_6 = 1;
      }
      goto LAB_075c0d44;
    }
  }
  else {
    if (param_4 == 0) goto LAB_075c0e90;
    lVar15 = *(long *)(param_4 + 0x28);
    lVar2 = *(long *)(param_4 + 0x30);
    uVar17 = System_String__op_Equality(lVar15,DAT_091f86a8,0);
    if (((uVar17 & 1) == 0) ||
       (uVar17 = System_String__op_Equality(lVar2,DAT_091f8a38,0), (uVar17 & 1) == 0)) {
      uVar10 = uVar9 - uVar11;
      param_2 = (ulong)uVar10;
      if (uVar9 < uVar11) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      param_1 = param_1 + (int)uVar11;
      uVar14 = System_String__IsNullOrEmpty(lVar15,0);
      if ((uVar14 & 1) == 0) {
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
        }
        if (lVar15 == 0) {
          uVar4 = 0;
          uVar5 = 0;
        }
        else {
          uVar4 = System_String__GetRawStringData(lVar15,0);
          uVar5 = *(undefined4 *)(lVar15 + 0x10);
        }
        uVar14 = FUN_075c4dac(param_1,param_2,uVar4,uVar5,DAT_091d2f88);
        if ((uVar14 & 1) == 0) goto LAB_075c0b28;
        if (lVar15 == 0) goto LAB_075c0e90;
        uVar11 = *(uint *)(lVar15 + 0x10);
        if (uVar10 <= uVar11) goto LAB_075c0d40;
        iVar7 = 1;
LAB_075c0bb0:
        uVar14 = 0;
LAB_075c0bd4:
        uVar16 = (uint)param_1[(int)uVar11];
      }
      else {
LAB_075c0b28:
        uVar14 = System_String__IsNullOrEmpty(lVar2,0);
        if ((uVar14 & 1) == 0) {
          if (DAT_09519f66 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09519f66 = '\x01';
          }
          if (lVar2 == 0) {
            uVar4 = 0;
            uVar5 = 0;
          }
          else {
            uVar4 = System_String__GetRawStringData(lVar2,0);
            uVar5 = *(undefined4 *)(lVar2 + 0x10);
          }
          uVar14 = FUN_075c4dac(param_1,param_2,uVar4,uVar5,DAT_091d2f88);
          if ((uVar14 & 1) != 0) {
            if (lVar2 == 0) {
LAB_075c0e90:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar11 = *(uint *)(lVar2 + 0x10);
            if (uVar10 <= uVar11) goto LAB_075c0d40;
            iVar7 = -1;
            goto LAB_075c0bb0;
          }
        }
        uVar14 = 0;
        uVar11 = 0;
        iVar7 = 1;
      }
      goto LAB_075c0bd8;
    }
    if (uVar16 == 0x2b) {
      uVar11 = uVar11 + 1;
      if (uVar11 < uVar9) {
        iVar7 = 1;
        goto LAB_075c0bd4;
      }
    }
    else {
      if (uVar16 != 0x2d) goto LAB_075c0980;
      uVar11 = uVar11 + 1;
      if (uVar11 < uVar9) {
        iVar7 = -1;
        goto LAB_075c0bd4;
      }
    }
  }
LAB_075c0d40:
  lVar15 = 0;
  uVar4 = 0;
LAB_075c0d44:
  *param_5 = lVar15;
  return uVar4;
}

