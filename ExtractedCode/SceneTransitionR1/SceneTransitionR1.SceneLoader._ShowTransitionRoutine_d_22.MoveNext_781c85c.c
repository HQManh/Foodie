// rea decompile_all
// name: SceneTransitionR1.SceneLoader.<ShowTransitionRoutine>d__22$$MoveNext
// address: 0x781c85c
// body: available
// range: 0x781c85c-0x781caab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x781caa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 SceneTransitionR1_SceneLoader_<ShowTransitionRoutine>d__22__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_095232d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09175068);
    FUN_03f5c2a4(&DAT_091cda20);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095232d4 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_0781caa8;
    uVar3 = FUN_0640f7ac(lVar6 + 0x40,DAT_09197800);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    lVar2 = FUN_04c35338(uVar3,uVar4,DAT_091d4bc0);
    if (lVar2 == 0) goto LAB_0781caa8;
    uVar3 = FUN_04b7c324(lVar2,DAT_091cda20);
    *(undefined8 *)(lVar6 + 0x38) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_0781caa8;
    uVar3 = *(undefined8 *)(lVar6 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(lVar6 + 0x20);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04b711d8(&local_48,uVar3,DAT_091bf638);
      *(undefined8 *)(lVar6 + 0x48) = uStack_40;
      *(undefined8 *)(lVar6 + 0x40) = local_48;
      *(undefined8 *)(lVar6 + 0x50) = local_38;
      thunk_FUN_03f5d7b8(lVar6 + 0x40,0);
      uStack_58 = *(undefined8 *)(lVar6 + 0x48);
      local_60 = *(undefined8 *)(lVar6 + 0x40);
      local_50 = *(undefined8 *)(lVar6 + 0x50);
      uVar3 = FUN_03f5c42c(DAT_09175068,&local_60);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  plVar5 = *(long **)(lVar6 + 0x38);
  if (plVar5 != (long *)0x0) {
    plVar5[5] = 0;
    thunk_FUN_03f5d7b8(plVar5 + 5,0);
    (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar6 + 0x38),
                 *(undefined8 *)(lVar2 + 0x28));
    }
    if (*(long *)(lVar6 + 0x38) != 0) {
      SceneTransitionR1_SceneTransitionBehaviorBase__TransitionIn
                (0xbf800000,*(long *)(lVar6 + 0x38),*(undefined8 *)(param_1 + 0x30));
      return 0;
    }
  }
LAB_0781caa8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

