// rea decompile_all
// name: System.Number$$NumberToDouble
// address: 0x75bb318
// body: available
// range: 0x75bb318-0x75bb807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75bb800 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75bb804 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Number__NumberToDouble(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ushort *puVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  uint local_44;
  
  if ((DAT_09521d7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188a70);
    DAT_09521d7b = 1;
  }
  local_44 = 0;
  puVar6 = (ushort *)System_Number_NumberBuffer__get_digits(param_1,0);
  iVar5 = System_String__wcslen(puVar6,0);
  uVar2 = *puVar6;
  iVar12 = iVar5;
  while (uVar2 == 0x30) {
    puVar6 = puVar6 + 1;
    iVar12 = iVar12 + -1;
    uVar2 = *puVar6;
  }
  if (iVar12 == 0) {
    uVar18 = 0;
  }
  else {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar9 = iVar12;
    if (8 < iVar12) {
      iVar9 = 9;
    }
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar12 = iVar12 - iVar9;
    uVar11 = (uint)*puVar6;
    puVar14 = puVar6;
    while( true ) {
      puVar14 = puVar14 + 1;
      if (puVar6 + iVar9 <= puVar14) break;
      uVar11 = (uint)*puVar14 + (uVar11 - 0x30) * 10;
    }
    uVar18 = (ulong)(uVar11 - 0x30);
    if (0 < iVar12) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar9 = iVar12;
      if (8 < iVar12) {
        iVar9 = 9;
      }
      if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(*(long *)(DAT_09188a70 + 0xb8) + 0x30);
      if (lVar8 == 0) goto LAB_075bb800;
      lVar10 = (long)iVar9 + -1;
      if (*(uint *)(lVar8 + 0x18) <= (uint)lVar10) goto LAB_075bb804;
      lVar13 = *(long *)(*(long *)(DAT_09188a70 + 0xb8) + 0x38);
      if (lVar13 == 0) goto LAB_075bb800;
      if (*(uint *)(lVar13 + 0x18) <= (uint)lVar10) goto LAB_075bb804;
      iVar12 = iVar12 - iVar9;
      uVar11 = (uint)puVar6[9];
      for (puVar14 = puVar6 + 10;
          puVar14 < (ushort *)((long)(puVar6 + 9) + (ulong)(uint)(iVar9 << 1));
          puVar14 = puVar14 + 1) {
        uVar11 = (uint)*puVar14 + (uVar11 - 0x30) * 10;
      }
      uVar18 = (*(ulong *)(lVar8 + lVar10 * 8 + 0x20) >>
                ((ulong)-(uint)*(byte *)(lVar13 + lVar10 + 0x20) & 0x3f) & 0xffffffff) * uVar18 +
               (ulong)(uVar11 - 0x30);
    }
    uVar11 = (iVar12 - iVar5) + *(int *)(param_1 + 4);
    if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar16 = -uVar11;
    if (-1 < (int)uVar11) {
      uVar16 = uVar11;
    }
    if ((int)uVar16 < 0x160) {
      bVar4 = uVar18 >> 0x20 != 0;
      uVar15 = uVar18 << 0x20;
      if (bVar4) {
        uVar15 = uVar18;
      }
      iVar12 = 0x20;
      if (bVar4) {
        iVar12 = 0x40;
      }
      iVar5 = iVar12 + -0x10;
      uVar18 = uVar15 << 0x10;
      if (uVar15 >> 0x30 != 0) {
        iVar5 = iVar12;
        uVar18 = uVar15;
      }
      iVar12 = iVar5 + -8;
      uVar15 = uVar18 << 8;
      if (uVar18 >> 0x38 != 0) {
        iVar12 = iVar5;
        uVar15 = uVar18;
      }
      iVar5 = iVar12 + -4;
      uVar18 = uVar15 << 4;
      if (uVar15 >> 0x3c != 0) {
        iVar5 = iVar12;
        uVar18 = uVar15;
      }
      iVar12 = iVar5 + -2;
      uVar15 = uVar18 << 2;
      if (uVar18 >> 0x3e != 0) {
        iVar12 = iVar5;
        uVar15 = uVar18;
      }
      uVar1 = (uint)(uVar15 >> 0x3f) ^ 1;
      uVar15 = uVar15 << uVar1;
      uVar1 = iVar12 - uVar1;
      local_44 = uVar1;
      if ((uVar16 & 0xf) != 0) {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = *(long *)(DAT_09188a70 + 0xb8);
        lVar10 = *(long *)(lVar8 + 0x38);
        if (lVar10 == 0) goto LAB_075bb800;
        uVar3 = (uVar16 & 0xf) - 1;
        if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_075bb804;
        iVar5 = (int)*(char *)(lVar10 + (ulong)uVar3 + 0x20);
        iVar12 = 1 - iVar5;
        if (-1 < (int)uVar11) {
          iVar12 = iVar5;
        }
        local_44 = iVar12 + uVar1;
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar8 = *(long *)(DAT_09188a70 + 0xb8);
        }
        lVar8 = *(long *)(lVar8 + 0x30);
        if (lVar8 == 0) goto LAB_075bb800;
        uVar3 = uVar3 + ((int)uVar11 >> 0x1f & 0xfU);
        if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_075bb804;
        uVar17 = *(undefined8 *)(lVar8 + (ulong)uVar3 * 8 + 0x20);
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = System_Number__Mul64Lossy(uVar15,uVar17,&local_44);
      }
      if (0xf < uVar16) {
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = *(long *)(DAT_09188a70 + 0xb8);
        lVar10 = *(long *)(lVar8 + 0x48);
        if (lVar10 == 0) {
LAB_075bb800:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar13 = (long)((int)uVar16 >> 4) + -1;
        uVar16 = (uint)lVar13;
        if (*(uint *)(lVar10 + 0x18) <= uVar16) {
LAB_075bb804:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        iVar5 = (int)*(short *)(lVar10 + lVar13 * 2 + 0x20);
        iVar12 = 1 - iVar5;
        if (-1 < (int)uVar11) {
          iVar12 = iVar5;
        }
        local_44 = iVar12 + local_44;
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar8 = *(long *)(DAT_09188a70 + 0xb8);
        }
        lVar8 = *(long *)(lVar8 + 0x40);
        if (lVar8 == 0) goto LAB_075bb800;
        uVar16 = uVar16 + ((int)uVar11 >> 0x1f & 0x15U);
        if (*(uint *)(lVar8 + 0x18) <= uVar16) goto LAB_075bb804;
        uVar17 = *(undefined8 *)(lVar8 + (long)(int)uVar16 * 8 + 0x20);
        if (*(int *)(DAT_09188a70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar15 = System_Number__Mul64Lossy(uVar15,uVar17,&local_44);
      }
      uVar11 = local_44;
      if ((((uint)uVar15 >> 10 & 1) != 0) &&
         (uVar18 = uVar15 + (uVar15 >> 0xb & 1) + 0x3ff, bVar4 = uVar18 < uVar15, uVar15 = uVar18,
         bVar4)) {
        uVar15 = uVar18 >> 1 | 0x8000000000000000;
        uVar11 = local_44 + 1;
      }
      local_44 = uVar11 + 0x3fe;
      if ((int)local_44 < 1) {
        if ((local_44 == 0xffffffcc) && (0x8000000000000057 < uVar15)) {
          uVar15 = 1;
        }
        else if ((int)local_44 < -0x33) {
          uVar15 = 0;
        }
        else {
          uVar15 = uVar15 >> ((ulong)(-uVar11 - 0x3f2) & 0x3f);
        }
      }
      else if (local_44 < 0x7ff) {
        uVar15 = uVar15 >> 0xb & 0xfffffffffffff | (ulong)local_44 << 0x34;
      }
      else {
        uVar15 = 0x7ff0000000000000;
      }
    }
    else {
      uVar15 = 0x7ff0000000000000;
      if ((int)uVar11 < 1) {
        uVar15 = 0;
      }
    }
    uVar7 = System_Number_NumberBuffer__get_sign(param_1,0);
    uVar18 = uVar15 | 0x8000000000000000;
    if ((uVar7 & 1) == 0) {
      uVar18 = uVar15;
    }
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar18;
  return auVar19;
}

