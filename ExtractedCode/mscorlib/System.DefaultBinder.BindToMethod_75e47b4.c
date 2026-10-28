// rea decompile_all
// name: System.DefaultBinder$$BindToMethod
// address: 0x75e47b4
// body: available
// range: 0x75e47b4-0x75e67fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e4ae0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e5ac8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e6714 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e6720 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e6728 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e6730 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e67d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e67e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e67f0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e67f8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


long System_DefaultBinder__BindToMethod
               (undefined8 param_1,uint param_2,long param_3,long *param_4,undefined8 param_5,
               undefined8 param_6,long param_7,long *param_8)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  long lVar27;
  
  if ((DAT_09521ee0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190008);
    FUN_03f5c2a4(&DAT_09183158);
    FUN_03f5c2a4(&DAT_09183868);
    FUN_03f5c2a4(&DAT_0917fb18);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091802d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091726e0);
    FUN_03f5c2a4(&DAT_0918a400);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09521ee0 = 1;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    uVar17 = thunk_FUN_03fc39d4(&DAT_091fbf00);
    uVar26 = System_Environment__GetResourceString(uVar17,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar17 = thunk_FUN_03f9944c();
    uVar18 = thunk_FUN_03fc39d4(&DAT_0921f240);
    System_ArgumentException___ctor(uVar17,uVar26,uVar18,0);
    goto LAB_075e67bc;
  }
  lVar7 = System_Array__Clone(param_3,0);
  uVar17 = DAT_091802d0;
  if (lVar7 == 0) {
    *param_8 = 0;
    thunk_FUN_03f5d7b8(param_8,0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar8 = (long *)thunk_FUN_03f99350(lVar7,DAT_091802d0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(lVar7,uVar17);
  }
  *param_8 = 0;
  thunk_FUN_03f5d7b8(param_8,0);
  lVar7 = FUN_03f5c394(DAT_0917fb18,(int)plVar8[3]);
  uVar6 = *(uint *)(plVar8 + 3);
  if (0 < (int)uVar6) {
    uVar19 = 0;
    do {
      uVar4 = (uint)uVar19;
      if (uVar6 <= uVar4) goto LAB_075e6714;
      plVar9 = (long *)plVar8[uVar19 + 4];
      if (((plVar9 == (long *)0x0) ||
          (lVar10 = (**(code **)(*plVar9 + 0x3d8))(plVar9,*(undefined8 *)(*plVar9 + 0x3e0)),
          lVar10 == 0)) || (*param_4 == 0)) goto LAB_075e4ae0;
      iVar1 = *(int *)(*param_4 + 0x18);
      iVar5 = *(int *)(lVar10 + 0x18);
      if (*(int *)(lVar10 + 0x18) <= iVar1) {
        iVar5 = iVar1;
      }
      lVar11 = FUN_03f5c394(DAT_091801b8,iVar5);
      if (lVar7 == 0) goto LAB_075e4ae0;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_075e6714;
      plVar9 = (long *)(lVar7 + uVar19 * 8 + 0x20);
      *plVar9 = lVar11;
      thunk_FUN_03f5d7b8(lVar7 + 0x20 + uVar19 * 8);
      if (param_7 == 0) {
        if (*param_4 == 0) goto LAB_075e4ae0;
        uVar6 = *(uint *)(*param_4 + 0x18);
        if (0 < (int)uVar6) {
          uVar23 = *(uint *)(lVar7 + 0x18);
          uVar19 = 0;
          do {
            if (uVar23 <= uVar4) goto LAB_075e6714;
            lVar10 = *plVar9;
            if (lVar10 == 0) goto LAB_075e4ae0;
            if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_075e6714;
            *(int *)(lVar10 + uVar19 * 4 + 0x20) = (int)uVar19;
            uVar19 = uVar19 + 1;
          } while ((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) != uVar19);
        }
      }
      else {
        if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_075e6714;
        lVar11 = *plVar9;
        if (*(int *)(DAT_09183868 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = System_DefaultBinder__CreateParamOrder(lVar11,lVar10,param_7);
        if ((uVar12 & 1) == 0) {
          if (*(uint *)(plVar8 + 3) <= uVar4) goto LAB_075e6714;
          plVar8[uVar19 + 4] = 0;
          thunk_FUN_03f5d7b8(plVar8 + uVar19 + 4,0);
        }
      }
      uVar6 = *(uint *)(plVar8 + 3);
      uVar19 = (ulong)(uVar4 + 1);
    } while ((int)(uVar4 + 1) < (int)uVar6);
  }
  plVar9 = (long *)FUN_03f5c394(DAT_09180748);
  if (*param_4 != 0) {
    plVar13 = (long *)FUN_03f5c394(DAT_09180748,*(undefined4 *)(*param_4 + 0x18));
    lVar10 = *param_4;
    if (lVar10 != 0) {
      lVar11 = 4;
      lVar24 = 0x20;
      do {
        uVar19 = lVar11 - 4;
        if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar19) {
          if ((int)plVar8[3] < 1) goto LAB_075e6784;
          uVar19 = 0;
          uVar6 = 0;
          uVar12 = plVar8[3] & 0xffffffff;
          goto LAB_075e4b28;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_075e6714;
        lVar14 = *(long *)(lVar10 + lVar11 * 8);
        if (lVar14 != 0) {
          lVar10 = System_Object__GetType(lVar14,0);
          if (plVar13 == (long *)0x0) break;
          if ((lVar10 != 0) &&
             (lVar14 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
          goto LAB_075e6718;
          if (*(uint *)(plVar13 + 3) <= uVar19) goto LAB_075e6714;
          plVar13[lVar11] = lVar10;
          thunk_FUN_03f5d7b8((long)plVar13 + lVar24,lVar10);
          lVar10 = *param_4;
        }
        lVar11 = lVar11 + 1;
        lVar24 = lVar24 + 8;
      } while (lVar10 != 0);
    }
  }
LAB_075e4ae0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_075e4b28:
  if (uVar12 <= uVar19) goto LAB_075e6714;
  plVar25 = plVar8 + uVar19 + 4;
  uVar12 = System_Reflection_MethodBase__op_Equality(*plVar25,0,0);
  if ((uVar12 & 1) == 0) {
    if (*(uint *)(plVar8 + 3) <= uVar19) goto LAB_075e6714;
    plVar15 = (long *)*plVar25;
    if ((plVar15 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar15 + 0x3d8))(plVar15,*(undefined8 *)(*plVar15 + 0x3e0)),
       lVar10 == 0)) goto LAB_075e4ae0;
    uVar12 = *(ulong *)(lVar10 + 0x18);
    lVar11 = *param_4;
    if (uVar12 == 0) {
      if (lVar11 == 0) goto LAB_075e4ae0;
      if (*(long *)(lVar11 + 0x18) != 0) {
        if (*(uint *)(plVar8 + 3) <= uVar19) goto LAB_075e6714;
        plVar15 = (long *)*plVar25;
        if (plVar15 == (long *)0x0) goto LAB_075e4ae0;
        uVar4 = (**(code **)(*plVar15 + 0x288))(plVar15,*(undefined8 *)(*plVar15 + 0x290));
        if ((uVar4 >> 1 & 1) == 0) goto LAB_075e5790;
      }
      if (lVar7 == 0) goto LAB_075e4ae0;
      if ((*(uint *)(lVar7 + 0x18) <= uVar19) || (*(uint *)(lVar7 + 0x18) <= uVar6))
      goto LAB_075e6714;
      *(undefined8 *)(lVar7 + 0x20 + (long)(int)uVar6 * 8) =
           *(undefined8 *)(lVar7 + 0x20 + uVar19 * 8);
      thunk_FUN_03f5d7b8(lVar7 + 0x20 + (long)(int)uVar6 * 8);
      uVar4 = *(uint *)(plVar8 + 3);
      if (uVar4 <= uVar19) goto LAB_075e6714;
      lVar10 = *plVar25;
joined_r0x075e4c9c:
      if (lVar10 != 0) {
        lVar11 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar8 + 0x40));
        if (lVar11 == 0) goto LAB_075e6718;
        uVar4 = (uint)plVar8[3];
      }
      if (uVar4 <= uVar6) goto LAB_075e6714;
      plVar8[(long)(int)uVar6 + 4] = lVar10;
      thunk_FUN_03f5d7b8(plVar8 + (long)(int)uVar6 + 4,lVar10);
      uVar6 = uVar6 + 1;
    }
    else {
      if (lVar11 == 0) goto LAB_075e4ae0;
      uVar4 = *(uint *)(lVar11 + 0x18);
      uVar20 = uVar12 & 0xffffffff;
      uVar23 = (uint)uVar12;
      if ((int)uVar4 < (int)uVar23) {
        uVar21 = uVar23 - 1;
        if ((int)uVar4 < (int)uVar21) {
          plVar15 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
          do {
            if ((uint)uVar20 <= uVar4) goto LAB_075e6714;
            plVar16 = (long *)*plVar15;
            if (plVar16 == (long *)0x0) goto LAB_075e4ae0;
            lVar11 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210));
            if (*(int *)(DAT_09183158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09183158);
            }
            uVar20 = *(ulong *)(lVar10 + 0x18);
            uVar23 = (uint)uVar20;
            if (lVar11 == **(long **)(DAT_09183158 + 0xb8)) break;
            uVar4 = uVar4 + 1;
            plVar15 = plVar15 + 1;
          } while ((int)uVar4 < (int)(uVar23 - 1));
          uVar21 = uVar23 - 1;
        }
        if (uVar4 == uVar21) {
          if (uVar23 <= uVar4) goto LAB_075e6714;
          plVar15 = (long *)(lVar10 + (long)(int)uVar4 * 8 + 0x20);
          plVar16 = (long *)*plVar15;
          if (plVar16 == (long *)0x0) goto LAB_075e4ae0;
          lVar11 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210));
          if (*(int *)(DAT_09183158 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09183158);
          }
          if (lVar11 != **(long **)(DAT_09183158 + 0xb8)) {
LAB_075e4f28:
            plVar16 = (long *)0x0;
            goto LAB_075e501c;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_075e6714;
          plVar16 = (long *)*plVar15;
          if ((plVar16 == (long *)0x0) ||
             (lVar11 = (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0)),
             lVar11 == 0)) goto LAB_075e4ae0;
          uVar12 = System_Type__get_IsArray(lVar11,0);
          uVar17 = DAT_091726e0;
          if ((uVar12 & 1) != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_075e6714;
            plVar16 = (long *)*plVar15;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar17 = System_Type__GetTypeFromHandle(uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_075e4ae0;
            uVar12 = (**(code **)(*plVar16 + 0x228))
                               (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x230));
            if ((uVar12 & 1) != 0) {
              if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                plVar15 = (long *)*plVar15;
joined_r0x075e4eb0:
                if ((plVar15 != (long *)0x0) &&
                   (plVar15 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                                (plVar15,*(undefined8 *)(*plVar15 + 0x1f0)),
                   plVar15 != (long *)0x0)) {
                  plVar16 = (long *)(**(code **)(*plVar15 + 0x448))
                                              (plVar15,*(undefined8 *)(*plVar15 + 0x450));
                  goto LAB_075e501c;
                }
                goto LAB_075e4ae0;
              }
              goto LAB_075e6714;
            }
          }
        }
      }
      else {
        uVar21 = uVar23 - 1;
        lVar11 = (long)(int)uVar21;
        if ((int)uVar23 < (int)uVar4) {
          if (uVar23 == 0) goto LAB_075e6714;
          plVar15 = (long *)(lVar10 + lVar11 * 8 + 0x20);
          plVar16 = (long *)*plVar15;
          if ((plVar16 == (long *)0x0) ||
             (lVar24 = (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0)),
             lVar24 == 0)) goto LAB_075e4ae0;
          uVar12 = System_Type__get_IsArray(lVar24,0);
          uVar17 = DAT_091726e0;
          if ((uVar12 & 1) != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_075e6714;
            plVar16 = (long *)*plVar15;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar17 = System_Type__GetTypeFromHandle(uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_075e4ae0;
            uVar12 = (**(code **)(*plVar16 + 0x228))
                               (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x230));
            if ((uVar12 & 1) != 0) {
              if (lVar7 == 0) goto LAB_075e4ae0;
              if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_075e6714;
              lVar24 = *(long *)(lVar7 + uVar19 * 8 + 0x20);
              if (lVar24 == 0) goto LAB_075e4ae0;
              if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_075e6714;
              if (*(uint *)(lVar24 + lVar11 * 4 + 0x20) == uVar21) {
LAB_075e4ea0:
                if (uVar21 < *(uint *)(lVar10 + 0x18)) {
                  plVar15 = (long *)*plVar15;
                  goto joined_r0x075e4eb0;
                }
                goto LAB_075e6714;
              }
            }
          }
        }
        else {
          if (uVar23 == 0) goto LAB_075e6714;
          plVar15 = (long *)(lVar10 + lVar11 * 8 + 0x20);
          plVar16 = (long *)*plVar15;
          if ((plVar16 == (long *)0x0) ||
             (lVar24 = (**(code **)(*plVar16 + 0x1e8))(plVar16,*(undefined8 *)(*plVar16 + 0x1f0)),
             lVar24 == 0)) goto LAB_075e4ae0;
          uVar12 = System_Type__get_IsArray(lVar24,0);
          uVar17 = DAT_091726e0;
          plVar16 = (long *)0x0;
          if ((uVar12 & 1) != 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_075e6714;
            plVar16 = (long *)*plVar15;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar17 = System_Type__GetTypeFromHandle(uVar17,0);
            if (plVar16 == (long *)0x0) goto LAB_075e4ae0;
            uVar12 = (**(code **)(*plVar16 + 0x228))
                               (plVar16,uVar17,1,*(undefined8 *)(*plVar16 + 0x230));
            if ((uVar12 & 1) != 0) {
              if (lVar7 == 0) goto LAB_075e4ae0;
              if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_075e6714;
              lVar24 = *(long *)(lVar7 + uVar19 * 8 + 0x20);
              if (lVar24 == 0) goto LAB_075e4ae0;
              if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_075e6714;
              if (*(uint *)(lVar24 + lVar11 * 4 + 0x20) != uVar21) goto LAB_075e4f28;
              if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_075e6714;
              plVar16 = (long *)*plVar15;
              if ((plVar16 == (long *)0x0) ||
                 (plVar16 = (long *)(**(code **)(*plVar16 + 0x1e8))
                                              (plVar16,*(undefined8 *)(*plVar16 + 0x1f0)),
                 plVar13 == (long *)0x0)) goto LAB_075e4ae0;
              if (*(uint *)(plVar13 + 3) <= uVar21) goto LAB_075e6714;
              if (plVar16 == (long *)0x0) goto LAB_075e4ae0;
              uVar12 = (**(code **)(*plVar16 + 0x2b8))
                                 (plVar16,plVar13[lVar11 + 4],*(undefined8 *)(*plVar16 + 0x2c0));
              if ((uVar12 & 1) == 0) goto LAB_075e4ea0;
              goto LAB_075e4f28;
            }
            plVar16 = (long *)0x0;
          }
LAB_075e501c:
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar12 = System_Type__op_Inequality(plVar16,0,0);
          if ((uVar12 & 1) == 0) {
            if (*param_4 == 0) goto LAB_075e4ae0;
            uVar4 = *(uint *)(*param_4 + 0x18);
          }
          else {
            uVar4 = *(int *)(lVar10 + 0x18) - 1;
          }
          if ((int)uVar4 < 1) {
            uVar12 = 0;
          }
          else {
            lVar11 = lVar7 + uVar19 * 8;
            uVar12 = 0;
            do {
              uVar23 = (uint)uVar12;
              if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_075e6714;
              plVar15 = *(long **)(lVar10 + 0x20 + uVar12 * 8);
              if ((plVar15 == (long *)0x0) ||
                 (plVar15 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                              (plVar15,*(undefined8 *)(*plVar15 + 0x1f0)),
                 plVar15 == (long *)0x0)) goto LAB_075e4ae0;
              uVar20 = System_Type__get_IsByRef(plVar15,0);
              if ((uVar20 & 1) != 0) {
                plVar15 = (long *)(**(code **)(*plVar15 + 0x448))
                                            (plVar15,*(undefined8 *)(*plVar15 + 0x450));
              }
              if (lVar7 == 0) goto LAB_075e4ae0;
              if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_075e6714;
              lVar24 = *(long *)(lVar11 + 0x20);
              if (lVar24 == 0) goto LAB_075e4ae0;
              if (*(uint *)(lVar24 + 0x18) <= uVar23) goto LAB_075e6714;
              if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
              uVar21 = *(uint *)(lVar24 + uVar12 * 4 + 0x20);
              if (*(uint *)(plVar13 + 3) <= uVar21) goto LAB_075e6714;
              lVar24 = plVar13[(long)(int)uVar21 + 4];
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar20 = System_Type__op_Equality(plVar15,lVar24,0);
              if ((uVar20 & 1) == 0) {
                uVar20 = (ulong)*(uint *)(lVar7 + 0x18);
                lVar24 = *param_4;
                if ((param_2 >> 0x12 & 1) != 0) {
                  if (uVar20 <= uVar19) goto LAB_075e6714;
                  lVar14 = *(long *)(lVar11 + 0x20);
                  if (lVar14 == 0) goto LAB_075e4ae0;
                  if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_075e6714;
                  if (lVar24 == 0) goto LAB_075e4ae0;
                  uVar21 = *(uint *)(lVar14 + uVar12 * 4 + 0x20);
                  if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_075e6714;
                  lVar24 = *(long *)(lVar24 + (long)(int)uVar21 * 8 + 0x20);
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  if (lVar24 == *(long *)(*(long *)(DAT_095354b8 + 0xb8) + 0x18)) goto LAB_075e5498;
                  uVar20 = (ulong)*(uint *)(lVar7 + 0x18);
                  lVar24 = *param_4;
                }
                lVar14 = DAT_095353e8;
                if (uVar20 <= uVar19) goto LAB_075e6714;
                lVar22 = *(long *)(lVar11 + 0x20);
                if (lVar22 == 0) goto LAB_075e4ae0;
                if (*(uint *)(lVar22 + 0x18) <= uVar23) goto LAB_075e6714;
                if (lVar24 == 0) goto LAB_075e4ae0;
                uVar21 = *(uint *)(lVar22 + uVar12 * 4 + 0x20);
                if (*(uint *)(lVar24 + 0x18) <= uVar21) goto LAB_075e6714;
                if (*(long *)(lVar24 + (long)(int)uVar21 * 8 + 0x20) != 0) {
                  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar17 = System_Type__GetTypeFromHandle(lVar14 + 0x20,0);
                  uVar20 = System_Type__op_Equality(plVar15,uVar17,0);
                  if ((uVar20 & 1) == 0) {
                    if (plVar15 == (long *)0x0) goto LAB_075e4ae0;
                    uVar20 = System_Type__get_IsPrimitive(plVar15,0);
                    bVar2 = *(uint *)(lVar7 + 0x18) <= uVar19;
                    if ((uVar20 & 1) == 0) {
                      if (bVar2) goto LAB_075e6714;
                      lVar24 = *(long *)(lVar11 + 0x20);
                      if (lVar24 == 0) goto LAB_075e4ae0;
                      if ((*(uint *)(lVar24 + 0x18) <= uVar23) ||
                         (uVar21 = *(uint *)(lVar24 + uVar12 * 4 + 0x20),
                         *(uint *)(plVar13 + 3) <= uVar21)) goto LAB_075e6714;
                      lVar24 = plVar13[(long)(int)uVar21 + 4];
                      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar20 = System_Type__op_Equality(lVar24,0,0);
                      if ((uVar20 & 1) == 0) {
                        if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_075e6714;
                        lVar24 = *(long *)(lVar11 + 0x20);
                        if (lVar24 == 0) goto LAB_075e4ae0;
                        if ((*(uint *)(lVar24 + 0x18) <= uVar23) ||
                           (uVar21 = *(uint *)(lVar24 + uVar12 * 4 + 0x20),
                           *(uint *)(plVar13 + 3) <= uVar21)) goto LAB_075e6714;
                        uVar20 = (**(code **)(*plVar15 + 0x2b8))
                                           (plVar15,plVar13[(long)(int)uVar21 + 4],
                                            *(undefined8 *)(*plVar15 + 0x2c0));
                        if ((uVar20 & 1) == 0) {
                          if (uVar19 < *(uint *)(lVar7 + 0x18)) {
                            lVar24 = *(long *)(lVar11 + 0x20);
                            if (lVar24 != 0) {
                              if ((uVar23 < *(uint *)(lVar24 + 0x18)) &&
                                 (uVar21 = *(uint *)(lVar24 + uVar12 * 4 + 0x20),
                                 uVar21 < *(uint *)(plVar13 + 3))) {
                                if (plVar13[(long)(int)uVar21 + 4] != 0) {
                                  uVar20 = System_Type__get_IsCOMObject
                                                     (plVar13[(long)(int)uVar21 + 4],0);
                                  if ((uVar20 & 1) != 0) {
                                    if (uVar19 < *(uint *)(lVar7 + 0x18)) {
                                      lVar24 = *(long *)(lVar11 + 0x20);
                                      if (lVar24 != 0) {
                                        if (uVar23 < *(uint *)(lVar24 + 0x18)) {
                                          lVar14 = *param_4;
                                          if (lVar14 != 0) {
                                            uVar23 = *(uint *)(lVar24 + uVar12 * 4 + 0x20);
                                            if (uVar23 < *(uint *)(lVar14 + 0x18)) {
                                              uVar20 = (**(code **)(*plVar15 + 0x8d8))
                                                                 (plVar15,*(undefined8 *)
                                                                           (lVar14 + (long)(int)
                                                  uVar23 * 8 + 0x20),
                                                  *(undefined8 *)(*plVar15 + 0x8e0));
                                              goto joined_r0x075e5494;
                                            }
                                            goto LAB_075e6714;
                                          }
                                          goto LAB_075e4ae0;
                                        }
                                        goto LAB_075e6714;
                                      }
                                      goto LAB_075e4ae0;
                                    }
                                    goto LAB_075e6714;
                                  }
                                  goto LAB_075e54b0;
                                }
                                goto LAB_075e4ae0;
                              }
                              goto LAB_075e6714;
                            }
                            goto LAB_075e4ae0;
                          }
                          goto LAB_075e6714;
                        }
                      }
                    }
                    else {
                      if (bVar2) goto LAB_075e6714;
                      lVar24 = *(long *)(lVar11 + 0x20);
                      if (lVar24 == 0) goto LAB_075e4ae0;
                      if ((*(uint *)(lVar24 + 0x18) <= uVar23) ||
                         (uVar21 = *(uint *)(lVar24 + uVar12 * 4 + 0x20),
                         *(uint *)(plVar13 + 3) <= uVar21)) goto LAB_075e6714;
                      lVar24 = plVar13[(long)(int)uVar21 + 4];
                      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar20 = System_Type__op_Equality(lVar24,0,0);
                      if ((uVar20 & 1) != 0) goto LAB_075e54b0;
                      if (*(uint *)(lVar7 + 0x18) <= uVar19) goto LAB_075e6714;
                      lVar24 = *(long *)(lVar11 + 0x20);
                      if (lVar24 == 0) goto LAB_075e4ae0;
                      if (*(uint *)(lVar24 + 0x18) <= uVar23) goto LAB_075e6714;
                      lVar14 = *param_4;
                      if (lVar14 == 0) goto LAB_075e4ae0;
                      uVar23 = *(uint *)(lVar24 + uVar12 * 4 + 0x20);
                      if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_075e6714;
                      uVar17 = *(undefined8 *)(lVar14 + (long)(int)uVar23 * 8 + 0x20);
                      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar15 + 200) +
                                    (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) != DAT_0918a400
                         )) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c8d0(plVar15);
                      }
                      uVar20 = System_DefaultBinder__CanConvertPrimitiveObjectToType(uVar17,plVar15)
                      ;
joined_r0x075e5494:
                      if ((uVar20 & 1) == 0) goto LAB_075e54b0;
                    }
                  }
                }
              }
