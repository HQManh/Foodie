// rea decompile_all
// name: System.Text.UTF8Encoding$$GetChars
// address: 0x744725c
// body: available
// range: 0x744725c-0x74478af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74478a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74478ac to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Text_UTF8Encoding__GetChars
               (long param_1,uint *param_2,int param_3,ushort *param_4,int param_5,long *param_6)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  ushort uVar8;
  uint uVar9;
  uint *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint *puVar13;
  long lVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  ushort *puVar18;
  ushort *local_70;
  uint *puStack_68;
  
  if ((DAT_0952109e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195898);
    FUN_03f5c2a4(&DAT_0918c558);
    DAT_0952109e = 1;
  }
  local_70 = (ushort *)0x0;
  puStack_68 = (uint *)0x0;
  if (param_6 == (long *)0x0) {
    uVar15 = 0;
  }
  else {
    if (*param_6 != DAT_09195898) goto LAB_074478a8;
    uVar15 = *(uint *)(param_6 + 6);
  }
  puVar1 = (uint *)((long)param_2 + (long)param_3);
  puVar2 = param_4 + param_5;
  puVar18 = param_4;
  puVar10 = param_2;
  if (param_2 < puVar1) {
    lVar14 = 0;
    uVar9 = uVar15;
    do {
      bVar4 = (byte)*puVar10;
      if (uVar9 == 0) {
        puVar10 = (uint *)((long)puVar10 + 1);
        goto LAB_0744734c;
      }
      uVar15 = uVar9;
      if ((bVar4 & 0xc0) == 0x80) {
        uVar5 = uVar9 << 6;
        puVar10 = (uint *)((long)puVar10 + 1);
        uVar3 = bVar4 & 0x3f;
        uVar15 = uVar5 | uVar3;
        if ((uVar9 >> 0x17 & 1) != 0) {
          puVar16 = puVar18;
          if ((0x10000000 < (uVar5 & 0x101f0000)) && (puVar18 < puVar2)) {
            uVar15 = uVar5 & 0x3c0 | uVar3 | 0xdc00;
            *puVar18 = ((ushort)((uVar9 & 0x3ffffff) >> 4) & 0x7ff) + 0xd7c0;
            puVar16 = puVar18 + 1;
          }
          do {
            if (puVar2 <= puVar16) {
              uVar15 = uVar15 & 0x1fffff;
              if (0x7f < uVar15) {
                if (0x7ff < uVar15) {
                  if (uVar15 - 0xe000 < 0xfffffc00) {
                    if (0xffff < uVar15) {
                      puVar10 = (uint *)((long)puVar10 + -1);
                    }
                  }
                  else {
                    puVar10 = (uint *)((long)puVar10 + -1);
                    puVar16 = puVar16 + -1;
                  }
                  puVar10 = (uint *)((long)puVar10 + -1);
                }
                puVar10 = (uint *)((long)puVar10 + -1);
              }
              puVar10 = (uint *)((long)puVar10 - 1);
              puVar18 = puVar16;
              goto LAB_07447824;
            }
            puVar18 = puVar16 + 1;
            *puVar16 = (ushort)uVar15;
            if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = (int)puVar1 - (int)puVar10;
            uVar15 = (uint)((int)puVar2 - (int)puVar18) >> 1;
            if (0xd < (int)uVar9) {
              if (uVar9 <= uVar15) {
                uVar15 = uVar9;
              }
              puVar16 = (ushort *)((long)puVar16 + ((ulong)(uVar15 << 1) - 0xc));
              puVar13 = puVar10;
              goto joined_r0x07447414;
            }
            if ((int)uVar15 < (int)uVar9) goto LAB_074476f8;
            puVar16 = puVar18;
            if (puVar1 <= puVar10) goto LAB_0744783c;
            while( true ) {
              bVar4 = (byte)*puVar10;
              puVar10 = (uint *)((long)puVar10 + 1);
              puVar18 = puVar16;
              if ((char)bVar4 < '\0') break;
              puVar18 = puVar16 + 1;
              *puVar16 = (ushort)bVar4;
              puVar16 = puVar18;
              if (puVar1 == puVar10) goto LAB_0744783c;
            }
LAB_0744734c:
            uVar15 = (uint)bVar4;
            puVar16 = puVar18;
          } while (-1 < (char)bVar4);
          if ((bVar4 >> 6 & 1) != 0) {
            if ((bVar4 >> 5 & 1) != 0) {
              if ((bVar4 >> 4 & 1) == 0) {
                uVar9 = 0x48228000;
              }
              else {
                if (4 < (uVar15 & 0xf)) goto LAB_07447368;
                uVar9 = 0x504d0c00;
              }
              uVar15 = uVar15 & 0xf | uVar9;
              goto LAB_074476fc;
            }
            if (1 < (uVar15 & 0x1f)) {
              uVar15 = uVar15 & 0x1f | 0x800000;
              goto LAB_074476fc;
            }
          }
          goto LAB_07447368;
        }
        if ((uVar9 >> 0x16 & 1) == 0) {
          if (((uVar15 & 0x3e0) == 0) || ((uVar15 & 0x3e0) == 0x360)) goto LAB_07447368;
        }
        else if ((uVar9 >> 0x11 & 1) == 0) {
          if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (0xf0 < (uVar15 & 0x1f0) - 0x10) goto LAB_07447368;
        }
      }
      else {
LAB_07447368:
        if (lVar14 == 0) {
          if (param_6 == (long *)0x0) {
            plVar6 = *(long **)(param_1 + 0x30);
            if (plVar6 == (long *)0x0) goto LAB_074478a4;
            lVar14 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
          }
          else {
            lVar14 = System_Text_Decoder__get_FallbackBuffer(param_6,0);
          }
          if (lVar14 == 0) goto LAB_074478a4;
          System_Text_DecoderFallbackBuffer__InternalInitialize(lVar14,param_2,puVar2,0);
        }
        local_70 = puVar18;
        puStack_68 = puVar10;
        uVar7 = System_Text_UTF8Encoding__FallbackInvalidByteSequence
                          (param_1,&puStack_68,uVar15,lVar14,&local_70);
        puVar18 = local_70;
        puVar10 = puStack_68;
        if ((uVar7 & 1) == 0) goto LAB_074477cc;
LAB_074476f8:
        uVar15 = 0;
      }
LAB_074476fc:
      uVar9 = uVar15;
    } while (puVar10 < puVar1);
  }
  else {
    lVar14 = 0;
  }
  if (uVar15 == 0) {
LAB_0744783c:
    iVar17 = (int)puVar18;
    if (param_6 == (long *)0x0) goto LAB_07447864;
    uVar15 = 0;
  }
  else {
    if (param_6 == (long *)0x0) {
      if (lVar14 == 0) {
        plVar6 = *(long **)(param_1 + 0x30);
        if (plVar6 == (long *)0x0) goto LAB_074478a4;
        lVar14 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
LAB_0744778c:
        if (lVar14 == 0) {
LAB_074478a4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_Text_DecoderFallbackBuffer__InternalInitialize(lVar14,param_2,puVar2,0);
      }
LAB_074477a8:
      local_70 = puVar18;
      puStack_68 = puVar10;
      uVar7 = System_Text_UTF8Encoding__FallbackInvalidByteSequence
                        (param_1,&puStack_68,uVar15,lVar14,&local_70);
      puVar18 = local_70;
      puVar10 = puStack_68;
      if ((uVar7 & 1) == 0) {
LAB_074477cc:
        puVar10 = puStack_68;
        puVar18 = local_70;
        System_Text_DecoderFallbackBuffer__InternalReset(lVar14,0);
LAB_07447824:
        System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,puVar18 == param_4,0);
      }
      goto LAB_0744783c;
    }
    if ((char)param_6[5] != '\0') {
      if (lVar14 == 0) {
        lVar14 = System_Text_Decoder__get_FallbackBuffer(param_6,0);
        goto LAB_0744778c;
      }
      goto LAB_074477a8;
    }
  }
  iVar17 = (int)puVar18;
  if (*param_6 != DAT_09195898) {
LAB_074478a8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_6);
  }
  *(int *)((long)param_6 + 0x2c) = (int)puVar10 - (int)param_2;
  *(uint *)(param_6 + 6) = uVar15;
