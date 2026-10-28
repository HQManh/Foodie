// rea decompile_all
// name: IapAdsSystem.RemoteConfigManager$$FetchComplete
// address: 0x73268b8
// body: available
// range: 0x73268b8-0x7326cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7326a98 to 0x7326728 IapAdsSystem.RemoteConfigManager$$TriggerRemoteValueAvailable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7326ca4 to 0x4d846d8 FUN_04d846d8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7326ca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7326cac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7326cb8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_RemoteConfigManager__FetchComplete(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_34;
  
  if ((DAT_095205da & 1) == 0) {
    FUN_03f5c2a4(&DAT_091744c0);
    FUN_03f5c2a4(&DAT_091846c8);
    FUN_03f5c2a4(&DAT_091875d8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189e88);
    FUN_03f5c2a4(&DAT_091daf40);
    FUN_03f5c2a4(&DAT_091eef28);
    FUN_03f5c2a4(&DAT_09193ae8);
    FUN_03f5c2a4(&DAT_0920bf40);
    FUN_03f5c2a4(&DAT_09202870);
    FUN_03f5c2a4(&DAT_092013d8);
    FUN_03f5c2a4(&DAT_09206958);
    DAT_095205da = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09193ae8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    if (*(char *)(param_1 + 0x5c) != '\0') {
      return;
    }
    if (param_2 != 0) {
      uVar2 = System_Threading_Tasks_Task__get_IsFaulted(param_2,0);
      if (((uVar2 & 1) == 0) &&
         (uVar2 = System_Threading_Tasks_Task__get_IsCanceled(param_2,0), (uVar2 & 1) == 0)) {
        uVar2 = System_Threading_Tasks_Task__get_IsCompleted(param_2,0);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_09189e88 + 0xb8) != 0) {
            EssentialSystemR1_R1Logger__LogError(**(long **)(DAT_09189e88 + 0xb8),DAT_0920bf40,0);
LAB_07326a84:
            IapAdsSystem_RemoteConfigManager__TriggerRemoteValueAvailable(param_1);
            return;
          }
        }
        else {
          if (*(int *)(DAT_091846c8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance(0);
          if (lVar8 != 0) {
            lVar4 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_Info(lVar8,0);
            plVar3 = (long *)(lVar1 + 0x18);
            *plVar3 = lVar4;
            thunk_FUN_03f5d7b8(plVar3,lVar4);
            if (*plVar3 != 0) {
              if (*(int *)(*plVar3 + 0x28) == 0) {
                uVar7 = Firebase_RemoteConfig_FirebaseRemoteConfig__ActivateAsync(lVar8,0);
                uVar6 = thunk_FUN_03f9944c(DAT_091744c0);
                FUN_070a8c30(uVar6,lVar1,DAT_091eef28,0);
                FUN_04d846d8(uVar7,uVar6,DAT_091daf40);
                return;
              }
              if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar1 = **(long **)(DAT_09189e88 + 0xb8);
              plVar5 = (long *)FUN_03f5c394(DAT_09180318,2);
              if (plVar5 != (long *)0x0) {
                if ((DAT_09206958 != 0) &&
                   (lVar8 = thunk_FUN_03f99350(DAT_09206958,*(undefined8 *)(*plVar5 + 0x40)),
                   lVar8 == 0)) {
LAB_07326cb0:
                  uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar7,0);
                }
                if ((int)plVar5[3] == 0) {
LAB_07326cac:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar5[4] = DAT_09206958;
                thunk_FUN_03f5d7b8();
                if (*plVar3 != 0) {
                  local_34 = *(undefined4 *)(*plVar3 + 0x28);
                  lVar8 = FUN_03f5c42c(DAT_091875d8,&local_34);
                  if ((lVar8 != 0) &&
                     (lVar4 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
                     ) goto LAB_07326cb0;
                  if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) goto LAB_07326cac;
                  plVar5[5] = lVar8;
                  thunk_FUN_03f5d7b8(plVar5 + 5,lVar8);
                  if (lVar1 != 0) {
                    EssentialSystemR1_R1Logger__LogErrorFormat(lVar1,DAT_09202870,plVar5,0);
                    IapAdsSystem_RemoteConfigManager__TriggerRemoteValueAvailable(param_1);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = **(long **)(DAT_09189e88 + 0xb8);
        plVar3 = (long *)FUN_03f5c394(DAT_09180318,1);
        lVar1 = System_Threading_Tasks_Task__get_Exception(param_2,0);
        if (plVar3 != (long *)0x0) {
          if ((lVar1 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_07326cb0;
          if ((int)plVar3[3] == 0) goto LAB_07326cac;
          plVar3[4] = lVar1;
          thunk_FUN_03f5d7b8(plVar3 + 4,lVar1);
          if (lVar8 != 0) {
            EssentialSystemR1_R1Logger__LogErrorFormat(lVar8,DAT_092013d8,plVar3,0);
            goto LAB_07326a84;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