LAB_075e5498:
              uVar12 = uVar12 + 1;
            } while (uVar4 != (uint)uVar12);
            uVar12 = (ulong)uVar4;
          }
LAB_075e54b0:
          iVar5 = (int)uVar12;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar20 = System_Type__op_Inequality(plVar16,0,0);
          if (((uVar20 & 1) != 0) && (iVar5 == *(int *)(lVar10 + 0x18) + -1)) {
            lVar10 = *param_4;
            if (lVar10 == 0) goto LAB_075e4ae0;
            lVar11 = (uVar12 & 0xffffffff) + 4;
            while (lVar11 + -4 < (long)*(int *)(lVar10 + 0x18)) {
              if (plVar16 == (long *)0x0) goto LAB_075e4ae0;
              uVar12 = System_Type__get_IsPrimitive(plVar16,0);
              uVar4 = (uint)(lVar11 + -4);
              if ((uVar12 & 1) == 0) {
                if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
                if (*(uint *)(plVar13 + 3) <= uVar4) goto LAB_075e6714;
                lVar10 = plVar13[lVar11];
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar12 = System_Type__op_Equality(lVar10,0,0);
                if ((uVar12 & 1) == 0) {
                  if (*(uint *)(plVar13 + 3) <= uVar4) goto LAB_075e6714;
                  uVar12 = (**(code **)(*plVar16 + 0x2b8))
                                     (plVar16,plVar13[lVar11],*(undefined8 *)(*plVar16 + 0x2c0));
                  if ((uVar12 & 1) == 0) {
                    if (*(uint *)(plVar13 + 3) <= uVar4) goto LAB_075e6714;
                    if (plVar13[lVar11] == 0) goto LAB_075e4ae0;
                    uVar12 = System_Type__get_IsCOMObject(plVar13[lVar11],0);
                    if ((uVar12 & 1) != 0) {
                      lVar10 = *param_4;
                      if (lVar10 != 0) {
                        if (uVar4 < *(uint *)(lVar10 + 0x18)) {
                          uVar12 = (**(code **)(*plVar16 + 0x8d8))
                                             (plVar16,*(undefined8 *)(lVar10 + lVar11 * 8),
                                              *(undefined8 *)(*plVar16 + 0x8e0));
                          goto joined_r0x075e568c;
                        }
                        goto LAB_075e6714;
                      }
                      goto LAB_075e4ae0;
                    }
                    break;
                  }
                }
              }
              else {
                if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
                if (*(uint *)(plVar13 + 3) <= uVar4) goto LAB_075e6714;
                lVar10 = plVar13[lVar11];
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar12 = System_Type__op_Equality(lVar10,0,0);
                if ((uVar12 & 1) != 0) break;
                lVar10 = *param_4;
                if (lVar10 == 0) goto LAB_075e4ae0;
                if (*(uint *)(lVar10 + 0x18) <= uVar4) goto LAB_075e6714;
                uVar17 = *(undefined8 *)(lVar10 + lVar11 * 8);
                if (*(int *)(DAT_09183868 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) ||
                   (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8
                             + -8) != DAT_0918a400)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(plVar16);
                }
                uVar12 = System_DefaultBinder__CanConvertPrimitiveObjectToType(uVar17,plVar16);
joined_r0x075e568c:
                if ((uVar12 & 1) == 0) break;
              }
              lVar10 = *param_4;
              lVar11 = lVar11 + 1;
              if (lVar10 == 0) goto LAB_075e4ae0;
            }
            iVar5 = (int)lVar11 + -4;
          }
          if (*param_4 == 0) goto LAB_075e4ae0;
          if (iVar5 == *(int *)(*param_4 + 0x18)) {
            if (lVar7 != 0) {
              if ((uVar19 < *(uint *)(lVar7 + 0x18)) && (uVar6 < *(uint *)(lVar7 + 0x18))) {
                lVar10 = (long)(int)uVar6;
                *(undefined8 *)(lVar7 + 0x20 + lVar10 * 8) =
                     *(undefined8 *)(lVar7 + 0x20 + uVar19 * 8);
                thunk_FUN_03f5d7b8(lVar7 + 0x20 + lVar10 * 8);
                if (plVar9 != (long *)0x0) {
                  if ((plVar16 == (long *)0x0) ||
                     (lVar11 = thunk_FUN_03f99350(plVar16,*(undefined8 *)(*plVar9 + 0x40)),
                     lVar11 != 0)) {
                    if (uVar6 < *(uint *)(plVar9 + 3)) {
                      plVar9[lVar10 + 4] = (long)plVar16;
                      thunk_FUN_03f5d7b8(plVar9 + lVar10 + 4,plVar16);
                      uVar4 = *(uint *)(plVar8 + 3);
                      if (uVar19 < uVar4) {
                        lVar10 = *plVar25;
                        goto joined_r0x075e4c9c;
                      }
                    }
                    goto LAB_075e6714;
                  }
                  goto LAB_075e6718;
                }
                goto LAB_075e4ae0;
              }
              goto LAB_075e6714;
            }
            goto LAB_075e4ae0;
          }
        }
      }
    }
  }
