// rea decompile_all
// name: System.Text.UnicodeEncoding$$GetCharCount
// address: 0x744a270
// body: available
// range: 0x744a270-0x744a8b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744a8a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744a8a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744a8b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UnicodeEncoding__GetCharCount
              (long param_1,ulong *param_2,uint param_3,long *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  char cVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  int iVar15;
  ulong *puVar16;
  long *local_68;
  
  if ((DAT_095210af & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09195990);
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210af = 1;
  }
  iVar15 = (int)param_3 >> 1;
  if (param_4 == (long *)0x0) {
    uVar14 = 0;
    uVar9 = 0xffffffff;
  }
  else {
    if (*param_4 != DAT_09195990) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_4);
    }
    uVar14 = (uint)*(ushort *)((long)param_4 + 0x34);
    uVar9 = *(uint *)(param_4 + 6);
    if (*(ushort *)((long)param_4 + 0x34) != 0) {
      iVar15 = iVar15 + 1;
    }
    iVar15 = iVar15 + (param_3 & -1 < (int)uVar9);
  }
  puVar16 = (ulong *)((long)param_2 + (long)(int)param_3);
  puVar13 = param_2;
  if (param_2 < puVar16) {
    local_68 = (long *)0x0;
LAB_0744a358:
    cVar10 = *(char *)(param_1 + 0x39);
    puVar12 = puVar13;
    uVar1 = uVar14;
    do {
      uVar14 = uVar1;
      if ((((((ulong)puVar12 & 7) == 0) && (cVar10 == '\0')) && (uVar9 == 0xffffffff)) &&
         (uVar14 == 0)) {
        for (; puVar12 < (ulong *)((long)puVar16 + -7); puVar12 = puVar12 + 1) {
          uVar11 = *puVar12;
          if (((uVar11 & 0x8000800080008000) != 0) &&
             (((uVar7 = uVar11 & 0xf800f800f800f800 ^ 0xd800d800d800d800, (uVar7 & 0xf800) == 0 ||
               ((uVar7 & 0xf8000000) == 0)) ||
              ((uVar7 >> 0x3b == 0 || ((uVar7 & 0xf80000000000) == 0)))))) {
            if (*(int *)(DAT_0918c640 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((uVar11 & 0xfc00fc00fc00fc00) != *(ulong *)(*(long *)(DAT_0918c640 + 0xb8) + 0x20))
            break;
          }
        }
        if (puVar16 <= puVar12) {
          uVar14 = 0;
          uVar9 = 0xffffffff;
          puVar13 = puVar12;
          goto LAB_0744a6f0;
        }
      }
      if ((int)uVar9 < 0) {
        puVar13 = (ulong *)((long)puVar12 + 1);
        uVar9 = (uint)(byte)*puVar12;
        puVar12 = puVar13;
        if (puVar16 <= puVar13) goto LAB_0744a6f0;
      }
      cVar10 = *(char *)(param_1 + 0x39);
      puVar13 = (ulong *)((long)puVar12 + 1);
      uVar1 = uVar9;
      uVar3 = (uint)(byte)*puVar12;
      if (cVar10 != '\0') {
        uVar1 = (uint)(byte)*puVar12;
        uVar3 = uVar9;
      }
      uVar9 = uVar1 | uVar3 << 8;
      uVar2 = (undefined1)(uVar14 >> 8);
      if ((uVar9 & 0xffff) - 0xe000 < 0xfffff800) {
        if (uVar14 != 0) goto LAB_0744a494;
      }
      else {
        if ((uVar9 & 0xffff) >> 10 < 0x37) {
          uVar9 = uVar9 & 0xffff;
          if (uVar14 == 0) goto LAB_0744a670;
          lVar5 = FUN_03f5c394(DAT_0917fc88,2);
          if (cVar10 == '\0') {
            if (lVar5 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar5 + 0x18) == 0) ||
               (*(char *)(lVar5 + 0x20) = (char)uVar14, *(int *)(lVar5 + 0x18) == 1))
            goto LAB_0744a8a4;
            uVar14 = uVar14 >> 8;
          }
          else {
            if (lVar5 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar5 + 0x18) == 0) ||
               (*(undefined1 *)(lVar5 + 0x20) = uVar2, *(int *)(lVar5 + 0x18) == 1))
            goto LAB_0744a8a4;
          }
          *(char *)(lVar5 + 0x21) = (char)uVar14;
          if (local_68 == (long *)0x0) {
            if (param_4 == (long *)0x0) {
              plVar6 = *(long **)(param_1 + 0x30);
              if (plVar6 == (long *)0x0) goto LAB_0744a8a8;
              local_68 = (long *)(**(code **)(*plVar6 + 0x178))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x180));
            }
            else {
              local_68 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
            }
            if (local_68 == (long *)0x0) goto LAB_0744a8a8;
            System_Text_DecoderFallbackBuffer__InternalInitialize(local_68,param_2,0,0);
          }
          iVar4 = (**(code **)(*local_68 + 0x1c8))
                            (local_68,lVar5,puVar13,*(undefined8 *)(*local_68 + 0x1d0));
          goto LAB_0744a66c;
        }
        if (uVar14 == 0) {
          lVar5 = FUN_03f5c394(DAT_0917fc88,2);
          if (cVar10 == '\0') {
            if (lVar5 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar5 + 0x18) == 0) ||
               (*(char *)(lVar5 + 0x20) = (char)uVar1, *(int *)(lVar5 + 0x18) == 1))
            goto LAB_0744a8a4;
            uVar9 = uVar9 >> 8;
          }
          else {
            if (lVar5 == 0) goto LAB_0744a8a8;
            if ((*(int *)(lVar5 + 0x18) == 0) ||
               (*(char *)(lVar5 + 0x20) = (char)(uVar9 >> 8), *(int *)(lVar5 + 0x18) == 1))
            goto LAB_0744a8a4;
          }
          *(char *)(lVar5 + 0x21) = (char)uVar9;
          if (local_68 == (long *)0x0) {
            if (param_4 == (long *)0x0) {
              plVar6 = *(long **)(param_1 + 0x30);
              if (plVar6 == (long *)0x0) goto LAB_0744a8a8;
              local_68 = (long *)(**(code **)(*plVar6 + 0x178))
                                           (plVar6,*(undefined8 *)(*plVar6 + 0x180));
            }
            else {
              local_68 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
            }
            if (local_68 == (long *)0x0) goto LAB_0744a8a8;
            System_Text_DecoderFallbackBuffer__InternalInitialize(local_68,param_2,0,0);
          }
          lVar8 = *local_68;
          goto LAB_0744a650;
        }
      }
      uVar14 = 0;
      uVar9 = 0xffffffff;
      puVar12 = puVar13;
      uVar1 = 0;
      if (puVar16 <= puVar13) goto LAB_0744a6f0;
    } while( true );
  }
  local_68 = (long *)0x0;
