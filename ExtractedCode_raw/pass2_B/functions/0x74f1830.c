// rea decompile_all
// name: System.Reflection.RuntimeParameterInfo$$get_DefaultValue
// address: 0x74f1830
// body: available
// range: 0x74f1830-0x74f1b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74f1b4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f1b68 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f1b7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74f1b80 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_RuntimeParameterInfo__get_DefaultValue(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_0952162c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fe28);
    FUN_03f5c2a4(&DAT_09171450);
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_0917fe50);
    FUN_03f5c2a4(&DAT_09171528);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09170a18);
    FUN_03f5c2a4(&DAT_09170a08);
    DAT_0952162c = 1;
  }
  uVar2 = DAT_09171520;
  lVar5 = param_1[3];
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  uVar3 = System_Type__op_Equality(lVar5,uVar2,0);
  uVar2 = DAT_09170a18;
  if ((uVar3 & 1) == 0) {
    lVar5 = param_1[3];
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar3 = System_Type__op_Equality(lVar5,uVar2,0);
    uVar2 = DAT_09171448;
    if ((uVar3 & 1) != 0) goto LAB_074f1958;
    lVar5 = param_1[3];
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar3 = System_Type__op_Equality(lVar5,uVar2,0);
    uVar2 = DAT_09170a08;
    if ((uVar3 & 1) == 0) {
      lVar5 = param_1[3];
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      uVar3 = System_Type__op_Equality(lVar5,uVar2,0);
      if ((uVar3 & 1) != 0) goto LAB_074f1a70;
LAB_074f1b14:
      plVar4 = (long *)param_1[4];
LAB_074f1b18:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
      goto LAB_074f1b80;
    }
LAB_074f1a70:
    uVar2 = DAT_09171450;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    lVar5 = (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(undefined8 *)(*param_1 + 0x250));
    uVar2 = DAT_0917fe28;
    plVar4 = (long *)0x0;
    if (lVar5 != 0) {
      plVar4 = (long *)thunk_FUN_03f99350(lVar5,DAT_0917fe28);
      if (plVar4 != (long *)0x0) {
        if (plVar4[3] == 0) goto LAB_074f1b14;
        if ((int)plVar4[3] != 0) {
          plVar4 = (long *)plVar4[4];
          if (plVar4 != (long *)0x0) {
            if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x074f1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
              return;
            }
            goto LAB_074f1b80;
          }
          goto LAB_074f1b3c;
        }
        goto LAB_074f1b6c;
      }
      goto LAB_074f1b50;
    }
  }
  else {
LAB_074f1958:
    uVar2 = DAT_09171528;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    lVar5 = (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(undefined8 *)(*param_1 + 0x250));
    uVar2 = DAT_0917fe50;
    plVar4 = (long *)0x0;
    if (lVar5 != 0) {
      plVar4 = (long *)thunk_FUN_03f99350(lVar5,DAT_0917fe50);
      if (plVar4 == (long *)0x0) {
LAB_074f1b50:
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar5,uVar2);
        }
        goto LAB_074f1b80;
      }
      if (plVar4[3] == 0) goto LAB_074f1b14;
      if ((int)plVar4[3] == 0) {
LAB_074f1b6c:
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        goto LAB_074f1b80;
      }
      lVar5 = plVar4[4];
      if (lVar5 != 0) {
        uStack_48 = *(undefined8 *)(lVar5 + 0x18);
        local_50 = *(undefined8 *)(lVar5 + 0x10);
        plVar4 = (long *)FUN_03f5c42c(DAT_091837d8,&local_50);
        goto LAB_074f1b18;
      }
    }
  }
LAB_074f1b3c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_074f1b80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}

