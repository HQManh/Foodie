// rea decompile_all
// name: System.Delegate$$DynamicInvokeImpl
// address: 0x7601140
// body: available
// range: 0x7601140-0x7601443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760124c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7601434 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7601440 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Delegate__DynamicInvokeImpl(long *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long *local_38;
  
  local_38 = param_2;
  if ((DAT_09521fd7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0600);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521fd7 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar2 = System_Reflection_MethodInfo__op_Equality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
LAB_07601288:
    lVar4 = param_1[4];
    if (param_1[0xd] == 0) {
      System_Delegate__InitializeDelegateData(param_1);
    }
    lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if (lVar5 != 0) {
      uVar2 = System_Reflection_MethodBase__get_IsStatic(lVar5,0);
      if ((uVar2 & 1) == 0) {
        if (((param_1[4] == 0) && (param_2 != (long *)0x0)) && (param_2[3] != 0)) {
          iVar6 = (int)param_2[3];
          if (iVar6 == 0) goto LAB_07601434;
          lVar4 = param_2[4];
          System_Array__Copy(param_2,1,param_2,0,iVar6 + -1,0);
          FUN_0492e500(&local_38,(int)param_2[3] + -1,DAT_091c0600);
        }
      }
      else {
        if (param_1[0xd] == 0) goto LAB_0760124c;
        if (*(char *)(param_1[0xd] + 0x20) != '\0') {
          if (param_2 == (long *)0x0) {
            plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
            if (plVar3 == (long *)0x0) goto LAB_0760124c;
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_07601438:
              uVar1 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar1,0);
            }
            if ((int)plVar3[3] == 0) {
LAB_07601434:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar3[4] = lVar4;
            thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
            lVar4 = 0;
            local_38 = plVar3;
          }
          else {
            FUN_0492e500(&local_38,(int)param_2[3] + 1,DAT_091c0600);
            if (local_38 == (long *)0x0) goto LAB_0760124c;
            System_Array__Copy(local_38,0,local_38,1,(int)local_38[3] + -1,0);
            plVar3 = local_38;
            if (local_38 == (long *)0x0) goto LAB_0760124c;
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*local_38 + 0x40)), lVar5 == 0))
            goto LAB_07601438;
            if ((int)plVar3[3] == 0) goto LAB_07601434;
            plVar3 = plVar3 + 4;
            *plVar3 = lVar4;
            thunk_FUN_03f5d7b8(plVar3,lVar4);
            lVar4 = 0;
          }
        }
      }
      lVar5 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      if (lVar5 != 0) {
        System_Reflection_MethodBase__Invoke(lVar5,lVar4,local_38,0);
        return;
      }
    }
  }
  else if (param_2 != (long *)0x0) {
    plVar3 = (long *)FUN_03f5c394(DAT_09180748,(int)param_2[3]);
    uVar7 = 0;
    while( true ) {
      if ((int)*(uint *)(param_2 + 3) <= (int)uVar7) break;
      if (*(uint *)(param_2 + 3) <= uVar7) goto LAB_07601434;
      if ((param_2[(long)(int)uVar7 + 4] == 0) || (lVar4 = FUN_03f6c2d0(), plVar3 == (long *)0x0))
      goto LAB_0760124c;
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_07601438;
      if (*(uint *)(plVar3 + 3) <= uVar7) goto LAB_07601434;
      plVar3[(long)(int)uVar7 + 4] = lVar4;
      thunk_FUN_03f5d7b8(plVar3 + (long)(int)uVar7 + 4,lVar4);
      param_2 = local_38;
      uVar7 = uVar7 + 1;
      if (local_38 == (long *)0x0) goto LAB_0760124c;
    }
    if (param_1[4] != 0) {
      lVar4 = FUN_03f6c2d0();
      if ((param_1[0xd] != 0) && (lVar4 != 0)) {
        lVar4 = System_Type__GetMethod(lVar4,*(undefined8 *)(param_1[0xd] + 0x18),plVar3,0);
        param_1[0xb] = lVar4;
        thunk_FUN_03f5d7b8();
        goto LAB_07601288;
      }
    }
  }
LAB_0760124c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

