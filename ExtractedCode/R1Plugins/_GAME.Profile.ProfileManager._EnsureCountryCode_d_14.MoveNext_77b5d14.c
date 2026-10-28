// rea decompile_all
// name: _GAME.Profile.ProfileManager.<EnsureCountryCode>d__14$$MoveNext
// address: 0x77b5d14
// body: available
// range: 0x77b5d14-0x77b623b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b5fc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b6228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b622c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b6230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b6234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b6238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager_<EnsureCountryCode>d__14__MoveNext(int *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined4 local_78;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  long *local_50;
  undefined8 uStack_48;
  ulong local_40;
  
  if ((DAT_09522ea8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199d90);
    FUN_03f5c2a4(&DAT_09199de8);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba490);
    FUN_03f5c2a4(&DAT_0917e740);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522ea8 = 1;
  }
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 0xc);
    uStack_48 = *(undefined8 *)(param_1 + 10);
    local_50 = *(long **)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
LAB_077b5f18:
    plVar9 = local_50;
    uVar1 = uStack_48;
    if (local_50 != (long *)0x0) {
      uVar2 = local_40 & 0xffff;
      lVar3 = *(long *)(DAT_0919a710 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c(lVar3);
      }
      lVar4 = *plVar9;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar3) {
            puVar7 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_077b5fd8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,0);
LAB_077b5fd8:
      uVar1 = (*(code *)*puVar7)(plVar9,uVar2,puVar7[1]);
    }
    if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = DAT_091ba490;
    lVar4 = *(long *)(DAT_091ba490 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    uVar8 = **(undefined8 **)(lVar3 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar8,0,0);
    if ((uVar2 & 1) != 0) {
      puVar7 = &DAT_091f5700;
      goto LAB_077b6150;
    }
    uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar1,0);
    if ((uVar2 & 1) != 0) {
      uVar1 = _GAME_BaseGame_WebService__GetCountryCodeFromDevice(0);
    }
    uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar1,0);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar7 = (undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x48);
      *puVar7 = uVar1;
      thunk_FUN_03f5d7b8(puVar7,uVar1);
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(**(long **)(DAT_091896c0 + 0xb8) + 0xc1) = 1;
      _GAME_Profile_ProfileDbModel__AddSaveAction();
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_091896c0 + 0xb8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar7 = (undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x48);
    uVar1 = _GAME_BaseGame_WebService__NormalizeCountryCode(*puVar7,0);
    *puVar7 = uVar1;
    thunk_FUN_03f5d7b8(puVar7);
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty
                      (*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x48),0);
    if ((uVar2 & 1) != 0) {
      _GAME_BaseGame_WebService__GetCountryCode(&local_a0,0);
      local_60 = local_90;
      uStack_68 = uStack_98;
      uStack_98 = 0;
      local_90 = 0;
      local_70 = local_a0;
      local_a0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdf18 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      thunk_FUN_03f5d7b8(&local_a0,0);
      uStack_48 = uStack_98;
      local_50 = local_a0;
      local_40 = local_90;
      uVar2 = FUN_041e5390(&local_50,DAT_0919a718);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 10) = uStack_48;
        *(long **)(param_1 + 8) = local_50;
        *(ulong *)(param_1 + 0xc) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_04794274(param_1 + 2,&local_50,param_1,DAT_09199d90);
        return;
      }
      goto LAB_077b5f18;
    }
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_091896c0 + 0xb8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  puVar7 = (undefined8 *)(lVar3 + 0x48);
LAB_077b6150:
  plVar9 = *(long **)(param_1 + 2);
  uVar1 = *puVar7;
  *param_1 = -2;
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar1;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar1);
  }
  else {
    lVar3 = *(long *)(DAT_09199de8 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar4 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar3) {
          puVar7 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_077b6204;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,2);
LAB_077b6204:
    (*(code *)*puVar7)(plVar9,uVar1,puVar7[1]);
  }
  return;
}