LAB_0744a6f0:
  if ((param_4 == (long *)0x0) || ((char)param_4[5] != '\0')) {
    if (uVar14 != 0) {
      cVar10 = *(char *)(param_1 + 0x39);
      lVar5 = FUN_03f5c394(DAT_0917fc88,2);
      if (cVar10 == '\0') {
        if (lVar5 == 0) goto LAB_0744a8a8;
        if ((*(int *)(lVar5 + 0x18) == 0) ||
           (*(char *)(lVar5 + 0x20) = (char)uVar14, *(int *)(lVar5 + 0x18) == 1)) goto LAB_0744a8a4;
        uVar14 = uVar14 >> 8;
      }
      else {
        if (lVar5 == 0) goto LAB_0744a8a8;
        if ((*(int *)(lVar5 + 0x18) == 0) ||
           (*(char *)(lVar5 + 0x20) = (char)(uVar14 >> 8), *(int *)(lVar5 + 0x18) == 1))
        goto LAB_0744a8a4;
      }
      *(char *)(lVar5 + 0x21) = (char)uVar14;
      if (local_68 == (long *)0x0) {
        if (param_4 == (long *)0x0) {
          plVar6 = *(long **)(param_1 + 0x30);
          if (plVar6 == (long *)0x0) goto LAB_0744a8a8;
          local_68 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180))
          ;
        }
        else {
          local_68 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
        }
        if (local_68 == (long *)0x0) goto LAB_0744a8a8;
        System_Text_DecoderFallbackBuffer__InternalInitialize(local_68,param_2,0,0);
      }
      iVar4 = (**(code **)(*local_68 + 0x1c8))
                        (local_68,lVar5,puVar13,*(undefined8 *)(*local_68 + 0x1d0));
      iVar15 = iVar15 + -1 + iVar4;
    }
    if ((int)uVar9 < 0) {
      return iVar15;
    }
    if (local_68 == (long *)0x0) {
      if (param_4 == (long *)0x0) {
        plVar6 = *(long **)(param_1 + 0x30);
        if (plVar6 == (long *)0x0) goto LAB_0744a8a8;
        local_68 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      }
      else {
        local_68 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
      }
      if (local_68 == (long *)0x0) goto LAB_0744a8a8;
      System_Text_DecoderFallbackBuffer__InternalInitialize(local_68,param_2,0,0);
    }
    lVar5 = FUN_03f5c394(DAT_0917fc88,1);
    if (lVar5 == 0) {
LAB_0744a8a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0744a8a4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(char *)(lVar5 + 0x20) = (char)uVar9;
    iVar4 = (**(code **)(*local_68 + 0x1c8))
                      (local_68,lVar5,puVar13,*(undefined8 *)(*local_68 + 0x1d0));
    iVar4 = iVar4 + iVar15;
  }
  else {
    iVar4 = iVar15 - (uint)(uVar14 != 0);
  }
  return iVar4;
