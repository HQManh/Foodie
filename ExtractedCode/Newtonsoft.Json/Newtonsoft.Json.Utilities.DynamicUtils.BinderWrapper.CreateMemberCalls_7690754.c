// rea decompile_all
// name: Newtonsoft.Json.Utilities.DynamicUtils.BinderWrapper$$CreateMemberCalls
// address: 0x7690754
// body: available
// range: 0x7690754-0x7690c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7690c64 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7690c68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7690c6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7690c78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_DynamicUtils_BinderWrapper__CreateMemberCalls(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((DAT_09522599 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091e9530);
    FUN_03f5c2a4(&DAT_09190450);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091d7128);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091dc130);
    FUN_03f5c2a4(&DAT_0920cda8);
    FUN_03f5c2a4(&DAT_09207d90);
    FUN_03f5c2a4(&DAT_09207d88);
    FUN_03f5c2a4(&DAT_09207da0);
    FUN_03f5c2a4(&DAT_092035b8);
    DAT_09522599 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = FUN_03f5c7b8(DAT_09207d90,1,DAT_091dc130,DAT_091e9530);
  lVar2 = FUN_03f5c7b8(DAT_09207da0,1,DAT_091dc130,DAT_091e9530);
  lVar3 = FUN_03f5c7b8(DAT_09207d88,1,DAT_091dc130,DAT_091e9530);
  plVar4 = (long *)System_Type__GetTypeFromHandle(DAT_09171bc0,0);
  plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
  if (plVar5 == (long *)0x0) goto LAB_07690c6c;
  if ((lVar1 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
  goto LAB_07690c70;
  if ((int)plVar5[3] == 0) goto LAB_07690c68;
  plVar5[4] = lVar1;
  thunk_FUN_03f5d7b8(plVar5 + 4,lVar1);
  if (plVar4 != (long *)0x0) {
    lVar1 = (**(code **)(*plVar4 + 0x948))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x950));
    plVar4 = (long *)FUN_03f5c394(DAT_09180748,4);
    if (plVar4 != (long *)0x0) {
      if ((lVar2 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
LAB_07690c70:
        uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,0);
      }
      if ((int)plVar4[3] != 0) {
        plVar4[4] = lVar2;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar2);
        lVar6 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
        goto LAB_07690c70;
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
          plVar4[5] = lVar6;
          thunk_FUN_03f5d7b8(plVar4 + 5,lVar6);
          lVar6 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
          goto LAB_07690c70;
          if (2 < *(uint *)(plVar4 + 3)) {
            plVar4[6] = lVar6;
            thunk_FUN_03f5d7b8(plVar4 + 6,lVar6);
            if ((lVar1 != 0) &&
               (lVar6 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0))
            goto LAB_07690c70;
            if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
              plVar4[7] = lVar1;
              thunk_FUN_03f5d7b8(plVar4 + 7,lVar1);
              if (lVar3 != 0) {
                uVar8 = System_Type__GetMethod(lVar3,DAT_092035b8,plVar4,0);
                if (*(int *)(DAT_09187480 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09187480);
                }
                plVar4 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                           (0);
                if (plVar4 != (long *)0x0) {
                  lVar6 = FUN_03f5c420(*(undefined8 *)
                                        (*plVar4 + (ulong)*(ushort *)(DAT_091d7128 + 0x50) * 0x10 +
                                        0x140));
                  uVar8 = (**(code **)(lVar6 + 8))(plVar4,uVar8,lVar6);
                  puVar9 = (undefined8 *)(*(long *)(DAT_09190450 + 0xb8) + 0x10);
                  *puVar9 = uVar8;
                  thunk_FUN_03f5d7b8(puVar9,uVar8);
                  plVar4 = (long *)FUN_03f5c394(DAT_09180748,4);
                  if (plVar4 != (long *)0x0) {
                    if ((lVar2 != 0) &&
                       (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40)),
                       lVar6 == 0)) goto LAB_07690c70;
                    if ((int)plVar4[3] != 0) {
                      plVar4[4] = lVar2;
                      thunk_FUN_03f5d7b8(plVar4 + 4,lVar2);
                      lVar2 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
                      if ((lVar2 != 0) &&
                         (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40)),
                         lVar6 == 0)) goto LAB_07690c70;
                      if ((*(uint *)(plVar4 + 3) & 0xfffffffe) != 0) {
                        plVar4[5] = lVar2;
                        thunk_FUN_03f5d7b8(plVar4 + 5,lVar2);
                        lVar2 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
                        if ((lVar2 != 0) &&
                           (lVar6 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar4 + 0x40)),
                           lVar6 == 0)) goto LAB_07690c70;
                        if (2 < *(uint *)(plVar4 + 3)) {
                          plVar4[6] = lVar2;
                          thunk_FUN_03f5d7b8(plVar4 + 6,lVar2);
                          if ((lVar1 != 0) &&
                             (lVar2 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar4 + 0x40)),
                             lVar2 == 0)) goto LAB_07690c70;
                          if ((*(uint *)(plVar4 + 3) & 0xfffffffc) != 0) {
                            plVar4[7] = lVar1;
                            thunk_FUN_03f5d7b8(plVar4 + 7,lVar1);
                            uVar8 = System_Type__GetMethod(lVar3,DAT_0920cda8,plVar4,0);
                            plVar4 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                                                       (0);
                            if (plVar4 != (long *)0x0) {
                              lVar1 = FUN_03f5c420(*(undefined8 *)
                                                    (*plVar4 + (ulong)*(ushort *)
                                                                       (DAT_091d7128 + 0x50) * 0x10
                                                    + 0x140));
                              uVar8 = (**(code **)(lVar1 + 8))(plVar4,uVar8,lVar1);
                              puVar9 = (undefined8 *)(*(long *)(DAT_09190450 + 0xb8) + 0x18);
                              *puVar9 = uVar8;
                              thunk_FUN_03f5d7b8(puVar9,uVar8);
                              return;
                            }
                            goto LAB_07690c6c;
                          }
                        }
                      }
                    }
                    goto LAB_07690c68;
                  }
                }
              }
              goto LAB_07690c6c;
            }
          }
        }
      }
LAB_07690c68:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07690c6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