LAB_07447864:
  if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return (uint)(iVar17 - (int)param_4) >> 1;
joined_r0x07447414:
  puVar10 = puVar13;
  if (puVar16 <= puVar18) goto LAB_074476f8;
  puVar10 = (uint *)((long)puVar13 + 1);
  bVar4 = (byte)*puVar13;
  puVar11 = puVar18;
  if ((char)bVar4 < '\0') {
LAB_0744751c:
    uVar15 = (uint)bVar4;
    puVar18 = puVar11;
  }
  else {
    puVar11 = puVar18 + 1;
    *puVar18 = (ushort)bVar4;
    if (((ulong)puVar13 & 1) == 0) {
      bVar4 = *(byte *)((long)puVar13 + 1);
      puVar10 = (uint *)((long)puVar13 + 2);
      if ((char)bVar4 < '\0') goto LAB_0744751c;
      puVar18[1] = (ushort)bVar4;
      puVar18 = puVar18 + 2;
      if (((uint)puVar10 >> 1 & 1) != 0) goto LAB_0744745c;
LAB_07447480:
      if (puVar16 <= puVar18) {
LAB_07447650:
        uVar15 = 0;
        goto LAB_074476fc;
      }
      puVar11 = puVar18 + 4;
      while( true ) {
        uVar15 = *puVar10;
        uVar9 = puVar10[1];
        if (((uVar9 | uVar15) & 0x80808080) != 0) break;
        puVar10 = puVar10 + 2;
        *puVar18 = (ushort)uVar15 & 0x7f;
        puVar18 = puVar11 + 4;
        puVar11[-3] = (ushort)(uVar15 >> 8) & 0x7f;
        puVar11[-1] = (byte)(uVar15 >> 0x18) & 0x7f;
        puVar11[-2] = (ushort)(uVar15 >> 0x10) & 0x7f;
        *puVar11 = (ushort)uVar9 & 0x7f;
        puVar11[1] = (ushort)(uVar9 >> 8) & 0x7f;
        puVar11[2] = (ushort)(uVar9 >> 0x10) & 0x7f;
        puVar11[3] = (byte)(uVar9 >> 0x18) & 0x7f;
        puVar11 = puVar11 + 8;
        if (puVar16 <= puVar18) goto LAB_07447650;
      }
      uVar15 = uVar15 & 0xff;
    }
    else {
      puVar18 = puVar11;
      if (((uint)puVar10 >> 1 & 1) == 0) goto LAB_07447480;
LAB_0744745c:
      uVar8 = (ushort)*puVar10;
      uVar15 = (uint)uVar8;
      if ((uVar8 & 0x8080) == 0) {
        puVar10 = (uint *)((long)puVar10 + 2);
        *puVar18 = uVar8 & 0x7f;
        puVar18[1] = uVar8 >> 8 & 0x7f;
        puVar18 = puVar18 + 2;
        goto LAB_07447480;
      }
    }
    uVar15 = uVar15 & 0xff;
    puVar10 = (uint *)((long)puVar10 + 1);
    if (uVar15 < 0x80) {
      *puVar18 = (ushort)uVar15;
      puVar18 = puVar18 + 1;
      puVar13 = puVar10;
      goto joined_r0x07447414;
    }
  }
  if ((uVar15 >> 6 & 1) == 0) {
LAB_07447738:
    uVar15 = 0;
    puVar10 = (uint *)((long)puVar10 + -1);
    goto LAB_074476fc;
  }
  puVar13 = (uint *)((long)puVar10 + 1);
  uVar9 = (uint)(byte)*puVar10;
  if ((uVar9 & 0xc0) != 0x80) goto LAB_07447738;
  puVar11 = puVar18;
  if ((uVar15 >> 5 & 1) == 0) {
    if (1 < (uVar15 & 0x1f)) {
      uVar8 = (ushort)(uVar9 & 0x3f) | (ushort)((uVar15 & 0x1f) << 6);
      goto LAB_07447614;
    }
    goto LAB_07447738;
  }
  uVar3 = (uVar15 & 0xf) << 6;
  uVar5 = uVar9 & 0x3f | uVar3;
  bVar4 = *(byte *)puVar13;
  uVar12 = (uint)bVar4;
  if ((uVar15 >> 4 & 1) == 0) {
    uVar3 = uVar9 & 0x20 | uVar3;
    if (((uVar3 == 0) || (uVar3 == 0x360)) || ((uVar12 & 0xc0) != 0x80)) goto LAB_07447738;
    puVar13 = (uint *)((long)puVar10 + 2);
    puVar16 = puVar16 + -1;
    uVar8 = bVar4 & 0x3f | (ushort)(uVar5 << 6);
  }
  else {
    if (*(int *)(DAT_0918c558 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (((0xf < (uVar5 >> 4) - 1) || ((uVar12 & 0xc0) != 0x80)) ||
       (bVar4 = *(byte *)((long)puVar10 + 2), (bVar4 & 0xc0) != 0x80)) goto LAB_07447738;
    puVar13 = (uint *)((long)puVar10 + 3);
    puVar16 = puVar16 + -1;
    puVar11 = puVar18 + 1;
    *puVar18 = ((ushort)(((uVar12 & 0x30) << 6 | uVar5 << 0xc) >> 10) & 0x7ff) + 0xd7c0;
    uVar8 = bVar4 & 0x3f | (ushort)((uVar12 & 0xf) << 6) | 0xdc00;
  }
LAB_07447614:
  puVar16 = puVar16 + -1;
  puVar18 = puVar11 + 1;
  *puVar11 = uVar8;
  goto joined_r0x07447414;
}

