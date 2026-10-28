// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$AddToHomeIconPlate
// address: 0x7761398
// body: available
// range: 0x7761398-0x7761717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77615c4 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776160c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761714 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_CookOrderBridge__AddToHomeIconPlate(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_38;
  
  if ((DAT_09522c36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c02c8);
    FUN_03f5c2a4(&DAT_091c0540);
    FUN_03f5c2a4(&DAT_091c0610);
    FUN_03f5c2a4(&DAT_091c5628);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09170c28);
    FUN_03f5c2a4(&DAT_09180408);
    FUN_03f5c2a4(&DAT_09173308);
    FUN_03f5c2a4(&DAT_09216e40);
    FUN_03f5c2a4(&DAT_09214070);
    DAT_09522c36 = 1;
  }
  local_38 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(param_1,0,0);
  lVar9 = 0;
  if ((uVar2 & 1) != 0) {
    if (param_1 == 0) goto LAB_07761710;
    lVar9 = FUN_04a6a4f8(param_1,1,DAT_091c5628);
  }
  uVar5 = DAT_09173308;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)System_Type__GetTypeFromHandle(uVar5,0);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x6f8))
                               (plVar3,DAT_09216e40,0x24,*(undefined8 *)(*plVar3 + 0x700));
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar9,0,0);
    if (((uVar2 & 1) != 0) ||
       (uVar2 = System_Reflection_FieldInfo__op_Equality(plVar3,0,0), (uVar2 & 1) != 0)) {
LAB_0776158c:
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09214070,0);
      return;
    }
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
      uVar5 = DAT_09170c28;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
      uVar2 = System_Type__op_Inequality(uVar4,uVar5,0);
      if ((uVar2 & 1) != 0) goto LAB_0776158c;
      lVar6 = (**(code **)(*plVar3 + 0x2f8))(plVar3,lVar9,*(undefined8 *)(*plVar3 + 0x300));
      lVar7 = DAT_091c02c8;
      uVar5 = DAT_09180408;
      if (lVar6 == 0) {
        lVar6 = *(long *)(DAT_091c02c8 + 0x38);
        if (lVar6 == 0) {
          FUN_03f95ac8(DAT_091c02c8);
          lVar6 = *(long *)(lVar7 + 0x38);
        }
        lVar6 = *(long *)(lVar6 + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f95a6c();
        }
        lVar7 = **(long **)(lVar7 + 0xb8);
      }
      else {
        lVar7 = thunk_FUN_03f99350(lVar6,DAT_09180408);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar6,uVar5);
        }
      }
      local_38 = lVar7;
      iVar1 = FUN_04ee582c(lVar7,param_2,DAT_091c0540);
      if (-1 < iVar1) {
        return;
      }
      if ((lVar7 != 0) &&
         (FUN_0492e500(&local_38,*(int *)(lVar7 + 0x18) + 1,DAT_091c0610), local_38 != 0)) {
        if (*(uint *)(local_38 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        puVar8 = (undefined8 *)
                 (local_38 +
                  ((long)(((ulong)*(uint *)(local_38 + 0x18) << 0x20) + -0x100000000) >> 0x1d) +
                 0x20);
        *puVar8 = param_2;
        thunk_FUN_03f5d7b8(puVar8,param_2);
        System_Reflection_FieldInfo__SetValue(plVar3,lVar9,local_38,0);
        if (lVar9 != 0) {
          Utilities_UIPlateAroundActiveButtons__Refresh(lVar9,0);
          return;
        }
      }
    }
  }
LAB_07761710:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