LAB_075e5790:
  uVar4 = *(uint *)(plVar8 + 3);
  uVar12 = (ulong)uVar4;
  uVar19 = uVar19 + 1;
  if ((long)(int)uVar4 <= (long)uVar19) goto code_r0x075e57a0;
  goto LAB_075e4b28;
code_r0x075e57a0:
  if (uVar6 == 1) {
    if (param_7 != 0) {
      if (lVar7 == 0) goto LAB_075e4ae0;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_075e6714;
      if (*(long *)(lVar7 + 0x20) == 0) goto LAB_075e4ae0;
      lVar10 = System_Array__Clone(*(long *)(lVar7 + 0x20),0);
      lVar11 = *param_4;
      if ((lVar11 == 0) || (plVar9 == (long *)0x0)) goto LAB_075e4ae0;
      if ((int)plVar9[3] == 0) goto LAB_075e6714;
      lVar24 = plVar9[4];
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar3 = System_Type__op_Inequality(lVar24,0,0);
      lVar24 = thunk_FUN_03f9944c(DAT_09190008);
      uVar17 = DAT_091801b8;
      if (lVar10 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = thunk_FUN_03f99350(lVar10,DAT_091801b8);
        if (lVar14 == 0) {
LAB_075e5ac0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar10,uVar17);
        }
      }
      uVar17 = *(undefined8 *)(lVar11 + 0x18);
      System_Object___ctor(lVar24,0);
      *(long *)(lVar24 + 0x10) = lVar14;
      thunk_FUN_03f5d7b8((long *)(lVar24 + 0x10),lVar14);
      *(int *)(lVar24 + 0x18) = (int)uVar17;
      *(byte *)(lVar24 + 0x1c) = bVar3 & 1;
      *param_8 = lVar24;
      thunk_FUN_03f5d7b8(param_8,lVar24);
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_075e6714;
      uVar17 = *(undefined8 *)(lVar7 + 0x20);
      lVar7 = *param_4;
      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_DefaultBinder__ReorderParams(uVar17,lVar7);
      uVar4 = *(uint *)(plVar8 + 3);
    }
    if (uVar4 == 0) goto LAB_075e6714;
    plVar25 = plVar8 + 4;
    plVar13 = (long *)*plVar25;
    if (((plVar13 == (long *)0x0) ||
        (lVar7 = (**(code **)(*plVar13 + 0x3d8))(plVar13,*(undefined8 *)(*plVar13 + 0x3e0)),
        lVar7 == 0)) || (*param_4 == 0)) goto LAB_075e4ae0;
    iVar5 = *(int *)(*param_4 + 0x18);
    if (*(int *)(lVar7 + 0x18) == iVar5) {
      if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
      if ((int)plVar9[3] == 0) goto LAB_075e6714;
      lVar10 = plVar9[4];
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar19 = System_Type__op_Inequality(lVar10,0,0);
      if ((uVar19 & 1) != 0) {
        plVar13 = (long *)FUN_03f5c394(DAT_09180318,*(undefined4 *)(lVar7 + 0x18));
        uVar6 = *(int *)(lVar7 + 0x18) - 1;
        System_Array__Copy(*param_4,0,plVar13,0,uVar6,0);
        if ((int)plVar9[3] == 0) goto LAB_075e6714;
        lVar10 = plVar9[4];
        lVar7 = FUN_03f5c394(DAT_091801b8,1);
        if (lVar7 == 0) goto LAB_075e4ae0;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_075e6714;
        *(undefined4 *)(lVar7 + 0x20) = 1;
        lVar7 = System_Array__UnsafeCreateInstance(lVar10,lVar7,0);
        if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
        if ((lVar7 != 0) &&
           (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
        goto LAB_075e6718;
        if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
        plVar9 = plVar13 + (long)(int)uVar6 + 4;
        *plVar9 = lVar7;
        thunk_FUN_03f5d7b8(plVar9,lVar7);
        if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
        lVar7 = *param_4;
        if (lVar7 == 0) goto LAB_075e4ae0;
        if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_075e6714;
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
            DAT_09535478)) {
LAB_075e67f8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar9);
        }
        System_Array__SetValue(plVar9,*(undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20),0,0);
        goto LAB_075e6648;
      }
    }
    else {
      if (iVar5 < *(int *)(lVar7 + 0x18)) {
        plVar13 = (long *)FUN_03f5c394(DAT_09180318);
        lVar10 = *param_4;
        if (lVar10 != 0) {
          uVar19 = 0;
          plVar15 = plVar13 + 4;
          do {
            if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar19) {
              uVar6 = *(uint *)(lVar7 + 0x18);
              if ((int)(uVar6 - 1) <= (int)uVar19) goto LAB_075e5f8c;
              goto LAB_075e5f14;
            }
            if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_075e6714;
            if (plVar13 == (long *)0x0) break;
            lVar10 = *(long *)(lVar10 + uVar19 * 8 + 0x20);
            if ((lVar10 != 0) &&
               (lVar11 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
            goto LAB_075e6718;
            if (*(uint *)(plVar13 + 3) <= uVar19) goto LAB_075e6714;
            *plVar15 = lVar10;
            thunk_FUN_03f5d7b8(plVar15,lVar10);
            lVar10 = *param_4;
            uVar19 = uVar19 + 1;
            plVar15 = plVar15 + 1;
          } while (lVar10 != 0);
        }
        goto LAB_075e4ae0;
      }
      if ((int)plVar8[3] == 0) goto LAB_075e6714;
      plVar13 = (long *)*plVar25;
      if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
      uVar6 = (**(code **)(*plVar13 + 0x288))(plVar13,*(undefined8 *)(*plVar13 + 0x290));
      if ((uVar6 >> 1 & 1) == 0) {
        plVar13 = (long *)FUN_03f5c394(DAT_09180318,*(undefined4 *)(lVar7 + 0x18));
        uVar6 = *(int *)(lVar7 + 0x18) - 1;
        System_Array__Copy(*param_4,0,plVar13,0,uVar6,0);
        if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
        if ((int)plVar9[3] == 0) goto LAB_075e6714;
        lVar10 = plVar9[4];
        lVar7 = FUN_03f5c394(DAT_091801b8,1);
        if ((*param_4 == 0) || (lVar7 == 0)) goto LAB_075e4ae0;
        if (*(int *)(lVar7 + 0x18) == 0) goto LAB_075e6714;
        *(uint *)(lVar7 + 0x20) = *(int *)(*param_4 + 0x18) - uVar6;
        lVar7 = System_Array__UnsafeCreateInstance(lVar10,lVar7,0);
        if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
        if ((lVar7 != 0) &&
           (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
        goto LAB_075e6718;
        if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
        plVar9 = plVar13 + (long)(int)uVar6 + 4;
        *plVar9 = lVar7;
        thunk_FUN_03f5d7b8(plVar9,lVar7);
        if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
        lVar7 = *param_4;
        if (lVar7 == 0) goto LAB_075e4ae0;
        plVar9 = (long *)*plVar9;
        if (plVar9 != (long *)0x0) {
          if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
             (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8)
              != DAT_09535478)) goto LAB_075e67f8;
        }
        System_Array__Copy(lVar7,uVar6,plVar9,0,*(int *)(lVar7 + 0x18) - uVar6,0);
        goto LAB_075e6648;
      }
    }
    goto LAB_075e6658;
  }
  if (uVar6 == 0) {
LAB_075e6784:
    uVar17 = thunk_FUN_03fc39d4(&DAT_09207a80);
    uVar26 = System_Environment__GetResourceString(uVar17,0);
    thunk_FUN_03fc39d4(&DAT_091882d0);
    uVar17 = thunk_FUN_03f9944c();
    System_MissingMethodException___ctor(uVar17,uVar26,0);
LAB_075e67bc:
    uVar26 = thunk_FUN_03fc39d4(&DAT_091c8250);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar17,uVar26);
  }
  if ((int)uVar6 < 2) {
    uVar4 = 0;
  }
  else {
    lVar10 = 0;
    uVar4 = 0;
    bVar2 = false;
    do {
      if ((uint)plVar8[3] <= uVar4) goto LAB_075e6714;
      if (lVar7 == 0) goto LAB_075e4ae0;
      if ((uint)*(ulong *)(lVar7 + 0x18) <= uVar4) goto LAB_075e6714;
      if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
      if (((((uint)plVar9[3] <= uVar4) || (uVar19 = lVar10 + 1, (plVar8[3] & 0xffffffffU) <= uVar19)
           ) || ((*(ulong *)(lVar7 + 0x18) & 0xffffffff) <= uVar19)) ||
         ((plVar9[3] & 0xffffffffU) <= uVar19)) goto LAB_075e6714;
      lVar11 = (long)(int)uVar4;
      lVar24 = plVar8[lVar10 + 5];
      uVar17 = *(undefined8 *)(lVar7 + lVar11 * 8 + 0x20);
      lVar14 = plVar9[lVar11 + 4];
      lVar27 = plVar8[lVar11 + 4];
      uVar26 = *(undefined8 *)(lVar7 + 0x28 + lVar10 * 8);
      lVar22 = plVar9[lVar10 + 5];
      lVar11 = *param_4;
      if (*(int *)(DAT_09183868 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar5 = System_DefaultBinder__FindMostSpecificMethod
                        (lVar27,uVar17,lVar14,lVar24,uVar26,lVar22,plVar13,lVar11);
      if (iVar5 == 0) {
        bVar2 = true;
      }
      else if (iVar5 == 2) {
        uVar4 = (int)lVar10 + 1;
        bVar2 = false;
      }
      lVar10 = lVar10 + 1;
    } while ((ulong)uVar6 - 1 != lVar10);
    if (bVar2) {
      uVar17 = thunk_FUN_03fc39d4(&DAT_091fb838);
      uVar26 = System_Environment__GetResourceString(uVar17,0);
      thunk_FUN_03fc39d4(&DAT_09181088);
      uVar17 = thunk_FUN_03f9944c();
      System_Reflection_AmbiguousMatchException___ctor(uVar17,uVar26,0);
      goto LAB_075e67bc;
    }
  }
  if (param_7 != 0) {
    if (lVar7 == 0) goto LAB_075e4ae0;
    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_075e6714;
    plVar13 = (long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
    lVar10 = *plVar13;
    if (lVar10 == 0) goto LAB_075e4ae0;
    lVar10 = System_Array__Clone(lVar10,0);
    lVar11 = *param_4;
    if ((lVar11 == 0) || (plVar9 == (long *)0x0)) goto LAB_075e4ae0;
    if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_075e6714;
    lVar24 = plVar9[(long)(int)uVar4 + 4];
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar3 = System_Type__op_Inequality(lVar24,0,0);
    lVar24 = thunk_FUN_03f9944c(DAT_09190008);
    uVar17 = DAT_091801b8;
    if (lVar10 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = thunk_FUN_03f99350(lVar10,DAT_091801b8);
      if (lVar14 == 0) goto LAB_075e5ac0;
    }
    uVar17 = *(undefined8 *)(lVar11 + 0x18);
    System_Object___ctor(lVar24,0);
    *(long *)(lVar24 + 0x10) = lVar14;
    thunk_FUN_03f5d7b8((long *)(lVar24 + 0x10),lVar14);
    *(int *)(lVar24 + 0x18) = (int)uVar17;
    *(byte *)(lVar24 + 0x1c) = bVar3 & 1;
    *param_8 = lVar24;
    thunk_FUN_03f5d7b8(param_8,lVar24);
    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_075e6714;
    lVar7 = *plVar13;
    lVar10 = *param_4;
    if (*(int *)(DAT_09183868 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_DefaultBinder__ReorderParams(lVar7,lVar10);
  }
  if (*(uint *)(plVar8 + 3) <= uVar4) goto LAB_075e6714;
  plVar25 = plVar8 + (long)(int)uVar4 + 4;
  plVar13 = (long *)*plVar25;
  if (((plVar13 == (long *)0x0) ||
      (lVar7 = (**(code **)(*plVar13 + 0x3d8))(plVar13,*(undefined8 *)(*plVar13 + 0x3e0)),
      lVar7 == 0)) || (*param_4 == 0)) goto LAB_075e4ae0;
  iVar5 = *(int *)(*param_4 + 0x18);
  if (*(int *)(lVar7 + 0x18) == iVar5) {
    if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
    if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_075e6714;
    lVar10 = plVar9[(long)(int)uVar4 + 4];
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar19 = System_Type__op_Inequality(lVar10,0,0);
    if ((uVar19 & 1) != 0) {
      plVar13 = (long *)FUN_03f5c394(DAT_09180318,*(undefined4 *)(lVar7 + 0x18));
      uVar6 = *(int *)(lVar7 + 0x18) - 1;
      System_Array__Copy(*param_4,0,plVar13,0,uVar6,0);
      if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_075e6714;
      lVar10 = plVar9[(long)(int)uVar4 + 4];
      lVar7 = FUN_03f5c394(DAT_091801b8,1);
      if (lVar7 == 0) goto LAB_075e4ae0;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_075e6714;
      *(undefined4 *)(lVar7 + 0x20) = 1;
      lVar7 = System_Array__UnsafeCreateInstance(lVar10,lVar7,0);
      if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
      goto LAB_075e6718;
      if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
      plVar9 = plVar13 + (long)(int)uVar6 + 4;
      *plVar9 = lVar7;
      thunk_FUN_03f5d7b8(plVar9,lVar7);
      if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
      lVar7 = *param_4;
      if (lVar7 == 0) goto LAB_075e4ae0;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_075e6714;
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
      if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
          DAT_09535478)) goto LAB_075e67f8;
      System_Array__SetValue(plVar9,*(undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20),0,0);
      goto LAB_075e66d4;
    }
  }
  else {
    if (iVar5 < *(int *)(lVar7 + 0x18)) {
      plVar13 = (long *)FUN_03f5c394(DAT_09180318);
      lVar10 = *param_4;
      if (lVar10 != 0) {
        uVar19 = 0;
        plVar15 = plVar13 + 4;
        do {
          if ((long)(int)*(uint *)(lVar10 + 0x18) <= (long)uVar19) {
            uVar6 = *(uint *)(lVar7 + 0x18);
            if ((int)(uVar6 - 1) <= (int)uVar19) goto LAB_075e651c;
            goto LAB_075e64a0;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_075e6714;
          if (plVar13 == (long *)0x0) break;
          lVar10 = *(long *)(lVar10 + uVar19 * 8 + 0x20);
          if ((lVar10 != 0) &&
             (lVar11 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
          goto LAB_075e6718;
          if (*(uint *)(plVar13 + 3) <= uVar19) goto LAB_075e6714;
          *plVar15 = lVar10;
          thunk_FUN_03f5d7b8(plVar15,lVar10);
          lVar10 = *param_4;
          uVar19 = uVar19 + 1;
          plVar15 = plVar15 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_075e4ae0;
    }
    if (*(uint *)(plVar8 + 3) <= uVar4) goto LAB_075e6714;
    plVar13 = (long *)*plVar25;
    if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
    uVar6 = (**(code **)(*plVar13 + 0x288))(plVar13,*(undefined8 *)(*plVar13 + 0x290));
    if ((uVar6 >> 1 & 1) == 0) {
      plVar13 = (long *)FUN_03f5c394(DAT_09180318,*(undefined4 *)(lVar7 + 0x18));
      uVar6 = *(int *)(lVar7 + 0x18) - 1;
      System_Array__Copy(*param_4,0,plVar13,0,uVar6,0);
      if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
      if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_075e6714;
      lVar10 = plVar9[(long)(int)uVar4 + 4];
      lVar7 = FUN_03f5c394(DAT_091801b8,1);
      if ((*param_4 == 0) || (lVar7 == 0)) goto LAB_075e4ae0;
      if (*(int *)(lVar7 + 0x18) == 0) goto LAB_075e6714;
      *(uint *)(lVar7 + 0x20) = *(int *)(*param_4 + 0x18) - uVar6;
      lVar7 = System_Array__UnsafeCreateInstance(lVar10,lVar7,0);
      if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
      if ((lVar7 != 0) &&
         (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
      goto LAB_075e6718;
      if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
      plVar9 = plVar13 + (long)(int)uVar6 + 4;
      *plVar9 = lVar7;
      thunk_FUN_03f5d7b8(plVar9,lVar7);
      if (*(uint *)(plVar13 + 3) <= uVar6) goto LAB_075e6714;
      lVar7 = *param_4;
      if (lVar7 == 0) goto LAB_075e4ae0;
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(DAT_09535478 + 0x130)) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09535478 + 0x130) * 8 + -8) !=
            DAT_09535478)) goto LAB_075e67f8;
      }
      System_Array__Copy(lVar7,uVar6,plVar9,0,*(int *)(lVar7 + 0x18) - uVar6,0);
      goto LAB_075e66d4;
    }
  }
  goto LAB_075e66e4;
  while( true ) {
    plVar16 = *(long **)(lVar7 + 0x20 + uVar19 * 8);
    if ((plVar16 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210)),
       plVar13 == (long *)0x0)) goto LAB_075e4ae0;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
    goto LAB_075e6718;
    if (*(uint *)(plVar13 + 3) <= (uint)uVar19) goto LAB_075e6714;
    *plVar15 = lVar10;
    thunk_FUN_03f5d7b8(plVar15,lVar10);
    uVar6 = *(uint *)(lVar7 + 0x18);
    uVar19 = uVar19 + 1;
    plVar15 = plVar15 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar19) break;
LAB_075e5f14:
    if (uVar6 <= (uint)uVar19) goto LAB_075e6714;
  }
LAB_075e5f8c:
  if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
  if ((int)plVar9[3] == 0) goto LAB_075e6714;
  lVar10 = plVar9[4];
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar12 = System_Type__op_Inequality(lVar10,0,0);
  uVar6 = (uint)uVar19;
  if ((uVar12 & 1) == 0) {
    if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_075e6714;
    plVar9 = *(long **)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
       plVar13 == (long *)0x0)) goto LAB_075e4ae0;
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
    goto LAB_075e6718;
    uVar4 = *(uint *)(plVar13 + 3);
  }
  else {
    if ((int)plVar9[3] == 0) goto LAB_075e6714;
    lVar7 = plVar9[4];
    uVar17 = FUN_03f5c394(DAT_091801b8,1);
    lVar7 = System_Array__UnsafeCreateInstance(lVar7,uVar17,0);
    if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
    goto LAB_075e6718;
    uVar4 = *(uint *)(plVar13 + 3);
  }
  if (uVar4 <= uVar6) goto LAB_075e6714;
  plVar13[(long)(int)uVar6 + 4] = lVar7;
  thunk_FUN_03f5d7b8(plVar13 + 4 + (int)uVar6,lVar7);
