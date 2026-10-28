// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$LZ4_compressCtx_64
// address: 0x73affd4
// body: available
// range: 0x73affd4-0x73b0547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b0540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b0544 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int MessagePack_LZ4_LZ4Codec__LZ4_compressCtx_64
              (long param_1,ulong *param_2,short *param_3,int param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  short *psVar6;
  short *psVar7;
  char cVar8;
  ulong *puVar9;
  ulong *puVar10;
  int iVar11;
  ulong *puVar12;
  ulong *puVar13;
  int iVar14;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  
  if ((DAT_09520bd0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    DAT_09520bd0 = 1;
  }
  if (*(int *)(DAT_09187588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09187588 + 0xb8) + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  pcVar1 = (char *)((long)param_3 + (long)param_5);
  puVar19 = param_2;
  psVar6 = param_3;
  if (0xc < param_4) {
    puVar20 = (ulong *)((long)param_2 + (long)param_4 + -0xc);
    puVar9 = (ulong *)((long)param_2 + 2);
    *(undefined4 *)(((ulong)((uint)((int)*param_2 * -0x61c8864f) >> 0x14) & 0xffc) + param_1) = 0;
    if (puVar9 <= puVar20) {
LAB_073b0128:
      iVar11 = 0x44;
      iVar14 = *(int *)((long)puVar19 + 1);
      puVar12 = (ulong *)((long)puVar19 + 1);
      while( true ) {
        puVar5 = puVar9;
        uVar18 = (ulong)((uint)(iVar14 * -0x61c8864f) >> 0x14) & 0xffc;
        puVar9 = (ulong *)((long)*(int *)(uVar18 + param_1) + (long)param_2);
        iVar14 = (int)*puVar5;
        iVar17 = (int)param_2;
        *(int *)(uVar18 + param_1) = (int)puVar12 - iVar17;
        if (((ulong *)((long)puVar12 - 0xffffU) <= puVar9) && ((int)*puVar9 == (int)*puVar12))
        break;
        iVar17 = iVar11 >> 6;
        iVar11 = iVar11 + 1;
        puVar9 = (ulong *)((long)puVar5 + (long)iVar17);
        puVar12 = puVar5;
        if (puVar20 < puVar9) goto LAB_073b0098;
      }
      if (puVar19 < puVar12) {
        while (param_2 < puVar9) {
          puVar5 = (ulong *)((long)puVar12 + -1);
          puVar10 = (ulong *)((long)puVar9 - 1);
          if ((*(char *)puVar5 != (char)*puVar10) ||
             (puVar9 = puVar10, puVar12 = puVar5, puVar5 <= puVar19)) break;
        }
      }
      puVar5 = (ulong *)((long)psVar6 + 1);
      iVar11 = (int)((long)puVar12 - (long)puVar19);
      if ((char *)((long)puVar5 + (long)(iVar11 >> 8) + (long)iVar11) <= pcVar1 + -8) {
        uVar16 = iVar11 - 0xf;
        psVar7 = psVar6;
        if (iVar11 < 0xf) {
          *(char *)psVar6 = (char)(iVar11 << 4);
        }
        else {
          *(char *)psVar6 = -0x10;
          if (0xfe < uVar16) {
            do {
              puVar10 = puVar5;
              uVar16 = uVar16 - 0xff;
              *(char *)puVar10 = -1;
              puVar5 = (ulong *)((long)puVar10 + 1);
            } while (0xfe < uVar16);
            *(char *)((long)puVar10 + 1) = (char)uVar16;
            if (*(int *)(DAT_09187588 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_LZ4_LZ4Codec__BlockCopy64
                      (puVar19,(short *)((long)puVar10 + 2),
                       (long)puVar12 - (long)puVar19 & 0xffffffff);
            puVar10 = (ulong *)((long)puVar10 + 2 + (long)iVar11);
            goto LAB_073b02f0;
          }
          puVar5 = (ulong *)(psVar6 + 1);
          *(char *)((long)psVar6 + 1) = (char)uVar16;
        }
        puVar10 = (ulong *)((long)iVar11 + (long)puVar5);
        do {
          puVar13 = puVar5 + 1;
          *puVar5 = *puVar19;
          puVar5 = puVar13;
          puVar19 = puVar19 + 1;
        } while (puVar13 < puVar10);
LAB_073b02f0:
        do {
          puVar5 = (ulong *)((long)puVar12 + 4);
          puVar13 = (ulong *)((long)puVar9 + 4);
          psVar6 = (short *)((long)puVar10 + 2);
          *(short *)puVar10 = (short)puVar12 - (short)puVar9;
          puVar19 = puVar5;
          if (puVar5 < puVar20) {
            puVar10 = puVar13;
            puVar12 = (ulong *)((long)puVar12 + 0xc);
            puVar9 = (ulong *)((long)puVar9 + 0xc);
            puVar15 = puVar5;
            do {
              puVar13 = puVar9;
              puVar19 = puVar12;
              uVar18 = *puVar15 ^ *puVar10;
              if (uVar18 != 0) {
                puVar19 = (ulong *)((long)puVar19 +
                                   (long)*(int *)(((uVar18 & -uVar18) * 0x218a392cdabbd3f >> 0x38 &
                                                  0xfc) + lVar4 + 0x20) + -8);
                goto LAB_073b03dc;
              }
              puVar10 = puVar13;
              puVar12 = puVar19 + 1;
              puVar9 = puVar13 + 1;
              puVar15 = puVar19;
            } while (puVar19 < puVar20);
          }
          if ((puVar19 < (ulong *)((long)param_2 + (long)param_4 + -8)) &&
             ((int)*puVar13 == (int)*puVar19)) {
            puVar19 = (ulong *)((long)puVar19 + 4);
            puVar13 = (ulong *)((long)puVar13 + 4);
          }
          if ((puVar19 < (ulong *)((long)param_2 + (long)param_4 + -6)) &&
             ((short)*puVar13 == (short)*puVar19)) {
            puVar19 = (ulong *)((long)puVar19 + 2);
            puVar13 = (ulong *)((long)puVar13 + 2);
          }
          if ((puVar19 < (ulong *)((long)param_2 + (long)param_4 + -5)) &&
             ((char)*puVar13 == (char)*puVar19)) {
            puVar19 = (ulong *)((long)puVar19 + 1);
          }
LAB_073b03dc:
          iVar11 = (int)puVar19 - (int)puVar5;
          if (pcVar1 + -6 < (char *)((long)psVar6 + (long)(iVar11 >> 8))) break;
          uVar16 = iVar11 - 0xf;
          if (iVar11 < 0xf) {
            *(char *)psVar7 = (char)*psVar7 + (char)iVar11;
          }
          else {
            *(char *)psVar7 = (char)*psVar7 + '\x0f';
            for (; 0x1fd < uVar16; uVar16 = uVar16 - 0x1fe) {
              *psVar6 = -1;
              psVar6 = psVar6 + 1;
            }
            psVar7 = psVar6;
            if (0xfe < uVar16) {
              psVar7 = (short *)((long)psVar6 + 1);
              *(char *)psVar6 = -1;
              uVar16 = uVar16 - 0xff;
            }
            psVar6 = (short *)((long)psVar7 + 1);
            *(char *)psVar7 = (char)uVar16;
          }
          if (puVar20 < puVar19) goto LAB_073b0098;
          *(int *)(((ulong)((uint)(*(int *)((long)puVar19 + -2) * -0x61c8864f) >> 0x14) & 0xffc) +
                  param_1) = (int)(int *)((long)puVar19 + -2) - iVar17;
          uVar18 = (ulong)((uint)((int)*puVar19 * -0x61c8864f) >> 0x14) & 0xffc;
          puVar9 = (ulong *)((long)*(int *)(uVar18 + param_1) + (long)param_2);
          *(int *)(uVar18 + param_1) = (int)puVar19 - iVar17;
          if ((puVar9 <= puVar19 + -0x2000) || ((int)*puVar9 != (int)*puVar19)) goto LAB_073b04ac;
          puVar10 = (ulong *)((long)psVar6 + 1);
          *(char *)psVar6 = '\0';
          puVar12 = puVar19;
          psVar7 = psVar6;
        } while( true );
      }
      goto LAB_073b00d0;
    }
  }
LAB_073b0098:
  uVar18 = (long)param_2 + ((long)param_4 - (long)puVar19);
  psVar7 = (short *)((long)psVar6 + 1);
  uVar16 = (uint)uVar18;
  if (pcVar1 < (char *)((long)psVar7 + (long)((int)(uVar16 + 0xf0) / 0xff) + (long)(int)uVar16)) {
LAB_073b00d0:
    iVar11 = 0;
  }
  else {
    cVar8 = (char)uVar18 + -0xf;
    if ((int)uVar16 < 0xf) {
      *(char *)psVar6 = (char)(uVar16 << 4);
      psVar6 = psVar7;
    }
    else {
      *(char *)psVar6 = -0x10;
      uVar2 = uVar16 + 0xf0;
      if (0x10d < uVar16) {
        do {
          uVar3 = uVar2;
          uVar2 = uVar3 - 0xff;
          *(char *)psVar7 = -1;
          psVar7 = psVar6 + 1;
          psVar6 = (short *)((long)psVar6 + 1);
        } while (0x1fd < uVar2);
        cVar8 = (char)uVar3 + '\x02';
      }
      psVar6 = psVar6 + 1;
      *(char *)psVar7 = cVar8;
    }
    if (*(int *)(DAT_09187588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_LZ4_LZ4Codec__BlockCopy64(puVar19,psVar6,uVar18 & 0xffffffff);
    iVar11 = (uVar16 - (int)param_3) + (int)psVar6;
  }
  return iVar11;
LAB_073b04ac:
  puVar9 = (ulong *)((long)puVar19 + 2);
  if (puVar20 < puVar9) goto LAB_073b0098;
  goto LAB_073b0128;
}

