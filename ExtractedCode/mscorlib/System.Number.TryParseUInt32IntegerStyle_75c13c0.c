// rea decompile_all
// name: System.Number$$TryParseUInt32IntegerStyle
// address: 0x75c13c0
// body: available
// range: 0x75c13c0-0x75c19a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c155c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c19a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c19a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Number__TryParseUInt32IntegerStyle
          (ushort *param_1,ulong param_2,uint param_3,long param_4,uint *param_5,undefined1 *param_6
          )

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if ((DAT_09521d6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f88);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091f86a8);
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09521d6a = 1;
  }
  uVar12 = (uint)param_2;
  if (uVar12 != 0) {
    uVar3 = *param_1;
    if ((param_3 & 1) != 0) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
        if (uVar12 != 1) {
          uVar14 = 1;
          lVar6 = DAT_09188a70;
          do {
            uVar3 = param_1[(int)uVar14];
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar6 = DAT_09188a70;
            }
            if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_075c1460;
            uVar14 = uVar14 + 1;
          } while (uVar12 != uVar14);
        }
        goto LAB_075c1940;
      }
    }
    uVar14 = 0;
LAB_075c1460:
    uVar16 = (uint)uVar3;
    uVar9 = param_2 >> 0x20;
    if ((param_3 >> 2 & 1) == 0) {
LAB_075c1468:
      bVar1 = true;
    }
    else {
      if (param_4 == 0) goto LAB_075c19a4;
      lVar6 = *(long *)(param_4 + 0x28);
      lVar2 = *(long *)(param_4 + 0x30);
      uVar5 = System_String__op_Equality(lVar6,DAT_091f86a8,0);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = System_String__op_Equality(lVar2,DAT_091f8a38,0), (uVar5 & 1) == 0)) {
        uVar13 = uVar12 - uVar14;
        param_2 = (ulong)uVar13;
        if (uVar12 < uVar14) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        param_1 = param_1 + (int)uVar14;
        uVar9 = System_String__IsNullOrEmpty(lVar6,0);
        if ((uVar9 & 1) != 0) {
LAB_075c1610:
          uVar9 = System_String__IsNullOrEmpty(lVar2,0);
          if ((uVar9 & 1) == 0) {
            if (DAT_09519f66 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              DAT_09519f66 = '\x01';
            }
            if (lVar2 == 0) {
              uVar7 = 0;
              uVar8 = 0;
            }
            else {
              uVar7 = System_String__GetRawStringData(lVar2,0);
              uVar8 = *(undefined4 *)(lVar2 + 0x10);
            }
            uVar9 = FUN_075c4dac(param_1,param_2,uVar7,uVar8,DAT_091d2f88);
            if ((uVar9 & 1) != 0) {
              if (lVar2 == 0) {
LAB_075c19a4:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar14 = *(uint *)(lVar2 + 0x10);
              bVar1 = false;
              if (uVar13 <= uVar14) goto LAB_075c185c;
              goto LAB_075c1698;
            }
          }
          uVar9 = 0;
          uVar14 = 0;
          bVar1 = true;
          goto LAB_075c16c4;
        }
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
        }
        if (lVar6 == 0) {
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar7 = System_String__GetRawStringData(lVar6,0);
          uVar8 = *(undefined4 *)(lVar6 + 0x10);
        }
        uVar9 = FUN_075c4dac(param_1,param_2,uVar7,uVar8,DAT_091d2f88);
        if ((uVar9 & 1) == 0) goto LAB_075c1610;
        if (lVar6 == 0) goto LAB_075c19a4;
        uVar14 = *(uint *)(lVar6 + 0x10);
        if (uVar13 <= uVar14) goto LAB_075c1940;
        bVar1 = true;
LAB_075c1698:
        uVar9 = 0;
      }
      else if (uVar16 == 0x2d) {
        uVar14 = uVar14 + 1;
        bVar1 = false;
        if (uVar12 <= uVar14) {
LAB_075c185c:
          uVar12 = 0;
          uVar7 = 0;
          goto LAB_075c1948;
        }
      }
      else {
        if (uVar16 != 0x2b) goto LAB_075c1468;
        uVar14 = uVar14 + 1;
        if (uVar12 <= uVar14) goto LAB_075c1940;
        bVar1 = true;
      }
      uVar16 = (uint)param_1[(int)uVar14];
    }
