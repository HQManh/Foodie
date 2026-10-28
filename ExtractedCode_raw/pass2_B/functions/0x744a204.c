// rea decompile_all
// name: System.Text.Encoding$$ThrowBytesOverflow
// address: 0x744a204
// body: available
// range: 0x744a204-0x744a26f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744a230 to 0x7439f20 System.Text.EncoderNLS$$ClearMustFlush (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x744a25c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Text_Encoding__ThrowBytesOverflow
                (undefined8 param_1,long param_2,uint param_3,long *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  char cVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  undefined1 auVar19 [16];
  long *plStack_88;
  
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x31) == '\0' && (param_3 & 1) == 0) {
      uVar5 = System_Text_EncoderNLS__ClearMustFlush(param_2,0);
      return uVar5;
    }
    uVar5 = System_Text_Encoder__get_InternalHasFallbackBuffer(param_2,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = System_Text_Encoder__get_FallbackBuffer(param_2,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Text_EncoderFallbackBuffer__InternalReset(lVar6,0);
    }
  }
  auVar19 = System_Text_Encoding__ThrowBytesOverflow(param_1);
  puVar9 = auVar19._8_8_;
  lVar6 = auVar19._0_8_;
  if ((DAT_095210af & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09195990);
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210af = 1;
  }
  uVar17 = (int)param_3 >> 1;
  if (param_4 == (long *)0x0) {
    uVar16 = 0;
    uVar12 = 0xffffffff;
  }
  else {
    if (*param_4 != DAT_09195990) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_4);
    }
    uVar16 = (uint)*(ushort *)((long)param_4 + 0x34);
    uVar12 = *(uint *)(param_4 + 6);
    if (*(ushort *)((long)param_4 + 0x34) != 0) {
      uVar17 = uVar17 + 1;
    }
    uVar17 = uVar17 + (param_3 & -1 < (int)uVar12);
  }
  puVar18 = (ulong *)((long)puVar9 + (long)(int)param_3);
  puVar15 = puVar9;
  if (puVar9 < puVar18) {
    plStack_88 = (long *)0x0;
LAB_0744a358:
    cVar13 = *(char *)(lVar6 + 0x39);
    puVar14 = puVar15;
    uVar1 = uVar16;
    do {
      uVar16 = uVar1;
      if ((((((ulong)puVar14 & 7) == 0) && (cVar13 == '\0')) && (uVar12 == 0xffffffff)) &&
         (uVar16 == 0)) {
        for (; puVar14 < (ulong *)((long)puVar18 + -7); puVar14 = puVar14 + 1) {
          uVar5 = *puVar14;
          if (((uVar5 & 0x8000800080008000) != 0) &&
             (((uVar10 = uVar5 & 0xf800f800f800f800 ^ 0xd800d800d800d800, (uVar10 & 0xf800) == 0 ||
               ((uVar10 & 0xf8000000) == 0)) ||
              ((uVar10 >> 0x3b == 0 || ((uVar10 & 0xf80000000000) == 0)))))) {
            if (*(int *)(DAT_0918c640 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((uVar5 & 0xfc00fc00fc00fc00) != *(ulong *)(*(long *)(DAT_0918c640 + 0xb8) + 0x20))
            break;
          }
        }
        if (puVar18 <= puVar14) {
          uVar16 = 0;
          uVar12 = 0xffffffff;
          puVar15 = puVar14;
          goto LAB_0744a6f0;
        }
      }
      if ((int)uVar12 < 0) {
        puVar15 = (ulong *)((long)puVar14 + 1);
        uVar12 = (uint)(byte)*puVar14;
        puVar14 = puVar15;
        if (puVar18 <= puVar15) goto LAB_0744a6f0;
      }
      cVar13 = *(char *)(lVar6 + 0x39);
      puVar15 = (ulong *)((long)puVar14 + 1);
      uVar1 = uVar12;
      uVar3 = (uint)(byte)*puVar14;
      if (cVar13 != '\0') {
        uVar1 = (uint)(byte)*puVar14;
        uVar3 = uVar12;
      }
      uVar12 = uVar1 | uVar3 << 8;
      uVar2 = (undefined1)(uVar16 >> 8);
      if ((uVar12 & 0xffff) - 0xe000 < 0xfffff800) {
        if (uVar16 != 0) goto LAB_0744a494;
      }
      else {
        if ((uVar12 & 0xffff) >> 10 < 0x37) {
          uVar12 = uVar12 & 0xffff;
          if (uVar16 == 0) goto LAB_0744a670;
          lVar7 = FUN_03f5c394(DAT_0917fc88,2);
          if (cVar13 == '\0') {
            if (lVar7 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar7 + 0x18) == 0) ||
               (*(char *)(lVar7 + 0x20) = (char)uVar16, *(int *)(lVar7 + 0x18) == 1))
            goto LAB_0744a8a4;
            uVar16 = uVar16 >> 8;
          }
          else {
            if (lVar7 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar7 + 0x18) == 0) ||
               (*(undefined1 *)(lVar7 + 0x20) = uVar2, *(int *)(lVar7 + 0x18) == 1))
            goto LAB_0744a8a4;
          }
          *(char *)(lVar7 + 0x21) = (char)uVar16;
          if (plStack_88 == (long *)0x0) {
            if (param_4 == (long *)0x0) {
              plVar8 = *(long **)(lVar6 + 0x30);
              if (plVar8 == (long *)0x0) goto LAB_0744a8a8;
              plStack_88 = (long *)(**(code **)(*plVar8 + 0x178))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x180));
            }
            else {
              plStack_88 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
            }
            if (plStack_88 == (long *)0x0) goto LAB_0744a8a8;
            System_Text_DecoderFallbackBuffer__InternalInitialize(plStack_88,puVar9,0,0);
          }
          iVar4 = (**(code **)(*plStack_88 + 0x1c8))
                            (plStack_88,lVar7,puVar15,*(undefined8 *)(*plStack_88 + 0x1d0));
          goto LAB_0744a66c;
        }
        if (uVar16 == 0) {
          lVar7 = FUN_03f5c394(DAT_0917fc88,2);
          if (cVar13 == '\0') {
            if (lVar7 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar7 + 0x18) == 0) ||
               (*(char *)(lVar7 + 0x20) = (char)uVar1, *(int *)(lVar7 + 0x18) == 1))
            goto LAB_0744a8a4;
            uVar12 = uVar12 >> 8;
          }
          else {
            if (lVar7 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar7 + 0x18) == 0) ||
               (*(char *)(lVar7 + 0x20) = (char)(uVar12 >> 8), *(int *)(lVar7 + 0x18) == 1))
            goto LAB_0744a8a4;
          }
          *(char *)(lVar7 + 0x21) = (char)uVar12;
          if (plStack_88 == (long *)0x0) {
            if (param_4 == (long *)0x0) {
              plVar8 = *(long **)(lVar6 + 0x30);
              if (plVar8 == (long *)0x0) goto LAB_0744a8a8;
              plStack_88 = (long *)(**(code **)(*plVar8 + 0x178))
                                             (plVar8,*(undefined8 *)(*plVar8 + 0x180));
            }
            else {
              plStack_88 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
            }
            if (plStack_88 == (long *)0x0) goto LAB_0744a8a8;
            System_Text_DecoderFallbackBuffer__InternalInitialize(plStack_88,puVar9,0,0);
          }
          lVar11 = *plStack_88;
          goto LAB_0744a650;
        }
      }
      uVar16 = 0;
      uVar12 = 0xffffffff;
      puVar14 = puVar15;
      uVar1 = 0;
      if (puVar18 <= puVar15) goto LAB_0744a6f0;
    } while( true );
  }
  plStack_88 = (long *)0x0;
