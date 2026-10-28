// rea decompile_all
// name: System.Number$$DoubleToNumber
// address: 0x75bae6c
// body: available
// range: 0x75bae6c-0x75bb317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bb314 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__DoubleToNumber(ulong param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  short sVar12;
  int iVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined2 *puVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined4 local_b0;
  undefined2 local_ac;
  byte local_a0 [72];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if ((DAT_09521d7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_09521d7c = 1;
  }
  *param_3 = param_2;
  if ((param_1 >> 0x34 & 0x7ff) < 0x7ff) {
    local_a0[0x30] = 0;
    local_a0[0x31] = 0;
    local_a0[0x18] = 0;
    local_a0[0x19] = 0;
    local_a0[0x1a] = 0;
    local_a0[0x1b] = 0;
    local_a0[0x1c] = 0;
    local_a0[0x1d] = 0;
    local_a0[0x1e] = 0;
    local_a0[0x1f] = 0;
    local_a0[0x10] = 0;
    local_a0[0x11] = 0;
    local_a0[0x12] = 0;
    local_a0[0x13] = 0;
    local_a0[0x14] = 0;
    local_a0[0x15] = 0;
    local_a0[0x16] = 0;
    local_a0[0x17] = 0;
    local_a0[0x28] = 0;
    local_a0[0x29] = 0;
    local_a0[0x2a] = 0;
    local_a0[0x2b] = 0;
    local_a0[0x2c] = 0;
    local_a0[0x2d] = 0;
    local_a0[0x2e] = 0;
    local_a0[0x2f] = 0;
    local_a0[0x20] = 0;
    local_a0[0x21] = 0;
    local_a0[0x22] = 0;
    local_a0[0x23] = 0;
    local_a0[0x24] = 0;
    local_a0[0x25] = 0;
    local_a0[0x26] = 0;
    local_a0[0x27] = 0;
    local_a0[8] = 0;
    local_a0[9] = 0;
    local_a0[10] = 0;
    local_a0[0xb] = 0;
    local_a0[0xc] = 0;
    local_a0[0xd] = 0;
    local_a0[0xe] = 0;
    local_a0[0xf] = 0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    local_a0[4] = 0;
    local_a0[5] = 0;
    local_a0[6] = 0;
    local_a0[7] = 0;
    puVar8 = (undefined2 *)System_Number_NumberBuffer__get_digits(param_3,0);
    param_3[1] = 0;
    System_Number_NumberBuffer__set_sign(param_3,param_1 >> 0x3f,0);
    *puVar8 = 0;
    if (param_1 == 0) {
      if (0 < (int)param_2) {
        uVar16 = (ulong)param_2 - 1;
        uVar23 = 7;
        uVar22 = 6;
        uVar25 = 5;
        uVar24 = 4;
        uVar27 = 3;
        uVar26 = 2;
        uVar29 = 1;
        uVar28 = 0;
        lVar17 = 0;
        do {
          if (uVar28 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17) = 0x30;
          }
          if (uVar29 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17 + 2) = 0x30;
          }
          if (uVar26 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17 + 4) = 0x30;
          }
          if (uVar27 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17 + 6) = 0x30;
          }
          if (uVar24 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17 + 8) = 0x30;
          }
          if (uVar25 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17 + 10) = 0x30;
          }
          if (uVar22 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17 + 0xc) = 0x30;
          }
          if (uVar23 <= uVar16) {
            *(undefined2 *)((long)puVar8 + lVar17 + 0xe) = 0x30;
          }
          uVar24 = uVar24 + 8;
          uVar25 = uVar25 + 8;
          uVar26 = uVar26 + 8;
          uVar27 = uVar27 + 8;
          lVar17 = lVar17 + 0x10;
          uVar28 = uVar28 + 8;
          uVar29 = uVar29 + 8;
          uVar22 = uVar22 + 8;
          uVar23 = uVar23 + 8;
        } while ((ulong)(param_2 + 7 >> 3) << 4 != lVar17);
      }
      puVar8[(int)param_2] = 0;
    }
    else {
      local_b0 = 0x25;
      local_ac = 0;
      *(undefined1 *)((ulong)&local_b0 | 1) = 0x2e;
      *(undefined1 *)((ulong)&local_b0 | 2) = 0x34;
      *(undefined1 *)((ulong)&local_b0 | 3) = 0x30;
      *(undefined1 *)((ulong)&local_b0 | 4) = 0x65;
      *(undefined1 *)((ulong)&local_b0 | 5) = 0;
      if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar7 = thunk_FUN_03f61eb4(param_1,&local_b0,local_a0,0x32,0);
      iVar13 = iVar7;
      do {
        iVar2 = iVar13;
        iVar13 = iVar2 + -1;
        bVar6 = 0 < iVar13;
        if (local_a0[iVar13] == 0x65) break;
      } while (0 < iVar13);
      bVar4 = local_a0[iVar2];
      iVar3 = iVar2 + 1;
      iVar19 = -1;
      if (bVar4 != 0x2d) {
        iVar3 = iVar2;
        iVar19 = 1;
      }
      iVar2 = iVar2 + 1;
      if (bVar4 != 0x2b) {
        iVar2 = iVar3;
      }
      iVar3 = 1;
      if (bVar4 != 0x2b) {
        iVar3 = iVar19;
      }
      if (iVar2 < iVar7) {
        iVar19 = 0;
        lVar17 = (long)iVar7 - (long)iVar2;
        pbVar14 = local_a0 + iVar2;
        do {
          lVar17 = lVar17 + -1;
          iVar19 = (uint)*pbVar14 + iVar19 * 10 + -0x30;
          pbVar14 = pbVar14 + 1;
        } while (lVar17 != 0);
      }
      else {
        iVar19 = 0;
      }
      iVar7 = 0;
      lVar17 = 0;
      param_3[1] = iVar19 * iVar3 + 1;
      if ((0 < iVar13) && (0 < (int)param_2)) {
        lVar17 = 0;
        iVar7 = 0;
        do {
          bVar4 = local_a0[lVar17];
          if (0xfffffff5 < bVar4 - 0x3a) {
            puVar8[iVar7] = (ushort)bVar4;
            iVar7 = iVar7 + 1;
          }
          lVar17 = lVar17 + 1;
          bVar6 = lVar17 < iVar13;
        } while ((lVar17 < iVar13) && (iVar7 < (int)param_2));
      }
      lVar20 = (long)iVar7;
      lVar15 = lVar20;
      if (iVar7 < (int)param_2) {
        lVar15 = (long)(int)param_2;
        lVar21 = lVar15 - lVar20;
        puVar18 = puVar8 + lVar20;
        do {
          lVar21 = lVar21 + -1;
          *puVar18 = 0x30;
          puVar18 = puVar18 + 1;
        } while (lVar21 != 0);
      }
      puVar8[lVar15] = 0;
      if ((bVar6) && (0x34 < local_a0[lVar17])) {
        param_2 = param_2 - 1;
        uVar16 = (ulong)param_2;
        psVar11 = puVar8 + (int)param_2;
        sVar12 = *psVar11;
        bVar6 = sVar12 == 0x39;
        if ((bVar6) && (0 < (int)param_2)) {
          psVar10 = psVar11;
          uVar22 = (long)(int)param_2;
          psVar11 = puVar8 + (int)param_2;
          do {
            psVar11 = psVar11 + -1;
            *psVar10 = 0x30;
            uVar16 = uVar22 - 1;
            sVar12 = *psVar11;
            bVar6 = sVar12 == 0x39;
            if (!bVar6) break;
            bVar1 = 1 < (long)uVar22;
            psVar10 = psVar11;
            uVar22 = uVar16;
          } while (bVar1);
        }
        if (((int)uVar16 == 0) && (bVar6)) {
          *psVar11 = 0x31;
          param_3[1] = iVar19 * iVar3 + 2;
        }
        else {
          *psVar11 = sVar12 + 1;
        }
      }
    }
  }
  else {
    uVar9 = 0x7fffffff;
    if ((param_1 & 0x7fffffffffffffff) != 0x7ff0000000000000) {
      uVar9 = 0x80000000;
    }
    param_3[1] = uVar9;
    System_Number_NumberBuffer__set_sign(param_3,param_1 >> 0x3f,0);
    puVar8 = (undefined2 *)System_Number_NumberBuffer__get_digits(param_3,0);
    *puVar8 = 0;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

