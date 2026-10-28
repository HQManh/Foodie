// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$LZ4_compressCtx_32
// address: 0x73afaa4
// body: available
// range: 0x73afaa4-0x73affd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73affcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73affd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int MessagePack_LZ4_LZ4Codec__LZ4_compressCtx_32
              (long param_1,uint *param_2,char *param_3,int param_4,int param_5)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint *puVar18;
  
  if ((DAT_09520bcc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    DAT_09520bcc = 1;
  }
  if (*(int *)(DAT_09187588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(DAT_09187588 + 0xb8) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  pcVar2 = param_3 + param_5;
  puVar14 = param_2;
  pcVar7 = param_3;
  if (0xc < param_4) {
    puVar18 = (uint *)((long)param_2 + (long)param_4 + -0xc);
    puVar10 = (uint *)((long)param_2 + 2);
    *(undefined4 *)(((ulong)(*param_2 * -0x61c8864f >> 0x14) & 0xffc) + param_1) = 0;
    if (puVar10 <= puVar18) {
LAB_073afbf8:
      iVar12 = 0x44;
      uVar15 = *(uint *)((long)puVar14 + 1);
      puVar13 = (uint *)((long)puVar14 + 1);
      while( true ) {
        puVar6 = puVar10;
        uVar17 = (ulong)(uVar15 * -0x61c8864f >> 0x14) & 0xffc;
        puVar10 = (uint *)((long)*(int *)(uVar17 + param_1) + (long)param_2);
        uVar15 = *puVar6;
        iVar16 = (int)param_2;
        *(int *)(uVar17 + param_1) = (int)puVar13 - iVar16;
        if (((uint *)((long)puVar13 - 0xffffU) <= puVar10) && (*puVar10 == *puVar13)) break;
        iVar16 = iVar12 >> 6;
        iVar12 = iVar12 + 1;
        puVar10 = (uint *)((long)puVar6 + (long)iVar16);
        puVar13 = puVar6;
        if (puVar18 < puVar10) goto LAB_073afb68;
      }
      if (puVar14 < puVar13) {
        while (param_2 < puVar10) {
          puVar6 = (uint *)((long)puVar13 + -1);
          puVar11 = (uint *)((long)puVar10 - 1);
          if ((*(char *)puVar6 != (char)*puVar11) ||
             (puVar13 = puVar6, puVar10 = puVar11, puVar6 <= puVar14)) break;
        }
      }
      puVar6 = (uint *)(pcVar7 + 1);
      iVar12 = (int)((long)puVar13 - (long)puVar14);
      if ((char *)((long)puVar6 + (long)(iVar12 >> 8) + (long)iVar12) <= pcVar2 + -8) {
        uVar15 = iVar12 - 0xf;
        pcVar8 = pcVar7;
        if (iVar12 < 0xf) {
          *pcVar7 = (char)(iVar12 << 4);
        }
        else {
          *pcVar7 = -0x10;
          if (0xfe < uVar15) {
            do {
              puVar11 = puVar6;
              uVar15 = uVar15 - 0xff;
              *(undefined1 *)puVar11 = 0xff;
              puVar6 = (uint *)((long)puVar11 + 1);
            } while (0xfe < uVar15);
            *(char *)((long)puVar11 + 1) = (char)uVar15;
            if (*(int *)(DAT_09187588 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            MessagePack_LZ4_LZ4Codec__BlockCopy32
                      (puVar14,(undefined2 *)((long)puVar11 + 2),
                       (long)puVar13 - (long)puVar14 & 0xffffffff);
            puVar11 = (uint *)((long)puVar11 + 2 + (long)iVar12);
            goto LAB_073afdc4;
          }
          puVar6 = (uint *)(pcVar7 + 2);
          pcVar7[1] = (char)uVar15;
        }
        puVar11 = (uint *)((long)iVar12 + (long)puVar6);
        do {
          *puVar6 = *puVar14;
          puVar1 = puVar14 + 1;
          puVar14 = puVar14 + 2;
          puVar6[1] = *puVar1;
          puVar6 = puVar6 + 2;
        } while (puVar6 < puVar11);
LAB_073afdc4:
        do {
          pcVar7 = (char *)((long)puVar11 + 2);
          *(short *)puVar11 = (short)puVar13 - (short)puVar10;
          puVar6 = puVar10 + 1;
          for (puVar14 = puVar13 + 1; puVar14 < (uint *)((long)param_2 + (long)param_4 + -8);
              puVar14 = puVar14 + 1) {
            uVar15 = *puVar14 ^ *puVar6;
            if (uVar15 != 0) {
              puVar14 = (uint *)((long)*(int *)(((ulong)((uVar15 & -uVar15) * 0x77cb531 >> 0x19) &
                                                0x7c) + lVar5 + 0x20) + (long)puVar14);
              goto LAB_073afe60;
            }
            puVar6 = puVar10 + 2;
            puVar10 = puVar10 + 1;
          }
          if ((puVar14 < (uint *)((long)param_2 + (long)param_4 + -6)) &&
             ((short)*puVar6 == (short)*puVar14)) {
            puVar14 = (uint *)((long)puVar14 + 2);
            puVar6 = (uint *)((long)puVar10 + 6);
          }
          if ((puVar14 < (uint *)((long)param_2 + (long)param_4 + -5)) &&
             ((char)*puVar6 == (char)*puVar14)) {
            puVar14 = (uint *)((long)puVar14 + 1);
          }
LAB_073afe60:
          iVar12 = (int)puVar14 - (int)(puVar13 + 1);
          if (pcVar2 + -6 < pcVar7 + (iVar12 >> 8)) break;
          uVar15 = iVar12 - 0xf;
          if (iVar12 < 0xf) {
            *pcVar8 = *pcVar8 + (char)iVar12;
          }
          else {
            *pcVar8 = *pcVar8 + '\x0f';
            for (; 0x1fd < uVar15; uVar15 = uVar15 - 0x1fe) {
              pcVar7[0] = -1;
              pcVar7[1] = -1;
              pcVar7 = pcVar7 + 2;
            }
            pcVar8 = pcVar7;
            if (0xfe < uVar15) {
              pcVar8 = pcVar7 + 1;
              *pcVar7 = -1;
              uVar15 = uVar15 - 0xff;
            }
            pcVar7 = pcVar8 + 1;
            *pcVar8 = (char)uVar15;
          }
          if (puVar18 < puVar14) goto LAB_073afb68;
          *(int *)(((ulong)((uint)(*(int *)((long)puVar14 + -2) * -0x61c8864f) >> 0x14) & 0xffc) +
                  param_1) = (int)(int *)((long)puVar14 + -2) - iVar16;
          uVar17 = (ulong)(*puVar14 * -0x61c8864f >> 0x14) & 0xffc;
          puVar10 = (uint *)((long)*(int *)(uVar17 + param_1) + (long)param_2);
          *(int *)(uVar17 + param_1) = (int)puVar14 - iVar16;
          if ((puVar10 <= puVar14 + -0x4000) || (*puVar10 != *puVar14)) goto LAB_073aff30;
          puVar11 = (uint *)(pcVar7 + 1);
          *pcVar7 = '\0';
          puVar13 = puVar14;
          pcVar8 = pcVar7;
        } while( true );
      }
      goto LAB_073afba0;
    }
  }
LAB_073afb68:
  uVar17 = (long)param_2 + ((long)param_4 - (long)puVar14);
  pcVar8 = pcVar7 + 1;
  uVar15 = (uint)uVar17;
  if (pcVar2 < pcVar8 + (long)((int)(uVar15 + 0xf0) / 0xff) + (long)(int)uVar15) {
LAB_073afba0:
    iVar12 = 0;
  }
  else {
    cVar9 = (char)uVar17 + -0xf;
    if ((int)uVar15 < 0xf) {
      *pcVar7 = (char)(uVar15 << 4);
      pcVar7 = pcVar8;
    }
    else {
      *pcVar7 = -0x10;
      uVar3 = uVar15 + 0xf0;
      if (0x10d < uVar15) {
        do {
          uVar4 = uVar3;
          uVar3 = uVar4 - 0xff;
          *pcVar8 = -1;
          pcVar8 = pcVar7 + 2;
          pcVar7 = pcVar7 + 1;
        } while (0x1fd < uVar3);
        cVar9 = (char)uVar4 + '\x02';
      }
      pcVar7 = pcVar7 + 2;
      *pcVar8 = cVar9;
    }
    if (*(int *)(DAT_09187588 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MessagePack_LZ4_LZ4Codec__BlockCopy32(puVar14,pcVar7,uVar17 & 0xffffffff);
    iVar12 = (uVar15 - (int)param_3) + (int)pcVar7;
  }
  return iVar12;
LAB_073aff30:
  puVar10 = (uint *)((long)puVar14 + 2);
  if (puVar18 < puVar10) goto LAB_073afb68;
  goto LAB_073afbf8;
}

