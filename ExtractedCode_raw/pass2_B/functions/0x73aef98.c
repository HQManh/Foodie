// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$LZ4_compress64kCtx_32
// address: 0x73aef98
// body: available
// range: 0x73aef98-0x73af487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73af480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73af484 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int MessagePack_LZ4_LZ4Codec__LZ4_compress64kCtx_32
              (long param_1,uint *param_2,char *param_3,int param_4,int param_5)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  
  if ((DAT_09520bcd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    DAT_09520bcd = 1;
  }
  if (*(int *)(DAT_09187588 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(DAT_09187588 + 0xb8) + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  pcVar2 = param_3 + param_5;
  puVar16 = param_2;
  pcVar9 = param_3;
  if (param_4 < 0xd) {
LAB_073af3a4:
    uVar15 = (long)param_2 + ((long)param_4 - (long)puVar16);
    pcVar10 = pcVar9 + 1;
    iVar14 = (int)uVar15;
    if (pcVar10 + (long)((int)(iVar14 + 0xf0U) / 0xff) + (long)iVar14 <= pcVar2) {
      if (iVar14 < 0xf) {
        *pcVar9 = (char)(iVar14 << 4);
        pcVar9 = pcVar10;
      }
      else {
        uVar13 = iVar14 - 0xf;
        *pcVar9 = -0x10;
        uVar3 = iVar14 + 0xf0U;
        if (0xfe < uVar13) {
          do {
            uVar13 = uVar3;
            uVar3 = uVar13 - 0xff;
            *pcVar10 = -1;
            pcVar10 = pcVar9 + 2;
            pcVar9 = pcVar9 + 1;
          } while (0x1fd < uVar3);
          uVar13 = uVar13 - 0x1fe;
        }
        pcVar9 = pcVar9 + 2;
        *pcVar10 = (char)uVar13;
      }
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_LZ4_LZ4Codec__BlockCopy32(puVar16,pcVar9,uVar15 & 0xffffffff);
      return (iVar14 - (int)param_3) + (int)pcVar9;
    }
  }
  else {
    puVar17 = (uint *)((long)param_2 + (long)param_4 + -0xc);
LAB_073af078:
    iVar14 = 0x43;
    puVar8 = (uint *)((long)puVar16 + 1);
    uVar13 = *(uint *)((long)puVar16 + 1);
    do {
      puVar7 = puVar8;
      puVar8 = (uint *)((long)puVar7 + (long)(iVar14 >> 6));
      if (puVar17 < puVar8) goto LAB_073af3a4;
      uVar3 = *puVar8;
      iVar14 = iVar14 + 1;
      uVar15 = (ulong)(uVar13 * -0x61c8864f >> 0x14) & 0xffe;
      puVar11 = (uint *)((ulong)*(ushort *)(uVar15 + param_1) + (long)param_2);
      bVar5 = *puVar11 != uVar13;
      sVar4 = (short)param_2;
      *(short *)(uVar15 + param_1) = (short)puVar7 - sVar4;
      uVar13 = uVar3;
    } while (bVar5);
    if ((puVar16 < puVar7) && (param_2 < puVar11)) {
      while( true ) {
        puVar8 = (uint *)((long)puVar7 + -1);
        puVar12 = (uint *)((long)puVar11 - 1);
        if (*(char *)puVar8 != (char)*puVar12) break;
        puVar7 = puVar8;
        puVar11 = puVar12;
        if ((puVar8 <= puVar16) || (puVar12 <= param_2)) break;
      }
    }
    puVar8 = (uint *)(pcVar9 + 1);
    iVar14 = (int)((long)puVar7 - (long)puVar16);
    if ((char *)((long)puVar8 + (long)(iVar14 >> 8) + (long)iVar14) <= pcVar2 + -8) {
      uVar13 = iVar14 - 0xf;
      pcVar10 = pcVar9;
      if (iVar14 < 0xf) {
        *pcVar9 = (char)(iVar14 << 4);
      }
      else {
        *pcVar9 = -0x10;
        if (0xfe < uVar13) {
          do {
            puVar12 = puVar8;
            uVar13 = uVar13 - 0xff;
            *(undefined1 *)puVar12 = 0xff;
            puVar8 = (uint *)((long)puVar12 + 1);
          } while (0xfe < uVar13);
          *(char *)((long)puVar12 + 1) = (char)uVar13;
          if (*(int *)(DAT_09187588 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_LZ4_LZ4Codec__BlockCopy32
                    (puVar16,(undefined2 *)((long)puVar12 + 2),
                     (long)puVar7 - (long)puVar16 & 0xffffffff);
          puVar12 = (uint *)((long)puVar12 + 2 + (long)iVar14);
          goto LAB_073af23c;
        }
        puVar8 = (uint *)(pcVar9 + 2);
        pcVar9[1] = (char)uVar13;
      }
      puVar12 = (uint *)((long)iVar14 + (long)puVar8);
      do {
        *puVar8 = *puVar16;
        puVar1 = puVar16 + 1;
        puVar16 = puVar16 + 2;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 2;
      } while (puVar8 < puVar12);
LAB_073af23c:
      do {
        pcVar9 = (char *)((long)puVar12 + 2);
        *(short *)puVar12 = (short)puVar7 - (short)puVar11;
        puVar8 = puVar11 + 1;
        for (puVar16 = puVar7 + 1; puVar16 < (uint *)((long)param_2 + (long)param_4 + -8);
            puVar16 = puVar16 + 1) {
          uVar13 = *puVar16 ^ *puVar8;
          if (uVar13 != 0) {
            puVar16 = (uint *)((long)*(int *)(((ulong)((uVar13 & -uVar13) * 0x77cb531 >> 0x19) &
                                              0x7c) + lVar6 + 0x20) + (long)puVar16);
            goto LAB_073af2d8;
          }
          puVar8 = puVar11 + 2;
          puVar11 = puVar11 + 1;
        }
        if ((puVar16 < (uint *)((long)param_2 + (long)param_4 + -6)) &&
           ((short)*puVar8 == (short)*puVar16)) {
          puVar16 = (uint *)((long)puVar16 + 2);
          puVar8 = (uint *)((long)puVar11 + 6);
        }
        if ((puVar16 < (uint *)((long)param_2 + (long)param_4 + -5)) &&
           ((char)*puVar8 == (char)*puVar16)) {
          puVar16 = (uint *)((long)puVar16 + 1);
        }
LAB_073af2d8:
        iVar14 = (int)puVar16 - (int)(puVar7 + 1);
        if (pcVar2 + -6 < pcVar9 + (iVar14 >> 8)) {
          return 0;
        }
        uVar13 = iVar14 - 0xf;
        if (iVar14 < 0xf) {
          *pcVar10 = *pcVar10 + (char)iVar14;
        }
        else {
          *pcVar10 = *pcVar10 + '\x0f';
          for (; 0x1fd < uVar13; uVar13 = uVar13 - 0x1fe) {
            pcVar9[0] = -1;
            pcVar9[1] = -1;
            pcVar9 = pcVar9 + 2;
          }
          pcVar10 = pcVar9;
          if (0xfe < uVar13) {
            pcVar10 = pcVar9 + 1;
            *pcVar9 = -1;
            uVar13 = uVar13 - 0xff;
          }
          pcVar9 = pcVar10 + 1;
          *pcVar10 = (char)uVar13;
        }
        if (puVar17 < puVar16) goto LAB_073af3a4;
        uVar13 = *puVar16;
        *(short *)(((ulong)((uint)(*(int *)((long)puVar16 + -2) * -0x61c8864f) >> 0x14) & 0xffe) +
                  param_1) = (short)(int *)((long)puVar16 + -2) - sVar4;
        uVar15 = (ulong)(uVar13 * -0x61c8864f >> 0x14) & 0xffe;
        puVar11 = (uint *)((ulong)*(ushort *)(uVar15 + param_1) + (long)param_2);
        uVar3 = *puVar11;
        *(short *)(uVar15 + param_1) = (short)puVar16 - sVar4;
        if (uVar3 != uVar13) goto LAB_073af078;
        puVar12 = (uint *)(pcVar9 + 1);
        *pcVar9 = '\0';
        puVar7 = puVar16;
        pcVar10 = pcVar9;
      } while( true );
    }
  }
  return 0;
}

