// rea decompile_all
// name: MessagePack.Resolvers.DynamicUnionResolver$$.cctor
// address: 0x73a74cc
// body: available
// range: 0x73a74cc-0x73a81af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a8198 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73a819c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a81a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a81ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Resolvers_DynamicUnionResolver___cctor(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((DAT_09520ba0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170828);
    FUN_03f5c2a4(&DAT_09170840);
    FUN_03f5c2a4(&DAT_09183e10);
    FUN_03f5c2a4(&DAT_09183eb0);
    FUN_03f5c2a4(&DAT_091c9ae8);
    FUN_03f5c2a4(&DAT_091c9b38);
    FUN_03f5c2a4(&DAT_09171818);
    FUN_03f5c2a4(&DAT_091791a0);
    FUN_03f5c2a4(&DAT_09178d40);
    FUN_03f5c2a4(&DAT_091785f8);
    FUN_03f5c2a4(&DAT_09172110);
    FUN_03f5c2a4(&DAT_091708b0);
    FUN_03f5c2a4(&DAT_09172418);
    FUN_03f5c2a4(&DAT_09172438);
    FUN_03f5c2a4(&DAT_09188190);
    FUN_03f5c2a4(&DAT_09172b48);
    FUN_03f5c2a4(&DAT_09172b40);
    FUN_03f5c2a4(&DAT_09180748);
    FUN_03f5c2a4(&DAT_091e94c8);
    FUN_03f5c2a4(&DAT_091e94d0);
    FUN_03f5c2a4(&DAT_091e94d8);
    FUN_03f5c2a4(&DAT_091e94e0);
    FUN_03f5c2a4(&DAT_091e94e8);
    FUN_03f5c2a4(&DAT_091e94f0);
    FUN_03f5c2a4(&DAT_091e94f8);
    FUN_03f5c2a4(&DAT_091e9500);
    FUN_03f5c2a4(&DAT_09190428);
    FUN_03f5c2a4(&DAT_091fb4c8);
    FUN_03f5c2a4(&DAT_09203640);
    FUN_03f5c2a4(&DAT_09207c90);
    FUN_03f5c2a4(&DAT_09210e58);
    FUN_03f5c2a4(&DAT_09212b98);
    FUN_03f5c2a4(&DAT_092004e8);
    FUN_03f5c2a4(&DAT_09206568);
    FUN_03f5c2a4(&DAT_0920be70);
    FUN_03f5c2a4(&DAT_09211370);
    DAT_09520ba0 = 1;
  }
  uVar3 = DAT_09172418;
  iVar1 = *(int *)(DAT_095354b8 + 0xe4);
  *(undefined4 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x18) = 0;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  plVar2 = (long *)System_Type__GetTypeFromHandle(uVar3,0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x938))(plVar2,*(undefined8 *)(*plVar2 + 0x940));
    puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x20);
    *puVar8 = uVar3;
    thunk_FUN_03f5d7b8(puVar8,uVar3);
    plVar2 = (long *)System_Type__GetTypeFromHandle(DAT_091708b0,0);
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x938))(plVar2,*(undefined8 *)(*plVar2 + 0x940));
      puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x28);
      *puVar8 = uVar3;
      thunk_FUN_03f5d7b8(puVar8,uVar3);
      uVar3 = System_Type__GetTypeFromHandle(DAT_09171818,0);
      uVar3 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethods(uVar3,0);
      if (*(int *)(DAT_09190428 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09190428);
      }
      uVar9 = **(undefined8 **)(DAT_09190428 + 0xb8);
      uVar4 = thunk_FUN_03f9944c(DAT_09178d40);
      FUN_05322d94(uVar4,uVar9,DAT_091e94c8,0);
      uVar3 = FUN_04ae3154(uVar3,uVar4,DAT_091c9b38);
      puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x30);
      *puVar8 = uVar3;
      thunk_FUN_03f5d7b8(puVar8,uVar3);
      uVar3 = System_Type__GetTypeFromHandle(DAT_09172438,0);
      plVar2 = (long *)System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                 (uVar3,DAT_0920be70,0);
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
        puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x38);
        *puVar8 = uVar3;
        thunk_FUN_03f5d7b8(puVar8,uVar3);
        uVar4 = **(undefined8 **)(DAT_09190428 + 0xb8);
        uVar3 = thunk_FUN_03f9944c(DAT_091791a0);
        FUN_05324070(uVar3,uVar4,DAT_091e94d0,0);
        puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x40);
        *puVar8 = uVar3;
        thunk_FUN_03f5d7b8(puVar8,uVar3);
        uVar4 = **(undefined8 **)(DAT_09190428 + 0xb8);
        uVar3 = thunk_FUN_03f9944c(DAT_091791a0);
        FUN_05324070(uVar3,uVar4,DAT_091e94d8,0);
        puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x48);
        *puVar8 = uVar3;
        thunk_FUN_03f5d7b8(puVar8,uVar3);
        uVar3 = System_Type__GetTypeFromHandle(DAT_09172b48,0);
        uVar3 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeField(uVar3,DAT_092004e8,0)
        ;
        puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x50);
        *puVar8 = uVar3;
        thunk_FUN_03f5d7b8(puVar8,uVar3);
        uVar3 = System_Type__GetTypeFromHandle(DAT_091708b0,0);
        plVar2 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar3,0);
        if (plVar2 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar2 + 0x9e8))(plVar2,*(undefined8 *)(*plVar2 + 0x9f0));
          uVar9 = **(undefined8 **)(DAT_09190428 + 0xb8);
          uVar4 = thunk_FUN_03f9944c(DAT_091785f8);
          FUN_05322d94(uVar4,uVar9,DAT_091e94e0,0);
          uVar3 = FUN_04ae3154(uVar3,uVar4,DAT_091c9ae8);
          puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x58);
          *puVar8 = uVar3;
          thunk_FUN_03f5d7b8(puVar8,uVar3);
          uVar3 = System_Type__GetTypeFromHandle(DAT_09170840,0);
          plVar2 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo(uVar3,0);
          if (plVar2 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar2 + 0x9e8))(plVar2,*(undefined8 *)(*plVar2 + 0x9f0));
            uVar9 = **(undefined8 **)(DAT_09190428 + 0xb8);
            uVar4 = thunk_FUN_03f9944c(DAT_091785f8);
            FUN_05322d94(uVar4,uVar9,DAT_091e94e8,0);
            uVar3 = FUN_04ae3154(uVar3,uVar4,DAT_091c9ae8);
            puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x60);
            *puVar8 = uVar3;
            thunk_FUN_03f5d7b8(puVar8,uVar3);
            uVar3 = System_Type__GetTypeFromHandle(DAT_09170840,0);
            plVar2 = (long *)FUN_03f5c394(DAT_09180748,2);
            lVar5 = System_Type__GetTypeFromHandle(DAT_09172b40,0);
            if (plVar2 != (long *)0x0) {
              if ((lVar5 != 0) &&
                 (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)) {
LAB_073a81a4:
                uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar3,0);
              }
              if ((int)plVar2[3] != 0) {
                plVar2[4] = lVar5;
                thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
                lVar5 = System_Type__GetTypeFromHandle(DAT_091708b0,0);
                if ((lVar5 != 0) &&
                   (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0))
                goto LAB_073a81a4;
                if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
                  plVar2[5] = lVar5;
                  thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
                  uVar3 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                    (uVar3,DAT_091fb4c8,plVar2,0);
                  puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x68);
                  *puVar8 = uVar3;
                  thunk_FUN_03f5d7b8(puVar8,uVar3);
                  uVar3 = System_Type__GetTypeFromHandle(DAT_09170840,0);
                  plVar2 = (long *)FUN_03f5c394(DAT_09180748,2);
                  lVar5 = System_Type__GetTypeFromHandle(DAT_09172b40,0);
                  if (plVar2 == (long *)0x0) goto LAB_073a819c;
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar6 == 0)
                     ) goto LAB_073a81a4;
                  if ((int)plVar2[3] != 0) {
                    plVar2[4] = lVar5;
                    thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
                    lVar5 = *(long *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x28);
                    if ((lVar5 != 0) &&
                       (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar6 == 0)) goto LAB_073a81a4;
                    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
                      plVar2[5] = lVar5;
                      thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
                      uVar3 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                        (uVar3,DAT_09210e58,plVar2,0);
                      puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x70);
                      *puVar8 = uVar3;
                      thunk_FUN_03f5d7b8(puVar8,uVar3);
                      uVar3 = System_Type__GetTypeFromHandle(DAT_09170828,0);
                      plVar2 = (long *)System_Reflection_IntrospectionExtensions__GetTypeInfo
                                                 (uVar3,0);
                      if (plVar2 != (long *)0x0) {
                        uVar3 = (**(code **)(*plVar2 + 0x9e8))
                                          (plVar2,*(undefined8 *)(*plVar2 + 0x9f0));
                        uVar9 = **(undefined8 **)(DAT_09190428 + 0xb8);
                        uVar4 = thunk_FUN_03f9944c(DAT_091785f8);
                        FUN_05322d94(uVar4,uVar9,DAT_091e94f0,0);
                        uVar3 = FUN_04ae3154(uVar3,uVar4,DAT_091c9ae8);
                        puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x78);
                        *puVar8 = uVar3;
                        thunk_FUN_03f5d7b8(puVar8,uVar3);
                        uVar3 = System_Type__GetTypeFromHandle(DAT_09170828,0);
                        plVar2 = (long *)FUN_03f5c394(DAT_09180748,2);
                        lVar5 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                        if (plVar2 != (long *)0x0) {
                          if ((lVar5 != 0) &&
                             (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)),
                             lVar6 == 0)) goto LAB_073a81a4;
                          if ((int)plVar2[3] != 0) {
                            plVar2[4] = lVar5;
                            thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
                            lVar5 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                            if ((lVar5 != 0) &&
                               (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)),
                               lVar6 == 0)) goto LAB_073a81a4;
                            if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
                              plVar2[5] = lVar5;
                              thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
                              uVar3 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                                (uVar3,DAT_091fb4c8,plVar2,0);
                              puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x80);
                              *puVar8 = uVar3;
                              thunk_FUN_03f5d7b8(puVar8,uVar3);
                              uVar3 = System_Type__GetTypeFromHandle(DAT_09170828,0);
                              plVar2 = (long *)FUN_03f5c394(DAT_09180748,2);
                              lVar5 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
                              if (plVar2 != (long *)0x0) {
                                if ((lVar5 != 0) &&
                                   (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar2 + 0x40)
                                                              ), lVar6 == 0)) goto LAB_073a81a4;
                                if ((int)plVar2[3] == 0) goto LAB_073a81a0;
                                plVar2[4] = lVar5;
                                thunk_FUN_03f5d7b8(plVar2 + 4,lVar5);
                                plVar7 = (long *)System_Type__GetTypeFromHandle
                                                           (DAT_09535420 + 0x20,0);
                                if (plVar7 != (long *)0x0) {
                                  lVar5 = (**(code **)(*plVar7 + 0x938))
                                                    (plVar7,*(undefined8 *)(*plVar7 + 0x940));
                                  if ((lVar5 != 0) &&
                                     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)
                                                                        (*plVar2 + 0x40)),
                                     lVar6 == 0)) goto LAB_073a81a4;
                                  if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_073a81a0;
                                  plVar2[5] = lVar5;
                                  thunk_FUN_03f5d7b8(plVar2 + 5,lVar5);
                                  uVar3 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                                    (uVar3,DAT_09210e58,plVar2,0);
                                  puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x88);
                                  *puVar8 = uVar3;
                                  thunk_FUN_03f5d7b8(puVar8,uVar3);
                                  uVar3 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
                                  uVar3 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                                                    (uVar3,DAT_09203640,
                                                     *(undefined8 *)
                                                      (*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
                                  puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x90);
                                  *puVar8 = uVar3;
                                  thunk_FUN_03f5d7b8(puVar8,uVar3);
                                  uVar3 = System_Type__GetTypeFromHandle(DAT_095354b8 + 0x20,0);
                                  lVar5 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                                    (uVar3,DAT_09211370,0);
                                  if (lVar5 != 0) {
                                    uVar3 = System_Reflection_PropertyInfo__GetGetMethod(lVar5,0);
                                    puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0x98);
                                    *puVar8 = uVar3;
                                    thunk_FUN_03f5d7b8(puVar8,uVar3);
                                    uVar3 = System_Type__GetTypeFromHandle(DAT_091708b0,0);
                                    lVar5 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                                      (uVar3,DAT_09206568,0);
                                    if (lVar5 != 0) {
                                      uVar3 = System_Reflection_PropertyInfo__GetGetMethod(lVar5,0);
                                      puVar8 = (undefined8 *)(*(long *)(DAT_09183eb0 + 0xb8) + 0xa0)
                                      ;
                                      *puVar8 = uVar3;
                                      thunk_FUN_03f5d7b8(puVar8,uVar3);
                                      uVar3 = System_Type__GetTypeFromHandle(DAT_091708b0,0);
                                      lVar5 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeProperty
                                                        (uVar3,DAT_09212b98,0);
                                      if (lVar5 != 0) {
                                        uVar3 = System_Reflection_PropertyInfo__GetGetMethod
                                                          (lVar5,0);
                                        puVar8 = (undefined8 *)
                                                 (*(long *)(DAT_09183eb0 + 0xb8) + 0xa8);
                                        *puVar8 = uVar3;
                                        thunk_FUN_03f5d7b8(puVar8,uVar3);
                                        uVar3 = System_Type__GetTypeFromHandle(DAT_09172110,0);
                                        plVar2 = (long *)
                                                  System_Reflection_IntrospectionExtensions__GetTypeInfo
                                                            (uVar3,0);
                                        if (plVar2 != (long *)0x0) {
                                          uVar3 = (**(code **)(*plVar2 + 0x9e8))
                                                            (plVar2,*(undefined8 *)(*plVar2 + 0x9f0)
                                                            );
                                          uVar9 = **(undefined8 **)(DAT_09190428 + 0xb8);
                                          uVar4 = thunk_FUN_03f9944c(DAT_091785f8);
                                          FUN_05322d94(uVar4,uVar9,DAT_091e94f8,0);
                                          uVar3 = FUN_04ae3154(uVar3,uVar4,DAT_091c9ae8);
                                          puVar8 = (undefined8 *)
                                                   (*(long *)(DAT_09183eb0 + 0xb8) + 0xb0);
                                          *puVar8 = uVar3;
                                          thunk_FUN_03f5d7b8(puVar8,uVar3);
                                          uVar3 = System_Type__GetTypeFromHandle
                                                            (DAT_095353e8 + 0x20,0);
                                          plVar2 = (long *)
                                                  System_Reflection_IntrospectionExtensions__GetTypeInfo
                                                            (uVar3,0);
                                          if (plVar2 != (long *)0x0) {
                                            uVar3 = (**(code **)(*plVar2 + 0x9e8))
                                                              (plVar2,*(undefined8 *)
                                                                       (*plVar2 + 0x9f0));
                                            uVar9 = **(undefined8 **)(DAT_09190428 + 0xb8);
                                            uVar4 = thunk_FUN_03f9944c(DAT_091785f8);
                                            FUN_05322d94(uVar4,uVar9,DAT_091e9500,0);
                                            uVar3 = FUN_04ae3154(uVar3,uVar4,DAT_091c9ae8);
                                            puVar8 = (undefined8 *)
                                                     (*(long *)(DAT_09183eb0 + 0xb8) + 0xb8);
                                            *puVar8 = uVar3;
                                            thunk_FUN_03f5d7b8(puVar8,uVar3);
                                            uVar3 = thunk_FUN_03f9944c(DAT_09183eb0);
                                            System_Object___ctor(uVar3,0);
                                            **(undefined8 **)(DAT_09183eb0 + 0xb8) = uVar3;
                                            thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183eb0 + 0xb8),
                                                               uVar3);
                                            uVar4 = **(undefined8 **)(DAT_09183eb0 + 0xb8);
                                            uVar3 = thunk_FUN_03f9944c(DAT_09188190);
                                            MessagePack_MessagePackSerializerOptions___ctor
                                                      (uVar3,uVar4,0);
                                            puVar8 = (undefined8 *)
                                                     (*(long *)(DAT_09183eb0 + 0xb8) + 8);
                                            *puVar8 = uVar3;
                                            thunk_FUN_03f5d7b8(puVar8,uVar3);
                                            uVar3 = thunk_FUN_03f9944c(DAT_09183e10);
                                            MessagePack_Internal_DynamicAssemblyFactory___ctor
                                                      (uVar3,DAT_09207c90,0);
                                            puVar8 = (undefined8 *)
                                                     (*(long *)(DAT_09183eb0 + 0xb8) + 0x10);
                                            *puVar8 = uVar3;
                                            thunk_FUN_03f5d7b8(puVar8,uVar3);
                                            return;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_073a819c;
                            }
                          }
                          goto LAB_073a81a0;
                        }
                      }
                      goto LAB_073a819c;
                    }
                  }
                }
              }
LAB_073a81a0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
          }
        }
      }
    }
  }
LAB_073a819c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

