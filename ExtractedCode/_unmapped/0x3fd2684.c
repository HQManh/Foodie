// rea decompile_all
// name: FUN_03fd2684
// address: 0x3fd2684
// body: available
// range: 0x3fd2684-0x3fd2cf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fd2684(ulong *param_1,long param_2,ulong *param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong local_e0 [16];
  
  uVar3 = DAT_097485f8;
  uVar2 = DAT_09515698;
  DAT_0974875c = 1;
  local_e0[1] = 0;
  local_e0[0] = 0;
  local_e0[3] = 0;
  local_e0[2] = 0;
  local_e0[5] = 0;
  local_e0[4] = 0;
  local_e0[7] = 0;
  local_e0[6] = 0;
  local_e0[9] = 0;
  local_e0[8] = 0;
  local_e0[0xb] = 0;
  local_e0[10] = 0;
  local_e0[0xd] = 0;
  local_e0[0xc] = 0;
  local_e0[0xf] = 0;
  local_e0[0xe] = 0;
  if ((long)param_1 - param_2 < 0) {
    DAT_0974875c = 1;
    return param_1;
  }
  uVar15 = 0x1000;
LAB_03fd26ec:
  puVar8 = (ulong *)*param_1;
  uVar5 = param_1[1];
  do {
    if ((uVar5 & 0xfffffffffffffc03) == 0) {
      param_1 = param_1 + -2;
      if (uVar5 < 8) goto LAB_03fd2a5c;
      puVar4 = (ulong *)((long)puVar8 + uVar5);
LAB_03fd2950:
      uVar15 = (long)puVar8 + (uVar15 - (long)puVar4);
      puVar4 = puVar4 + -3;
      goto LAB_03fd295c;
    }
    uVar11 = uVar5 & 3;
    if (uVar11 != 3) {
      if (uVar11 == 2) {
        uVar15 = uVar15 - 100;
        param_1 = (ulong *)(**(code **)(&DAT_09535c98 + (uVar5 >> 2 & 0x3f) * 8))
                                     (puVar8,param_1 + -2,param_3,uVar5 >> 8);
        goto LAB_03fd2a5c;
      }
      if (uVar11 != 1) {
        puVar4 = puVar8 + 0x7f;
        *param_1 = (ulong)puVar4;
        param_1[1] = uVar5 - 0x3f8;
        goto LAB_03fd2950;
      }
      uVar5 = uVar5 & 0xfffffffffffffffc;
      param_1 = param_1 + -2;
      uVar15 = uVar15 - 0x100;
      goto joined_r0x03fd2750;
    }
    if ((long)uVar5 < 0) {
      if (*puVar8 == 0) break;
      puVar4 = (ulong *)((*puVar8 - uVar5) + -0xd);
    }
    else {
      puVar4 = (ulong *)((long)puVar8 + (uVar5 - 3));
    }
    uVar5 = *puVar4;
  } while (uVar5 != 0);
  param_1 = param_1 + -2;
  goto LAB_03fd2a5c;
  while( true ) {
    uVar5 = puVar4[1];
    if ((uVar2 <= uVar5) && (uVar5 < uVar3)) goto LAB_03fd29a8;
    bVar1 = puVar4 < puVar8;
    puVar4 = puVar4 + -2;
    if (bVar1) break;
LAB_03fd295c:
    Hint_Prefetch(puVar4 + -0xe,0,0,1);
    uVar5 = puVar4[2];
    if ((uVar2 <= uVar5) && (uVar5 < uVar3)) {
      puVar4 = puVar4 + 1;
LAB_03fd29a8:
      Hint_Prefetch(uVar5,0,0,1);
      goto joined_r0x03fd29b0;
    }
    if (puVar4 + 1 < puVar8) break;
  }
  goto LAB_03fd2a5c;
