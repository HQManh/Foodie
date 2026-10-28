// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder$$.cctor
// address: 0x73cd8cc
// body: available
// range: 0x73cd8cc-0x73ce62f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73ce618 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73ce61c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ce620 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73ce62c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicObjectTypeBuilder___cctor(void)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((DAT_09520cb5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_091711c8);
    FUN_03f5c2a4(&DAT_09171468);
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09171520);
    FUN_03f5c2a4(&DAT_09183e08);
    FUN_03f5c2a4(&DAT_09183e88);
    FUN_03f5c2a4(&DAT_091c9ae8);
    FUN_03f5c2a4(&DAT_091c9b38);
    FUN_03f5c2a4(&DAT_09171818);
    FUN_03f5c2a4(&DAT_091791a0);
    FUN_03f5c2a4(&DAT_09178d40);
    FUN_03f5c2a4(&DAT_091785f8);
    FUN_03f5c2a4(&DAT_091719c8);
    FUN_03f5c2a4(&DAT_091a8848);
    FUN_03f5c2a4(&DAT_091a8830);
    FUN_03f5c2a4(&DAT_09179f30);
    FUN_03f5c2a4(&DAT_09171cd0);
    FUN_03f5c2a4(&DAT_09172418);
    FUN_03f5c2a4(&DAT_09172420);
    FUN_03f5c2a4(&DAT_09172428);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09172538);
    FUN_03f5c2a4(&DAT_091709d8);
    FUN_03f5c2a4(&DAT_09170ac8);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_09173188);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9398);
    FUN_03f5c2a4(&DAT_091e93a0);
    FUN_03f5c2a4(&DAT_091e93a8);
    FUN_03f5c2a4(&DAT_091e93b0);
    FUN_03f5c2a4(&DAT_091e93b8);
    FUN_03f5c2a4(&DAT_09190398);
    FUN_03f5c2a4(&DAT_092006e8);
    FUN_03f5c2a4(&DAT_092034b0);
    FUN_03f5c2a4(&DAT_0920c9e0);
    FUN_03f5c2a4(&DAT_09209798);
    FUN_03f5c2a4(&DAT_092205c0);
    FUN_03f5c2a4(&DAT_091f87f0);
    FUN_03f5c2a4(&DAT_0920b648);
    FUN_03f5c2a4(&DAT_09209870);
    FUN_03f5c2a4(&DAT_0920be70);
    FUN_03f5c2a4(&DAT_092006a8);
    DAT_09520cb5 = 1;
  }
  if (*(int *)(DAT_09183e08 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = DAT_091f87f0;
  cVar1 = **(char **)(DAT_09183e08 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09189db0);
  System_Text_RegularExpressions_Regex___ctor(uVar2,uVar4,(ulong)(cVar1 == '\0') << 3,0);
  **(undefined8 **)(DAT_09183e88 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183e88 + 0xb8),uVar2);
  uVar4 = DAT_09179f30;
  *(undefined4 *)(*(long *)(DAT_09183e88 + 0xb8) + 8) = 0;
  lVar3 = thunk_FUN_03f9944c(uVar4);
  FUN_053eb530(lVar3,DAT_091a8830);
  lVar6 = DAT_095353e8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Type__GetTypeFromHandle(lVar6 + 0x20,0);
  if (lVar3 != 0) {
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535410 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535440 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535418 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535428 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535448 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535450 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535458 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535400 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_095353f0 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535408 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09171520,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535460 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_091719c8,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09173188,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09171448,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09171468,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09172538,0);
    FUN_053ec72c(lVar3,uVar4,DAT_091a8848);
    plVar5 = (long *)(*(long *)(DAT_09183e88 + 0xb8) + 0x10);
    *plVar5 = lVar3;
    thunk_FUN_03f5d7b8(plVar5,lVar3);
    plVar5 = (long *)System_Type__GetTypeFromHandle(DAT_09172418,0);
    if (plVar5 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar5 + 0x938))(plVar5,*(undefined8 *)(*plVar5 + 0x940));
      puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x18);
      *puVar8 = uVar4;
      thunk_FUN_03f5d7b8(puVar8,uVar4);
      uVar4 = System_Type__GetTypeFromHandle(DAT_09170ac8,0);
      plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
      lVar6 = System_Type__GetTypeFromHandle(DAT_09170bb0,0);
      if (plVar5 != (long *)0x0) {
        if ((lVar6 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
LAB_073ce624:
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar5[3] == 0) {
LAB_073ce620:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[4] = lVar6;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
        uVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                          (uVar4,DAT_092205c0,plVar5,0);
        puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x20);
        *puVar8 = uVar4;
        thunk_FUN_03f5d7b8(puVar8,uVar4);
        uVar4 = System_Type__GetTypeFromHandle(DAT_091711c8,0);
        plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
        plVar7 = (long *)System_Type__GetTypeFromHandle(DAT_09172418,0);
        if (plVar7 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar7 + 0x938))(plVar7,*(undefined8 *)(*plVar7 + 0x940));
          if (plVar5 != (long *)0x0) {
            if ((lVar6 != 0) &&
               (lVar3 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
            goto LAB_073ce624;
            if ((int)plVar5[3] == 0) goto LAB_073ce620;
            plVar5[4] = lVar6;
            thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
            uVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                              (uVar4,DAT_0920b648,plVar5,0);
            puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x28);
            *puVar8 = uVar4;
            thunk_FUN_03f5d7b8(puVar8,uVar4);
            uVar4 = System_Type__GetTypeFromHandle(DAT_091711c8,0);
            plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
            plVar7 = (long *)System_Type__GetTypeFromHandle(DAT_091709d8,0);
            if (plVar7 != (long *)0x0) {
              lVar6 = (**(code **)(*plVar7 + 0x938))(plVar7,*(undefined8 *)(*plVar7 + 0x940));
              if (plVar5 != (long *)0x0) {
                if ((lVar6 != 0) &&
                   (lVar3 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                goto LAB_073ce624;
                if ((int)plVar5[3] == 0) goto LAB_073ce620;
                plVar5[4] = lVar6;
                thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
                uVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                  (uVar4,DAT_092034b0,plVar5,0);
                puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x30);
                *puVar8 = uVar4;
                thunk_FUN_03f5d7b8(puVar8,uVar4);
                uVar4 = System_Type__GetTypeFromHandle(DAT_09171818,0);
                uVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethods(uVar4,0);
                if (*(int *)(DAT_09190398 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09190398);
                }
                uVar9 = **(undefined8 **)(DAT_09190398 + 0xb8);
                uVar2 = thunk_FUN_03f9944c(DAT_09178d40);
                FUN_05322d94(uVar2,uVar9,DAT_091e9398,0);
                uVar4 = FUN_04ae3154(uVar4,uVar2,DAT_091c9b38);
                puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x38);
                *puVar8 = uVar4;
                thunk_FUN_03f5d7b8(puVar8,uVar4);
                uVar4 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                plVar5 = (long *)System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                           (uVar4,DAT_0920be70,0);
                if (plVar5 != (long *)0x0) {
                  uVar4 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
                  puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x40);
                  *puVar8 = uVar4;
                  thunk_FUN_03f5d7b8(puVar8,uVar4);
                  uVar4 = System_Type__GetTypeFromHandle(DAT_09172438,0);
                  plVar5 = (long *)System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                             (uVar4,DAT_0920c9e0,0);
                  if (plVar5 != (long *)0x0) {
                    uVar4 = (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
                    puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x48);
                    *puVar8 = uVar4;
                    thunk_FUN_03f5d7b8(puVar8,uVar4);
                    uVar4 = System_Type__GetTypeFromHandle(DAT_09172420,0);
                    plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
                    plVar7 = (long *)System_Type__GetTypeFromHandle(DAT_09172418,0);
                    if (plVar7 != (long *)0x0) {
                      lVar6 = (**(code **)(*plVar7 + 0x938))
                                        (plVar7,*(undefined8 *)(*plVar7 + 0x940));
                      if (plVar5 != (long *)0x0) {
                        if ((lVar6 != 0) &&
                           (lVar3 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar3 == 0)) goto LAB_073ce624;
                        if ((int)plVar5[3] == 0) goto LAB_073ce620;
                        plVar5[4] = lVar6;
                        thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
                        uVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                          (uVar4,DAT_092006e8,plVar5,0);
                        puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x50);
                        *puVar8 = uVar4;
                        thunk_FUN_03f5d7b8(puVar8,uVar4);
                        uVar4 = System_Type__GetTypeFromHandle(DAT_09172418,0);
                        plVar5 = (long *)System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                                   (uVar4,DAT_092006a8,0);
                        if (plVar5 != (long *)0x0) {
                          uVar4 = (**(code **)(*plVar5 + 0x2c8))
                                            (plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
                          puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x58);
                          *puVar8 = uVar4;
                          thunk_FUN_03f5d7b8(puVar8,uVar4);
                          uVar4 = System_Type__GetTypeFromHandle(DAT_09172418,0);
                          plVar5 = (long *)System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                                     (uVar4,DAT_092006a8,0);
                          if (plVar5 != (long *)0x0) {
                            uVar4 = (**(code **)(*plVar5 + 0x2f8))
                                              (plVar5,*(undefined8 *)(*plVar5 + 0x300));
                            puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x60);
                            *puVar8 = uVar4;
                            thunk_FUN_03f5d7b8(puVar8,uVar4);
                            uVar2 = **(undefined8 **)(DAT_09190398 + 0xb8);
                            uVar4 = thunk_FUN_03f9944c(DAT_091791a0);
                            FUN_05324070(uVar4,uVar2,DAT_091e93a0,0);
                            puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x68);
                            *puVar8 = uVar4;
                            thunk_FUN_03f5d7b8(puVar8,uVar4);
                            uVar2 = **(undefined8 **)(DAT_09190398 + 0xb8);
                            uVar4 = thunk_FUN_03f9944c(DAT_091791a0);
                            FUN_05324070(uVar4,uVar2,DAT_091e93a8,0);
                            puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x70);
                            *puVar8 = uVar4;
                            thunk_FUN_03f5d7b8(puVar8,uVar4);
                            uVar4 = System_Type__GetTypeFromHandle(DAT_09172428,0);
                            plVar5 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo
                                                       (uVar4,0);
                            if (plVar5 != (long *)0x0) {
                              uVar4 = (**(code **)(*plVar5 + 0x9e8))
                                                (plVar5,*(undefined8 *)(*plVar5 + 0x9f0));
                              uVar9 = **(undefined8 **)(DAT_09190398 + 0xb8);
                              uVar2 = thunk_FUN_03f9944c(DAT_091785f8);
                              FUN_05322d94(uVar2,uVar9,DAT_091e93b0,0);
                              uVar4 = FUN_04ae3154(uVar4,uVar2,DAT_091c9ae8);
                              puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x78);
                              *puVar8 = uVar4;
                              thunk_FUN_03f5d7b8(puVar8,uVar4);
                              uVar4 = System_Type__GetTypeFromHandle(DAT_09171cd0,0);
                              uVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                                (uVar4,DAT_09209870,
                                                 *(undefined8 *)
                                                  (*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
                              puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x80);
                              *puVar8 = uVar4;
                              thunk_FUN_03f5d7b8(puVar8,uVar4);
                              uVar4 = System_Type__GetTypeFromHandle(DAT_09171cd0,0);
                              uVar4 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                                (uVar4,DAT_09209798,
                                                 *(undefined8 *)
                                                  (*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
                              puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x88);
                              *puVar8 = uVar4;
                              thunk_FUN_03f5d7b8(puVar8,uVar4);
                              uVar4 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
                              plVar5 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo
                                                         (uVar4,0);
                              if (plVar5 != (long *)0x0) {
                                uVar4 = (**(code **)(*plVar5 + 0x9e8))
                                                  (plVar5,*(undefined8 *)(*plVar5 + 0x9f0));
                                uVar9 = **(undefined8 **)(DAT_09190398 + 0xb8);
                                uVar2 = thunk_FUN_03f9944c(DAT_091785f8);
                                FUN_05322d94(uVar2,uVar9,DAT_091e93b8,0);
                                uVar4 = FUN_04ae3154(uVar4,uVar2,DAT_091c9ae8);
                                puVar8 = (undefined8 *)(*(long *)(DAT_09183e88 + 0xb8) + 0x90);
                                *puVar8 = uVar4;
                                thunk_FUN_03f5d7b8(puVar8,uVar4);
                                return;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

