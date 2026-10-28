// rea decompile_all
// name: System.Number$$TryParseUInt64HexNumberStyle
// address: 0x75c0e94
// body: available
// range: 0x75c0e94-0x75c11cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c11c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c11c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Number__TryParseUInt64HexNumberStyle
               (ushort *param_1,undefined8 param_2,uint param_3,undefined8 param_4,long *param_5,
               undefined1 *param_6)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  if ((DAT_09521d6e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d6e = 1;
  }
  uVar3 = (uint)param_2;
  if (uVar3 != 0) {
    uVar1 = *param_1;
    if ((param_3 & 1) != 0) {
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar1 - 9 < 5) || (uVar1 == 0x20)) {
        if (uVar3 != 1) {
          uVar8 = 1;
          lVar4 = DAT_09188a70;
          do {
            uVar1 = param_1[(int)uVar8];
            if (*(int *)(lVar4 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar4 = DAT_09188a70;
            }
            if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_075c0f08;
            uVar8 = uVar8 + 1;
          } while (uVar3 != uVar8);
        }
        goto LAB_075c0fa4;
      }
    }
    uVar8 = 0;
    lVar4 = DAT_09188a70;
LAB_075c0f08:
    uVar11 = (ulong)uVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = DAT_09188a70;
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = *(uint *)(lVar5 + 0x18);
    if ((uVar1 < uVar12) && (*(int *)(lVar5 + uVar11 * 4 + 0x20) != 0xff)) {
      if (uVar1 == 0x30) {
        do {
          uVar8 = uVar8 + 1;
          if (uVar3 <= uVar8) {
            lVar10 = 0;
            goto LAB_075c1130;
          }
          uVar1 = param_1[(int)uVar8];
          uVar11 = (ulong)uVar1;
        } while (uVar1 == 0x30);
        if ((uVar1 < uVar12) && (*(int *)(lVar5 + uVar11 * 4 + 0x20) != 0xff)) goto LAB_075c1024;
        lVar10 = 0;
        uVar12 = 0;
        uVar9 = uVar8;
LAB_075c10ac:
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (((int)uVar11 - 9U < 5) || ((int)uVar11 == 0x20)) {
          if ((param_3 >> 1 & 1) == 0) goto LAB_075c0fa4;
          uVar9 = uVar9 + 1;
          if ((int)uVar9 < (int)uVar3) {
            puVar7 = param_1 + (int)uVar9;
            do {
              if (uVar3 <= uVar9) goto LAB_075c11c8;
              uVar1 = *puVar7;
              if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((4 < uVar1 - 9) && (uVar1 != 0x20)) goto LAB_075c111c;
              uVar9 = uVar9 + 1;
              puVar7 = puVar7 + 1;
            } while (uVar3 != uVar9);
          }
          else {
LAB_075c111c:
            if (uVar9 < uVar3) goto LAB_075c1140;
          }
          if (uVar12 == 0) goto LAB_075c1130;
        }
        else {
LAB_075c1140:
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Number__TrailingZeros(param_1,param_2,uVar9);
          if ((uVar3 & 1) == 0) {
            lVar10 = 0;
          }
          if ((uVar3 & 1 & uVar12) == 0) goto LAB_075c0fac;
        }
      }
      else {
LAB_075c1024:
        if (uVar12 <= (uint)uVar11) {
LAB_075c11c8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar9 = uVar8 + 0x10;
        lVar10 = (long)*(int *)(lVar5 + uVar11 * 4 + 0x20);
        iVar6 = 1;
        do {
          if (uVar3 <= uVar8 + iVar6) goto LAB_075c1130;
          uVar11 = (ulong)param_1[(int)(uVar8 + iVar6)];
          if ((uVar12 <= param_1[(int)(uVar8 + iVar6)]) ||
             (iVar2 = *(int *)(lVar5 + uVar11 * 4 + 0x20), iVar2 == 0xff)) {
            uVar12 = 0;
            uVar9 = uVar8 + iVar6;
            goto LAB_075c10ac;
          }
          iVar6 = iVar6 + 1;
          lVar10 = (long)iVar2 + lVar10 * 0x10;
        } while (iVar6 != 0x10);
        if (uVar3 <= uVar9) {
LAB_075c1130:
          uVar3 = 1;
          goto LAB_075c0fac;
        }
        uVar11 = (ulong)param_1[(int)uVar9];
        if ((uVar12 <= param_1[(int)uVar9]) || (*(int *)(lVar5 + uVar11 * 4 + 0x20) == 0xff)) {
          uVar12 = 0;
          goto LAB_075c10ac;
        }
        uVar9 = uVar8 + 0x11;
        if (uVar9 < uVar3) {
          do {
            uVar11 = (ulong)param_1[(int)uVar9];
            if ((uVar12 <= param_1[(int)uVar9]) || (*(int *)(lVar5 + uVar11 * 4 + 0x20) == 0xff)) {
              uVar12 = 1;
              goto LAB_075c10ac;
            }
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
        }
      }
      lVar10 = 0;
      uVar3 = 0;
      *param_6 = 1;
      goto LAB_075c0fac;
    }
  }
LAB_075c0fa4:
  lVar10 = 0;
  uVar3 = 0;
LAB_075c0fac:
  *param_5 = lVar10;
  return uVar3 & 1;
}

