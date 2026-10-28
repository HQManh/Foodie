// rea decompile_all
// name: System.Resources.ResourceReader$$FindType
// address: 0x74dba04
// body: available
// range: 0x74dba04-0x74dbd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dbcac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbcfc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd18 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dbd2c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074dbc74) */
/* WARNING: Removing unreachable block (ram,0x074dbd14) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 System_Resources_ResourceReader__FindType(long param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if ((DAT_09521580 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d7cc8);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_091dc130);
    DAT_09521580 = 1;
  }
  if ((int)param_2 < 0) {
LAB_074dbcb0:
    uVar6 = thunk_FUN_03fc39d4(&DAT_091ff300);
    uVar6 = System_Environment__GetResourceString(uVar6,0);
    thunk_FUN_03fc39d4(&DAT_091819f8);
    uVar3 = thunk_FUN_03f9944c();
    System_BadImageFormatException___ctor(uVar3,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d7cc8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar6);
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) <= (int)param_2) goto LAB_074dbcb0;
    uVar7 = (ulong)param_2;
    uVar6 = *(undefined8 *)(lVar5 + (ulong)param_2 * 8 + 0x20);
    if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_RuntimeType__op_Equality(uVar6,0,0);
    if ((uVar1 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x10);
      if ((plVar2 == (long *)0x0) ||
         (plVar2 = (long *)(**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400)),
         plVar2 == (long *)0x0)) goto LAB_074dbcac;
      uVar6 = (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
      plVar2 = *(long **)(param_1 + 0x10);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar2 = (long *)(**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400));
      lVar5 = *(long *)(param_1 + 0x58);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar2 + 0x218))
                (plVar2,(long)*(int *)(lVar5 + uVar7 * 4 + 0x20),*(undefined8 *)(*plVar2 + 0x220));
      plVar2 = *(long **)(param_1 + 0x10);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
      plVar2 = *(long **)(param_1 + 0x50);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)FUN_03f5c7b8(uVar3,1,DAT_091dc130,DAT_091d7cc8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) {
LAB_074dbd00:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        lVar5 = thunk_FUN_03f99350(plVar4,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar5 == 0) {
          uVar6 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,0);
        }
        if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400)) goto LAB_074dbd00;
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[uVar7 + 4] = (long)plVar4;
      thunk_FUN_03f5d7b8(plVar2 + uVar7 + 4,plVar4);
      plVar2 = *(long **)(param_1 + 0x10);
      if ((plVar2 == (long *)0x0) ||
         (plVar2 = (long *)(**(code **)(*plVar2 + 0x188))(plVar2,*(undefined8 *)(*plVar2 + 400)),
         plVar2 == (long *)0x0)) goto LAB_074dbcac;
      (**(code **)(*plVar2 + 0x218))(plVar2,uVar6,*(undefined8 *)(*plVar2 + 0x220));
    }
    lVar5 = *(long *)(param_1 + 0x50);
    if (lVar5 != 0) {
      if (param_2 < *(uint *)(lVar5 + 0x18)) {
        return *(undefined8 *)(lVar5 + uVar7 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_074dbcac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