joined_r0x03fd29b0:
  if (puVar4 < puVar8) goto LAB_03fd29b4;
  uVar11 = *puVar8;
  Hint_Prefetch(puVar8 + 0x10,0,0,1);
  if ((uVar2 <= uVar11) && (uVar11 < uVar3)) {
    uVar6 = uVar11 >> 0xc & 7;
    Hint_Prefetch(uVar11,0,0,1);
    if (local_e0[uVar6 * 2] == uVar11 >> 0xc) {
      uVar6 = local_e0[uVar6 * 2 + 1];
    }
    else {
      uVar6 = FUN_03fcc55c(uVar11);
      if (uVar6 == 0) goto LAB_03fd2b34;
    }
    uVar7 = uVar11 >> 4 & 0xff;
    uVar10 = (ulong)*(ushort *)(*(long *)(uVar6 + 0x30) + uVar7 * 2);
    if ((uVar11 & 0xf) != 0 || uVar10 != 0) {
      if ((*(byte *)(uVar6 + 0x19) >> 5 & 1) == 0) {
        uVar12 = uVar11 & 0xf | uVar10 << 4;
        if ((&DAT_0953b0c8)[uVar12] == '\0') {
LAB_03fd2bc0:
          if (DAT_09515628 == 0) {
            FUN_03fcb678(uVar11);
          }
          else {
            FUN_03fcb724(uVar11);
          }
          goto LAB_03fd2b34;
        }
        uVar7 = uVar7 - uVar10;
        uVar11 = uVar11 - uVar12;
      }
      else {
        if ((uVar11 - *(ulong *)(uVar6 + 0x10) == (uVar11 & 0xfff)) &&
           ((&DAT_0953b0c8)[uVar11 & 0xfff] == '\0')) goto LAB_03fd2bc0;
        uVar7 = 0;
        uVar11 = *(ulong *)(uVar6 + 0x10);
      }
    }
    uVar10 = 1L << (uVar7 & 0x3f);
    uVar12 = *(ulong *)(uVar6 + 0x40 + (uVar7 >> 6) * 8);
    if ((uVar10 & uVar12) == 0) {
      lVar13 = *(long *)(uVar6 + 0x38);
      uVar14 = *(ulong *)(uVar6 + 0x28);
      *(ulong *)(uVar6 + 0x40 + (uVar7 >> 6) * 8) = uVar10 | uVar12;
      *(long *)(uVar6 + 0x38) = lVar13 + 1;
      if (uVar14 != 0) {
        puVar9 = param_1 + 2;
        if (param_3 <= puVar9) {
          DAT_09748728 = 5;
          DAT_09748758 = 1;
          if (DAT_09535be0 != 0) {
            FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
          }
          puVar9 = param_1 + -0x3fe;
        }
        *puVar9 = uVar11;
        puVar9[1] = uVar14;
        param_1 = puVar9;
      }
    }
  }
LAB_03fd2b34:
  puVar8 = puVar8 + 1;
  goto joined_r0x03fd29b0;
LAB_03fd29b4:
  uVar11 = uVar5 >> 0xc & 7;
  if (local_e0[uVar11 * 2] == uVar5 >> 0xc) {
    uVar11 = local_e0[uVar11 * 2 + 1];
  }
  else {
    uVar11 = FUN_03fcc55c(uVar5);
    if (uVar11 == 0) goto LAB_03fd2a5c;
  }
  uVar6 = uVar5 >> 4 & 0xff;
  uVar7 = (ulong)*(ushort *)(*(long *)(uVar11 + 0x30) + uVar6 * 2);
  if ((uVar5 & 0xf) != 0 || uVar7 != 0) {
    if ((*(byte *)(uVar11 + 0x19) >> 5 & 1) == 0) {
      uVar10 = uVar5 & 0xf | uVar7 << 4;
      if ((&DAT_0953b0c8)[uVar10] == '\0') {
LAB_03fd2c88:
        if (DAT_09515628 == 0) {
          FUN_03fcb678(uVar5);
        }
        else {
          FUN_03fcb724(uVar5);
        }
        goto LAB_03fd2a5c;
      }
      uVar6 = uVar6 - uVar7;
      uVar5 = uVar5 - uVar10;
    }
    else {
      if ((uVar5 - *(ulong *)(uVar11 + 0x10) == (uVar5 & 0xfff)) &&
         ((&DAT_0953b0c8)[uVar5 & 0xfff] == '\0')) goto LAB_03fd2c88;
      uVar6 = 0;
      uVar5 = *(ulong *)(uVar11 + 0x10);
    }
  }
  uVar7 = 1L << (uVar6 & 0x3f);
  uVar10 = *(ulong *)(uVar11 + 0x40 + (uVar6 >> 6) * 8);
  if ((uVar10 & uVar7) == 0) {
    lVar13 = *(long *)(uVar11 + 0x38);
    uVar12 = *(ulong *)(uVar11 + 0x28);
    *(ulong *)(uVar11 + 0x40 + (uVar6 >> 6) * 8) = uVar10 | uVar7;
    *(long *)(uVar11 + 0x38) = lVar13 + 1;
    if (uVar12 != 0) {
      puVar8 = param_1 + 2;
      if (param_3 <= puVar8) {
        DAT_09748728 = 5;
        DAT_09748758 = 1;
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
        }
        puVar8 = param_1 + -0x3fe;
      }
      *puVar8 = uVar5;
      puVar8[1] = uVar12;
      param_1 = puVar8;
    }
  }
