// rea decompile_all
// name: MessagePack.Resolvers.DynamicUnionResolver$$BuildDeserialize
// address: 0x73a9c20
// body: available
// range: 0x73a9c20-0x73aa74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73aa73c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73aa740 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73aa74c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_DynamicUnionResolver__BuildDeserialize
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09520ba4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183eb0);
    FUN_03f5c2a4(&DAT_091ca188);
    FUN_03f5c2a4(&DAT_091ca7a0);
    FUN_03f5c2a4(&DAT_091cae50);
    FUN_03f5c2a4(&DAT_091cacb0);
    FUN_03f5c2a4(&DAT_09177fb0);
    FUN_03f5c2a4(&DAT_09179218);
    FUN_03f5c2a4(&DAT_09171c08);
    FUN_03f5c2a4(&DAT_09190440);
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e9508);
    FUN_03f5c2a4(&DAT_091e9528);
    FUN_03f5c2a4(&DAT_09190438);
    FUN_03f5c2a4(&DAT_09190428);
    FUN_03f5c2a4(&DAT_09196fe0);
    FUN_03f5c2a4(&DAT_09196fe8);
    FUN_03f5c2a4(&DAT_09205418);
    DAT_09520ba4 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_09190438);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    plVar11 = (long *)(lVar3 + 0x10);
    *plVar11 = param_5;
    thunk_FUN_03f5d7b8(plVar11,param_5);
    plVar4 = (long *)*plVar11;
    if (plVar4 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
      MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar11,1,0);
      lVar13 = *plVar11;
      if (*(int *)(DAT_09190440 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_Internal_ILGeneratorExtensions__EmitCall
                (lVar13,*(undefined8 *)(*(long *)(DAT_09190440 + 0xb8) + 0x20),0);
      plVar4 = (long *)*plVar11;
      if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1f8))
                  (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x158),uVar2,
                   *(undefined8 *)(*plVar4 + 0x200));
        plVar4 = (long *)*plVar11;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x198))
                    (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0xa0),
                     *(undefined8 *)(*plVar4 + 0x1a0));
          plVar4 = (long *)*plVar11;
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x198))
                      (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x148),
                       *(undefined8 *)(*plVar4 + 0x1a0));
            plVar4 = (long *)*plVar11;
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x268))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x270));
              uVar5 = DAT_09171c08;
              plVar4 = (long *)*plVar11;
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
              if (plVar4 != (long *)0x0) {
                uVar5 = (**(code **)(*plVar4 + 0x178))
                                  (plVar4,uVar5,*(undefined8 *)(*plVar4 + 0x180));
                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar11,2,0);
                lVar13 = *plVar11;
                if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                MessagePack_Internal_ILGeneratorExtensions__EmitCall
                          (lVar13,*(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x38),0);
                MessagePack_Internal_ILGeneratorExtensions__EmitStloc(*plVar11,uVar5,0);
                plVar4 = (long *)*plVar11;
                if (plVar4 != (long *)0x0) {
                  uVar2 = (**(code **)(*plVar4 + 0x188))(plVar4,*(undefined8 *)(*plVar4 + 400));
                  MessagePack_Internal_ArgumentField___ctor(&local_70,*plVar11,1,0,0);
                  MessagePack_Internal_ArgumentField__EmitLdarg(&local_70,0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitCall
                            (*plVar11,*(undefined8 *)(*(long *)(DAT_09190440 + 0xb8) + 0x30),0);
                  MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4(*plVar11,2,0);
                  plVar4 = (long *)*plVar11;
                  if ((plVar4 != (long *)0x0) &&
                     ((**(code **)(*plVar4 + 0x1f8))
                                (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x168),
                                 uVar2,*(undefined8 *)(*plVar4 + 0x200)), param_1 != (long *)0x0)) {
                    plVar4 = (long *)*plVar11;
                    uVar14 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x388);
                    uVar6 = (**(code **)(*param_1 + 0x2f8))
                                      (param_1,*(undefined8 *)(*param_1 + 0x300));
                    uVar6 = System_String__Concat(DAT_09205418,uVar6,0);
                    if (plVar4 != (long *)0x0) {
                      (**(code **)(*plVar4 + 0x248))
                                (plVar4,uVar14,uVar6,*(undefined8 *)(*plVar4 + 0x250));
                      plVar4 = (long *)*plVar11;
                      if (plVar4 != (long *)0x0) {
                        (**(code **)(*plVar4 + 0x1e8))
                                  (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x390),
                                   *(undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0xb0),
                                   *(undefined8 *)(*plVar4 + 0x1f0));
                        plVar4 = (long *)*plVar11;
                        if (plVar4 != (long *)0x0) {
                          (**(code **)(*plVar4 + 0x198))
                                    (plVar4,*(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3b8),
                                     *(undefined8 *)(*plVar4 + 0x1a0));
                          plVar4 = (long *)*plVar11;
                          if (plVar4 != (long *)0x0) {
                            (**(code **)(*plVar4 + 0x268))
                                      (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x270));
                            plVar4 = (long *)*plVar11;
                            uVar6 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                            if (plVar4 != (long *)0x0) {
                              uVar6 = (**(code **)(*plVar4 + 0x178))
                                                (plVar4,uVar6,*(undefined8 *)(*plVar4 + 0x180));
                              MessagePack_Internal_ArgumentField__EmitLdarg(&local_70,0);
                              MessagePack_Internal_ILGeneratorExtensions__EmitCall
                                        (*plVar11,*(undefined8 *)
                                                   (*(long *)(DAT_09190440 + 0xb8) + 0x10),0);
                              MessagePack_Internal_ILGeneratorExtensions__EmitStloc
                                        (*plVar11,uVar6,0);
                              uVar7 = MessagePack_Resolvers_DynamicUnionResolver__IsZeroStartSequential
                                                (param_2);
                              if ((uVar7 & 1) == 0) {
                                plVar4 = (long *)*plVar11;
                                if (plVar4 == (long *)0x0) goto LAB_073aa73c;
                                uVar2 = (**(code **)(*plVar4 + 0x188))
                                                  (plVar4,*(undefined8 *)(*plVar4 + 400));
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg(*plVar11,0,0);
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdfld
                                          (*plVar11,param_4,0);
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
                                          (*plVar11,uVar6,0);
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdloca
                                          (*plVar11,uVar6,0);
                                lVar13 = *plVar11;
                                if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                }
                                MessagePack_Internal_ILGeneratorExtensions__EmitCall
                                          (lVar13,*(undefined8 *)
                                                   (*(long *)(DAT_09183eb0 + 0xb8) + 0x88),0);
                                plVar4 = (long *)*plVar11;
                                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                }
                                if (plVar4 == (long *)0x0) goto LAB_073aa73c;
                                (**(code **)(*plVar4 + 0x1f8))
                                          (plVar4,*(undefined8 *)
                                                   (*(long *)(DAT_09188c40 + 0xb8) + 0x160),uVar2,
                                           *(undefined8 *)(*plVar4 + 0x200));
                                MessagePack_Internal_ILGeneratorExtensions__EmitLdc_I4
                                          (*plVar11,0xffffffff,0);
                                MessagePack_Internal_ILGeneratorExtensions__EmitStloc
                                          (*plVar11,uVar6,0);
                                plVar4 = (long *)*plVar11;
                                if (plVar4 == (long *)0x0) goto LAB_073aa73c;
                                (**(code **)(*plVar4 + 0x268))
                                          (plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x270));
                              }
                              plVar4 = (long *)*plVar11;
                              if (plVar4 != (long *)0x0) {
                                uVar14 = (**(code **)(*plVar4 + 0x178))
                                                   (plVar4,param_1,*(undefined8 *)(*plVar4 + 0x180))
                                ;
                                plVar4 = (long *)*plVar11;
                                if (plVar4 != (long *)0x0) {
                                  uVar2 = (**(code **)(*plVar4 + 0x188))
                                                    (plVar4,*(undefined8 *)(*plVar4 + 400));
                                  plVar4 = (long *)*plVar11;
                                  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                    FUN_03f5c424(DAT_09188c40);
                                  }
                                  if (plVar4 != (long *)0x0) {
                                    (**(code **)(*plVar4 + 0x198))
                                              (plVar4,*(undefined8 *)
                                                       (*(long *)(DAT_09188c40 + 0xb8) + 0xa0),
                                               *(undefined8 *)(*plVar4 + 0x1a0));
                                    MessagePack_Internal_ILGeneratorExtensions__EmitStloc
                                              (*plVar11,uVar14,0);
                                    plVar4 = (long *)*plVar11;
                                    if (plVar4 != (long *)0x0) {
                                      (**(code **)(*plVar4 + 0x218))
                                                (plVar4,*(undefined8 *)
                                                         (*(long *)(DAT_09188c40 + 0xb8) + 0x690),
                                                 uVar6,*(undefined8 *)(*plVar4 + 0x220));
                                      uVar6 = thunk_FUN_03f9944c(DAT_09179218);
                                      FUN_05324070(uVar6,lVar3,DAT_091e9528,0);
                                      uVar6 = FUN_04af8044(param_2,uVar6,DAT_091ca7a0);
                                      lVar13 = FUN_04b049e4(uVar6,DAT_091cacb0);
                                      plVar4 = *(long **)(lVar3 + 0x10);
                                      uVar6 = *(undefined8 *)
                                               (*(long *)(DAT_09188c40 + 0xb8) + 0x220);
                                      if (*(int *)(DAT_09190428 + 0xe4) == 0) {
                                        FUN_03f5c424(DAT_09190428);
                                      }
                                      puVar10 = *(undefined8 **)(DAT_09190428 + 0xb8);
                                      lVar3 = puVar10[3];
                                      if (lVar3 == 0) {
                                        if (*(int *)(DAT_09190428 + 0xe4) == 0) {
                                          FUN_03f5c424(DAT_09190428);
                                          puVar10 = *(undefined8 **)(DAT_09190428 + 0xb8);
                                        }
                                        uVar15 = *puVar10;
                                        lVar3 = thunk_FUN_03f9944c(DAT_09177fb0);
                                        FUN_05323e38(lVar3,uVar15,DAT_091e9508,0);
                                        plVar8 = (long *)(*(long *)(DAT_09190428 + 0xb8) + 0x18);
                                        *plVar8 = lVar3;
                                        thunk_FUN_03f5d7b8(plVar8,lVar3);
                                      }
                                      uVar15 = FUN_04af79fc(lVar13,lVar3,DAT_091ca188);
                                      uVar15 = FUN_04b0484c(uVar15,DAT_091cae50);
                                      if (plVar4 != (long *)0x0) {
                                        (**(code **)(*plVar4 + 0x208))
                                                  (plVar4,uVar6,uVar15,
                                                   *(undefined8 *)(*plVar4 + 0x210));
                                        MessagePack_Internal_ArgumentField__EmitLdarg(&local_70,0);
                                        lVar3 = *plVar11;
                                        if (*(int *)(DAT_09190440 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        MessagePack_Internal_ILGeneratorExtensions__EmitCall
                                                  (lVar3,*(undefined8 *)
                                                          (*(long *)(DAT_09190440 + 0xb8) + 0x28),0)
                                        ;
                                        plVar4 = (long *)*plVar11;
                                        if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        if (plVar4 != (long *)0x0) {
                                          (**(code **)(*plVar4 + 0x1f8))
                                                    (plVar4,*(undefined8 *)
                                                             (*(long *)(DAT_09188c40 + 0xb8) + 0x1b8
                                                             ),uVar2,
                                                     *(undefined8 *)(*plVar4 + 0x200));
                                          if (lVar13 != 0) {
                                            uVar1 = *(uint *)(lVar13 + 0x18);
                                            if (0 < (int)uVar1) {
                                              uVar17 = 0;
                                              do {
                                                if (uVar1 <= uVar17) {
LAB_073aa740:
                    /* WARNING: Subroutine does not return */
                                                  FUN_03f5c558();
                                                }
                                                lVar3 = *(long *)(lVar13 + (long)(int)uVar17 * 8 +
                                                                 0x20);
                                                if ((lVar3 == 0) ||
                                                   (plVar4 = (long *)*plVar11, plVar4 == (long *)0x0
                                                   )) goto LAB_073aa73c;
                                                (**(code **)(*plVar4 + 0x268))
                                                          (plVar4,*(undefined4 *)(lVar3 + 0x10),
                                                           *(undefined8 *)(*plVar4 + 0x270));
                                                MessagePack_Internal_ILGeneratorExtensions__EmitLdloc
                                                          (*plVar11,uVar5,0);
                                                lVar12 = *plVar11;
                                                if (*(int *)(DAT_09183eb0 + 0xe4) == 0) {
                                                  FUN_03f5c424();
                                                }
                                                plVar8 = *(long **)(*(long *)(DAT_09183eb0 + 0xb8) +
                                                                   0x30);
                                                plVar4 = (long *)FUN_03f5c394(DAT_09180748,1);
                                                if ((*(long *)(lVar3 + 0x18) == 0) ||
                                                   (plVar4 == (long *)0x0)) goto LAB_073aa73c;
                                                lVar16 = *(long *)(*(long *)(lVar3 + 0x18) + 0x18);
                                                if ((lVar16 != 0) &&
                                                   (lVar9 = thunk_FUN_03f99350(lVar16,*(undefined8 *
                                                                                       )(*plVar4 +
                                                                                        0x40)),
                                                   lVar9 == 0)) {
                                                  uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                                                  FUN_03f5c414(uVar5,0);
                                                }
                                                if ((int)plVar4[3] == 0) goto LAB_073aa740;
                                                plVar4[4] = lVar16;
                                                thunk_FUN_03f5d7b8(plVar4 + 4,lVar16);
                                                if (plVar8 == (long *)0x0) goto LAB_073aa73c;
                                                uVar6 = (**(code **)(*plVar8 + 0x418))
                                                                  (plVar8,plVar4,
                                                                   *(undefined8 *)(*plVar8 + 0x420))
                                                ;
                                                MessagePack_Internal_ILGeneratorExtensions__EmitCall
                                                          (lVar12,uVar6,0);
                                                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg
                                                          (*plVar11,1,0);
                                                MessagePack_Internal_ILGeneratorExtensions__EmitLdarg
                                                          (*plVar11,2,0);
                                                if ((*(long *)(lVar3 + 0x18) == 0) ||
                                                   (lVar12 = *(long *)(*(long *)(DAT_09183eb0 + 0xb8
                                                                                ) + 0x48),
                                                   lVar12 == 0)) goto LAB_073aa73c;
                                                lVar16 = *plVar11;
                                                uVar6 = (**(code **)(lVar12 + 0x18))
                                                                  (*(undefined8 *)(lVar12 + 0x40),
                                                                   *(undefined8 *)
                                                                    (*(long *)(lVar3 + 0x18) + 0x18)
                                                                   ,*(undefined8 *)(lVar12 + 0x28));
                                                MessagePack_Internal_ILGeneratorExtensions__EmitCall
                                                          (lVar16,uVar6,0);
                                                if ((*(long *)(lVar3 + 0x18) == 0) ||
                                                   (lVar12 = 
                                                  System_Reflection_IntrospectionExtensions__GetTypeInfo
                                                            (*(undefined8 *)
                                                              (*(long *)(lVar3 + 0x18) + 0x18),0),
                                                  lVar12 == 0)) goto LAB_073aa73c;
                                                uVar7 = System_Type__get_IsValueType(lVar12,0);
                                                if ((uVar7 & 1) != 0) {
                                                  plVar4 = (long *)*plVar11;
                                                  if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  if ((*(long *)(lVar3 + 0x18) == 0) ||
                                                     (plVar4 == (long *)0x0)) goto LAB_073aa73c;
                                                  (**(code **)(*plVar4 + 600))
                                                            (plVar4,*(undefined8 *)
                                                                     (*(long *)(DAT_09188c40 + 0xb8)
                                                                     + 0x448),
                                                             *(undefined8 *)
                                                              (*(long *)(lVar3 + 0x18) + 0x18),
                                                             *(undefined8 *)(*plVar4 + 0x260));
                                                }
                                                plVar4 = (long *)*plVar11;
                                                if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                                  FUN_03f5c424();
                                                }
                                                if (plVar4 == (long *)0x0) goto LAB_073aa73c;
                                                (**(code **)(*plVar4 + 0x218))
                                                          (plVar4,*(undefined8 *)
                                                                   (*(long *)(DAT_09188c40 + 0xb8) +
                                                                   0x6a0),uVar14,
                                                           *(undefined8 *)(*plVar4 + 0x220));
                                                plVar4 = (long *)*plVar11;
                                                if (plVar4 == (long *)0x0) goto LAB_073aa73c;
                                                (**(code **)(*plVar4 + 0x1f8))
                                                          (plVar4,*(undefined8 *)
                                                                   (*(long *)(DAT_09188c40 + 0xb8) +
                                                                   0x1b8),uVar2,
                                                           *(undefined8 *)(*plVar4 + 0x200));
                                                uVar1 = *(uint *)(lVar13 + 0x18);
                                                uVar17 = uVar17 + 1;
                                              } while ((int)uVar17 < (int)uVar1);
                                            }
                                            plVar4 = (long *)*plVar11;
                                            if (plVar4 != (long *)0x0) {
                                              (**(code **)(*plVar4 + 0x268))
                                                        (plVar4,uVar2,
                                                         *(undefined8 *)(*plVar4 + 0x270));
                                              plVar4 = (long *)*plVar11;
                                              if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
                                                FUN_03f5c424();
                                              }
                                              if (plVar4 != (long *)0x0) {
                                                (**(code **)(*plVar4 + 0x218))
                                                          (plVar4,*(undefined8 *)
                                                                   (*(long *)(DAT_09188c40 + 0xb8) +
                                                                   0x690),uVar14,
                                                           *(undefined8 *)(*plVar4 + 0x220));
                                                plVar11 = (long *)*plVar11;
                                                if (plVar11 != (long *)0x0) {
                                                  (**(code **)(*plVar11 + 0x198))
                                                            (plVar11,*(undefined8 *)
                                                                      (*(long *)(DAT_09188c40 + 0xb8
                                                                                ) + 0x148),
                                                             *(undefined8 *)(*plVar11 + 0x1a0));
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_073aa73c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

