// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$LZ4_compress64kCtx_64
// address: 0x73af488
// body: available
// range: 0x73af488-0x73af9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73af9bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73af9c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int MessagePack_LZ4_LZ4Codec__LZ4_compress64kCtx_64
              (long param_1,ulong *param_2,short *param_3,int param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  short *psVar9;
  short *psVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  int iVar14;
  int iVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  
  if ((DAT_09520bd1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    DAT_09520bd1 = 1;
  }
  if (*(int *)(DAT_09187588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(DAT_09187588 + 0xb8) + 0x18);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  pcVar1 = (char *)((long)param_3 + (long)param_5);
  puVar20 = param_2;
  psVar9 = param_3;
  if (param_4 < 0xd) {
LAB_073af8e0:
    uVar19 = (long)param_2 + ((long)param_4 - (long)puVar20);
    psVar10 = (short *)((long)psVar9 + 1);
    iVar15 = (int)uVar19;
    if ((char *)((long)psVar10 + (long)((int)(iVar15 + 0xf0U) / 0xff) + (long)iVar15) <= pcVar1) {
      if (iVar15 < 0xf) {
        *(char *)psVar9 = (char)(iVar15 << 4);
        psVar9 = psVar10;
      }
      else {
        uVar5 = iVar15 - 0xf;
        *(char *)psVar9 = -0x10;
        uVar2 = iVar15 + 0xf0U;
        if (0xfe < uVar5) {
          do {
            uVar5 = uVar2;
            uVar2 = uVar5 - 0xff;
            *(char *)psVar10 = -1;
            psVar10 = psVar9 + 1;
            psVar9 = (short *)((long)psVar9 + 1);
          } while (0x1fd < uVar2);
          uVar5 = uVar5 - 0x1fe;
        }
        psVar9 = psVar9 + 1;
        *(char *)psVar10 = (char)uVar5;
      }
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_LZ4_LZ4Codec__BlockCopy64(puVar20,psVar9,uVar19 & 0xffffffff);
      return (iVar15 - (int)param_3) + (int)psVar9;
    }
  }
  else {
    puVar21 = (ulong *)((long)param_2 + (long)param_4 + -0xc);
LAB_073af570:
    iVar15 = 0x43;
    puVar8 = (ulong *)((long)puVar20 + 1);
    iVar14 = *(int *)((long)puVar20 + 1);
    do {
      puVar7 = puVar8;
      puVar8 = (ulong *)((long)puVar7 + (long)(iVar15 >> 6));
      if (puVar21 < puVar8) goto LAB_073af8e0;
      uVar19 = *puVar8;
      iVar15 = iVar15 + 1;
      uVar17 = (ulong)((uint)(iVar14 * -0x61c8864f) >> 0x14) & 0xffe;
      puVar12 = (ulong *)((ulong)*(ushort *)(uVar17 + param_1) + (long)param_2);
      bVar4 = (int)*puVar12 != iVar14;
      sVar3 = (short)param_2;
      *(short *)(uVar17 + param_1) = (short)puVar7 - sVar3;
      iVar14 = (int)uVar19;
    } while (bVar4);
    if ((puVar20 < puVar7) && (param_2 < puVar12)) {
      while( true ) {
        puVar8 = (ulong *)((long)puVar7 + -1);
        puVar13 = (ulong *)((long)puVar12 - 1);
        if (*(char *)puVar8 != (char)*puVar13) break;
        puVar7 = puVar8;
        puVar12 = puVar13;
        if ((puVar8 <= puVar20) || (puVar13 <= param_2)) break;
      }
    }
    puVar8 = (ulong *)((long)psVar9 + 1);
    iVar15 = (int)((long)puVar7 - (long)puVar20);
    if ((char *)((long)puVar8 + (long)(iVar15 >> 8) + (long)iVar15) <= pcVar1 + -8) {
      uVar5 = iVar15 - 0xf;
      psVar10 = psVar9;
      if (iVar15 < 0xf) {
        *(char *)psVar9 = (char)(iVar15 << 4);
      }
      else {
        *(char *)psVar9 = -0x10;
        if (0xfe < uVar5) {
          do {
            puVar13 = puVar8;
            uVar5 = uVar5 - 0xff;
            *(char *)puVar13 = -1;
            puVar8 = (ulong *)((long)puVar13 + 1);
          } while (0xfe < uVar5);
          *(char *)((long)puVar13 + 1) = (char)uVar5;
          if (*(int *)(DAT_09187588 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_LZ4_LZ4Codec__BlockCopy64
                    (puVar20,(short *)((long)puVar13 + 2),(long)puVar7 - (long)puVar20 & 0xffffffff)
          ;
          puVar13 = (ulong *)((long)puVar13 + 2 + (long)iVar15);
          goto LAB_073af728;
        }
        puVar8 = (ulong *)(psVar9 + 1);
        *(char *)((long)psVar9 + 1) = (char)uVar5;
      }
      puVar13 = (ulong *)((long)iVar15 + (long)puVar8);
      do {
        puVar16 = puVar8 + 1;
        *puVar8 = *puVar20;
        puVar8 = puVar16;
        puVar20 = puVar20 + 1;
      } while (puVar16 < puVar13);
LAB_073af728:
      do {
        puVar8 = (ulong *)((long)puVar7 + 4);
        puVar16 = (ulong *)((long)puVar12 + 4);
        psVar9 = (short *)((long)puVar13 + 2);
        *(short *)puVar13 = (short)puVar7 - (short)puVar12;
        puVar20 = puVar8;
        if (puVar8 < puVar21) {
          puVar13 = puVar16;
          puVar7 = (ulong *)((long)puVar7 + 0xc);
          puVar12 = (ulong *)((long)puVar12 + 0xc);
          puVar18 = puVar8;
          do {
            puVar16 = puVar12;
            puVar20 = puVar7;
            uVar19 = *puVar18 ^ *puVar13;
            if (uVar19 != 0) {
              puVar20 = (ulong *)((long)puVar20 +
                                 (long)*(int *)(((uVar19 & -uVar19) * 0x218a392cdabbd3f >> 0x38 &
                                                0xfc) + lVar6 + 0x20) + -8);
              goto LAB_073af814;
            }
            puVar13 = puVar16;
            puVar7 = puVar20 + 1;
            puVar12 = puVar16 + 1;
            puVar18 = puVar20;
          } while (puVar20 < puVar21);
        }
        if ((puVar20 < (ulong *)((long)param_2 + (long)param_4 + -8)) &&
           ((int)*puVar16 == (int)*puVar20)) {
          puVar20 = (ulong *)((long)puVar20 + 4);
          puVar16 = (ulong *)((long)puVar16 + 4);
        }
        if ((puVar20 < (ulong *)((long)param_2 + (long)param_4 + -6)) &&
           ((short)*puVar16 == (short)*puVar20)) {
          puVar20 = (ulong *)((long)puVar20 + 2);
          puVar16 = (ulong *)((long)puVar16 + 2);
        }
        if ((puVar20 < (ulong *)((long)param_2 + (long)param_4 + -5)) &&
           ((char)*puVar16 == (char)*puVar20)) {
          puVar20 = (ulong *)((long)puVar20 + 1);
        }
LAB_073af814:
        iVar15 = (int)puVar20 - (int)puVar8;
        if (pcVar1 + -6 < (char *)((long)psVar9 + (long)(iVar15 >> 8))) {
          return 0;
        }
        uVar5 = iVar15 - 0xf;
        if (iVar15 < 0xf) {
          *(char *)psVar10 = (char)*psVar10 + (char)iVar15;
        }
        else {
          *(char *)psVar10 = (char)*psVar10 + '\x0f';
          for (; 0x1fd < uVar5; uVar5 = uVar5 - 0x1fe) {
            *psVar9 = -1;
            psVar9 = psVar9 + 1;
          }
          psVar10 = psVar9;
          if (0xfe < uVar5) {
            psVar10 = (short *)((long)psVar9 + 1);
            *(char *)psVar9 = -1;
            uVar5 = uVar5 - 0xff;
          }
          psVar9 = (short *)((long)psVar10 + 1);
          *(char *)psVar10 = (char)uVar5;
        }
        if (puVar21 < puVar20) goto LAB_073af8e0;
        uVar19 = *puVar20;
        *(short *)(((ulong)((uint)(*(int *)((long)puVar20 + -2) * -0x61c8864f) >> 0x14) & 0xffe) +
                  param_1) = (short)(int *)((long)puVar20 + -2) - sVar3;
        uVar11 = (ulong)((uint)((int)uVar19 * -0x61c8864f) >> 0x14) & 0xffe;
        puVar12 = (ulong *)((ulong)*(ushort *)(uVar11 + param_1) + (long)param_2);
        uVar17 = *puVar12;
        *(short *)(uVar11 + param_1) = (short)puVar20 - sVar3;
        if ((int)uVar17 != (int)uVar19) goto LAB_073af570;
        puVar13 = (ulong *)((long)psVar9 + 1);
        *(char *)psVar9 = '\0';
        puVar7 = puVar20;
        psVar10 = psVar9;
      } while( true );
    }
  }
  return 0;
}