LAB_075e6648:
  *param_4 = (long)plVar13;
  thunk_FUN_03f5d7b8(param_4,plVar13);
LAB_075e6658:
  if ((int)plVar8[3] != 0) goto LAB_075e66f0;
  goto LAB_075e6714;
  while( true ) {
    plVar16 = *(long **)(lVar7 + 0x20 + uVar19 * 8);
    if ((plVar16 == (long *)0x0) ||
       (lVar10 = (**(code **)(*plVar16 + 0x208))(plVar16,*(undefined8 *)(*plVar16 + 0x210)),
       plVar13 == (long *)0x0)) goto LAB_075e4ae0;
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_03f99350(lVar10,*(undefined8 *)(*plVar13 + 0x40)), lVar11 == 0))
    goto LAB_075e6718;
    if (*(uint *)(plVar13 + 3) <= (uint)uVar19) goto LAB_075e6714;
    *plVar15 = lVar10;
    thunk_FUN_03f5d7b8(plVar15,lVar10);
    uVar6 = *(uint *)(lVar7 + 0x18);
    uVar19 = uVar19 + 1;
    plVar15 = plVar15 + 1;
    if ((int)(uVar6 - 1) <= (int)uVar19) break;
LAB_075e64a0:
    if (uVar6 <= (uint)uVar19) goto LAB_075e6714;
  }
