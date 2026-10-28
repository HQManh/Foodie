// rea decompile_all
// name: CakeOrder.CheatManagerCakeOrder.<IESpawnDebugConsole>d__45$$MoveNext
// address: 0x4262974
// body: available
// range: 0x4262974-0x4262cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4262cbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4262cc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_CheatManagerCakeOrder_<IESpawnDebugConsole>d__45__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09516f98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197378);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091d4dd0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d7e20);
    FUN_03f5c2a4(&DAT_09202578);
    FUN_03f5c2a4(&DAT_092025b8);
    DAT_09516f98 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = CakeOrder_CheatManagerCakeOrder__get_IsShowDebug();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (lVar6 == 0) goto LAB_04262cbc;
      uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar6 + 0x20),0);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      uVar3 = FUN_04d1c8ac(*(undefined8 *)(lVar6 + 0x20),DAT_091d7e20);
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      thunk_FUN_03f5d7b8();
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_04262cbc;
    uVar2 = UnityEngine_AsyncOperation__get_isDone(*(long *)(param_1 + 0x28),0);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_04262cbc;
    plVar4 = (long *)UnityEngine_ResourceRequest__get_asset(*(long *)(param_1 + 0x28),0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != DAT_09184b68) {
      plVar4 = (long *)0x0;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(plVar4,0);
    if ((uVar2 & 1) == 0) {
      if (lVar6 == 0) goto LAB_04262cbc;
      uVar3 = System_String__Concat(DAT_092025b8,*(undefined8 *)(lVar6 + 0x20),0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar3,0);
      goto LAB_04262c98;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = FUN_04c35814(plVar4,DAT_091d4dd0);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  plVar4 = (long *)(param_1 + 0x30);
  if (*plVar4 != 0) {
    uVar2 = UnityEngine_AsyncOperation__get_isDone(*plVar4,0);
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
    if ((*plVar4 != 0) && (lVar5 = FUN_063f7b20(*plVar4,DAT_09197378), lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0x28);
        *plVar7 = *(long *)(lVar5 + 0x20);
        thunk_FUN_03f5d7b8(plVar7);
        lVar6 = *plVar7;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(lVar6,0,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogError(DAT_09202578,0);
        }
        else {
          if (*plVar7 == 0) goto LAB_04262cbc;
          UnityEngine_GameObject__SetActive(*plVar7,1,0);
        }
        *plVar4 = 0;
        thunk_FUN_03f5d7b8(plVar4,0);
LAB_04262c98:
        *(undefined8 *)(param_1 + 0x28) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
        return 0;
      }
    }
  }
LAB_04262cbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

