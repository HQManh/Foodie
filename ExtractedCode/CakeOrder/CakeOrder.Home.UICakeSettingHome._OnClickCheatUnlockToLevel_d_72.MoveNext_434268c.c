// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome.<OnClickCheatUnlockToLevel>d__72$$MoveNext
// address: 0x434268c
// body: available
// range: 0x434268c-0x4342a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4342a10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4342a38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome_<OnClickCheatUnlockToLevel>d__72__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
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
  
  if ((DAT_09517751 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2ac0);
    FUN_03f5c2a4(&DAT_0919a660);
    FUN_03f5c2a4(&DAT_0919a668);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba220);
    FUN_03f5c2a4(&DAT_091ba228);
    FUN_03f5c2a4(&DAT_091bdea0);
    FUN_03f5c2a4(&DAT_09205888);
    DAT_09517751 = 1;
  }
  lVar11 = *(long *)(param_1 + 10);
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 0x12);
    lStack_48 = *(long *)(param_1 + 0x10);
    local_50 = *(long **)(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar11 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = System_Int32__TryParse
                      (*(undefined8 *)(*(long *)(lVar11 + 0x140) + 0x210),param_1 + 0xc,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09205888,0);
      goto LAB_043429e8;
    }
    uVar12 = *(undefined8 *)(lVar11 + 0x110);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar12,0);
    if ((uVar5 & 1) == 0) goto LAB_043429e8;
    if (*(long *)(lVar11 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(lVar11 + 0x110) + 0x20),0);
    if ((uVar5 & 1) != 0) goto LAB_043429e8;
    if (*(long *)(lVar11 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(*(long *)(lVar11 + 0x110) + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(lVar7 + 0x28);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060da5e0(&local_a0,lVar7,DAT_091ba220);
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
    uVar5 = FUN_041e5390(&local_50,DAT_0919a668);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 0x10) = lStack_48;
      *(long **)(param_1 + 0xe) = local_50;
      *(ulong *)(param_1 + 0x12) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bd518(param_1 + 2,&local_50,param_1,DAT_091c2ac0);
      return;
    }
  }
  plVar3 = local_50;
  lVar7 = lStack_48;
  if (local_50 != (long *)0x0) {
    uVar5 = local_40 & 0xffff;
    lVar7 = *(long *)(DAT_0919a660 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar8 = *plVar3;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04342974;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar3,lVar7,0);
LAB_04342974:
    lVar7 = (*(code *)*puVar6)(plVar3,uVar5,puVar6[1]);
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = CakeOrder_MapLevelMetadataConfig__get_NumLevels(lVar7,0);
  iVar2 = param_1[0xc];
  iVar1 = iVar2;
  if (iVar4 <= iVar2) {
    iVar1 = iVar4;
  }
  if (iVar2 < 1) {
    iVar1 = 1;
  }
  param_1[0xc] = iVar1;
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar11 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *(long *)(*(long *)(lVar11 + 0x110) + 0x30);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *(long *)(lVar7 + 0x28);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_060da79c(lVar7,DAT_091ba228);
  CakeOrder_Home_UICakeSettingHome__CheatMoveProgressToLevel(lVar11,param_1[0xc] + -1,0);
LAB_043429e8:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

