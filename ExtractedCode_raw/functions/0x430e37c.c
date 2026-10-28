// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<TryShowNewVersionPopup>d__68$$MoveNext
// address: 0x430e37c
// body: available
// range: 0x430e37c-0x430e7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430e7b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e7b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e7b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<TryShowNewVersionPopup>d__68__MoveNext(int *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  long *local_a0;
  long lStack_98;
  ulong local_90;
  undefined4 local_78;
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  undefined8 local_28;
  
  if ((DAT_095175b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199860);
    FUN_03f5c2a4(&DAT_091998a8);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a6a0);
    FUN_03f5c2a4(&DAT_0919a6a8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc2b8);
    FUN_03f5c2a4(&DAT_091bc2c0);
    FUN_03f5c2a4(&DAT_091bcba8);
    FUN_03f5c2a4(&DAT_091bdec8);
    DAT_095175b5 = 1;
  }
  lVar8 = *(long *)(param_1 + 8);
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_28 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 0xe);
    lStack_48 = *(long *)(param_1 + 0xc);
    local_50 = *(long **)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0430e498:
    plVar9 = local_50;
    lVar4 = lStack_48;
    if (local_50 != (long *)0x0) {
      uVar6 = local_40 & 0xffff;
      lVar4 = *(long *)(DAT_0919a6a0 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar3 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0430e614;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar9,lVar4,0);
LAB_0430e614:
      lVar4 = (*(code *)*puVar2)(plVar9,uVar6,puVar2[1]);
    }
    if (lVar4 != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Equality(lVar8,0,0);
      if ((uVar6 & 1) == 0) {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = CakeOrder_Home_HomeControllerCookOrder__ShowPopupNewVersion(lVar8,lVar4,0,0,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_28 = FUN_062e8294(lVar8,DAT_091bcba8);
        uVar6 = FUN_062098a0(&local_28,DAT_091bc2c0);
        if ((uVar6 & 1) == 0) {
          *param_1 = 1;
          *(undefined8 *)(param_1 + 0x10) = local_28;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          FUN_04323ac8(param_1 + 2,&local_28,param_1,DAT_091998a8);
          return;
        }
        goto LAB_0430e45c;
      }
    }
  }
  else {
    if (*param_1 == 1) {
      local_28 = *(undefined8 *)(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_0430e45c:
      bVar1 = FUN_062098e0(&local_28,DAT_091bc2b8);
      goto LAB_0430e65c;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar8 + 400) == '\0') {
      *(undefined1 *)(lVar8 + 400) = 1;
      CakeOrder_Home_NewVersionNoticeService__RunAsync(&local_a0,*(undefined8 *)(lVar8 + 0x118),0);
      local_60 = local_90;
      lStack_68 = lStack_98;
      lStack_98 = 0;
      local_90 = 0;
      local_70 = local_a0;
      local_a0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdec8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      lStack_98 = lStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      thunk_FUN_03f5d7b8(&local_a0,0);
      lStack_48 = lStack_98;
      local_50 = local_a0;
      local_40 = local_90;
      uVar6 = FUN_041e5390(&local_50,DAT_0919a6a8);
      if ((uVar6 & 1) == 0) {
        *param_1 = 0;
        *(long *)(param_1 + 0xc) = lStack_48;
        *(long **)(param_1 + 10) = local_50;
        *(ulong *)(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_043239a8(param_1 + 2,&local_50,param_1,DAT_09199860);
        return;
      }
      goto LAB_0430e498;
    }
  }
  bVar1 = 0;
LAB_0430e65c:
  plVar9 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar9 == (long *)0x0) {
    *(byte *)(param_1 + 6) = bVar1 & 1;
  }
  else {
    lVar8 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar4 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0430e704;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,lVar8,2);
LAB_0430e704:
    (*(code *)*puVar2)(plVar9,bVar1 & 1,puVar2[1]);
  }
  return;
}