LAB_075e651c:
  uVar6 = (uint)uVar19;
  if (plVar9 == (long *)0x0) goto LAB_075e4ae0;
  if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_075e6714;
  lVar10 = plVar9[(long)(int)uVar4 + 4];
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar19 = System_Type__op_Inequality(lVar10,0,0);
  if ((uVar19 & 1) == 0) {
    if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_075e6714;
    plVar9 = *(long **)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
    if ((plVar9 == (long *)0x0) ||
       (lVar7 = (**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
       plVar13 == (long *)0x0)) goto LAB_075e4ae0;
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0))
    goto LAB_075e6718;
    uVar23 = *(uint *)(plVar13 + 3);
  }
  else {
    if (*(uint *)(plVar9 + 3) <= uVar4) goto LAB_075e6714;
    lVar7 = plVar9[(long)(int)uVar4 + 4];
    uVar17 = FUN_03f5c394(DAT_091801b8,1);
    lVar7 = System_Array__UnsafeCreateInstance(lVar7,uVar17,0);
    if (plVar13 == (long *)0x0) goto LAB_075e4ae0;
    if ((lVar7 != 0) &&
       (lVar10 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar10 == 0)) {
LAB_075e6718:
      uVar17 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar17,0);
    }
    uVar23 = *(uint *)(plVar13 + 3);
  }
  if (uVar23 <= uVar6) goto LAB_075e6714;
  plVar13[(long)(int)uVar6 + 4] = lVar7;
  thunk_FUN_03f5d7b8(plVar13 + 4 + (int)uVar6,lVar7);
LAB_075e66d4:
  *param_4 = (long)plVar13;
  thunk_FUN_03f5d7b8(param_4,plVar13);
LAB_075e66e4:
  if (uVar4 < *(uint *)(plVar8 + 3)) {
LAB_075e66f0:
    return *plVar25;
  }
LAB_075e6714:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