LAB_0744a6f0:
  if ((param_4 == (long *)0x0) || ((char)param_4[5] != '\0')) {
    if (uVar16 != 0) {
      cVar13 = *(char *)(lVar6 + 0x39);
      lVar7 = FUN_03f5c394(DAT_0917fc88,2);
      if (cVar13 == '\0') {
        if (lVar7 == 0) goto LAB_0744a8a8;
        if ((*(int *)(lVar7 + 0x18) == 0) ||
           (*(char *)(lVar7 + 0x20) = (char)uVar16, *(int *)(lVar7 + 0x18) == 1)) goto LAB_0744a8a4;
        uVar16 = uVar16 >> 8;
      }
      else {
        if (lVar7 == 0) goto LAB_0744a8a8;
        if ((*(int *)(lVar7 + 0x18) == 0) ||
           (*(char *)(lVar7 + 0x20) = (char)(uVar16 >> 8), *(int *)(lVar7 + 0x18) == 1))
        goto LAB_0744a8a4;
      }
      *(char *)(lVar7 + 0x21) = (char)uVar16;
      if (plStack_88 == (long *)0x0) {
        if (param_4 == (long *)0x0) {
          plVar8 = *(long **)(lVar6 + 0x30);
          if (plVar8 == (long *)0x0) goto LAB_0744a8a8;
          plStack_88 = (long *)(**(code **)(*plVar8 + 0x178))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x180));
        }
        else {
          plStack_88 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
        }
        if (plStack_88 == (long *)0x0) goto LAB_0744a8a8;
        System_Text_DecoderFallbackBuffer__InternalInitialize(plStack_88,puVar9,0,0);
      }
      iVar4 = (**(code **)(*plStack_88 + 0x1c8))
                        (plStack_88,lVar7,puVar15,*(undefined8 *)(*plStack_88 + 0x1d0));
      uVar17 = (uVar17 - 1) + iVar4;
    }
    if ((int)uVar12 < 0) goto LAB_0744a880;
    if (plStack_88 == (long *)0x0) {
      if (param_4 == (long *)0x0) {
        plVar8 = *(long **)(lVar6 + 0x30);
        if (plVar8 == (long *)0x0) goto LAB_0744a8a8;
        plStack_88 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180))
        ;
      }
      else {
        plStack_88 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
      }
      if (plStack_88 == (long *)0x0) goto LAB_0744a8a8;
      System_Text_DecoderFallbackBuffer__InternalInitialize(plStack_88,puVar9,0,0);
    }
    lVar6 = FUN_03f5c394(DAT_0917fc88,1);
    if (lVar6 == 0) {
LAB_0744a8a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0744a8a4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(char *)(lVar6 + 0x20) = (char)uVar12;
    iVar4 = (**(code **)(*plStack_88 + 0x1c8))
                      (plStack_88,lVar6,puVar15,*(undefined8 *)(*plStack_88 + 0x1d0));
    uVar17 = iVar4 + uVar17;
  }
  else {
    uVar17 = uVar17 - (uVar16 != 0);
  }
