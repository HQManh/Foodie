// rea decompile_all
// name: System.Number$$TryParseInt32IntegerStyle
// address: 0x75bfdf0
// body: available
// range: 0x75bfdf0-0x75c03cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bff90 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c03c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c03cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Number__TryParseInt32IntegerStyle
          (ushort *param_1,ulong param_2,uint param_3,long param_4,int *param_5,undefined1 *param_6)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int local_64;
  
  if ((DAT_09521d66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d2f88);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091f86a8);
    FUN_03f5c2a4(&DAT_091f8a38);
    DAT_09521d66 = 1;
  }
  uVar11 = (uint)param_2;
  if (uVar11 == 0) goto LAB_075c0368;
  uVar3 = *param_1;
  if ((param_3 & 1) != 0) {
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((uVar3 - 9 < 5) || (uVar3 == 0x20)) {
      if (uVar11 != 1) {
        uVar13 = 1;
        lVar5 = DAT_09188a70;
        do {
          uVar3 = param_1[(int)uVar13];
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = DAT_09188a70;
          }
          if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_075bfe90;
          uVar13 = uVar13 + 1;
        } while (uVar11 != uVar13);
      }
      goto LAB_075c0368;
    }
  }
  uVar13 = 0;
LAB_075bfe90:
  uVar15 = (uint)uVar3;
  uVar8 = param_2 >> 0x20;
  if ((param_3 >> 2 & 1) == 0) {
LAB_075bfe98:
    local_64 = 1;
LAB_075c0100:
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = uVar15 - 0x30;
    if (uVar11 < 10) {
      uVar12 = (uint)param_2;
      if (uVar15 != 0x30) {
LAB_075c0160:
        uVar15 = uVar13 + 9;
        iVar9 = 0;
        do {
          uVar14 = uVar13 + 1 + iVar9;
          if (uVar12 <= uVar14) goto LAB_075c03b8;
          uVar3 = param_1[(int)uVar14];
          uVar14 = (uint)uVar3;
          if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (9 < uVar3 - 0x30) {
            bVar1 = false;
            uVar15 = uVar13 + iVar9 + 1;
            goto LAB_075c02a4;
          }
          iVar9 = iVar9 + 1;
          uVar11 = ((uint)uVar3 + uVar11 * 10) - 0x30;
        } while (iVar9 != 8);
        if (uVar12 <= uVar15) {
LAB_075c03b8:
          uVar6 = 1;
          local_64 = uVar11 * local_64;
          goto LAB_075c0370;
        }
        uVar3 = param_1[(int)uVar15];
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (9 < uVar3 - 0x30) goto LAB_075c02a0;
        uVar15 = uVar13 + 10;
        uVar13 = ((uint)uVar3 + uVar11 * 10) - 0x30;
        bVar1 = (1U - local_64 >> 1) + 0x7fffffff < uVar13 || 0xccccccc < (int)uVar11;
        lVar5 = DAT_09188a70;
        uVar11 = uVar13;
        if (uVar12 <= uVar15) goto LAB_075c03a0;
        do {
          uVar3 = param_1[(int)uVar15];
          uVar14 = (uint)uVar3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar5 = DAT_09188a70;
          }
          if (9 < uVar3 - 0x30) goto LAB_075c02a4;
          uVar15 = uVar15 + 1;
          bVar1 = true;
        } while (uVar12 != uVar15);
LAB_075c03a4:
        local_64 = 0;
        uVar6 = 0;
        *param_6 = 1;
        goto LAB_075c0370;
      }
      do {
        uVar13 = uVar13 + 1;
        if (uVar12 <= uVar13) {
          uVar11 = 0;
          goto LAB_075c03b8;
        }
        uVar3 = param_1[(int)uVar13];
      } while (uVar3 == 0x30);
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = uVar3 - 0x30;
      if (uVar11 < 10) goto LAB_075c0160;
      uVar11 = 0;
      uVar15 = uVar13;
LAB_075c02a0:
      uVar14 = (uint)uVar3;
      bVar1 = false;
LAB_075c02a4:
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((uVar14 - 9 < 5) || (uVar14 == 0x20)) {
        if ((param_3 >> 1 & 1) != 0) {
          uVar15 = uVar15 + 1;
          if ((int)uVar15 < (int)uVar12) {
            puVar10 = param_1 + (int)uVar15;
            do {
              if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar3 = *puVar10;
              if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((4 < uVar3 - 9) && (uVar3 != 0x20)) goto LAB_075c0328;
              uVar15 = uVar15 + 1;
              puVar10 = puVar10 + 1;
            } while (uVar12 != uVar15);
          }
          else {
LAB_075c0328:
            if (uVar15 < uVar12) goto LAB_075c033c;
          }
          goto LAB_075c03a0;
        }
      }
      else {
LAB_075c033c:
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_Number__TrailingZeros(param_1,param_2 & 0xffffffff | uVar8 << 0x20,uVar15);
        if ((uVar8 & 1) != 0) {
LAB_075c03a0:
          if (!bVar1) goto LAB_075c03b8;
          goto LAB_075c03a4;
        }
      }
    }
  }
  else {
    if (param_4 == 0) goto LAB_075c03cc;
    lVar5 = *(long *)(param_4 + 0x28);
    lVar2 = *(long *)(param_4 + 0x30);
    uVar4 = System_String__op_Equality(lVar5,DAT_091f86a8,0);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = System_String__op_Equality(lVar2,DAT_091f8a38,0), (uVar4 & 1) == 0)) {
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
      uVar8 = System_String__IsNullOrEmpty(lVar5,0);
      if ((uVar8 & 1) == 0) {
        if (DAT_09519f66 == '\0') {
          FUN_03f5c2a4(&DAT_091b97b8);
          DAT_09519f66 = '\x01';
        }
        if (lVar5 == 0) {
          uVar6 = 0;
          uVar7 = 0;
        }
        else {
          uVar6 = System_String__GetRawStringData(lVar5,0);
          uVar7 = *(undefined4 *)(lVar5 + 0x10);
        }
        uVar8 = FUN_075c4dac(param_1,param_2,uVar6,uVar7,DAT_091d2f88);
        if ((uVar8 & 1) == 0) goto LAB_075c0044;
        if (lVar5 == 0) goto LAB_075c03cc;
        uVar13 = *(uint *)(lVar5 + 0x10);
        if (uVar12 <= uVar13) goto LAB_075c0368;
        local_64 = 1;
LAB_075c00cc:
        uVar8 = 0;
LAB_075c00fc:
        uVar15 = (uint)param_1[(int)uVar13];
      }
      else {
LAB_075c0044:
        uVar8 = System_String__IsNullOrEmpty(lVar2,0);
        if ((uVar8 & 1) == 0) {
          if (DAT_09519f66 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09519f66 = '\x01';
          }
          if (lVar2 == 0) {
            uVar6 = 0;
            uVar7 = 0;
          }
          else {
            uVar6 = System_String__GetRawStringData(lVar2,0);
            uVar7 = *(undefined4 *)(lVar2 + 0x10);
          }
          uVar8 = FUN_075c4dac(param_1,param_2,uVar6,uVar7,DAT_091d2f88);
          if ((uVar8 & 1) != 0) {
            if (lVar2 == 0) {
LAB_075c03cc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar13 = *(uint *)(lVar2 + 0x10);
            if (uVar12 <= uVar13) goto LAB_075c0368;
            local_64 = -1;
            goto LAB_075c00cc;
          }
        }
        uVar8 = 0;
        uVar13 = 0;
        local_64 = 1;
      }
      goto LAB_075c0100;
    }
    if (uVar15 == 0x2b) {
      if (uVar13 + 1 < uVar11) {
        local_64 = 1;
LAB_075c00f8:
        uVar13 = uVar13 + 1;
        goto LAB_075c00fc;
      }
    }
    else {
      if (uVar15 != 0x2d) goto LAB_075bfe98;
      if (uVar13 + 1 < uVar11) {
        local_64 = -1;
        goto LAB_075c00f8;
      }
    }
  }
LAB_075c0368:
  local_64 = 0;
  uVar6 = 0;
LAB_075c0370:
  *param_5 = local_64;
  return uVar6;
}

