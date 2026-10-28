// rea decompile_all
// name: System.Delegate$$CreateDelegate
// address: 0x7600158
// body: available
// range: 0x7600158-0x76009c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7600904 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7600908 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76009a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Delegate__CreateDelegate
               (long *param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  
  if ((DAT_09521fd4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091839b8);
    FUN_03f5c2a4(&DAT_091724e8);
    FUN_03f5c2a4(&DAT_09205c90);
    DAT_09521fd4 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Type__op_Equality(param_1,0,0);
  if ((uVar5 & 1) == 0) {
    uVar5 = System_Reflection_MethodInfo__op_Equality(param_3,0,0);
    uVar6 = DAT_091724e8;
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Type__GetTypeFromHandle(uVar6,0);
      if (param_1 == (long *)0x0) goto LAB_07600904;
      uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x2b0));
      if ((uVar5 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar6 = thunk_FUN_03f9944c();
        puVar13 = &DAT_09224528;
LAB_0760097c:
        uVar8 = thunk_FUN_03fc39d4(puVar13);
        System_ArgumentException___ctor(uVar6,uVar8,0);
      }
      else {
        plVar7 = (long *)System_Type__GetMethod(param_1,DAT_09205c90,0);
        if ((plVar7 == (long *)0x0) ||
           (uVar6 = (**(code **)(*plVar7 + 0x3f8))(plVar7,*(undefined8 *)(*plVar7 + 0x400)),
           param_3 == (long *)0x0)) goto LAB_07600904;
        uVar8 = (**(code **)(*param_3 + 0x3f8))(param_3,*(undefined8 *)(*param_3 + 0x400));
        uVar5 = System_Delegate__return_type_match(uVar6,uVar8);
        if ((uVar5 & 1) == 0) {
          if ((param_4 & 1) == 0) {
            return 0;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar13 = &DAT_0921f5c0;
          goto LAB_0760097c;
        }
        lVar9 = (**(code **)(*plVar7 + 0x398))(plVar7,*(undefined8 *)(*plVar7 + 0x3a0));
        lVar10 = (**(code **)(*param_3 + 0x398))(param_3,*(undefined8 *)(*param_3 + 0x3a0));
        uVar5 = System_Reflection_MethodBase__get_IsStatic(param_3,0);
        if (param_2 == 0) {
          if ((uVar5 & 1) != 0) {
            if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_07600904;
            if ((*(int *)(lVar10 + 0x18) != *(int *)(lVar9 + 0x18)) &&
               (*(int *)(lVar9 + 0x18) + 1 != *(int *)(lVar10 + 0x18))) goto LAB_0760048c;
LAB_076004c4:
            lVar11 = thunk_FUN_03f9944c(DAT_091839b8);
            uVar5 = System_Reflection_MethodBase__get_IsStatic(param_3,0);
            if ((uVar5 & 1) == 0) {
              iVar1 = *(int *)(lVar10 + 0x18);
              if (iVar1 + 1 == *(int *)(lVar9 + 0x18)) {
                if (iVar1 == -1) goto LAB_07600908;
                plVar7 = *(long **)(lVar9 + 0x20);
                if (plVar7 == (long *)0x0) goto LAB_07600904;
                uVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                uVar8 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
                param_5 = System_Delegate__arg_type_match_this(uVar6,uVar8,0);
                if (0 < *(int *)(lVar10 + 0x18)) {
                  uVar5 = 0;
                  do {
                    uVar2 = uVar5 + 1;
                    if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_07600908;
                    plVar7 = *(long **)(lVar9 + 0x28 + uVar5 * 8);
                    if (plVar7 == (long *)0x0) goto LAB_07600904;
                    uVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                    if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_07600908;
                    plVar7 = *(long **)(lVar10 + 0x20 + uVar5 * 8);
                    if (plVar7 == (long *)0x0) goto LAB_07600904;
                    uVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                    uVar4 = System_Delegate__arg_type_match(uVar6,uVar8);
                    param_5 = param_5 & uVar4;
                    uVar5 = uVar2;
                  } while ((long)uVar2 < (long)*(int *)(lVar10 + 0x18));
                }
              }
              else if (0 < iVar1) {
                lVar15 = 0;
                do {
                  if (*(uint *)(lVar9 + 0x18) <= (uint)lVar15) goto LAB_07600908;
                  plVar7 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  if (*(uint *)(lVar10 + 0x18) <= (uint)lVar15) goto LAB_07600908;
                  plVar7 = *(long **)(lVar10 + 0x20 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  uVar4 = System_Delegate__arg_type_match(uVar6,uVar8);
                  lVar15 = lVar15 + 1;
                  param_5 = param_5 & uVar4;
                } while ((int)lVar15 < *(int *)(lVar10 + 0x18));
              }
joined_r0x076008d4:
              if ((param_5 & 1) == 0) {
                if ((param_4 & 1) == 0) {
                  return 0;
                }
                thunk_FUN_03fc39d4(&DAT_09181548);
                uVar6 = thunk_FUN_03f9944c();
                puVar13 = &DAT_0921f5b8;
                goto LAB_0760097c;
              }
            }
            else {
              if (*(int *)(lVar9 + 0x18) + 1 == *(int *)(lVar10 + 0x18)) {
                if (*(int *)(lVar9 + 0x18) == -1) {
LAB_07600908:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                plVar7 = *(long **)(lVar10 + 0x20);
                if ((plVar7 == (long *)0x0) ||
                   (lVar15 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0))
                   , lVar15 == 0)) goto LAB_07600904;
                uVar5 = System_Type__get_IsValueType(lVar15,0);
                if ((uVar5 & 1) == 0) {
                  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_07600908;
                  plVar7 = *(long **)(lVar10 + 0x20);
                  if ((plVar7 == (long *)0x0) ||
                     (lVar15 = (**(code **)(*plVar7 + 0x1e8))
                                         (plVar7,*(undefined8 *)(*plVar7 + 0x1f0)), lVar15 == 0))
                  goto LAB_07600904;
                  uVar4 = System_Type__get_IsByRef(lVar15,0);
                  uVar4 = uVar4 ^ 1;
                }
                else {
                  uVar4 = 0;
                }
                uVar3 = *(uint *)(lVar9 + 0x18);
                param_5 = param_5 & uVar4;
                if (0 < (int)uVar3) {
                  lVar15 = 0;
                  do {
                    if (uVar3 <= (uint)lVar15) goto LAB_07600908;
                    plVar7 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
                    if (plVar7 == (long *)0x0) goto LAB_07600904;
                    uVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                    if (*(uint *)(lVar10 + 0x18) <= (uint)lVar15 + 1) goto LAB_07600908;
                    plVar7 = *(long **)(lVar10 + 0x28 + lVar15 * 8);
                    if (plVar7 == (long *)0x0) goto LAB_07600904;
                    uVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                    uVar4 = System_Delegate__arg_type_match(uVar6,uVar8);
                    uVar3 = *(uint *)(lVar9 + 0x18);
                    lVar15 = lVar15 + 1;
                    param_5 = param_5 & uVar4;
                  } while ((int)lVar15 < (int)uVar3);
                }
                if (lVar11 == 0) goto LAB_07600904;
                *(undefined1 *)(lVar11 + 0x20) = 1;
                goto joined_r0x076008d4;
              }
              if (0 < *(int *)(lVar10 + 0x18)) {
                lVar15 = 0;
                param_5 = 1;
                do {
                  if (*(uint *)(lVar9 + 0x18) <= (uint)lVar15) goto LAB_07600908;
                  plVar7 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  if (*(uint *)(lVar10 + 0x18) <= (uint)lVar15) goto LAB_07600908;
                  plVar7 = *(long **)(lVar10 + 0x20 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  uVar4 = System_Delegate__arg_type_match(uVar6,uVar8);
                  lVar15 = lVar15 + 1;
                  param_5 = param_5 & uVar4;
                } while ((int)lVar15 < *(int *)(lVar10 + 0x18));
                goto joined_r0x076008d4;
              }
            }
            lVar9 = FUN_03f728b0(param_1,param_2,param_3,param_4 & 1);
            if (lVar9 != 0) {
              *(long *)(lVar9 + 0x60) = (long)param_3;
              thunk_FUN_03f5d7b8((long *)(lVar9 + 0x60),param_3);
              if (lVar11 != 0) {
                *(long *)(lVar9 + 0x68) = lVar11;
                thunk_FUN_03f5d7b8((long *)(lVar9 + 0x68),lVar11);
                return lVar9;
              }
              return lVar9;
            }
            if (lVar11 == 0) {
              return 0;
            }
LAB_07600904:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_07600904;
          if ((*(int *)(lVar10 + 0x18) + 1 == *(int *)(lVar9 + 0x18)) ||
             (*(int *)(lVar10 + 0x18) == *(int *)(lVar9 + 0x18))) goto LAB_076004c4;
        }
        else {
          if ((uVar5 & 1) == 0) {
            if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_07600904;
            iVar1 = *(int *)(lVar10 + 0x18);
            iVar14 = *(int *)(lVar9 + 0x18);
          }
          else {
            if ((lVar10 == 0) || (lVar9 == 0)) goto LAB_07600904;
            iVar14 = *(int *)(lVar10 + 0x18);
            iVar1 = *(int *)(lVar9 + 0x18) + 1;
          }
          if (iVar1 == iVar14) {
            lVar11 = thunk_FUN_03f9944c(DAT_091839b8);
            uVar5 = System_Reflection_MethodBase__get_IsStatic(param_3,0);
            uVar6 = FUN_03f6c2d0(param_2);
            if ((uVar5 & 1) == 0) {
              uVar8 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
              param_5 = System_Delegate__arg_type_match_this(uVar6,uVar8,1);
              if (0 < *(int *)(lVar10 + 0x18)) {
                lVar15 = 0;
                do {
                  if (*(uint *)(lVar9 + 0x18) <= (uint)lVar15) goto LAB_07600908;
                  plVar7 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  if (*(uint *)(lVar10 + 0x18) <= (uint)lVar15) goto LAB_07600908;
                  plVar7 = *(long **)(lVar10 + 0x20 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  uVar4 = System_Delegate__arg_type_match(uVar6,uVar8);
                  lVar15 = lVar15 + 1;
                  param_5 = param_5 & uVar4;
                } while ((int)lVar15 < *(int *)(lVar10 + 0x18));
              }
            }
            else {
              if (*(int *)(lVar10 + 0x18) == 0) goto LAB_07600908;
              plVar7 = *(long **)(lVar10 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_07600904;
              uVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
              param_5 = System_Delegate__arg_type_match(uVar6,uVar8);
              if (1 < *(int *)(lVar10 + 0x18)) {
                lVar15 = 0;
                do {
                  if (*(uint *)(lVar9 + 0x18) <= (uint)lVar15) goto LAB_07600908;
                  plVar7 = *(long **)(lVar9 + 0x20 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar6 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  if (*(uint *)(lVar10 + 0x18) <= (uint)lVar15 + 1) goto LAB_07600908;
                  plVar7 = *(long **)(lVar10 + 0x28 + lVar15 * 8);
                  if (plVar7 == (long *)0x0) goto LAB_07600904;
                  uVar8 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                  uVar4 = System_Delegate__arg_type_match(uVar6,uVar8);
                  lVar15 = lVar15 + 1;
                  param_5 = param_5 & uVar4;
                } while ((int)lVar15 + 1 < *(int *)(lVar10 + 0x18));
              }
              if (lVar11 == 0) goto LAB_07600904;
              *(undefined1 *)(lVar11 + 0x20) = 1;
            }
            goto joined_r0x076008d4;
          }
        }
LAB_0760048c:
        if ((param_4 & 1) == 0) {
          return 0;
        }
        thunk_FUN_03fc39d4(&DAT_0918b8c0);
        uVar6 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_0920a420);
        System_Reflection_TargetParameterCountException___ctor(uVar6,uVar8,0);
      }
      goto LAB_07600990;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar12 = &DAT_0921f5b0;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    puVar12 = &DAT_09224510;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar12);
  System_ArgumentNullException___ctor(uVar6,uVar8,0);
LAB_07600990:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c8448);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar8);
}