LAB_0744a880:
  return (ulong)uVar17;
LAB_0744a494:
  lVar7 = FUN_03f5c394(DAT_0917fc88,2);
  if (cVar13 == '\0') {
    if (lVar7 == 0) goto LAB_0744a8a8;
    if ((*(int *)(lVar7 + 0x18) == 0) ||
       (*(char *)(lVar7 + 0x20) = (char)uVar16, *(int *)(lVar7 + 0x18) == 1)) goto LAB_0744a8a4;
    uVar16 = uVar16 >> 8;
  }
  else {
    if (lVar7 == 0) goto LAB_0744a8a8;
    if ((*(int *)(lVar7 + 0x18) == 0) ||
       (*(undefined1 *)(lVar7 + 0x20) = uVar2, *(int *)(lVar7 + 0x18) == 1)) goto LAB_0744a8a4;
  }
  *(char *)(lVar7 + 0x21) = (char)uVar16;
  if (plStack_88 == (long *)0x0) {
    if (param_4 == (long *)0x0) {
      plVar8 = *(long **)(lVar6 + 0x30);
      if (plVar8 == (long *)0x0) goto LAB_0744a8a8;
      plStack_88 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
    }
    else {
      plStack_88 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
    }
    if (plStack_88 == (long *)0x0) goto LAB_0744a8a8;
    System_Text_DecoderFallbackBuffer__InternalInitialize(plStack_88,puVar9,0,0);
  }
  lVar11 = *plStack_88;
LAB_0744a650:
  iVar4 = (**(code **)(lVar11 + 0x1c8))(plStack_88,lVar7,puVar15,*(undefined8 *)(lVar11 + 0x1d0));
  uVar12 = 0;
LAB_0744a66c:
  uVar17 = (uVar17 - 1) + iVar4;
LAB_0744a670:
  uVar16 = uVar12;
  uVar12 = 0xffffffff;
  if (puVar18 <= puVar15) goto LAB_0744a6f0;
  goto LAB_0744a358;
}

