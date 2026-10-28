// rea decompile_all
// name: System.Text.UnicodeEncoding$$GetChars
// address: 0x744a8b4
// body: available
// range: 0x744a8b4-0x744b08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744b07c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744b080 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744b088 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Text_UnicodeEncoding__GetChars
                (long param_1,ulong *param_2,int param_3,ulong *param_4,int param_5,long *param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined2 uVar16;
  uint uVar17;
  long *local_78;
  ulong *local_68;
  
  if ((DAT_095210b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09195990);
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210b0 = 1;
  }
  local_68 = (ulong *)0x0;
  if (param_6 == (long *)0x0) {
    uVar17 = 0;
    uVar10 = 0xffffffff;
  }
  else {
    if (*param_6 != DAT_09195990) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_6);
    }
    uVar10 = *(uint *)(param_6 + 6);
    uVar17 = (uint)*(ushort *)((long)param_6 + 0x34);
  }
  puVar1 = (ulong *)((long)param_2 + (long)param_3);
  puVar2 = (ulong *)((long)param_4 + (long)param_5 * 2);
  puVar14 = param_4;
  if (param_2 < puVar1) {
    local_78 = (long *)0x0;
    puVar13 = param_2;
LAB_0744a994:
    do {
      if ((((*(char *)(param_1 + 0x39) == '\0') && ((((uint)puVar13 | (uint)puVar14) & 7) == 0)) &&
          (uVar10 == 0xffffffff)) && (uVar17 == 0)) {
        uVar9 = (long)puVar2 - (long)puVar14;
        if ((long)uVar9 < 0) {
          uVar9 = uVar9 + 1;
        }
        uVar8 = (long)puVar1 - (long)puVar13;
        if ((long)uVar9 >> 1 <= (long)puVar1 - (long)puVar13 >> 1) {
          uVar8 = uVar9 & 0xfffffffffffffffe;
        }
        puVar12 = (ulong *)((long)puVar13 + (uVar8 - 7));
        for (; puVar13 < puVar12; puVar13 = puVar13 + 1) {
          uVar9 = *puVar13;
          if (((uVar9 & 0x8000800080008000) != 0) &&
             (((uVar8 = uVar9 & 0xf800f800f800f800 ^ 0xd800d800d800d800, (uVar8 & 0xf800) == 0 ||
               ((uVar8 & 0xf8000000) == 0)) ||
              ((uVar8 >> 0x3b == 0 || ((uVar8 & 0xf80000000000) == 0)))))) {
            if (*(int *)(DAT_0918c640 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((uVar9 & 0xfc00fc00fc00fc00) != *(ulong *)(*(long *)(DAT_0918c640 + 0xb8) + 0x20))
            break;
            uVar9 = *puVar13;
          }
          *puVar14 = uVar9;
          puVar14 = puVar14 + 1;
        }
        if (puVar1 <= puVar13) {
          uVar17 = 0;
          uVar10 = 0xffffffff;
          puVar12 = puVar13;
          break;
        }
      }
      if ((int)uVar10 < 0) {
        puVar12 = (ulong *)((long)puVar13 + 1);
        uVar10 = (uint)(byte)*puVar13;
        puVar13 = puVar12;
        if (puVar1 <= puVar12) break;
        goto LAB_0744a994;
      }
      cVar4 = *(char *)(param_1 + 0x39);
      puVar12 = (ulong *)((long)puVar13 + 1);
      uVar3 = uVar10;
      uVar11 = (uint)(byte)*puVar13;
      if (cVar4 != '\0') {
        uVar3 = (uint)(byte)*puVar13;
        uVar11 = uVar10;
      }
      uVar11 = uVar3 | uVar11 << 8;
      uVar10 = uVar11 & 0xffff;
      uVar5 = (undefined1)(uVar17 >> 8);
      if (uVar10 - 0xe000 < 0xfffff800) {
        puVar15 = puVar14;
        if (uVar17 == 0) {
LAB_0744ac90:
          if (puVar15 < puVar2) {
            *(short *)puVar15 = (short)uVar11;
            puVar14 = (ulong *)((long)puVar15 + 2);
            uVar10 = 0;
            goto LAB_0744adac;
          }
          uVar17 = 0;
          puVar14 = puVar15;
        }
        else {
          lVar6 = FUN_03f5c394(DAT_0917fc88,2);
          if (cVar4 == '\0') {
            if (lVar6 == 0) goto LAB_0744b080;
            if ((*(int *)(lVar6 + 0x18) == 0) ||
               (*(char *)(lVar6 + 0x20) = (char)uVar17, *(int *)(lVar6 + 0x18) == 1))
            goto LAB_0744b07c;
            uVar10 = uVar17 >> 8;
          }
          else {
            if (lVar6 == 0) goto LAB_0744b080;
            if ((*(int *)(lVar6 + 0x18) == 0) ||
               (*(undefined1 *)(lVar6 + 0x20) = uVar5, uVar10 = uVar17, *(int *)(lVar6 + 0x18) == 1)
               ) goto LAB_0744b07c;
          }
          *(char *)(lVar6 + 0x21) = (char)uVar10;
          if (local_78 == (long *)0x0) {
            if (param_6 == (long *)0x0) {
              plVar7 = *(long **)(param_1 + 0x30);
              if (plVar7 == (long *)0x0) goto LAB_0744b080;
              local_78 = (long *)(**(code **)(*plVar7 + 0x178))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x180));
            }
            else {
              local_78 = (long *)System_Text_Decoder__get_FallbackBuffer(param_6,0);
            }
            if (local_78 == (long *)0x0) goto LAB_0744b080;
            System_Text_DecoderFallbackBuffer__InternalInitialize(local_78,param_2,puVar2,0);
          }
          local_68 = puVar14;
          uVar9 = (**(code **)(*local_78 + 0x1b8))
                            (local_78,lVar6,puVar12,&local_68,*(undefined8 *)(*local_78 + 0x1c0));
          puVar15 = local_68;
          if ((uVar9 & 1) != 0) goto LAB_0744ac90;
LAB_0744ade4:
          puVar14 = local_68;
          System_Text_DecoderFallbackBuffer__InternalReset(local_78,0);
        }
LAB_0744adf8:
        puVar12 = (ulong *)((long)puVar13 + -1);
        System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,puVar14 == param_4);
        uVar10 = 0xffffffff;
        break;
      }
      if (uVar10 >> 10 < 0x37) {
        if (uVar17 != 0) {
          lVar6 = FUN_03f5c394(DAT_0917fc88,2);
          if (cVar4 == '\0') {
            if (lVar6 == 0) goto LAB_0744b080;
            if ((*(int *)(lVar6 + 0x18) == 0) ||
               (*(char *)(lVar6 + 0x20) = (char)uVar17, *(int *)(lVar6 + 0x18) == 1))
            goto LAB_0744b07c;
            uVar3 = uVar17 >> 8;
          }
          else {
            if (lVar6 == 0) goto LAB_0744b080;
            if ((*(int *)(lVar6 + 0x18) == 0) ||
               (*(undefined1 *)(lVar6 + 0x20) = uVar5, uVar3 = uVar17, *(int *)(lVar6 + 0x18) == 1))
            goto LAB_0744b07c;
          }
          *(char *)(lVar6 + 0x21) = (char)uVar3;
          if (local_78 == (long *)0x0) {
            if (param_6 == (long *)0x0) {
              plVar7 = *(long **)(param_1 + 0x30);
              if (plVar7 == (long *)0x0) goto LAB_0744b080;
              local_78 = (long *)(**(code **)(*plVar7 + 0x178))
                                           (plVar7,*(undefined8 *)(*plVar7 + 0x180));
            }
            else {
              local_78 = (long *)System_Text_Decoder__get_FallbackBuffer(param_6,0);
            }
            if (local_78 == (long *)0x0) goto LAB_0744b080;
            System_Text_DecoderFallbackBuffer__InternalInitialize(local_78,param_2,puVar2,0);
          }
          local_68 = puVar14;
          uVar9 = (**(code **)(*local_78 + 0x1b8))
                            (local_78,lVar6,puVar12,&local_68,*(undefined8 *)(*local_78 + 0x1c0));
          goto LAB_0744ada0;
        }
      }
      else {
        if (uVar17 != 0) {
          if (puVar14 < (ulong *)((long)puVar2 - 2U)) {
            puVar15 = (ulong *)((long)puVar14 + 2);
            *(short *)puVar14 = (short)uVar17;
            goto LAB_0744ac90;
          }
          goto LAB_0744adf8;
        }
        lVar6 = FUN_03f5c394(DAT_0917fc88,2);
        if (cVar4 == '\0') {
          if (lVar6 == 0) goto LAB_0744b080;
          if ((*(int *)(lVar6 + 0x18) == 0) ||
             (*(char *)(lVar6 + 0x20) = (char)uVar3, *(int *)(lVar6 + 0x18) == 1))
          goto LAB_0744b07c;
          uVar11 = uVar11 >> 8;
        }
        else {
          if (lVar6 == 0) goto LAB_0744b080;
          if ((*(int *)(lVar6 + 0x18) == 0) ||
             (*(char *)(lVar6 + 0x20) = (char)(uVar11 >> 8), *(int *)(lVar6 + 0x18) == 1))
          goto LAB_0744b07c;
        }
        *(char *)(lVar6 + 0x21) = (char)uVar11;
        if (local_78 == (long *)0x0) {
          if (param_6 == (long *)0x0) {
            plVar7 = *(long **)(param_1 + 0x30);
            if (plVar7 == (long *)0x0) goto LAB_0744b080;
            local_78 = (long *)(**(code **)(*plVar7 + 0x178))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x180));
          }
          else {
            local_78 = (long *)System_Text_Decoder__get_FallbackBuffer(param_6,0);
          }
          if (local_78 == (long *)0x0) goto LAB_0744b080;
          System_Text_DecoderFallbackBuffer__InternalInitialize(local_78,param_2,puVar2,0);
        }
        local_68 = puVar14;
        uVar9 = (**(code **)(*local_78 + 0x1b8))
                          (local_78,lVar6,puVar12,&local_68,*(undefined8 *)(*local_78 + 0x1c0));
        uVar10 = 0;
        uVar17 = 0;
