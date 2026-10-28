// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<SyncBlurWeatherAsync>d__50$$MoveNext
// address: 0x430de10
// body: available
// range: 0x430de10-0x430e173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430e158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e15c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e16c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430e170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<SyncBlurWeatherAsync>d__50__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
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
  
  if ((DAT_095175b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c27c8);
    FUN_03f5c2a4(&DAT_0919a660);
    FUN_03f5c2a4(&DAT_0919a668);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba220);
    FUN_03f5c2a4(&DAT_091bdea0);
    DAT_095175b4 = 1;
  }
  lVar7 = *(long *)(param_1 + 4);
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
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
  }
  else {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar7 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar8 = (long *)(param_1 + 6);
    *plVar8 = *(long *)(*(long *)(lVar7 + 0x118) + 0x30);
    thunk_FUN_03f5d7b8(plVar8);
    if (*plVar8 == 0) goto LAB_0430e11c;
    if (*(long *)(lVar7 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    param_1[8] = *(int *)(*(long *)(lVar7 + 0x118) + 0x2c);
    lVar1 = *(long *)(*plVar8 + 0x28);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060da5e0(&local_a0,lVar1,DAT_091ba220);
    local_60 = local_90;
    lStack_68 = lStack_98;
    lStack_98 = 0;
    local_90 = 0;
    local_70 = local_a0;
    local_a0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdea0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_98 = lStack_68;
    local_a0 = local_70;
    local_90 = local_60;
    thunk_FUN_03f5d7b8(&local_a0,0);
    lStack_48 = lStack_98;
    local_50 = local_a0;
    local_40 = local_90;
    uVar2 = FUN_041e5390(&local_50,DAT_0919a668);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0xc) = lStack_48;
      *(long **)(param_1 + 10) = local_50;
      *(ulong *)(param_1 + 0xe) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_0432389c(param_1 + 2,&local_50,param_1,DAT_091c27c8);
      return;
    }
  }
  plVar8 = local_50;
  lVar1 = lStack_48;
  if (local_50 != (long *)0x0) {
    uVar2 = local_40 & 0xffff;
    lVar1 = *(long *)(DAT_0919a660 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c(lVar1);
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0430e068;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar1,0);
LAB_0430e068:
    lVar1 = (*(code *)*puVar3)(plVar8,uVar2,puVar3[1]);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar7,0);
  if ((uVar2 & 1) != 0) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar7 + 0x118);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(long *)(lVar4 + 0x30) == *(long *)(param_1 + 6)) &&
       (*(int *)(lVar4 + 0x2c) == param_1[8])) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(lVar1,0,0);
      if ((uVar2 & 1) != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar1 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig(lVar1,param_1[8],0);
        if (lVar1 != 0) {
          CakeOrder_BaseUI_SceneMainUI__SetBlurWeather(lVar7,*(undefined4 *)(lVar1 + 0x10),0);
        }
      }
    }
  }
LAB_0430e11c:
  piVar6 = param_1 + 6;
  piVar6[0] = 0;
  piVar6[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar6,0);
  FUN_042dada8(param_1 + 2,0);
  return;
}

