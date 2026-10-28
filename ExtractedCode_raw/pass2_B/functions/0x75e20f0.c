// rea decompile_all
// name: System.Attribute$$InternalParamGetCustomAttributes
// address: 0x75e20f0
// body: available
// range: 0x75e20f0-0x75e2607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e25a4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e25ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e25f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e25f8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75e2604 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Attribute__InternalParamGetCustomAttributes
               (long *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined8 local_68;
  
  if ((DAT_09521ed2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fbf0);
    FUN_03f5c2a4(&DAT_09170f60);
    FUN_03f5c2a4(&DAT_091ab250);
    FUN_03f5c2a4(&DAT_091b11d0);
    FUN_03f5c2a4(&DAT_091b11e8);
    FUN_03f5c2a4(&DAT_091ab258);
    FUN_03f5c2a4(&DAT_091ab240);
    FUN_03f5c2a4(&DAT_091b11c0);
    FUN_03f5c2a4(&DAT_091ab260);
    FUN_03f5c2a4(&DAT_0917bcc8);
    FUN_03f5c2a4(&DAT_0917cee0);
    FUN_03f5c2a4(&DAT_09188228);
    FUN_03f5c2a4(&DAT_0918a3b8);
    DAT_09521ed2 = 1;
  }
  if ((param_1 != (long *)0x0) &&
     (plVar5 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0)),
     plVar5 != (long *)0x0)) {
    iVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
    if (iVar3 != 8) {
      return 0;
    }
    plVar5 = (long *)(**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if (plVar5 != (long *)0x0) {
      lVar13 = *plVar5;
      if ((*(byte *)(lVar13 + 0x130) < *(byte *)(DAT_09188228 + 0x130)) ||
         (*(long *)(*(long *)(lVar13 + 200) + (ulong)*(byte *)(DAT_09188228 + 0x130) * 8 + -8) !=
          DAT_09188228)) {
LAB_075e25f4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar5);
      }
      uVar6 = (**(code **)(lVar13 + 0x428))(plVar5,*(undefined8 *)(lVar13 + 0x430));
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_095354b8);
      }
      uVar7 = System_Type__op_Equality(param_2,0,0);
      uVar1 = DAT_09170f60;
      local_68 = param_2;
      if ((uVar7 & 1) != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_68 = System_Type__GetTypeFromHandle(uVar1,0);
      }
      uVar7 = System_Reflection_MethodInfo__op_Equality(plVar5,uVar6,0);
      if ((uVar7 & 1) != 0) {
        lVar13 = (**(code **)(*param_1 + 0x248))
                           (param_1,local_68,param_3 & 1,*(undefined8 *)(*param_1 + 0x250));
        uVar6 = DAT_0917fbf0;
        if (lVar13 == 0) {
          return 0;
        }
        lVar8 = thunk_FUN_03f99350(lVar13,DAT_0917fbf0);
        if (lVar8 != 0) {
          return lVar8;
        }
LAB_075e259c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar13,uVar6);
      }
      lVar13 = thunk_FUN_03f9944c(DAT_0917cee0);
      FUN_057e0400(lVar13,DAT_091b11c0);
      lVar8 = thunk_FUN_03f9944c(DAT_0917bcc8);
      FUN_057e0400(lVar8,DAT_091ab240);
      do {
        if (plVar5 == (long *)0x0) goto LAB_075e25ec;
        lVar9 = (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
        uVar4 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
        if (lVar9 == 0) goto LAB_075e25ec;
        if (*(uint *)(lVar9 + 0x18) <= uVar4) {
LAB_075e25f0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar10 = *(long **)(lVar9 + (long)(int)uVar4 * 8 + 0x20);
        if ((plVar10 == (long *)0x0) ||
           (lVar9 = (**(code **)(*plVar10 + 0x248))
                              (plVar10,local_68,0,*(undefined8 *)(*plVar10 + 0x250)),
           uVar6 = DAT_0917fbf0, lVar9 == 0)) goto LAB_075e25ec;
        lVar11 = thunk_FUN_03f99350(lVar9,DAT_0917fbf0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(lVar9,uVar6);
        }
        uVar4 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar4) {
          uVar15 = 0;
          do {
            if (uVar4 <= uVar15) goto LAB_075e25f0;
            lVar9 = *(long *)(lVar11 + (long)(int)uVar15 * 8 + 0x20);
            if ((lVar9 == 0) || (uVar6 = System_Object__GetType(lVar9,0), lVar13 == 0))
            goto LAB_075e25ec;
            uVar7 = FUN_057e1004(lVar13,uVar6,DAT_091b11e8);
            lVar2 = DAT_091b11d0;
            if ((uVar7 & 1) == 0) {
              lVar14 = *(long *)(lVar13 + 0x10);
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_075e25ec;
              uVar4 = *(uint *)(lVar13 + 0x18);
              if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar4 + 1;
                puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
                *puVar12 = uVar6;
                thunk_FUN_03f5d7b8(puVar12,uVar6);
              }
              else {
                FUN_057e0c68(lVar13,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              lVar2 = DAT_091ab250;
              if (lVar8 == 0) goto LAB_075e25ec;
              lVar14 = *(long *)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar14 == 0) goto LAB_075e25ec;
              uVar4 = *(uint *)(lVar8 + 0x18);
              if (uVar4 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar4 + 1;
                plVar10 = (long *)(lVar14 + (long)(int)uVar4 * 8 + 0x20);
                *plVar10 = lVar9;
                thunk_FUN_03f5d7b8(plVar10,lVar9);
              }
              else {
                FUN_057e0c68(lVar8,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar4 = *(uint *)(lVar11 + 0x18);
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)uVar4);
        }
        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(DAT_0918a3b8 + 0x130)) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(DAT_0918a3b8 + 0x130) * 8 + -8) !=
            DAT_0918a3b8)) goto LAB_075e25f4;
        plVar10 = (long *)System_Reflection_RuntimeMethodInfo__GetBaseMethod(plVar5,0);
        uVar7 = System_Reflection_MethodInfo__op_Equality(plVar10,plVar5,0);
        plVar5 = plVar10;
      } while ((uVar7 & 1) == 0);
      if (lVar8 != 0) {
        lVar13 = System_Array__CreateInstance(local_68,*(undefined4 *)(lVar8 + 0x18),0);
        uVar6 = DAT_0917fbf0;
        if (lVar13 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = thunk_FUN_03f99350(lVar13,DAT_0917fbf0);
          if (lVar9 == 0) goto LAB_075e259c;
        }
        FUN_057e1290(lVar8,lVar9,0,DAT_091ab258);
        return lVar9;
      }
    }
  }
LAB_075e25ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

