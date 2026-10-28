// rea decompile_all
// name: System.Number$$TryParseUInt64IntegerStyle
// address: 0x75c1b9c
// body: available
// range: 0x75c1b9c-0x75c21a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c1d44 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c219c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c21a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Number__TryParseUInt64IntegerStyle
              (ushort *param_1,ulong param_2,uint param_3,long param_4,ulong *param_5,
              undefined1 *param_6)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((DAT_09521d6d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f88);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091f86a8);
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09521d6d = 1;
  }
  uVar11 = (uint)param_2;
  if (uVar11 != 0) {
    uVar2 = *param_1;
    if ((param_3 & 1) != 0) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar2 - 9 < 5) || (uVar2 == 0x20)) {
        if (uVar11 != 1) {
          uVar13 = 1;
          lVar5 = DAT_09188a70;
          do {
            uVar2 = param_1[(int)uVar13];
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar5 = DAT_09188a70;
            }
            if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_075c1c3c;
            uVar13 = uVar13 + 1;
          } while (uVar11 != uVar13);
        }
        goto LAB_075c2134;
      }
    }
    uVar13 = 0;
LAB_075c1c3c:
    uVar16 = (uint)uVar2;
    uVar15 = param_2 >> 0x20;
    if ((param_3 >> 2 & 1) == 0) {
LAB_075c1c48:
      iVar14 = 1;
      uVar6 = uVar15;
      goto LAB_075c1ec4;
    }
    if (param_4 == 0) goto LAB_075c21a0;
    lVar5 = *(long *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    uVar6 = System_String__op_Equality(lVar5,DAT_091f86a8,0);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = System_String__op_Equality(lVar1,DAT_091f8a38,0), (uVar6 & 1) == 0)) {
      uVar12 = uVar11 - uVar13;
      param_2 = (ulong)uVar12;
      if (uVar11 < uVar13) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      param_1 = param_1 + (int)uVar13;
      uVar15 = System_String__IsNullOrEmpty(lVar5,0);
      if ((uVar15 & 1) == 0) {
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
        }
        if (lVar5 == 0) {
          uVar4 = 0;
          uVar7 = 0;
        }
        else {
          uVar4 = System_String__GetRawStringData(lVar5,0);
          uVar7 = *(undefined4 *)(lVar5 + 0x10);
        }
        uVar15 = FUN_075c4dac(param_1,param_2,uVar4,uVar7,DAT_091d2f88);
        if ((uVar15 & 1) != 0) {
          if (lVar5 == 0) goto LAB_075c21a0;
          uVar13 = *(uint *)(lVar5 + 0x10);
          uVar15 = 0;
          if (uVar12 <= uVar13) goto LAB_075c2134;
          iVar14 = 1;
          goto LAB_075c1ec0;
        }
      }
      uVar15 = System_String__IsNullOrEmpty(lVar1,0);
      if ((uVar15 & 1) == 0) {
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
        }
        if (lVar1 == 0) {
          uVar4 = 0;
          uVar7 = 0;
        }
        else {
          uVar4 = System_String__GetRawStringData(lVar1,0);
          uVar7 = *(undefined4 *)(lVar1 + 0x10);
        }
        uVar15 = FUN_075c4dac(param_1,param_2,uVar4,uVar7,DAT_091d2f88);
        if ((uVar15 & 1) != 0) {
          if (lVar1 == 0) {
LAB_075c21a0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar13 = *(uint *)(lVar1 + 0x10);
          iVar14 = 0;
          uVar15 = 0;
          if (uVar12 <= uVar13) goto LAB_075c2138;
          goto LAB_075c1ec0;
        }
        uVar6 = 0;
        uVar13 = 0;
        iVar14 = 1;
      }
      else {
        uVar6 = 0;
        uVar13 = 0;
        iVar14 = 1;
      }
    }
    else {
      if (uVar16 == 0x2d) {
        uVar13 = uVar13 + 1;
        iVar14 = 0;
        if (uVar11 <= uVar13) {
          uVar15 = 0;
          goto LAB_075c2138;
        }
      }
      else {
        if (uVar16 != 0x2b) goto LAB_075c1c48;
        uVar13 = uVar13 + 1;
        if (uVar11 <= uVar13) goto LAB_075c2134;
        iVar14 = 1;
      }
LAB_075c1ec0:
      uVar16 = (uint)param_1[(int)uVar13];
      uVar6 = uVar15;
    }