LAB_03fd2a5c:
  if ((long)((long)param_1 - param_2 | uVar15) < 0) {
    return param_1;
  }
  goto LAB_03fd26ec;
joined_r0x03fd2750:
  if (uVar5 == 0) goto LAB_03fd2a5c;
  if ((((long)uVar5 < 0) && (uVar11 = *puVar8, uVar2 <= uVar11)) && (uVar11 < uVar3)) {
    uVar6 = uVar11 >> 0xc & 7;
    Hint_Prefetch(uVar11,0,0,1);
    if (local_e0[uVar6 * 2] == uVar11 >> 0xc) {
      uVar6 = local_e0[uVar6 * 2 + 1];
    }
    else {
      uVar6 = FUN_03fcc55c(uVar11);
      if (uVar6 == 0) goto LAB_03fd2758;
    }
    uVar7 = uVar11 >> 4 & 0xff;
    uVar10 = (ulong)*(ushort *)(*(long *)(uVar6 + 0x30) + uVar7 * 2);
    if ((uVar11 & 0xf) != 0 || uVar10 != 0) {
      if ((*(byte *)(uVar6 + 0x19) >> 5 & 1) == 0) {
        uVar12 = uVar11 & 0xf | uVar10 << 4;
        if ((&DAT_0953b0c8)[uVar12] == '\0') {
LAB_03fd28a8:
          if (DAT_09515628 == 0) {
            FUN_03fcb678(uVar11);
          }
          else {
            FUN_03fcb724(uVar11);
          }
          goto LAB_03fd2758;
        }
        uVar7 = uVar7 - uVar10;
        uVar11 = uVar11 - uVar12;
      }
      else {
        if ((uVar11 - *(ulong *)(uVar6 + 0x10) == (uVar11 & 0xfff)) &&
           ((&DAT_0953b0c8)[uVar11 & 0xfff] == '\0')) goto LAB_03fd28a8;
        uVar7 = 0;
        uVar11 = *(ulong *)(uVar6 + 0x10);
      }
    }
    uVar10 = 1L << (uVar7 & 0x3f);
    uVar12 = *(ulong *)(uVar6 + 0x40 + (uVar7 >> 6) * 8);
    if ((uVar10 & uVar12) == 0) {
      lVar13 = *(long *)(uVar6 + 0x38);
      uVar14 = *(ulong *)(uVar6 + 0x28);
      *(ulong *)(uVar6 + 0x40 + (uVar7 >> 6) * 8) = uVar10 | uVar12;
      *(long *)(uVar6 + 0x38) = lVar13 + 1;
      if (uVar14 != 0) {
        puVar4 = param_1 + 2;
        if (param_3 <= puVar4) {
          DAT_09748728 = 5;
          DAT_09748758 = 1;
          if (DAT_09535be0 != 0) {
            FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
          }
          puVar4 = param_1 + -0x3fe;
        }
        *puVar4 = uVar11;
        puVar4[1] = uVar14;
        param_1 = puVar4;
      }
    }
  }
LAB_03fd2758:
  uVar5 = uVar5 << 1;
  puVar8 = puVar8 + 1;
  goto joined_r0x03fd2750;
}