LAB_0744ada0:
        puVar14 = local_68;
        if ((uVar9 & 1) == 0) goto LAB_0744ade4;
      }
LAB_0744adac:
      uVar17 = uVar10;
      uVar10 = 0xffffffff;
      puVar13 = puVar12;
    } while (puVar12 < puVar1);
  }
  else {
    local_78 = (long *)0x0;
    puVar12 = param_2;
  }
  uVar16 = (undefined2)uVar17;
  if ((param_6 == (long *)0x0) || ((char)param_6[5] != '\0')) {
    if (uVar17 == 0) {
LAB_0744af28:
      if (-1 < (int)uVar10) {
        if (local_78 == (long *)0x0) {
          if (param_6 == (long *)0x0) {
            plVar7 = *(long **)(param_1 + 0x30);
            if (plVar7 == (long *)0x0) goto LAB_0744b080;
            local_78 = (long *)(**(code **)(*plVar7 + 0x178))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x180));
          }
          else {
            local_78 = (long *)System_Text_Decoder__get_FallbackBuffer(param_6,0);
          }
          if (local_78 == (long *)0x0) goto LAB_0744b080;
          System_Text_DecoderFallbackBuffer__InternalInitialize(local_78,param_2,puVar2,0);
        }
        local_68 = puVar14;
        lVar6 = FUN_03f5c394(DAT_0917fc88,1);
        if (lVar6 == 0) {
LAB_0744b080:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0744b07c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        *(char *)(lVar6 + 0x20) = (char)uVar10;
        uVar9 = (**(code **)(*local_78 + 0x1b8))
                          (local_78,lVar6,puVar12,&local_68,*(undefined8 *)(*local_78 + 0x1c0));
        puVar14 = local_68;
        if ((uVar9 & 1) != 0) {
          uVar16 = 0;
          uVar10 = 0xffffffff;
          goto LAB_0744b038;
        }
        System_Text_DecoderFallbackBuffer__InternalReset(local_78,0);
        System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,puVar14 == param_4);
      }
      uVar16 = 0;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x39);
      lVar6 = FUN_03f5c394(DAT_0917fc88,2);
      if (cVar4 == '\0') {
        if (lVar6 == 0) goto LAB_0744b080;
        if ((*(int *)(lVar6 + 0x18) == 0) ||
           (*(char *)(lVar6 + 0x20) = (char)uVar17, *(int *)(lVar6 + 0x18) == 1)) goto LAB_0744b07c;
        uVar17 = uVar17 >> 8;
      }
      else {
        if (lVar6 == 0) goto LAB_0744b080;
        if ((*(int *)(lVar6 + 0x18) == 0) ||
           (*(char *)(lVar6 + 0x20) = (char)(uVar17 >> 8), *(int *)(lVar6 + 0x18) == 1))
        goto LAB_0744b07c;
      }
      *(char *)(lVar6 + 0x21) = (char)uVar17;
      if (local_78 == (long *)0x0) {
        if (param_6 == (long *)0x0) {
          plVar7 = *(long **)(param_1 + 0x30);
          if (plVar7 == (long *)0x0) goto LAB_0744b080;
          local_78 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180))
          ;
        }
        else {
          local_78 = (long *)System_Text_Decoder__get_FallbackBuffer(param_6,0);
        }
        if (local_78 == (long *)0x0) goto LAB_0744b080;
        System_Text_DecoderFallbackBuffer__InternalInitialize(local_78,param_2,puVar2,0);
      }
      local_68 = puVar14;
      uVar9 = (**(code **)(*local_78 + 0x1b8))
                        (local_78,lVar6,puVar12,&local_68,*(undefined8 *)(*local_78 + 0x1c0));
      puVar14 = local_68;
      if ((uVar9 & 1) != 0) goto LAB_0744af28;
      lVar6 = -3;
      if ((int)uVar10 < 0) {
        lVar6 = -2;
      }
      System_Text_DecoderFallbackBuffer__InternalReset(local_78,0);
      System_Text_Encoding__ThrowCharsOverflow(param_1,param_6,puVar14 == param_4);
      if ((int)uVar10 < 0) {
        puVar12 = (ulong *)((long)puVar12 + lVar6 + 2);
      }
      else {
        puVar12 = (ulong *)((long)puVar12 + lVar6 + 3);
      }
    }
LAB_0744b038:
    if (param_6 == (long *)0x0) goto LAB_0744b048;
  }
  *(undefined2 *)((long)param_6 + 0x34) = uVar16;
  *(int *)((long)param_6 + 0x2c) = (int)puVar12 - (int)param_2;
  *(uint *)(param_6 + 6) = uVar10;
LAB_0744b048:
  uVar9 = (long)puVar14 - (long)param_4;
  if ((long)uVar9 < 0) {
    uVar9 = uVar9 + 1;
  }
  return uVar9 >> 1;
}

