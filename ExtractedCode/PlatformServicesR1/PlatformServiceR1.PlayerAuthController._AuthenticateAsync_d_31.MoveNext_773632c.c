// rea decompile_all
// name: PlatformServiceR1.PlayerAuthController.<AuthenticateAsync>d__31$$MoveNext
// address: 0x773632c
// body: available
// range: 0x773632c-0x7736953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7736928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773692c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7736930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7736934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7736938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773693c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7736940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7736944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7736948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773694c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7736950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0773692c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void PlatformServiceR1_PlayerAuthController_<AuthenticateAsync>d__31__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  long local_48;
  undefined1 local_40 [16];
  int local_24;
  
  if ((DAT_09522a92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199738);
    FUN_03f5c2a4(&DAT_09199758);
    FUN_03f5c2a4(&DAT_0919a560);
    FUN_03f5c2a4(&DAT_0919a568);
    FUN_03f5c2a4(&DAT_09185640);
    FUN_03f5c2a4(&DAT_091bddb8);
    FUN_03f5c2a4(&DAT_092129b8);
    FUN_03f5c2a4(&DAT_09208a50);
    FUN_03f5c2a4(&DAT_09208990);
    FUN_03f5c2a4(&DAT_0920d990);
    DAT_09522a92 = 1;
  }
  auVar11._8_8_ = local_40._8_8_;
  auVar11._0_8_ = local_40._0_8_;
  local_24 = *param_1;
  local_48 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (local_24 == 0) {
LAB_07736414:
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_24 = -1;
    *param_1 = -1;
LAB_0773642c:
    uVar1 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      iVar3 = local_60._8_4_;
    }
    else {
      uVar2 = local_60._12_2_;
      lVar4 = *(long *)(DAT_0919a560 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar7 = *(long *)uVar1;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar4) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07736554;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar1,lVar4,0);
LAB_07736554:
      iVar3 = (*(code *)*puVar5)(uVar1,uVar2,puVar5[1]);
    }
    iVar6 = 0x18;
  }
  else {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_48 + 0x2c) != '\0') {
      iVar3 = *(int *)(local_48 + 0x34);
      local_40 = auVar11;
      local_60 = ZEXT816(0);
      goto LAB_077365b8;
    }
    if (*(int *)(local_48 + 0x30) != 0) {
      iVar3 = 0;
      local_60 = ZEXT816(0);
      goto LAB_077365b8;
    }
    if (((char)param_1[10] == '\0') &&
       (uVar8 = PlatformServiceR1_PlayerAuthController__get_HasUserDeclinedLogin(), (uVar8 & 1) != 0
       )) {
      if (DAT_09522a98 == '\0') {
        FUN_03f5c2a4(&DAT_091891d8);
        DAT_09522a98 = '\x01';
      }
      if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_092129b8,0);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = 1;
      PlatformServiceR1_PlayerAuthController__Finish(local_48,1,(char)param_1[10],0);
      goto LAB_077365b8;
    }
    uVar8 = EssentialSystemR1_NetworkCheck__get_IsExistInstance(0);
    if ((uVar8 & 1) != 0) {
      if (DAT_095173ff == '\0') {
        FUN_03f5c2a4(&DAT_091886f0);
        DAT_095173ff = '\x01';
      }
      if (**(long **)(DAT_091886f0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(**(long **)(DAT_091886f0 + 0xb8) + 0x40) == '\0') {
        if (DAT_09522a98 == '\0') {
          FUN_03f5c2a4(&DAT_091891d8);
          DAT_09522a98 = '\x01';
        }
        if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
          EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_09208a50,0);
        }
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = 3;
        PlatformServiceR1_PlayerAuthController__Finish(local_48,3,(char)param_1[10],0);
        goto LAB_077365b8;
      }
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_48 + 0x20) == 0) {
      if (DAT_09522a98 == '\0') {
        FUN_03f5c2a4(&DAT_091891d8);
        DAT_09522a98 = '\x01';
      }
      if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
        EssentialSystemR1_R1Logger__LogWarning(**(long **)(DAT_091891d8 + 0xb8),DAT_09208990,0);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = 2;
      PlatformServiceR1_PlayerAuthController__Finish(local_48,2,(char)param_1[10],0);
      goto LAB_077365b8;
    }
    if (DAT_09522a98 == '\0') {
      FUN_03f5c2a4(&DAT_091891d8);
      DAT_09522a98 = '\x01';
    }
    if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
      EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_0920d990,0);
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0x2c) = 1;
    if (local_24 == 0) goto LAB_07736414;
    plVar10 = *(long **)(local_48 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185640) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07736880;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185640,1);
LAB_07736880:
    auVar11 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddb8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    uVar8 = FUN_0429cb44(local_60,DAT_0919a568);
    if ((uVar8 & 1) != 0) goto LAB_0773642c;
    local_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    FUN_04791c34(param_1 + 2,local_60,param_1,DAT_09199738);
    iVar3 = 0;
    iVar6 = 0x13;
  }
  if (local_24 < 0) {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0x2c) = 0;
  }
  if ((iVar6 != 0x18) && (iVar6 != 0)) {
    return;
  }
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  PlatformServiceR1_PlayerAuthController__Finish(local_48,iVar3,(char)param_1[10],iVar3 == 1);
LAB_077365b8:
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    param_1[6] = iVar3;
  }
  else {
    lVar4 = *(long *)(DAT_09199758 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0773665c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,lVar4,2);
LAB_0773665c:
    (*(code *)*puVar5)(plVar10,iVar3,puVar5[1]);
  }
  return;
}