LAB_075c1ec4:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = uVar16 - 0x30;
    if (uVar11 < 10) {
      uVar12 = (uint)param_2;
      if (uVar16 == 0x30) {
        do {
          uVar13 = uVar13 + 1;
          if (uVar12 <= uVar13) {
            uVar15 = 0;
            iVar14 = 1;
            goto LAB_075c2138;
          }
          uVar2 = param_1[(int)uVar13];
          uVar9 = (ulong)uVar2;
        } while (uVar2 == 0x30);
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = uVar2 - 0x30;
        if (uVar11 < 10) goto LAB_075c1f34;
        uVar15 = 0;
        uVar11 = uVar13;
LAB_075c2054:
        uVar13 = (uint)uVar9;
        bVar3 = false;
LAB_075c2058:
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((uVar13 - 9 < 5) || (uVar13 == 0x20)) {
          if ((param_3 >> 1 & 1) == 0) goto LAB_075c2134;
          uVar11 = uVar11 + 1;
          if ((int)uVar11 < (int)uVar12) {
            puVar10 = param_1 + (int)uVar11;
            do {
              if (uVar12 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar2 = *puVar10;
              if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((4 < uVar2 - 9) && (uVar2 != 0x20)) goto LAB_075c20d8;
              uVar11 = uVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar12 != uVar11);
            if (bVar3) goto LAB_075c217c;
            goto LAB_075c2164;
          }
LAB_075c20d8:
          if (uVar12 <= uVar11) goto LAB_075c2128;
        }
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Number__TrailingZeros(param_1,param_2 & 0xffffffff | uVar6 << 0x20,uVar11);
        if ((uVar6 & 1) == 0) goto LAB_075c2134;
LAB_075c2128:
        if (!bVar3) goto LAB_075c2164;
      }
      else {
LAB_075c1f34:
        uVar15 = (ulong)uVar11;
        uVar11 = uVar13 + 0x13;
        iVar8 = 1;
        do {
          if (uVar12 <= uVar13 + iVar8) goto LAB_075c2164;
          uVar2 = param_1[(int)(uVar13 + iVar8)];
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar2 - 0x30) {
            uVar11 = uVar13 + iVar8;
            uVar9 = (ulong)(uint)uVar2;
            goto LAB_075c2054;
          }
          iVar8 = iVar8 + 1;
          uVar15 = ((ulong)uVar2 + uVar15 * 10) - 0x30;
        } while (iVar8 != 0x13);
        if (uVar11 < uVar12) {
          uVar2 = param_1[(int)uVar11];
          uVar9 = (ulong)uVar2;
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar2 - 0x30) goto LAB_075c2054;
          uVar11 = uVar13 + 0x14;
          if ((0x1999999999999999 < uVar15) ||
             ((bVar3 = false, uVar15 == 0x1999999999999999 && (0x35 < uVar2)))) {
            bVar3 = true;
          }
          uVar15 = (uVar9 + uVar15 * 10) - 0x30;
          lVar5 = DAT_09188a70;
          if (uVar12 <= uVar11) goto LAB_075c2128;
          do {
            uVar2 = param_1[(int)uVar11];
            uVar13 = (uint)uVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar5 = DAT_09188a70;
            }
            if (9 < uVar2 - 0x30) goto LAB_075c2058;
            uVar11 = uVar11 + 1;
            bVar3 = true;
          } while (uVar12 != uVar11);
        }
        else {
LAB_075c2164:
          if (uVar15 == 0) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            iVar14 = 1;
            goto LAB_075c2138;
          }
        }
      }
LAB_075c217c:
      uVar15 = 0;
      iVar14 = 0;
      *param_6 = 1;
      goto LAB_075c2138;
    }
  }
LAB_075c2134:
  uVar15 = 0;
  iVar14 = 0;
LAB_075c2138:
  *param_5 = uVar15;
  return iVar14;
}