LAB_075c16c4:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = uVar16 - 0x30;
    if (uVar12 < 10) {
      uVar13 = (uint)param_2;
      if (uVar16 != 0x30) {
LAB_075c1728:
        uVar16 = uVar14 + 9;
        iVar10 = 0;
        do {
          uVar15 = uVar14 + 1 + iVar10;
          if (uVar13 <= uVar15) goto LAB_075c1974;
          uVar3 = param_1[(int)uVar15];
          uVar15 = (uint)uVar3;
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar3 - 0x30) {
            bVar4 = false;
            uVar16 = uVar14 + iVar10 + 1;
            goto LAB_075c187c;
          }
          iVar10 = iVar10 + 1;
          uVar12 = ((uint)uVar3 + uVar12 * 10) - 0x30;
        } while (iVar10 != 8);
        if (uVar16 < uVar13) {
          uVar3 = param_1[(int)uVar16];
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar3 - 0x30) goto LAB_075c1878;
          uVar16 = uVar14 + 10;
          if ((0x19999999 < uVar12) || ((bVar4 = false, uVar12 == 0x19999999 && (0x35 < uVar3)))) {
            bVar4 = true;
          }
          uVar12 = ((uint)uVar3 + uVar12 * 10) - 0x30;
          lVar6 = DAT_09188a70;
          if (uVar13 <= uVar16) goto LAB_075c1970;
          do {
            uVar3 = param_1[(int)uVar16];
            uVar15 = (uint)uVar3;
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar6 = DAT_09188a70;
            }
            if (9 < uVar3 - 0x30) goto LAB_075c187c;
            uVar16 = uVar16 + 1;
            bVar4 = true;
          } while (uVar13 != uVar16);
        }
        else {
LAB_075c1974:
          if (uVar12 == 0) {
            bVar1 = true;
          }
          if (bVar1) {
LAB_075c1984:
            uVar7 = 1;
            goto LAB_075c1948;
          }
        }
LAB_075c198c:
        uVar12 = 0;
        uVar7 = 0;
        *param_6 = 1;
        goto LAB_075c1948;
      }
      do {
        uVar14 = uVar14 + 1;
        if (uVar13 <= uVar14) {
          uVar12 = 0;
          goto LAB_075c1984;
        }
        uVar3 = param_1[(int)uVar14];
      } while (uVar3 == 0x30);
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = uVar3 - 0x30;
      if (uVar12 < 10) goto LAB_075c1728;
      uVar12 = 0;
      uVar16 = uVar14;
LAB_075c1878:
      uVar15 = (uint)uVar3;
      bVar4 = false;
LAB_075c187c:
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar15 - 9 < 5) || (uVar15 == 0x20)) {
        if ((param_3 >> 1 & 1) != 0) {
          uVar16 = uVar16 + 1;
          if ((int)uVar16 < (int)uVar13) {
            puVar11 = param_1 + (int)uVar16;
            do {
              if (uVar13 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar3 = *puVar11;
              if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_075c1900;
              uVar16 = uVar16 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar13 != uVar16);
          }
          else {
LAB_075c1900:
            if (uVar16 < uVar13) goto LAB_075c1914;
          }
          goto LAB_075c1970;
        }
      }
      else {
LAB_075c1914:
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = System_Number__TrailingZeros(param_1,param_2 & 0xffffffff | uVar9 << 0x20,uVar16);
        if ((uVar9 & 1) != 0) {
LAB_075c1970:
          if (!bVar4) goto LAB_075c1974;
          goto LAB_075c198c;
        }
      }
    }
  }
LAB_075c1940:
  uVar12 = 0;
  uVar7 = 0;
LAB_075c1948:
  *param_5 = uVar12;
  return uVar7;
}