LAB_0744a494:
  lVar5 = FUN_03f5c394(DAT_0917fc88,2);
  if (cVar10 == '\0') {
    if (lVar5 == 0) goto LAB_0744a8a8;
    if ((*(int *)(lVar5 + 0x18) == 0) ||
       (*(char *)(lVar5 + 0x20) = (char)uVar14, *(int *)(lVar5 + 0x18) == 1)) goto LAB_0744a8a4;
    uVar14 = uVar14 >> 8;
  }
  else {
    if (lVar5 == 0) goto LAB_0744a8a8;
    if ((*(int *)(lVar5 + 0x18) == 0) ||
       (*(undefined1 *)(lVar5 + 0x20) = uVar2, *(int *)(lVar5 + 0x18) == 1)) goto LAB_0744a8a4;
  }
  *(char *)(lVar5 + 0x21) = (char)uVar14;
  if (local_68 == (long *)0x0) {
    if (param_4 == (long *)0x0) {
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 == (long *)0x0) goto LAB_0744a8a8;
      local_68 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
    }
    else {
      local_68 = (long *)System_Text_Decoder__get_FallbackBuffer(param_4,0);
    }
    if (local_68 == (long *)0x0) goto LAB_0744a8a8;
    System_Text_DecoderFallbackBuffer__InternalInitialize(local_68,param_2,0,0);
  }
  lVar8 = *local_68;
LAB_0744a650:
  iVar4 = (**(code **)(lVar8 + 0x1c8))(local_68,lVar5,puVar13,*(undefined8 *)(lVar8 + 0x1d0));
  uVar9 = 0;
LAB_0744a66c:
  iVar15 = iVar15 + -1 + iVar4;
LAB_0744a670:
  uVar14 = uVar9;
  uVar9 = 0xffffffff;
  if (puVar16 <= puVar13) goto LAB_0744a6f0;
  goto LAB_0744a358;
}

